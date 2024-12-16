//
//  TDRemoteConfig.h
//  TDRemoteConfig
//
//  Created by huangdiao on 2023/10/27.
//

#import <Foundation/Foundation.h>

#if __has_include(<TDRemoteConfig/TDRemoteConfigSettings.h>)
#import <TDRemoteConfig/TDRemoteConfigSettings.h>
#else
#import "TDRemoteConfigSettings.h"
#endif

#if __has_include(<TDRemoteConfig/TDObject.h>)
#import <TDRemoteConfig/TDObject.h>
#else
#import "TDObject.h"
#endif

#if __has_include(<TDRemoteConfig/TDRemoteConfigSettingsPrivate.h>)
#import <TDRemoteConfig/TDRemoteConfigSettingsPrivate.h>
#else
#import "TDRemoteConfigSettingsPrivate.h"
#endif

NS_ASSUME_NONNULL_BEGIN

extern NSString *kTDRemoteConfigFetchDataSuccess;
extern NSString *kTDRemoteConfigStrategyStatusMap;

@interface TDRemoteConfig : NSObject

+ (void)startWithSettings:(TDRemoteConfigSettings *)settings;
+ (void)enableLog:(BOOL)enable;
+ (NSString *)version;

+ (TDObject *)getData;
+ (void)fetch;
+ (void)setCustomFetchParams:(NSDictionary *)params;
+ (void)removeCustomFetchParam:(NSString *)key;
+ (void)setDefaultValues:(NSDictionary *)defaultValue;
+ (void)setDefaultValuesWithJsonFile:(NSString *)filePath;
+ (void)clearDefaultValues;

+ (TDObject *)getDataWithAppId:(nullable NSString *)appId;
+ (void)fetchWithAppId:(nullable NSString *)appId;
+ (void)setCustomFetchParams:(NSDictionary *)params appId:(nullable NSString *)appId;
+ (void)removeCustomFetchParam:(NSString *)key appId:(nullable NSString *)appId;
+ (void)setDefaultValues:(NSDictionary *)defaultValue appId:(nullable NSString *)appId;
+ (void)setDefaultValuesWithJsonFile:(NSString *)filePath appId:(nullable NSString *)appId;
+ (void)clearDefaultValuesWithAppId:(nullable NSString *)appId;

@end

NS_ASSUME_NONNULL_END
