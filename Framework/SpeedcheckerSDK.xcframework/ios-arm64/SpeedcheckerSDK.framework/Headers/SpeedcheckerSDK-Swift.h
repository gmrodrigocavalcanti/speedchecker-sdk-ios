// Generated by Apple Swift version 5.6 (swiftlang-5.6.0.323.62 clang-1316.0.20.8)
#ifndef SPEEDCHECKERSDK_SWIFT_H
#define SPEEDCHECKERSDK_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import CoreLocation;
@import Foundation;
@import ObjectiveC;
@import UIKit;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="SpeedcheckerSDK",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

@class NSString;
@class CLLocationManager;

SWIFT_CLASS_NAMED("BackgroundTest")
@interface BackgroundTest : NSObject
/// Initiate BackgroundTest
/// \param clientID Int id value
///
/// \param url Value used for background test configuration
///
/// \param testsEnabled value which tells if test is enabled on init
///
- (nonnull instancetype)initWithClientID:(NSInteger)clientID url:(NSString * _Nullable)url testsEnabled:(BOOL)testsEnabled OBJC_DESIGNATED_INITIALIZER;
- (void)setBackgroundNetworkTestingWithTestsEnabled:(BOOL)testsEnabled;
- (BOOL)getBackgroundNetworkTestingEnabled SWIFT_WARN_UNUSED_RESULT;
- (void)prepareLocationManagerWithLocationManager:(CLLocationManager * _Nullable)locationManager;
- (void)applicationDidEnterBackgroundWithLocationManager:(CLLocationManager * _Nullable)locationManager SWIFT_UNAVAILABLE_MSG("Function has been removed, there is no longer needed to use it.");
- (void)applicationDidBecomeActiveWithLocationManager:(CLLocationManager * _Nullable)locationManager SWIFT_UNAVAILABLE_MSG("Function has been removed, there is no longer needed to use it.");
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end



@class CLLocation;

@interface BackgroundTest (SWIFT_EXTENSION(SpeedcheckerSDK))
- (void)didChangeAuthorizationWithManager:(CLLocationManager * _Nonnull)manager status:(CLAuthorizationStatus)status;
- (void)didUpdateLocationsWithManager:(CLLocationManager * _Nonnull)manager locations:(NSArray<CLLocation *> * _Nonnull)locations;
@end


@interface BackgroundTest (SWIFT_EXTENSION(SpeedcheckerSDK))
- (void)loadConfigWithLaunchOptions:(NSDictionary<UIApplicationLaunchOptionsKey, id> * _Nullable)launchOptions completion:(void (^ _Nonnull)(BOOL))completion;
@end

@class UIViewController;
@class UIView;

@interface BackgroundTest (SWIFT_EXTENSION(SpeedcheckerSDK))
+ (NSArray<NSString *> * _Nonnull)getLogs SWIFT_WARN_UNUSED_RESULT;
+ (void)shareLogsFromViewController:(UIViewController * _Nonnull)viewController presentationSourceView:(UIView * _Nonnull)sourceView;
@end


SWIFT_AVAILABILITY(ios,introduced=13)
@interface BackgroundTest (SWIFT_EXTENSION(SpeedcheckerSDK))
- (void)registerBGTask:(CLLocationManager * _Nullable)locationManager;
@end


enum SpeedTestError : NSInteger;
@class SpeedTestResult;
@class SpeedTestServer;
@class SpeedTestSpeed;

SWIFT_PROTOCOL_NAMED("InternetSpeedTestDelegate")
@protocol InternetSpeedTestDelegate
- (void)internetTestErrorWithError:(enum SpeedTestError)error;
- (void)internetTestFinishWithResult:(SpeedTestResult * _Nonnull)result;
@optional
- (void)internetTestFinishExpressWithResult:(SpeedTestResult * _Nonnull)result;
@required
- (void)internetTestReceivedWithServers:(NSArray<SpeedTestServer *> * _Nonnull)servers;
- (void)internetTestSelectedWithServer:(SpeedTestServer * _Nonnull)server latency:(NSInteger)latency jitter:(NSInteger)jitter;
- (void)internetTestDownloadStart;
- (void)internetTestDownloadFinish;
- (void)internetTestDownloadWithProgress:(double)progress speed:(SpeedTestSpeed * _Nonnull)speed;
- (void)internetTestUploadStart;
- (void)internetTestUploadFinish;
- (void)internetTestUploadWithProgress:(double)progress speed:(SpeedTestSpeed * _Nonnull)speed;
@end


@interface BackgroundTest (SWIFT_EXTENSION(SpeedcheckerSDK)) <InternetSpeedTestDelegate>
- (void)internetTestErrorWithError:(enum SpeedTestError)error;
- (void)internetTestFinishWithResult:(SpeedTestResult * _Nonnull)result;
- (void)internetTestReceivedWithServers:(NSArray<SpeedTestServer *> * _Nonnull)servers;
- (void)internetTestSelectedWithServer:(SpeedTestServer * _Nonnull)server latency:(NSInteger)latency jitter:(NSInteger)jitter;
- (void)internetTestDownloadStart;
- (void)internetTestDownloadFinish;
- (void)internetTestDownloadWithProgress:(double)progress speed:(SpeedTestSpeed * _Nonnull)speed;
- (void)internetTestUploadStart;
- (void)internetTestUploadFinish;
- (void)internetTestUploadWithProgress:(double)progress speed:(SpeedTestSpeed * _Nonnull)speed;
@end


@class SpeedTestNetwork;

/// The controller manages the speed test process. See also <code>InternetSpeedTestDelegate</code>
SWIFT_CLASS_NAMED("InternetSpeedTest")
@interface InternetSpeedTest : NSObject
- (nonnull instancetype)initWithClientID:(NSInteger)clientID userID:(NSInteger)userID isBackground:(BOOL)isBackground delegate:(id <InternetSpeedTestDelegate> _Nonnull)delegate OBJC_DESIGNATED_INITIALIZER;
/// The function starts a new speed test process. Optinally with a specified list of servers.
- (void)start:(NSArray<SpeedTestServer *> * _Nonnull)servers completion:(SWIFT_NOESCAPE void (^ _Nonnull)(enum SpeedTestError))completion;
/// The function starts a new speed test process.
- (void)start:(SWIFT_NOESCAPE void (^ _Nonnull)(enum SpeedTestError))completion;
/// The function starts a free test if geolocation is enabled
- (void)startTest:(void (^ _Nonnull)(enum SpeedTestError))completion;
/// The function finishes the current speed test process.
- (void)forceFinish:(SWIFT_NOESCAPE void (^ _Nonnull)(enum SpeedTestError))completion;
- (SpeedTestNetwork * _Nonnull)currentNetwork SWIFT_WARN_UNUSED_RESULT;
- (void)observeValueForKeyPath:(NSString * _Nullable)keyPath ofObject:(id _Nullable)object change:(NSDictionary<NSKeyValueChangeKey, id> * _Nullable)change context:(void * _Nullable)context;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end



@interface InternetSpeedTest (SWIFT_EXTENSION(SpeedcheckerSDK))
SWIFT_CLASS_PROPERTY(@property (nonatomic, class) BOOL debugLogsEnabled;)
+ (BOOL)debugLogsEnabled SWIFT_WARN_UNUSED_RESULT;
+ (void)setDebugLogsEnabled:(BOOL)value;
@end


@interface InternetSpeedTest (SWIFT_EXTENSION(SpeedcheckerSDK))
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, copy) NSString * _Nonnull customerId;)
+ (NSString * _Nonnull)customerId SWIFT_WARN_UNUSED_RESULT;
+ (void)setCustomerId:(NSString * _Nonnull)newValue;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, copy) NSString * _Nonnull customerTag;)
+ (NSString * _Nonnull)customerTag SWIFT_WARN_UNUSED_RESULT;
+ (void)setCustomerTag:(NSString * _Nonnull)newValue;
+ (void)bgTestAbilityWithCompletion:(void (^ _Nonnull)(NSString * _Nonnull, BOOL, BOOL, BOOL, BOOL, BOOL))completion;
@end



SWIFT_CLASS("_TtC15SpeedcheckerSDK16SCLocationHelper")
@interface SCLocationHelper : NSObject
- (BOOL)isPermisionStatusDetermined SWIFT_WARN_UNUSED_RESULT;
/// Check if location services are enabled. Will check if the location is enabled for this app and also globaly on device.
- (BOOL)locationServicesEnabled SWIFT_WARN_UNUSED_RESULT;
/// Check if location services are enabled, use background thread so UI is not blocked.  Will check if the location is enabled for this app and also globaly on device.
- (void)locationServicesEnabled:(void (^ _Nonnull)(BOOL))completion;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end



@interface SCLocationHelper (SWIFT_EXTENSION(SpeedcheckerSDK)) <CLLocationManagerDelegate>
- (void)locationManager:(CLLocationManager * _Nonnull)manager didUpdateLocations:(NSArray<CLLocation *> * _Nonnull)locations;
- (void)locationManager:(CLLocationManager * _Nonnull)manager didFailWithError:(NSError * _Nonnull)error;
@end


/// This model holds an information about the packets loss during speed test.
SWIFT_CLASS("_TtC15SpeedcheckerSDK12SCPacketLoss")
@interface SCPacketLoss : NSObject
/// Percentage of packets lost in download direction. Values: 0-100.
@property (nonatomic, readonly) double packetLossDownload;
/// Percentage of packets lost in upload direction. Values: 0-100.
@property (nonatomic, readonly) double packetLossUpload;
/// Percentage of packets lost. Average of packetLossDownload and packetLossUpload. Values: 0-100.
@property (nonatomic, readonly) double packetLoss;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

/// The model holds a physical server information.
typedef SWIFT_ENUM(NSInteger, SCServerType, open) {
  SCServerTypeSpeedchecker = 0,
  SCServerTypeOokla = 1,
};

/// The set of possible errors occur in the <code>InternetSpeedTest</code> object.
typedef SWIFT_ENUM_NAMED(NSInteger, SpeedTestError, "SpeedTestError", open) {
  SpeedTestErrorOk = 0,
  SpeedTestErrorInvalidSettings = 1,
  SpeedTestErrorInvalidServers = 2,
  SpeedTestErrorInProgress = 3,
  SpeedTestErrorFailed = 4,
  SpeedTestErrorNotSaved = 5,
  SpeedTestErrorCancelled = 6,
  SpeedTestErrorLocationUndefined = 7,
};

typedef SWIFT_ENUM_NAMED(NSInteger, SpeedTestLatencyType, "SpeedTestLatencyType", open) {
  SpeedTestLatencyTypeHttp = 0,
  SpeedTestLatencyTypeIcmp = 1,
};

enum SpeedTestNetworkType : NSInteger;
@class CTCarrier;

SWIFT_CLASS_NAMED("SpeedTestNetwork")
@interface SpeedTestNetwork : NSObject
@property (nonatomic, readonly) enum SpeedTestNetworkType type;
@property (nonatomic, readonly, strong) CTCarrier * _Nullable cellularCarrier;
@property (nonatomic, readonly, copy) NSString * _Nullable cellularTechnology;
@property (nonatomic, readonly, copy) NSString * _Nullable networkShortDescription;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

typedef SWIFT_ENUM_NAMED(NSInteger, SpeedTestNetworkType, "SpeedTestNetworkType", open) {
  SpeedTestNetworkTypeAny = 0,
  SpeedTestNetworkTypeWifi = 1,
  SpeedTestNetworkTypeCellular = 2,
};

@class NSDate;

SWIFT_CLASS_NAMED("SpeedTestResult")
@interface SpeedTestResult : NSObject
@property (nonatomic, strong) SpeedTestNetwork * _Nonnull network;
@property (nonatomic, readonly, strong) SpeedTestServer * _Nonnull server;
@property (nonatomic, readonly) enum SpeedTestLatencyType latencyType;
@property (nonatomic, readonly) NSInteger latencyInMs;
@property (nonatomic, readonly) double jitter;
@property (nonatomic, readonly, strong) SpeedTestSpeed * _Nonnull downloadSpeed;
@property (nonatomic, readonly, strong) SpeedTestSpeed * _Nonnull uploadSpeed;
/// Amount of time in milliseconds between starting download test and receiving 1’st byte of data from the server
@property (nonatomic, readonly) NSInteger timeToFirstByteMs;
/// Packet loss measured during speed test.
@property (nonatomic, readonly, strong) SCPacketLoss * _Nullable packetLoss;
@property (nonatomic, readonly, copy) NSString * _Nullable ipAddress;
@property (nonatomic, readonly, copy) NSString * _Nullable ispName;
@property (nonatomic, readonly, copy) NSDate * _Nullable date;
@property (nonatomic, copy) NSString * _Nullable userCityName;
/// Data transferred during download. In MB (megabytes).
@property (nonatomic, readonly) double downloadTransferredMb;
/// Data transferred during upload. In MB (megabytes).
@property (nonatomic, readonly) double uploadTransferredMb;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


@interface SpeedTestResult (SWIFT_EXTENSION(SpeedcheckerSDK))
@property (nonatomic, readonly, copy) NSString * _Nullable connectionType;
@property (nonatomic, readonly) double locationLatitude;
@property (nonatomic, readonly) double locationLongitude;
@property (nonatomic, readonly, copy) NSString * _Nonnull networkOperator;
@property (nonatomic, readonly, copy) NSString * _Nonnull deviceInfo;
@property (nonatomic, readonly, copy) NSString * _Nonnull cellMCC;
@property (nonatomic, readonly, copy) NSString * _Nonnull cellMNC;
@end

@class NSNumber;

/// The model holds a physical server information.
SWIFT_CLASS_NAMED("SpeedTestServer")
@interface SpeedTestServer : NSObject
@property (nonatomic, readonly) enum SCServerType type;
@property (nonatomic, readonly, copy) NSString * _Nullable scheme;
@property (nonatomic, readonly, copy) NSString * _Nullable domain;
@property (nonatomic, readonly, copy) NSString * _Nullable downloadFolderPath;
@property (nonatomic, readonly, copy) NSString * _Nullable uploadFolderPath;
@property (nonatomic, readonly, copy) NSString * _Nullable uploadScript;
@property (nonatomic, readonly, copy) NSString * _Nullable countryCode;
@property (nonatomic, readonly, copy) NSString * _Nullable cityName;
@property (nonatomic, readonly, copy) NSString * _Nullable country;
- (nonnull instancetype)initWithID:(NSNumber * _Nullable)ID type:(enum SCServerType)type scheme:(NSString * _Nullable)scheme domain:(NSString * _Nullable)domain port:(NSNumber * _Nullable)port downloadFolderPath:(NSString * _Nullable)downloadFolderPath uploadFolderPath:(NSString * _Nullable)uploadFolderPath uploadScript:(NSString * _Nullable)uploadScript countryCode:(NSString * _Nullable)countryCode cityName:(NSString * _Nullable)cityName;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS_NAMED("SpeedTestSpeed")
@interface SpeedTestSpeed : NSObject
@property (nonatomic, readonly) double bps;
@property (nonatomic, readonly) double kbps;
@property (nonatomic, readonly) double mbps;
@property (nonatomic, readonly, copy) NSString * _Nonnull descriptionInKbps;
@property (nonatomic, readonly, copy) NSString * _Nonnull descriptionInMbps;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// Represents a single ping instance. A ping instance has a single destination.
SWIFT_CLASS("_TtC15SpeedcheckerSDK10SwiftyPing")
@interface SwiftyPing : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif
