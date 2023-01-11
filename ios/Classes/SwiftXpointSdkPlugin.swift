import Flutter
import UIKit
import XPointSDK

public class SwiftXpointSdkPlugin: NSObject, FlutterPlugin {

  private var instance: IosAsyncSdk? = nil
  private var hasObservers = false
  

  private let channel: FlutterMethodChannel
  // private let registry: FlutterTextureRegistry

  public static func register(with registrar: FlutterPluginRegistrar) {
    let channel = FlutterMethodChannel(name: "xpoint_sdk", binaryMessenger: registrar.messenger())
    let instance = SwiftXpointSdkPlugin(channel: channel)
    registrar.addMethodCallDelegate(instance, channel: channel)
  }

  public init(channel: FlutterMethodChannel) {
    self.channel = channel

  }

  public func handle(_ call: FlutterMethodCall, result: @escaping FlutterResult) {
    switch call.method {
    case "initSdk":
      initSdk(call, result: result)
      break
    case "startWagering":
      startWagering(call, result: result)
      break
    case "login":
      login(call, result: result)
      break
    case "stopWagering":
      stopWagering(call, result: result)
      break
    case "logout":
      logout(call, result: result)
      break
    case "checkResult":
      checkResult(call, result: result)
      break

    default:
      result(FlutterMethodNotImplemented)
    }
  }

  private func initSdk(_ call: FlutterMethodCall, result: @escaping FlutterResult) {
    if let args = call.arguments as? [String: Any],
      let client = args["client"] as? String,
      let server = args["server"] as? String
    {

      if let instance = self.instance {
        instance.updateClientKey(clientKeyRaw: client)
        result(true)
      } else {
        self.instance = IosAsyncSdk(client: client, server: server, delegate: self)
        self.instance?.start { res in result(true) }
      }

    }

  }

  private func startWagering(_ call: FlutterMethodCall, result: @escaping FlutterResult) {
    guard let instance = instance else {
      result(
        FlutterError(
          code: "IllegalStateException",
          message: "Preapre SDK first",
          details: nil))
      return
    }

    instance.startWagering { res in
      if res is Result.Success {

        result(true)
      }
      if let fail = res as? Result.Failure {
        result(
          FlutterError(
            code: "Failed to start wagering",
            message: fail.errorMessage,
            details: nil))
      }
    }
  }

  private func stopWagering(_ call: FlutterMethodCall, result: @escaping FlutterResult) {
    guard let instance = instance else {
      result(
        FlutterError(
          code: "IllegalStateException",
          message: "Preapre SDK first",
          details: nil))
      return
    }
    instance.stopWagering { res in
      if res is Result.Success { result(true) }
      if let fail = res as? Result.Failure {
        result(
          FlutterError(
            code: "Failed to stop wagering",
            message: fail.errorMessage,
            details: nil))
      }
    }
  }

  private func login(_ call: FlutterMethodCall, result: @escaping FlutterResult) {
    guard let instance = instance else {
      result(
        FlutterError(
          code: "IllegalStateException",
          message: "Preapre SDK first",
          details: nil))
      return
    }

    if let args = call.arguments as? [String: Any],
      let userId = args["userId"] as? String,
      let customData = args["customData"] as? String
    {
      instance.updateUserId(userId: userId)
      instance.updateCustomData(customData: customData)
      result(true)

    }

  }

  private func logout(_ call: FlutterMethodCall, result: @escaping FlutterResult) {
    guard let instance = instance else {
      result(
        FlutterError(
          code: "IllegalStateException",
          message: "Preapre SDK first",
          details: nil))
      return
    }
    instance.logout { res in
      if res is Result.Success { result(true) }
      if let fail = res as? Result.Failure {
        result(
          FlutterError(
            code: "Failed to logout",
            message: fail.errorMessage,
            details: nil))

      }
    }
  }

  func checkResult(_ call: FlutterMethodCall, result: @escaping FlutterResult) {
    guard let instance = instance else {
      result(
        FlutterError(
          code: "IllegalStateException",
          message: "Preapre SDK first",
          details: nil))
      return
    }
    do {
      result(try instance.checkResult().asDictionary)
    } catch {
      result(
        FlutterError(
          code: "IllegalStateException",
          message: "\(error)",
          details: nil))

    }
  }

  //  private func startCheckingPosition(withUsername userID: String) {
  //       // Start the instnace of SDK
  //       SDK.start { startResult in
  //           guard startResult is Result.Success else {
  //             // Abort further processing; handle as? Result.Failure
  //           }
  //           // Configure a session
  //           self.SDK.updateUserId(userId: userID)
  //           self.SDK.updateClientBrand(clientBrand: "MyCasino")
  //           self.SDK.updateCustomData(customData: "{isThisJSON:true}")
  //           // Start checking routine
  //           self.SDK.startWagering { startWagerResult in
  //               guard startWagerResult is Result.Success else {
  //                   // Handle as? Result.Failure
  //               }
  //           }
  //       }
  //   }
}

extension SwiftXpointSdkPlugin: SdkXPointSDKDelegate {

  public func didCheckStatusChanged(checkResult: SdkCheckResult) {

    print("Flutter didCheckStatusChanged")
    // if hasObservers {
    try! self.instance!.checkResult()  // Informs SDK that we're still listening

    print("Flutter invokeMethod")
    self.channel.invokeMethod("didCheckStatusChanged", arguments: checkResult.asDictionary)

    // }
  }

  public func didConnectionStatusChanged(status: SdkConnectionStatus?) {
    // Not implemented...
  }
}

extension SdkConnectionStatus {
  var statusString: String {
    switch self {
    case .connected:
      return "Connected"
    case .forbidden:
      return "Client error"
    case .error:
      return "Connection error"
    default:
      return "Connection unknown"
    }
  }
}

extension SdkCheckResult {
  var statusString: String {
    switch self.status {
    case .allowed:
      return "ALLOWED"
    case .denied:
      return "DENIED"
    case .waiting:
      return "WAITING"
    case .idle:
      return "IDLE"
    default:
      return "UNKNOWN"
    }
  }

  var errorsAsDictArray: [[String: Any]]? {
    self.errors?.map { error in
      ["code": error.code, "description": error.description_]
    }
  }

  var asDictionary: [String: Any] {
    [
      "status": self.statusString,
      "errors": self.errorsAsDictArray ?? [],
      "requestId": self.requestId ?? "",
      "jwt": self.jwt ?? "",
    ]
  }
}
