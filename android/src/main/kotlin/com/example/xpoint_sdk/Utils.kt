package com.example.xpoint_sdk

import tech.xpoint.sdk.CheckResponseError
import tech.xpoint.sdk.CheckResult

/** JS-compatible form for CheckResponseError */
internal fun CheckResponseError.asNativeMap(): Map<String, Any?> {
    return  mutableMapOf<String, Any?>(
        Pair("code", code),
        Pair("description", description)
      )
}

/** JS-compatible form for CheckResult */
internal fun CheckResult.asNativeMap(): Map<String, Any?>  {
    return  mutableMapOf<String, Any?>(
        Pair("jwt",  jwt ?: ""),
        Pair("requestId", requestId),
        Pair("status", status.toString()),
        Pair("errors", errors?.asNativeArray() ?: ArrayList<Any>())
      )

}

/** Extension to provide list as JS-compatible array */
internal fun List<CheckResponseError>.asNativeArray(): List<Any> {
    val arr = ArrayList<Any>()
    this.forEach { arr.add(it.asNativeMap()) }
    return arr
}


