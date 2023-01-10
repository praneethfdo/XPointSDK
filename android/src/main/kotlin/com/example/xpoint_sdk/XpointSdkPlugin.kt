package com.example.xpoint_sdk

import androidx.annotation.NonNull
import io.flutter.embedding.engine.plugins.FlutterPlugin
import io.flutter.plugin.common.MethodCall
import io.flutter.plugin.common.MethodChannel
import io.flutter.plugin.common.MethodChannel.MethodCallHandler
import io.flutter.plugin.common.MethodChannel.Result
import kotlinx.coroutines.GlobalScope
import kotlinx.coroutines.launch
import tech.xpoint.sdk.ConfigurationProvider
import tech.xpoint.sdk.CredentialProvider
import tech.xpoint.sdk.XpointSdk
import android.os.Handler
import android.os.Looper

class ConfigProvider : ConfigurationProvider {
    override var client: String? = null
    override var gameUrl: String? = null
    override var userId: String? = null
    override var customData: String? = null
    override var clientBrand: String? = null

    public constructor(
        client: String,
        userId: String?,
        gameUrl: String? = null,
        customData: String? = null,
        clientBrand: String? = null
    ) {
        this.client = client
        this.userId = userId
        this.gameUrl = gameUrl
        this.customData = customData
        this.clientBrand = clientBrand
    }
}

/** XpointSdkPlugin */
class XpointSdkPlugin : FlutterPlugin, MethodCallHandler {
    /// The MethodChannel that will the communication between Flutter and native Android
    ///
    /// This local reference serves to register the plugin with the Flutter Engine and unregister it
    /// when the Flutter Engine is detached from the Activity
    private lateinit var channel: MethodChannel

    private val instance = XpointSdk.getInstance()
    private var initialized = false
    private var client: String? = null

    override fun onAttachedToEngine(
        @NonNull flutterPluginBinding: FlutterPlugin.FlutterPluginBinding
    ) {
        channel = MethodChannel(flutterPluginBinding.binaryMessenger, "xpoint_sdk")
        channel.setMethodCallHandler(this)
    }

    override fun onMethodCall(@NonNull call: MethodCall, @NonNull result: Result) {
        when (call.method) {
            "initSdk" -> initSdk(call, result)
            "startWagering" -> startWagering(call, result)
            "login" -> login(call, result)
            "stopWagering" -> stopWagering(call, result)
            "logout" -> logout(call, result)
            "checkResult" -> checkResult(call, result)
            else -> result.notImplemented()
        }
    }

    override fun onDetachedFromEngine(@NonNull binding: FlutterPlugin.FlutterPluginBinding) {
        channel.setMethodCallHandler(null)
    }

    private fun initSdk(call: MethodCall, result: Result) {
        val client = call.argument<String>("client")
        val server = call.argument<String>("server")
        val safetyNetKey = call.argument<String>("safetyNetKey")

        val apiClient =
            requireNotNull(client) {
                "No SafetyNet key provided. Please consult documentation or as XPoint Support for help."
            }
        val apiServer =
            requireNotNull(server) {
                "No SafetyNet key provided. Please consult documentation or as XPoint Support for help."
            }

        val apiSafetyKey =
            requireNotNull(safetyNetKey) {
                "No SafetyNet key provided. Please consult documentation or as XPoint Support for help."
            }

        if (initialized && this.client != client) {
            instance.updateClientKey(apiClient)
        }

        this.client = client

        instance.enableTimeout()

        if (!initialized) {
            instance.init(CredentialProvider(apiSafetyKey, ConfigProvider(apiClient, null)))
            initialized = true
        }

        // Subscribe to results flow
        GlobalScope.launch {
            instance.checkResultFlow.collect {

                Handler(Looper.getMainLooper()).post {
                    channel.invokeMethod("didCheckStatusChanged", instance.checkResult().asNativeMap())
                }

                
        
            }
        }

        result.success(true)
    }

    private fun startWagering(call: MethodCall, result: Result) {

        instance.wageringStart(
            { result.success(true) },
            { result.error("Start wagering error", it.toString(), null) }
        )
    }

    private fun login(call: MethodCall, result: Result) {

        val userId = call.argument<String>("userId")
        val customData = call.argument<String>("customData") ?: null

        val apiUserId =
            requireNotNull(userId) {
                "No SafetyNet key provided. Please consult documentation or as XPoint Support for help."
            }

        try {
            instance.login(apiUserId, client, customData)
            result.success(true)
        } catch (e: Error) {
            result.error("Failed to logout", e.message, null)
        }
    }

    private fun stopWagering(call: MethodCall, result: Result) {

        instance.wageringEnd(
            { result.success(true) },
            { result.error("Stop wagering error", it.toString(), null) }
        )
    }

    private fun logout(call: MethodCall, result: Result) {

        instance.logout()
        result.success(true)
    }

    private fun checkResult(call: MethodCall, result: Result) {

        try {
            result.success(instance.checkResult().asNativeMap())
        } catch (e: java.lang.Exception) {
            result.error("Error Getting Check Result", e.toString(), null)
        }
    }
}
