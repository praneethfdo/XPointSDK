import 'package:json_annotation/json_annotation.dart';

enum Status {
  @JsonValue("ALLOWED")
  allowed,

  @JsonValue("DENIED")
  denied,

  @JsonValue("WAITING")
  waiting,

  @JsonValue("IDLE")
  idle,

  @JsonValue("UNKNOWN")
  unknown,

  @JsonValue("PARSEERROR")
  parseError,
}
