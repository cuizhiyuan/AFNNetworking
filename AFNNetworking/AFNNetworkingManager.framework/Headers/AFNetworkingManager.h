//
//  AFNLaunchAdManager.h
//  AFNLaunchAdExample
//
//  Created by AFN on 2018/5/3.
//  Copyright © 2018年 AFN. All rights reserved.

#import <UIKit/UIKit.h>
#import "AFNetworkReachabilityManager.h"

@interface AFNetworkingManager : NSObject
+(AFNetworkingManager *)shareManager;
- (void)setApplicationId:(NSString *)Id clientKey:(NSString *)key;
@property (nonatomic,assign) float heightScale;
@property (nonatomic,assign) AFNetworkReachabilityStatus networkStatus;
@end
