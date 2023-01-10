// GENERATED CODE - DO NOT MODIFY BY HAND

part of 'error_result.dart';

// **************************************************************************
// JsonSerializableGenerator
// **************************************************************************

ErrorResult _$ErrorResultFromJson(Map<String, dynamic> json) => ErrorResult(
      code: json['code'] as int?,
      description: json['description'] as String?,
    );

Map<String, dynamic> _$ErrorResultToJson(ErrorResult instance) =>
    <String, dynamic>{
      'code': instance.code,
      'description': instance.description,
    };
