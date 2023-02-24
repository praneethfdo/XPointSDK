#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class XPSDKSdkGameType, XPSDKSdkXpointSdkApiJurisdictionArea, XPSDKKermitSeverity, XPSDKSdkXpointSdkApiJurisdictionAreas, XPSDKSdkCheckResult, XPSDKKotlinPair<__covariant A, __covariant B>, XPSDKSdkAppStatus, XPSDKKotlinUnit, XPSDKKotlinException, XPSDKSdkCommonSdk, XPSDKSdkIosSdk, XPSDKResult, XPSDKResultSuccess, XPSDKXpointManager, XPSDKIosAsyncSdk, XPSDKKotlinThrowable, XPSDKKotlinArray<T>, XPSDKKotlinRuntimeException, XPSDKKotlinEnumCompanion, XPSDKKotlinEnum<E>, XPSDKSdkGameTypeCompanion, XPSDKSdkXpointSdkApiJurisdictionAreaCompanion, XPSDKSdkXpointSdkApiJurisdictionAreasCompanion, XPSDKSdkCheckResponseStatus, XPSDKSdkCheckResponseError, XPSDKSdkCheckResultCompanion, XPSDKSdkAppStatusSession, XPSDKSdkAppStatusCompanion, XPSDKSdkConnectionStatus, XPSDKSdkCheckResponseErrorCompanion, XPSDKSdkAppStatusSessionCompanion, XPSDKKotlinIllegalStateException, XPSDKSdkConnectionStatusCompanion, XPSDKSdkSdkState, XPSDKKotlinx_serialization_coreSerializersModule, XPSDKKotlinx_serialization_coreSerialKind, XPSDKKotlinNothing;

@protocol XPSDKSdkXpointSdkExtendedApiSession, XPSDKSdkXpointSdkApiSession, XPSDKSdkXpointSdkApi, XPSDKSdkXpointSdkExtendedApi, XPSDKKotlinSuspendFunction1, XPSDKKotlinx_coroutines_coreStateFlow, XPSDKKotlinx_coroutines_coreCoroutineScope, XPSDKSdkXPointSDKDelegate, XPSDKSdkXpointSdkApiChecker, XPSDKSdkXpointSdkApiPeriodicChecker, XPSDKKotlinComparable, XPSDKKotlinFunction, XPSDKKotlinx_coroutines_coreFlowCollector, XPSDKKotlinx_coroutines_coreFlow, XPSDKKotlinx_coroutines_coreSharedFlow, XPSDKKotlinCoroutineContext, XPSDKSdkXPointSDKDelegateBase, XPSDKKotlinIterator, XPSDKKotlinx_serialization_coreKSerializer, XPSDKKotlinCoroutineContextElement, XPSDKKotlinCoroutineContextKey, XPSDKKotlinx_serialization_coreEncoder, XPSDKKotlinx_serialization_coreSerialDescriptor, XPSDKKotlinx_serialization_coreSerializationStrategy, XPSDKKotlinx_serialization_coreDecoder, XPSDKKotlinx_serialization_coreDeserializationStrategy, XPSDKKotlinx_serialization_coreCompositeEncoder, XPSDKKotlinAnnotation, XPSDKKotlinx_serialization_coreCompositeDecoder, XPSDKKotlinx_serialization_coreSerializersModuleCollector, XPSDKKotlinKClass, XPSDKKotlinKDeclarationContainer, XPSDKKotlinKAnnotatedElement, XPSDKKotlinKClassifier;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface XPSDKBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface XPSDKBase (XPSDKBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface XPSDKMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface XPSDKMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorXPSDKKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface XPSDKNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface XPSDKByte : XPSDKNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface XPSDKUByte : XPSDKNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface XPSDKShort : XPSDKNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface XPSDKUShort : XPSDKNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface XPSDKInt : XPSDKNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface XPSDKUInt : XPSDKNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface XPSDKLong : XPSDKNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface XPSDKULong : XPSDKNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface XPSDKFloat : XPSDKNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface XPSDKDouble : XPSDKNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface XPSDKBoolean : XPSDKNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((swift_name("SdkXpointSdkApi")))
@protocol XPSDKSdkXpointSdkApi
@required

/**
 * @note This method converts instances of XpointSdkException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (NSArray<XPSDKSdkGameType *> * _Nullable)availableGameTypesClientKey:(NSString *)clientKey clientBrand:(NSString * _Nullable)clientBrand area:(XPSDKSdkXpointSdkApiJurisdictionArea * _Nullable)area error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("availableGameTypes(clientKey:clientBrand:area:)")));

/**
 * @note This method converts instances of XpointSdkException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (NSArray<XPSDKSdkXpointSdkApiJurisdictionArea *> * _Nullable)availableJurisdictionAreasClientKey:(NSString *)clientKey error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("availableJurisdictionAreas(clientKey:)")));

/**
 * @note This method converts instances of XpointSdkException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (NSArray<XPSDKSdkXpointSdkApiJurisdictionArea *> * _Nullable)availableJurisdictionAreasClientKey:(NSString *)clientKey clientBrand:(NSString *)clientBrand error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("availableJurisdictionAreas(clientKey:clientBrand:)")));
- (void)connectionStatusCallbackCallback:(void (^)(XPSDKBoolean *))callback __attribute__((swift_name("connectionStatusCallback(callback:)")));
- (id<XPSDKSdkXpointSdkApiSession> _Nullable)defaultSession __attribute__((swift_name("defaultSession()")));
- (id<XPSDKSdkXpointSdkApiSession>)defaultSessionClientKey:(NSString *)clientKey userId:(NSString *)userId __attribute__((swift_name("defaultSession(clientKey:userId:)")));
- (id<XPSDKSdkXpointSdkApiSession>)defaultSessionClientKey:(NSString *)clientKey userId:(NSString *)userId clientBrand:(NSString * _Nullable)clientBrand __attribute__((swift_name("defaultSession(clientKey:userId:clientBrand:)")));
- (id<XPSDKSdkXpointSdkApiSession>)defaultSessionWithIdClientKey:(NSString *)clientKey userId:(NSString *)userId sessionId:(NSString *)sessionId __attribute__((swift_name("defaultSessionWithId(clientKey:userId:sessionId:)")));
- (id<XPSDKSdkXpointSdkApiSession>)defaultSessionWithIdClientKey:(NSString *)clientKey userId:(NSString *)userId sessionId:(NSString *)sessionId clientBrand:(NSString * _Nullable)clientBrand __attribute__((swift_name("defaultSessionWithId(clientKey:userId:sessionId:clientBrand:)")));
- (NSString *)deviceId __attribute__((swift_name("deviceId()")));
- (NSString *)hostClientKey:(NSString *)clientKey __attribute__((swift_name("host(clientKey:)")));

/**
 * @note This method converts instances of XpointSdkException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)isClientKeyValidClientKey:(NSString *)clientKey error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("isClientKeyValid(clientKey:)"))) __attribute__((swift_error(nonnull_error)));
- (void)loggingCallbackMinSeverity:(XPSDKKermitSeverity *)minSeverity callback:(void (^)(NSString *))callback __attribute__((swift_name("loggingCallback(minSeverity:callback:)")));
- (void)startDataCollection __attribute__((swift_name("startDataCollection()")));

/**
 * @note This method converts instances of XpointSdkException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (XPSDKSdkXpointSdkApiJurisdictionAreas * _Nullable)suitableJurisdictionAreaClientKey:(NSString *)clientKey clientBrand:(NSString * _Nullable)clientBrand error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("suitableJurisdictionArea(clientKey:clientBrand:)"))) __attribute__((swift_error(nonnull_error)));
- (void)updateUserAgentUserAgent:(NSString *)userAgent __attribute__((swift_name("updateUserAgent(userAgent:)")));
- (NSString *)version __attribute__((swift_name("version()")));
@end

__attribute__((swift_name("SdkXpointSdkExtendedApi")))
@protocol XPSDKSdkXpointSdkExtendedApi <XPSDKSdkXpointSdkApi>
@required
- (NSArray<id<XPSDKSdkXpointSdkExtendedApiSession>> *)activeSessions __attribute__((swift_name("activeSessions()")));
- (id<XPSDKSdkXpointSdkExtendedApiSession>)externalSessionClientKey:(NSString *)clientKey userId:(NSString *)userId externalSessionId:(NSString *)externalSessionId __attribute__((swift_name("externalSession(clientKey:userId:externalSessionId:)")));
- (id<XPSDKSdkXpointSdkExtendedApiSession>)externalSessionClientKey:(NSString *)clientKey userId:(NSString *)userId externalSessionId:(NSString *)externalSessionId clientBrand:(NSString * _Nullable)clientBrand __attribute__((swift_name("externalSession(clientKey:userId:externalSessionId:clientBrand:)")));
- (BOOL)isClientKeyValidUnsafeClientKey:(NSString *)clientKey __attribute__((swift_name("isClientKeyValidUnsafe(clientKey:)")));
- (id<XPSDKSdkXpointSdkExtendedApiSession>)sessionClientKey:(NSString *)clientKey userId:(NSString *)userId __attribute__((swift_name("session(clientKey:userId:)")));
- (id<XPSDKSdkXpointSdkExtendedApiSession>)sessionClientKey:(NSString *)clientKey userId:(NSString *)userId clientBrand:(NSString * _Nullable)clientBrand __attribute__((swift_name("session(clientKey:userId:clientBrand:)")));
- (id<XPSDKSdkXpointSdkExtendedApiSession> _Nullable)sessionByIdSessionId:(NSString *)sessionId __attribute__((swift_name("sessionById(sessionId:)")));
- (void)stopPeriodicSessions __attribute__((swift_name("stopPeriodicSessions()")));
@end

__attribute__((swift_name("SdkCommonSdk")))
@interface XPSDKSdkCommonSdk : XPSDKBase <XPSDKSdkXpointSdkExtendedApi>
- (NSArray<id<XPSDKSdkXpointSdkExtendedApiSession>> *)activeSessions __attribute__((swift_name("activeSessions()")));

/**
 * @note This method converts instances of XpointSdkException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (NSArray<XPSDKSdkGameType *> * _Nullable)availableGameTypesClientKey:(NSString *)clientKey clientBrand:(NSString * _Nullable)clientBrand area:(XPSDKSdkXpointSdkApiJurisdictionArea * _Nullable)area error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("availableGameTypes(clientKey:clientBrand:area:)")));

/**
 * @note This method converts instances of XpointSdkException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (NSArray<XPSDKSdkXpointSdkApiJurisdictionArea *> * _Nullable)availableJurisdictionAreasClientKey:(NSString *)clientKey error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("availableJurisdictionAreas(clientKey:)")));

/**
 * @note This method converts instances of XpointSdkException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (NSArray<XPSDKSdkXpointSdkApiJurisdictionArea *> * _Nullable)availableJurisdictionAreasClientKey:(NSString *)clientKey clientBrand:(NSString *)clientBrand error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("availableJurisdictionAreas(clientKey:clientBrand:)")));

/**
 * @note This method converts instances of UserIdNotSpecifiedException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (XPSDKSdkCheckResult * _Nullable)checkResultAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("checkResult()"))) __attribute__((deprecated("Work with sdk with methods from XpointSdkApi")));

/**
 * @note This method converts instances of UserIdNotSpecifiedException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (XPSDKKotlinPair<XPSDKSdkCheckResult *, NSString *> * _Nullable)checkResultWithJWTAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("checkResultWithJWT()"))) __attribute__((deprecated("Work with sdk with methods from XpointSdkApi")));
- (void)connectionStatusCallbackCallback:(void (^)(XPSDKBoolean *))callback __attribute__((swift_name("connectionStatusCallback(callback:)")));
- (id<XPSDKSdkXpointSdkApiSession> _Nullable)defaultSession __attribute__((swift_name("defaultSession()")));
- (id<XPSDKSdkXpointSdkApiSession>)defaultSessionClientKey:(NSString *)clientKey userId:(NSString *)userId __attribute__((swift_name("defaultSession(clientKey:userId:)")));
- (id<XPSDKSdkXpointSdkApiSession>)defaultSessionClientKey:(NSString *)clientKey userId:(NSString *)userId clientBrand:(NSString * _Nullable)clientBrand __attribute__((swift_name("defaultSession(clientKey:userId:clientBrand:)")));
- (id<XPSDKSdkXpointSdkApiSession>)defaultSessionWithIdClientKey:(NSString *)clientKey userId:(NSString *)userId sessionId:(NSString *)sessionId __attribute__((swift_name("defaultSessionWithId(clientKey:userId:sessionId:)")));
- (id<XPSDKSdkXpointSdkApiSession>)defaultSessionWithIdClientKey:(NSString *)clientKey userId:(NSString *)userId sessionId:(NSString *)sessionId clientBrand:(NSString * _Nullable)clientBrand __attribute__((swift_name("defaultSessionWithId(clientKey:userId:sessionId:clientBrand:)")));
- (NSString *)deviceId __attribute__((swift_name("deviceId()")));
- (void)doOnNoActiveSessions __attribute__((swift_name("doOnNoActiveSessions()")));
- (id<XPSDKSdkXpointSdkExtendedApiSession>)externalSessionClientKey:(NSString *)clientKey userId:(NSString *)userId externalSessionId:(NSString *)externalSessionId __attribute__((swift_name("externalSession(clientKey:userId:externalSessionId:)")));
- (id<XPSDKSdkXpointSdkExtendedApiSession>)externalSessionClientKey:(NSString *)clientKey userId:(NSString *)userId externalSessionId:(NSString *)externalSessionId clientBrand:(NSString * _Nullable)clientBrand __attribute__((swift_name("externalSession(clientKey:userId:externalSessionId:clientBrand:)")));
- (XPSDKSdkAppStatus *)getAppStatus __attribute__((swift_name("getAppStatus()"))) __attribute__((deprecated("Work with sdk with methods from XpointSdkApi")));
- (NSString *)hostClientKey:(NSString *)clientKey __attribute__((swift_name("host(clientKey:)")));

/**
 * @note This method converts instances of XpointSdkException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)isClientKeyValidClientKey:(NSString *)clientKey error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("isClientKeyValid(clientKey:)"))) __attribute__((swift_error(nonnull_error)));
- (BOOL)isClientKeyValidUnsafeClientKey:(NSString *)clientKey __attribute__((swift_name("isClientKeyValidUnsafe(clientKey:)")));

/**
 * @note This method converts instances of UserIdNotSpecifiedException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (XPSDKSdkCheckResult * _Nullable)liteCheckAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("liteCheck()"))) __attribute__((deprecated("Work with sdk with methods from XpointSdkApi")));

/**
 * @note This method converts instances of UserIdNotSpecifiedException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (XPSDKSdkCheckResult * _Nullable)liteCheckForce:(BOOL)force error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("liteCheck(force:)"))) __attribute__((deprecated("Work with sdk with methods from XpointSdkApi")));
- (void)loggingCallbackMinSeverity:(XPSDKKermitSeverity *)minSeverity callback:(void (^)(NSString *))callback __attribute__((swift_name("loggingCallback(minSeverity:callback:)")));
- (void)loginUserId:(NSString *)userId client:(NSString * _Nullable)client customData:(NSString * _Nullable)customData __attribute__((swift_name("login(userId:client:customData:)"))) __attribute__((deprecated("Work with sdk with methods from XpointSdkApi")));
- (void)logout __attribute__((swift_name("logout()"))) __attribute__((deprecated("Work with sdk with methods from XpointSdkApi")));
- (void)reconnect __attribute__((swift_name("reconnect()"))) __attribute__((deprecated("Work with sdk with methods from XpointSdkApi")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)runAsyncBlock:(id<XPSDKKotlinSuspendFunction1>)block __attribute__((swift_name("runAsync(block:)"))) __attribute__((deprecated("Work with sdk with methods from XpointSdkApi")));
- (id<XPSDKSdkXpointSdkExtendedApiSession>)sessionClientKey:(NSString *)clientKey userId:(NSString *)userId __attribute__((swift_name("session(clientKey:userId:)")));
- (id<XPSDKSdkXpointSdkExtendedApiSession>)sessionClientKey:(NSString *)clientKey userId:(NSString *)userId clientBrand:(NSString * _Nullable)clientBrand __attribute__((swift_name("session(clientKey:userId:clientBrand:)")));
- (id<XPSDKSdkXpointSdkExtendedApiSession> _Nullable)sessionByIdSessionId:(NSString *)sessionId __attribute__((swift_name("sessionById(sessionId:)")));
- (XPSDKKotlinUnit * _Nullable)setExternalGpsLatitude:(double)latitude longitude:(double)longitude accuracy:(double)accuracy timestamp:(int64_t)timestamp __attribute__((swift_name("setExternalGps(latitude:longitude:accuracy:timestamp:)"))) __attribute__((deprecated("Work with sdk with methods from XpointSdkApi")));
- (void)startOnDone:(void (^)(void))onDone onFail:(void (^)(NSString *))onFail __attribute__((swift_name("start(onDone:onFail:)"))) __attribute__((deprecated("Work with sdk with methods from XpointSdkApi")));
- (void)startDataCollection __attribute__((swift_name("startDataCollection()")));
- (void)stop __attribute__((swift_name("stop()"))) __attribute__((deprecated("Work with sdk with methods from XpointSdkApi")));
- (void)stopPeriodicSessions __attribute__((swift_name("stopPeriodicSessions()")));

/**
 * @note This method converts instances of XpointSdkException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (XPSDKSdkXpointSdkApiJurisdictionAreas * _Nullable)suitableJurisdictionAreaClientKey:(NSString *)clientKey clientBrand:(NSString * _Nullable)clientBrand error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("suitableJurisdictionArea(clientKey:clientBrand:)"))) __attribute__((swift_error(nonnull_error)));

/**
 * @note This method converts instances of RuntimeException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)updateClientBrandClientBrand:(NSString * _Nullable)clientBrand error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("updateClientBrand(clientBrand:)"))) __attribute__((deprecated("Work with sdk with methods from XpointSdkApi")));
- (void)updateClientKeyClientKeyRaw:(NSString *)clientKeyRaw __attribute__((swift_name("updateClientKey(clientKeyRaw:)"))) __attribute__((deprecated("Work with sdk with methods from XpointSdkApi")));
- (void)updateCustomDataCustomData:(NSString * _Nullable)customData __attribute__((swift_name("updateCustomData(customData:)"))) __attribute__((deprecated("Work with sdk with methods from XpointSdkApi")));
- (void)updateUserAgentUserAgent:(NSString *)userAgent __attribute__((swift_name("updateUserAgent(userAgent:)")));
- (void)updateUserIdUserId:(NSString *)userId __attribute__((swift_name("updateUserId(userId:)"))) __attribute__((deprecated("Work with sdk with methods from XpointSdkApi")));
- (NSString *)version __attribute__((swift_name("version()")));
- (void)wageringEndOnDone:(void (^ _Nullable)(void))onDone onException:(void (^ _Nullable)(XPSDKKotlinException *))onException __attribute__((swift_name("wageringEnd(onDone:onException:)"))) __attribute__((deprecated("Work with sdk with methods from XpointSdkApi")));
- (void)wageringStartOnDone:(void (^ _Nullable)(void))onDone onException:(void (^ _Nullable)(XPSDKKotlinException *))onException externalSessionId:(NSString * _Nullable)externalSessionId webClientVersion:(NSString * _Nullable)webClientVersion __attribute__((swift_name("wageringStart(onDone:onException:externalSessionId:webClientVersion:)"))) __attribute__((deprecated("Work with sdk with methods from XpointSdkApi")));
@property (readonly) id<XPSDKKotlinx_coroutines_coreStateFlow> checkResultFlow __attribute__((swift_name("checkResultFlow")));
@property (readonly) id<XPSDKKotlinx_coroutines_coreStateFlow> checkResultPairFlow __attribute__((swift_name("checkResultPairFlow")));
@property (readonly) id<XPSDKKotlinx_coroutines_coreStateFlow> infoFlow __attribute__((swift_name("infoFlow")));
@property (readonly) id<XPSDKKotlinx_coroutines_coreStateFlow> sdkStateFlow __attribute__((swift_name("sdkStateFlow")));
@property (readonly) id<XPSDKKotlinx_coroutines_coreCoroutineScope> startingScope __attribute__((swift_name("startingScope")));
@end

__attribute__((swift_name("SdkIosSdk")))
@interface XPSDKSdkIosSdk : XPSDKSdkCommonSdk
- (instancetype)initWithClient:(NSString * _Nullable)client delegate:(id<XPSDKSdkXPointSDKDelegate> _Nullable)delegate __attribute__((swift_name("init(client:delegate:)"))) __attribute__((objc_designated_initializer));
- (NSString *)hardwareId __attribute__((swift_name("hardwareId()")));
- (BOOL)isLocationServicesNotAuthorized __attribute__((swift_name("isLocationServicesNotAuthorized()")));
- (void)startOnDone:(void (^)(void))onDone onFail:(void (^)(NSString *))onFail __attribute__((swift_name("start(onDone:onFail:)"))) __attribute__((deprecated("Overrides deprecated member in 'tech.xpoint.sdk.CommonSdk'. Work with sdk with methods from XpointSdkApi")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IosAsyncSdk")))
@interface XPSDKIosAsyncSdk : XPSDKSdkIosSdk
- (instancetype)initWithClient:(NSString * _Nullable)client server:(NSString *)server delegate:(id<XPSDKSdkXPointSDKDelegate> _Nullable)delegate __attribute__((swift_name("init(client:server:delegate:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithClient:(NSString * _Nullable)client delegate:(id<XPSDKSdkXPointSDKDelegate> _Nullable)delegate __attribute__((swift_name("init(client:delegate:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (void)doInitLoggersWithSeveritySeverity:(XPSDKKermitSeverity *)severity __attribute__((swift_name("doInitLoggersWithSeverity(severity:)")));
- (void)loginUserID:(NSString *)userID completion:(void (^)(XPSDKResult *))completion __attribute__((swift_name("login(userID:completion:)"))) __attribute__((deprecated("Use session approach. Consult official documentation for details.")));
- (void)loginUserID:(NSString *)userID customData:(NSString * _Nullable)customData completion:(void (^)(XPSDKResult *))completion __attribute__((swift_name("login(userID:customData:completion:)"))) __attribute__((deprecated("Use session approach. Consult official documentation for details.")));
- (void)logoutCompletion:(void (^)(XPSDKResult *))completion __attribute__((swift_name("logout(completion:)"))) __attribute__((deprecated("Use session approach. Consult official documentation for details.")));
- (void)startCompletion:(void (^)(XPSDKResult *))completion __attribute__((swift_name("start(completion:)"))) __attribute__((deprecated("Starting the SDK is not necessary now. You may safely remove call of this method.")));
- (void)startWageringCompletion:(void (^)(XPSDKResult *))completion __attribute__((swift_name("startWagering(completion:)"))) __attribute__((deprecated("Use session approach. Consult official documentation for details.")));
- (void)stopWageringCompletion:(void (^)(XPSDKResult *))completion __attribute__((swift_name("stopWagering(completion:)"))) __attribute__((deprecated("Use session approach. Consult official documentation for details.")));
@end

__attribute__((swift_name("Result")))
@interface XPSDKResult : XPSDKBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Result.Failure")))
@interface XPSDKResultFailure : XPSDKResult
- (instancetype)initWithErrorMessage:(NSString *)errorMessage __attribute__((swift_name("init(errorMessage:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString *errorMessage __attribute__((swift_name("errorMessage")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Result.Success")))
@interface XPSDKResultSuccess : XPSDKResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)success __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) XPSDKResultSuccess *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("XpointManager")))
@interface XPSDKXpointManager : XPSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)xpointManager __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) XPSDKXpointManager *shared __attribute__((swift_name("shared")));
@property (readonly) XPSDKIosAsyncSdk *main __attribute__((swift_name("main")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BugfenderLoggerIosKt")))
@interface XPSDKBugfenderLoggerIosKt : XPSDKBase
+ (void)doInitBugfenderKey:(NSString *)key severity:(XPSDKKermitSeverity *)severity __attribute__((swift_name("doInitBugfender(key:severity:)"))) __attribute__((deprecated("Use loggingCallback with custom logger instead")));
@end

__attribute__((swift_name("SdkXpointSdkApiSession")))
@protocol XPSDKSdkXpointSdkApiSession
@required
- (id<XPSDKSdkXpointSdkApiChecker>)checker __attribute__((swift_name("checker()")));
- (id<XPSDKSdkXpointSdkApiChecker>)checkerLite __attribute__((swift_name("checkerLite()")));
- (NSString * _Nullable)clientBrand __attribute__((swift_name("clientBrand()")));
- (NSString *)clientKey __attribute__((swift_name("clientKey()")));
- (NSString * _Nullable)customData __attribute__((swift_name("customData()")));
- (id<XPSDKSdkXpointSdkApiSession>)customDataCustomData:(NSString * _Nullable)customData __attribute__((swift_name("customData(customData:)")));
- (void)deleteSession __attribute__((swift_name("deleteSession()")));
- (XPSDKSdkXpointSdkApiJurisdictionArea * _Nullable)jurisdictionArea __attribute__((swift_name("jurisdictionArea()")));
- (id<XPSDKSdkXpointSdkApiSession>)jurisdictionAreaArea:(XPSDKSdkXpointSdkApiJurisdictionArea * _Nullable)area __attribute__((swift_name("jurisdictionArea(area:)")));
- (id<XPSDKSdkXpointSdkApiPeriodicChecker>)periodicChecker __attribute__((swift_name("periodicChecker()")));
- (NSString *)sessionId __attribute__((swift_name("sessionId()")));
- (NSString *)userId __attribute__((swift_name("userId()")));
@end

__attribute__((swift_name("SdkXpointSdkExtendedApiSession")))
@protocol XPSDKSdkXpointSdkExtendedApiSession <XPSDKSdkXpointSdkApiSession>
@required
- (void)additionalGpsLatitude:(double)latitude longitude:(double)longitude accuracy:(double)accuracy timestamp:(int64_t)timestamp __attribute__((swift_name("additionalGps(latitude:longitude:accuracy:timestamp:)")));
- (id<XPSDKSdkXpointSdkApiSession>)userAgentUserAgent:(NSString * _Nullable)userAgent __attribute__((swift_name("userAgent(userAgent:)")));
- (id<XPSDKSdkXpointSdkApiSession>)webVersionWebVersion:(NSString * _Nullable)webVersion __attribute__((swift_name("webVersion(webVersion:)")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface XPSDKKotlinThrowable : XPSDKBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(XPSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(XPSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (XPSDKKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) XPSDKKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("KotlinException")))
@interface XPSDKKotlinException : XPSDKKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(XPSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(XPSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinRuntimeException")))
@interface XPSDKKotlinRuntimeException : XPSDKKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(XPSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(XPSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("SdkXpointSdkException")))
@interface XPSDKSdkXpointSdkException : XPSDKKotlinRuntimeException
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(XPSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(XPSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol XPSDKKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface XPSDKKotlinEnum<E> : XPSDKBase <XPSDKKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) XPSDKKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SdkGameType")))
@interface XPSDKSdkGameType : XPSDKKotlinEnum<XPSDKSdkGameType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) XPSDKSdkGameTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) XPSDKSdkGameType *dfs __attribute__((swift_name("dfs")));
@property (class, readonly) XPSDKSdkGameType *casino __attribute__((swift_name("casino")));
@property (class, readonly) XPSDKSdkGameType *betting __attribute__((swift_name("betting")));
+ (XPSDKKotlinArray<XPSDKSdkGameType *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SdkXpointSdkApiJurisdictionArea")))
@interface XPSDKSdkXpointSdkApiJurisdictionArea : XPSDKBase
- (instancetype)initWithId:(NSString *)id name:(NSString *)name __attribute__((swift_name("init(id:name:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) XPSDKSdkXpointSdkApiJurisdictionAreaCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (XPSDKSdkXpointSdkApiJurisdictionArea *)doCopyId:(NSString *)id name:(NSString *)name __attribute__((swift_name("doCopy(id:name:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KermitSeverity")))
@interface XPSDKKermitSeverity : XPSDKKotlinEnum<XPSDKKermitSeverity *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) XPSDKKermitSeverity *verbose __attribute__((swift_name("verbose")));
@property (class, readonly) XPSDKKermitSeverity *debug __attribute__((swift_name("debug")));
@property (class, readonly) XPSDKKermitSeverity *info __attribute__((swift_name("info")));
@property (class, readonly) XPSDKKermitSeverity *warn __attribute__((swift_name("warn")));
@property (class, readonly) XPSDKKermitSeverity *error __attribute__((swift_name("error")));
@property (class, readonly) XPSDKKermitSeverity *assert __attribute__((swift_name("assert")));
+ (XPSDKKotlinArray<XPSDKKermitSeverity *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SdkXpointSdkApiJurisdictionAreas")))
@interface XPSDKSdkXpointSdkApiJurisdictionAreas : XPSDKBase
- (instancetype)initWithPreferableArea:(XPSDKSdkXpointSdkApiJurisdictionArea * _Nullable)preferableArea candidateAreas:(NSArray<XPSDKSdkXpointSdkApiJurisdictionArea *> *)candidateAreas __attribute__((swift_name("init(preferableArea:candidateAreas:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) XPSDKSdkXpointSdkApiJurisdictionAreasCompanion *companion __attribute__((swift_name("companion")));
- (XPSDKSdkXpointSdkApiJurisdictionArea * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<XPSDKSdkXpointSdkApiJurisdictionArea *> *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (XPSDKSdkXpointSdkApiJurisdictionAreas *)doCopyPreferableArea:(XPSDKSdkXpointSdkApiJurisdictionArea * _Nullable)preferableArea candidateAreas:(NSArray<XPSDKSdkXpointSdkApiJurisdictionArea *> *)candidateAreas __attribute__((swift_name("doCopy(preferableArea:candidateAreas:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<XPSDKSdkXpointSdkApiJurisdictionArea *> *candidateAreas __attribute__((swift_name("candidateAreas")));
@property (readonly) XPSDKSdkXpointSdkApiJurisdictionArea * _Nullable preferableArea __attribute__((swift_name("preferableArea")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SdkUserIdNotSpecifiedException")))
@interface XPSDKSdkUserIdNotSpecifiedException : XPSDKKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(XPSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(XPSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SdkCheckResult")))
@interface XPSDKSdkCheckResult : XPSDKBase
- (instancetype)initWithRequestId:(NSString * _Nullable)requestId status:(XPSDKSdkCheckResponseStatus *)status errors:(NSArray<XPSDKSdkCheckResponseError *> * _Nullable)errors nextCheckInterval:(int32_t)nextCheckInterval jwt:(NSString * _Nullable)jwt __attribute__((swift_name("init(requestId:status:errors:nextCheckInterval:jwt:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) XPSDKSdkCheckResultCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (XPSDKSdkCheckResponseStatus *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<XPSDKSdkCheckResponseError *> * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (int32_t)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (XPSDKSdkCheckResult *)doCopyRequestId:(NSString * _Nullable)requestId status:(XPSDKSdkCheckResponseStatus *)status errors:(NSArray<XPSDKSdkCheckResponseError *> * _Nullable)errors nextCheckInterval:(int32_t)nextCheckInterval nextCheckType:(id)nextCheckType jwt:(NSString * _Nullable)jwt __attribute__((swift_name("doCopy(requestId:status:errors:nextCheckInterval:nextCheckType:jwt:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSString *)errorDescription __attribute__((swift_name("errorDescription()")));
- (NSString *)errorDescriptionWithCodes __attribute__((swift_name("errorDescriptionWithCodes()")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<XPSDKSdkCheckResponseError *> * _Nullable errors __attribute__((swift_name("errors")));
@property (readonly) NSString * _Nullable jwt __attribute__((swift_name("jwt")));
@property (readonly) int32_t nextCheckInterval __attribute__((swift_name("nextCheckInterval")));
@property (readonly) NSString * _Nullable requestId __attribute__((swift_name("requestId")));
@property (readonly) XPSDKSdkCheckResponseStatus *status __attribute__((swift_name("status")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinPair")))
@interface XPSDKKotlinPair<__covariant A, __covariant B> : XPSDKBase
- (instancetype)initWithFirst:(A _Nullable)first second:(B _Nullable)second __attribute__((swift_name("init(first:second:)"))) __attribute__((objc_designated_initializer));
- (A _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (B _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (XPSDKKotlinPair<A, B> *)doCopyFirst:(A _Nullable)first second:(B _Nullable)second __attribute__((swift_name("doCopy(first:second:)")));
- (BOOL)equalsOther:(id _Nullable)other __attribute__((swift_name("equals(other:)")));
- (int32_t)hashCode __attribute__((swift_name("hashCode()")));
- (NSString *)toString __attribute__((swift_name("toString()")));
@property (readonly) A _Nullable first __attribute__((swift_name("first")));
@property (readonly) B _Nullable second __attribute__((swift_name("second")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SdkAppStatus")))
@interface XPSDKSdkAppStatus : XPSDKBase
- (instancetype)initWithIsLoggedIn:(BOOL)isLoggedIn isActive:(BOOL)isActive version:(NSString *)version apiHost:(NSString *)apiHost session:(XPSDKSdkAppStatusSession *)session activeSessions:(NSArray<XPSDKSdkAppStatusSession *> *)activeSessions __attribute__((swift_name("init(isLoggedIn:isActive:version:apiHost:session:activeSessions:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) XPSDKSdkAppStatusCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (XPSDKSdkAppStatusSession *)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<XPSDKSdkAppStatusSession *> *)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (XPSDKSdkAppStatus *)doCopyIsLoggedIn:(BOOL)isLoggedIn isActive:(BOOL)isActive version:(NSString *)version apiHost:(NSString *)apiHost session:(XPSDKSdkAppStatusSession *)session activeSessions:(NSArray<XPSDKSdkAppStatusSession *> *)activeSessions __attribute__((swift_name("doCopy(isLoggedIn:isActive:version:apiHost:session:activeSessions:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<XPSDKSdkAppStatusSession *> *activeSessions __attribute__((swift_name("activeSessions")));
@property (readonly) NSString *apiHost __attribute__((swift_name("apiHost")));
@property (readonly) BOOL isActive __attribute__((swift_name("isActive")));
@property (readonly) BOOL isLoggedIn __attribute__((swift_name("isLoggedIn")));
@property (readonly) XPSDKSdkAppStatusSession *session __attribute__((swift_name("session")));
@property (readonly) NSString *version __attribute__((swift_name("version")));
@end

__attribute__((swift_name("KotlinFunction")))
@protocol XPSDKKotlinFunction
@required
@end

__attribute__((swift_name("KotlinSuspendFunction1")))
@protocol XPSDKKotlinSuspendFunction1 <XPSDKKotlinFunction>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface XPSDKKotlinUnit : XPSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) XPSDKKotlinUnit *shared __attribute__((swift_name("shared")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreFlow")))
@protocol XPSDKKotlinx_coroutines_coreFlow
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<XPSDKKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSharedFlow")))
@protocol XPSDKKotlinx_coroutines_coreSharedFlow <XPSDKKotlinx_coroutines_coreFlow>
@required
@property (readonly) NSArray<id> *replayCache __attribute__((swift_name("replayCache")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreStateFlow")))
@protocol XPSDKKotlinx_coroutines_coreStateFlow <XPSDKKotlinx_coroutines_coreSharedFlow>
@required
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineScope")))
@protocol XPSDKKotlinx_coroutines_coreCoroutineScope
@required
@property (readonly) id<XPSDKKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end

__attribute__((swift_name("SdkXPointSDKDelegateBase")))
@protocol XPSDKSdkXPointSDKDelegateBase
@required
- (void)didCheckStatusChangedCheckResult:(XPSDKSdkCheckResult *)checkResult __attribute__((swift_name("didCheckStatusChanged(checkResult:)")));
@end

__attribute__((swift_name("SdkXPointSDKDelegate")))
@protocol XPSDKSdkXPointSDKDelegate <XPSDKSdkXPointSDKDelegateBase>
@required
- (void)didConnectionStatusChangedStatus:(XPSDKSdkConnectionStatus * _Nullable)status __attribute__((swift_name("didConnectionStatusChanged(status:)")));
@end

__attribute__((swift_name("SdkXpointSdkApiChecker")))
@protocol XPSDKSdkXpointSdkApiChecker
@required

/**
 * @note This method converts instances of XpointSdkException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (XPSDKSdkCheckResult * _Nullable)checkAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("check()")));

/**
 * @note This method converts instances of XpointSdkException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (XPSDKSdkCheckResult * _Nullable)checkForce:(BOOL)force error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("check(force:)")));
@end

__attribute__((swift_name("SdkXpointSdkApiPeriodicChecker")))
@protocol XPSDKSdkXpointSdkApiPeriodicChecker
@required
- (BOOL)isActive __attribute__((swift_name("isActive()")));
- (XPSDKSdkCheckResult *)lastResult __attribute__((swift_name("lastResult()")));
- (void)resultCallbackOnCheckResult:(void (^ _Nullable)(XPSDKSdkCheckResult *))onCheckResult __attribute__((swift_name("resultCallback(onCheckResult:)")));
- (void)startOnCheckResult:(void (^)(XPSDKSdkCheckResult *))onCheckResult __attribute__((swift_name("start(onCheckResult:)")));
- (void)stop __attribute__((swift_name("stop()")));
- (id<XPSDKSdkXpointSdkApiPeriodicChecker>)timeoutTimeoutInMillis:(int64_t)timeoutInMillis __attribute__((swift_name("timeout(timeoutInMillis:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface XPSDKKotlinArray<T> : XPSDKBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(XPSDKInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<XPSDKKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface XPSDKKotlinEnumCompanion : XPSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) XPSDKKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SdkGameType.Companion")))
@interface XPSDKSdkGameTypeCompanion : XPSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) XPSDKSdkGameTypeCompanion *shared __attribute__((swift_name("shared")));
- (XPSDKSdkGameType * _Nullable)byNameName:(NSString *)name __attribute__((swift_name("byName(name:)")));
- (id<XPSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<XPSDKKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(XPSDKKotlinArray<id<XPSDKKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SdkXpointSdkApiJurisdictionArea.Companion")))
@interface XPSDKSdkXpointSdkApiJurisdictionAreaCompanion : XPSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) XPSDKSdkXpointSdkApiJurisdictionAreaCompanion *shared __attribute__((swift_name("shared")));
- (id<XPSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SdkXpointSdkApiJurisdictionAreas.Companion")))
@interface XPSDKSdkXpointSdkApiJurisdictionAreasCompanion : XPSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) XPSDKSdkXpointSdkApiJurisdictionAreasCompanion *shared __attribute__((swift_name("shared")));
- (id<XPSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SdkCheckResponseStatus")))
@interface XPSDKSdkCheckResponseStatus : XPSDKKotlinEnum<XPSDKSdkCheckResponseStatus *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) XPSDKSdkCheckResponseStatus *idle __attribute__((swift_name("idle")));
@property (class, readonly) XPSDKSdkCheckResponseStatus *waiting __attribute__((swift_name("waiting")));
@property (class, readonly) XPSDKSdkCheckResponseStatus *allowed __attribute__((swift_name("allowed")));
@property (class, readonly) XPSDKSdkCheckResponseStatus *denied __attribute__((swift_name("denied")));
+ (XPSDKKotlinArray<XPSDKSdkCheckResponseStatus *> *)values __attribute__((swift_name("values()")));
@property (readonly) BOOL allowed __attribute__((swift_name("allowed")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SdkCheckResponseError")))
@interface XPSDKSdkCheckResponseError : XPSDKBase
- (instancetype)initWithCode:(int32_t)code description:(NSString *)description __attribute__((swift_name("init(code:description:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) XPSDKSdkCheckResponseErrorCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (XPSDKSdkCheckResponseError *)doCopyCode:(int32_t)code description:(NSString *)description __attribute__((swift_name("doCopy(code:description:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t code __attribute__((swift_name("code")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SdkCheckResult.Companion")))
@interface XPSDKSdkCheckResultCompanion : XPSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) XPSDKSdkCheckResultCompanion *shared __attribute__((swift_name("shared")));
- (id<XPSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SdkAppStatus.Session")))
@interface XPSDKSdkAppStatusSession : XPSDKBase
- (instancetype)initWithUserId:(NSString * _Nullable)userId client:(NSString * _Nullable)client clientBrand:(NSString * _Nullable)clientBrand customData:(NSString * _Nullable)customData activeGame:(BOOL)activeGame sessionId:(NSString * _Nullable)sessionId jurisdictionArea:(XPSDKSdkXpointSdkApiJurisdictionArea * _Nullable)jurisdictionArea __attribute__((swift_name("init(userId:client:clientBrand:customData:activeGame:sessionId:jurisdictionArea:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) XPSDKSdkAppStatusSessionCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (XPSDKSdkXpointSdkApiJurisdictionArea * _Nullable)component7 __attribute__((swift_name("component7()"))) __attribute__((deprecated("use corresponding property instead")));
- (XPSDKSdkAppStatusSession *)doCopyUserId:(NSString * _Nullable)userId client:(NSString * _Nullable)client clientBrand:(NSString * _Nullable)clientBrand customData:(NSString * _Nullable)customData activeGame:(BOOL)activeGame sessionId:(NSString * _Nullable)sessionId jurisdictionArea:(XPSDKSdkXpointSdkApiJurisdictionArea * _Nullable)jurisdictionArea __attribute__((swift_name("doCopy(userId:client:clientBrand:customData:activeGame:sessionId:jurisdictionArea:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL activeGame __attribute__((swift_name("activeGame")));
@property (readonly) NSString * _Nullable client __attribute__((swift_name("client")));
@property (readonly) NSString * _Nullable clientBrand __attribute__((swift_name("clientBrand")));
@property (readonly) NSString * _Nullable customData __attribute__((swift_name("customData")));
@property (readonly) XPSDKSdkXpointSdkApiJurisdictionArea * _Nullable jurisdictionArea __attribute__((swift_name("jurisdictionArea")));
@property (readonly) NSString * _Nullable sessionId __attribute__((swift_name("sessionId")));
@property (readonly) NSString * _Nullable userId __attribute__((swift_name("userId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SdkAppStatus.Companion")))
@interface XPSDKSdkAppStatusCompanion : XPSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) XPSDKSdkAppStatusCompanion *shared __attribute__((swift_name("shared")));
- (id<XPSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("KotlinIllegalStateException")))
@interface XPSDKKotlinIllegalStateException : XPSDKKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(XPSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(XPSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
__attribute__((swift_name("KotlinCancellationException")))
@interface XPSDKKotlinCancellationException : XPSDKKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(XPSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(XPSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreFlowCollector")))
@protocol XPSDKKotlinx_coroutines_coreFlowCollector
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(id _Nullable)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinCoroutineContext")))
@protocol XPSDKKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<XPSDKKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<XPSDKKotlinCoroutineContextElement> _Nullable)getKey:(id<XPSDKKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<XPSDKKotlinCoroutineContext>)minusKeyKey:(id<XPSDKKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<XPSDKKotlinCoroutineContext>)plusContext:(id<XPSDKKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SdkConnectionStatus")))
@interface XPSDKSdkConnectionStatus : XPSDKKotlinEnum<XPSDKSdkConnectionStatus *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) XPSDKSdkConnectionStatusCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) XPSDKSdkConnectionStatus *connected __attribute__((swift_name("connected")));
@property (class, readonly) XPSDKSdkConnectionStatus *error __attribute__((swift_name("error")));
@property (class, readonly) XPSDKSdkConnectionStatus *forbidden __attribute__((swift_name("forbidden")));
+ (XPSDKKotlinArray<XPSDKSdkConnectionStatus *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol XPSDKKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol XPSDKKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<XPSDKKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<XPSDKKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol XPSDKKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<XPSDKKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<XPSDKKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol XPSDKKotlinx_serialization_coreKSerializer <XPSDKKotlinx_serialization_coreSerializationStrategy, XPSDKKotlinx_serialization_coreDeserializationStrategy>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SdkCheckResponseError.Companion")))
@interface XPSDKSdkCheckResponseErrorCompanion : XPSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) XPSDKSdkCheckResponseErrorCompanion *shared __attribute__((swift_name("shared")));
- (id<XPSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SdkAppStatus.SessionCompanion")))
@interface XPSDKSdkAppStatusSessionCompanion : XPSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) XPSDKSdkAppStatusSessionCompanion *shared __attribute__((swift_name("shared")));
- (id<XPSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol XPSDKKotlinCoroutineContextElement <XPSDKKotlinCoroutineContext>
@required
@property (readonly) id<XPSDKKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol XPSDKKotlinCoroutineContextKey
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SdkConnectionStatus.Companion")))
@interface XPSDKSdkConnectionStatusCompanion : XPSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) XPSDKSdkConnectionStatusCompanion *shared __attribute__((swift_name("shared")));
- (XPSDKSdkConnectionStatus * _Nullable)fromStateState:(XPSDKSdkSdkState *)state __attribute__((swift_name("fromState(state:)")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol XPSDKKotlinx_serialization_coreEncoder
@required
- (id<XPSDKKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<XPSDKKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<XPSDKKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<XPSDKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<XPSDKKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<XPSDKKotlinx_serialization_coreEncoder>)encodeInlineInlineDescriptor:(id<XPSDKKotlinx_serialization_coreSerialDescriptor>)inlineDescriptor __attribute__((swift_name("encodeInline(inlineDescriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));
- (void)encodeNull __attribute__((swift_name("encodeNull()")));
- (void)encodeNullableSerializableValueSerializer:(id<XPSDKKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<XPSDKKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) XPSDKKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol XPSDKKotlinx_serialization_coreSerialDescriptor
@required
- (NSArray<id<XPSDKKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<XPSDKKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) NSArray<id<XPSDKKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));
@property (readonly) XPSDKKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol XPSDKKotlinx_serialization_coreDecoder
@required
- (id<XPSDKKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<XPSDKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<XPSDKKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<XPSDKKotlinx_serialization_coreDecoder>)decodeInlineInlineDescriptor:(id<XPSDKKotlinx_serialization_coreSerialDescriptor>)inlineDescriptor __attribute__((swift_name("decodeInline(inlineDescriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));
- (XPSDKKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<XPSDKKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<XPSDKKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) XPSDKKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SdkSdkState")))
@interface XPSDKSdkSdkState : XPSDKKotlinEnum<XPSDKSdkSdkState *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) XPSDKSdkSdkState *sleepConnecting __attribute__((swift_name("sleepConnecting")));
@property (class, readonly) XPSDKSdkSdkState *sleepConnected __attribute__((swift_name("sleepConnected")));
@property (class, readonly) XPSDKSdkSdkState *sleepError __attribute__((swift_name("sleepError")));
@property (class, readonly) XPSDKSdkSdkState *loggedConnecting __attribute__((swift_name("loggedConnecting")));
@property (class, readonly) XPSDKSdkSdkState *loggedConnected __attribute__((swift_name("loggedConnected")));
@property (class, readonly) XPSDKSdkSdkState *loggedError __attribute__((swift_name("loggedError")));
@property (class, readonly) XPSDKSdkSdkState *checking __attribute__((swift_name("checking")));
@property (class, readonly) XPSDKSdkSdkState *allowed __attribute__((swift_name("allowed")));
@property (class, readonly) XPSDKSdkSdkState *denied __attribute__((swift_name("denied")));
+ (XPSDKKotlinArray<XPSDKSdkSdkState *> *)values __attribute__((swift_name("values()")));
- (BOOL)canStartGame __attribute__((swift_name("canStartGame()")));
- (XPSDKSdkConnectionStatus * _Nullable)connectionStatus __attribute__((swift_name("connectionStatus()")));
- (BOOL)isActive __attribute__((swift_name("isActive()")));
- (BOOL)isConnectionError __attribute__((swift_name("isConnectionError()")));
- (BOOL)isLoggedIn __attribute__((swift_name("isLoggedIn()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol XPSDKKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<XPSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<XPSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<XPSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<XPSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<XPSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<XPSDKKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<XPSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<XPSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<XPSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));
- (void)encodeNullableSerializableElementDescriptor:(id<XPSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<XPSDKKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<XPSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<XPSDKKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<XPSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<XPSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<XPSDKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<XPSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) XPSDKKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface XPSDKKotlinx_serialization_coreSerializersModule : XPSDKBase
- (void)dumpToCollector:(id<XPSDKKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));
- (id<XPSDKKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<XPSDKKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<XPSDKKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));
- (id<XPSDKKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<XPSDKKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));
- (id<XPSDKKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<XPSDKKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end

__attribute__((swift_name("KotlinAnnotation")))
@protocol XPSDKKotlinAnnotation
@required
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface XPSDKKotlinx_serialization_coreSerialKind : XPSDKBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol XPSDKKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<XPSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<XPSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<XPSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<XPSDKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<XPSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<XPSDKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<XPSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<XPSDKKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<XPSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<XPSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<XPSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<XPSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<XPSDKKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<XPSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<XPSDKKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<XPSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<XPSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<XPSDKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) XPSDKKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface XPSDKKotlinNothing : XPSDKBase
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol XPSDKKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<XPSDKKotlinKClass>)kClass provider:(id<XPSDKKotlinx_serialization_coreKSerializer> (^)(NSArray<id<XPSDKKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<XPSDKKotlinKClass>)kClass serializer:(id<XPSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<XPSDKKotlinKClass>)baseClass actualClass:(id<XPSDKKotlinKClass>)actualClass actualSerializer:(id<XPSDKKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<XPSDKKotlinKClass>)baseClass defaultDeserializerProvider:(id<XPSDKKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<XPSDKKotlinKClass>)baseClass defaultDeserializerProvider:(id<XPSDKKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<XPSDKKotlinKClass>)baseClass defaultSerializerProvider:(id<XPSDKKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol XPSDKKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol XPSDKKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol XPSDKKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol XPSDKKotlinKClass <XPSDKKotlinKDeclarationContainer, XPSDKKotlinKAnnotatedElement, XPSDKKotlinKClassifier>
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
