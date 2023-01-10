// GENERATED CODE - DO NOT MODIFY BY HAND

part of 'check_result.dart';

// **************************************************************************
// JsonSerializableGenerator
// **************************************************************************

CheckResult _$CheckResultFromJson(Map<String, dynamic> json) => CheckResult(
      jwt: json['jwt'] as String?,
      errors: (json['errors'] as List<dynamic>?)
          ?.map((e) => ErrorResult.fromJson(e as Map<String, dynamic>))
          .toList(),
      requestId: json['requestId'] as String?,
      status: $enumDecodeNullable(_$StatusEnumMap, json['status']),
    );

Map<String, dynamic> _$CheckResultToJson(CheckResult instance) =>
    <String, dynamic>{
      'jwt': instance.jwt,
      'errors': instance.errors,
      'requestId': instance.requestId,
      'status': _$StatusEnumMap[instance.status],
    };

const _$StatusEnumMap = {
  Status.allowed: 'ALLOWED',
  Status.denied: 'DENIED',
  Status.waiting: 'WAITING',
  Status.idle: 'IDLE',
  Status.unknown: 'UNKNOWN',
  Status.parseError: 'PARSEERROR',
};
