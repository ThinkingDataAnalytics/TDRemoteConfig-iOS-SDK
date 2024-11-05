//
//  TDViewController.m
//  ThinkingDataRemoteConfig
//
//  Created by cicd_mac on 12/28/2023.
//  Copyright (c) 2023 cicd_mac. All rights reserved.
//

#import "TDViewController.h"
#import <ThinkingDataCore/ThinkingDataCore.h>
#import <ThinkingSDK/ThinkingSDK.h>
#import <TDRemoteConfig/TDRemoteConfig.h>

@interface TDViewController ()

@end

@implementation TDViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
    self.view.backgroundColor = [UIColor cyanColor];
    
    NSString *appId = @"app_id";
    NSString *serverUrl = @"server_url";
    
    TDSettings *settings = [[TDSettings alloc] init];
    settings.appId = appId;
    settings.serverUrl = serverUrl;
    settings.enableLog = YES;
    [TDApp startWithSetting:settings];
    
    [TDAnalytics track:@"test"];
    [TDAnalytics flush];
    
	// Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
