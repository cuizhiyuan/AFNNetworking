#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "AFCompatibilityMacros.h"
#import "AFHTTPSessionManager.h"
#import "AFNetworkReachabilityManager.h"
#import "AFNNetworking.h"
#import "AFSecurityPolicy.h"
#import "AFURLRequestSerialization.h"
#import "AFURLResponseSerialization.h"
#import "AFURLSessionManager.h"
#import "AFNetworkingManager.h"
#import "AFNNetworkingManager.h"

FOUNDATION_EXPORT double AFNNetworkingVersionNumber;
FOUNDATION_EXPORT const unsigned char AFNNetworkingVersionString[];

