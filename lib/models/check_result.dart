import 'package:json_annotation/json_annotation.dart';
import 'package:xpoint_sdk/models/status.dart';

import 'error_result.dart';

part 'check_result.g.dart';

@JsonSerializable()
class CheckResult {
  final String? jwt;

  final List<ErrorResult>? errors;

  final String? requestId;

  final Status? status;

  CheckResult({this.jwt, this.errors, this.requestId, this.status});

  /// Connect the generated [_$CheckResultFromJson] function to the `fromJson`
  /// factory.
  factory CheckResult.fromJson(Map<String, dynamic> json) =>
      _$CheckResultFromJson(json);

  /// Connect the generated [_$CheckResultToJson] function to the `toJson` method.
  Map<String, dynamic> toJson() => _$CheckResultToJson(this);
}
