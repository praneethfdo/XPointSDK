#import "XpointSdkPlugin.h"
#if __has_include(<xpoint_sdk/xpoint_sdk-Swift.h>)
#import <xpoint_sdk/xpoint_sdk-Swift.h>
#else
// Support project import fallback if the generated compatibility header
// is not copied when this plugin is created as a library.
// https://forums.swift.org/t/swift-static-libraries-dont-copy-generated-objective-c-header/19816
#import "xpoint_sdk-Swift.h"
#endif

@implementation XpointSdkPlugin
+ (void)registerWithRegistrar:(NSObject<FlutterPluginRegistrar>*)registrar {
  [SwiftXpointSdkPlugin registerWithRegistrar:registrar];
}
@end
