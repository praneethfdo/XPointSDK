import 'package:json_annotation/json_annotation.dart';

part 'error_result.g.dart';

@JsonSerializable()
class ErrorResult {
  /// The generated code assumes these values exist in JSON.
  final int? code;
  final String? description;

  ErrorResult({this.code, this.description});

  /// Connect the generated [_$ErrorResultFromJson] function to the `fromJson`
  /// factory.
  factory ErrorResult.fromJson(Map<String, dynamic> json) =>
      _$ErrorResultFromJson(json);

  /// Connect the generated [_$ErrorResultToJson] function to the `toJson` method.
  Map<String, dynamic> toJson() => _$ErrorResultToJson(this);

  @override
  String toString() {
    return toJson().toString();
  }
}
