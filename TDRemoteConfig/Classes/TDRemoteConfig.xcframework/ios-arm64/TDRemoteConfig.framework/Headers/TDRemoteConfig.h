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

NS_ASSUME_NONNULL_BEGIN

@interface TDRemoteConfig : NSObject

+ (void)startWithSettings:(TDRemoteConfigSettings *)settings;
+ (void)enableLog:(BOOL)enable;
+ (NSString *)version;
+ (void)setDefaultValues:(NSDictionary *)values;

+ (BOOL)getBoolean:(NSString *)key;
+ (long)getLong:(NSString *)key;
+ (double)getDouble:(NSString *)key;
+ (NSString *)getString:(NSString *)key;
/// default: 1970-01-01 00:00:00
+ (NSDate *)getDate:(NSString *)key;
+ (NSDictionary *)getJson:(NSString *)key;
+ (NSDictionary *)getAll;
+ (void)setCustomFetchParams:(NSDictionary <NSString *, NSString *> *)params;

//MARK: - Multi-Templates
+ (BOOL)getBoolean:(NSString *)key templateCode:(nullable NSString *)code;
+ (long)getLong:(NSString *)key templateCode:(nullable NSString *)code;
+ (double)getDouble:(NSString *)key templateCode:(nullable NSString *)code;
+ (NSString *)getString:(NSString *)key templateCode:(nullable NSString *)code;
+ (NSDate *)getDate:(NSString *)key templateCode:(nullable NSString *)code;
+ (NSDictionary *)getJson:(NSString *)key templateCode:(nullable NSString *)code;
+ (NSDictionary *)getAllWithTemplateCode:(nullable NSString *)code;
+ (void)setDefaultValues:(NSDictionary *)values templateCode:(nullable NSString *)code;
+ (void)setCustomFetchParams:(NSDictionary <NSString *, NSString *> *)params templateCode:(nullable NSString *)code;

//MARK: - Multi-Apps
+ (BOOL)getBoolean:(NSString *)key templateCode:(nullable NSString *)code appId:(nullable NSString *)appId;
+ (long)getLong:(NSString *)key templateCode:(nullable NSString *)code appId:(nullable NSString *)appId;
+ (double)getDouble:(NSString *)key templateCode:(nullable NSString *)code appId:(nullable NSString *)appId;
+ (NSString *)getString:(NSString *)key templateCode:(nullable NSString *)code appId:(nullable NSString *)appId;
+ (NSDate *)getDate:(NSString *)key templateCode:(nullable NSString *)code appId:(nullable NSString *)appId;
+ (NSDictionary *)getJson:(NSString *)key templateCode:(nullable NSString *)code appId:(nullable NSString *)appId;
+ (NSDictionary *)getAllWithTemplateCode:(nullable NSString *)code appId:(nullable NSString *)appId;
+ (void)setDefaultValues:(NSDictionary *)values templateCode:(nullable NSString *)code appId:(nullable NSString *)appId;
+ (void)setCustomFetchParams:(NSDictionary <NSString *, NSString *> *)params templateCode:(nullable NSString *)code appId:(nullable NSString *)appId;

@end

NS_ASSUME_NONNULL_END
