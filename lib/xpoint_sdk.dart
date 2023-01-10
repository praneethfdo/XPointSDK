import 'dart:async';

import 'package:flutter/foundation.dart';
import 'package:flutter/services.dart';
import 'package:xpoint_sdk/models/status.dart';

import 'models/check_result.dart';

class XpointSdk {
  static const MethodChannel _channel = MethodChannel('xpoint_sdk');

  final Function(CheckResult)? didCheckStatusChanged;

  XpointSdk({
    this.didCheckStatusChanged,
  }) {
    _channel.setMethodCallHandler(_methodCallHandler);
  }

  /// Initialize the SDK with your client key
  Future<bool> initSdk(
      {required String client,
      required String server,
      required String safetyNetKey}) async {
    return await _channel.invokeMethod('initSdk',
        {"client": client, "server": server, "safetyNetKey": safetyNetKey});
  }

  /// Starts the Wagering Session.
  /// Call it to let Xpoint start checking user location.
  Future<bool> startWagering() async {
    return await _channel.invokeMethod('startWagering');
  }

  /// Stops the Wagering Session.
  /// Call it whenever user stopped the game.
  Future<bool> stopWagering() async {
    return await _channel.invokeMethod('stopWagering');
  }

  /// Sets the userId & custom data for session
  Future<bool> login({required String userId, String? customData}) async {
    return await _channel
        .invokeMethod('login', {"userId": userId, "customData": customData});
  }

  // Future<bool> logout() async {
  //   return await _channel.invokeMethod('logout');
  // }

  /// Returns the last check result obtained from Xpoint Services
  Future<CheckResult> checkResult() async {
    try {
      Map<dynamic, dynamic> data = await _channel.invokeMethod('checkResult');

      String status = data["status"] as String;
      String jwt = data["jwt"] as String;
      String requestId = data["requestId"] as String;
      List<dynamic> errors = data["errors"] as List<dynamic>;

      List<Map<String, dynamic>> mappedErrors = errors.map(
        (e) {
          int code = e["code"] as int;
          String description = e["description"] as String;

          return {"code": code, "description": description};
        },
      ).toList();

      CheckResult checkResult = CheckResult.fromJson({
        "status": status,
        "jwt": jwt,
        "requestId": requestId,
        "errors": mappedErrors
      });

      return checkResult;
    } catch (e) {
      debugPrint(e.toString());
      return CheckResult(status: Status.parseError);
    }
  }

  Future<void> _methodCallHandler(MethodCall call) async {
    switch (call.method) {
      case "didCheckStatusChanged":
        try {
          Map<dynamic, dynamic> data = call.arguments;

          String status = data["status"] as String;
          String? jwt = data["jwt"] as String?;
          String? requestId = data["requestId"] as String?;
          List<dynamic>? errors = data["errors"] as List<dynamic>?;
          List<Map<String, dynamic>>? mappedErrors;
          if (errors != null) {
            mappedErrors = errors.map(
              (e) {
                int? code = e["code"] as int?;
                String? description = e["description"] as String?;

                return {"code": code, "description": description};
              },
            ).toList();
          }

          CheckResult checkResult = CheckResult.fromJson({
            "status": status,
            "jwt": jwt,
            "requestId": requestId,
            "errors": mappedErrors
          });

          didCheckStatusChanged!(checkResult);
        } catch (e) {
          debugPrint(e.toString());
          didCheckStatusChanged!(CheckResult(status: Status.parseError));
        }
    }
  }
}
