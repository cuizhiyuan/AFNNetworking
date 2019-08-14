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
#import "AFAutoPurgingImageCache.h"
#import "AFImageDownloader.h"
#import "AFNetworkActivityIndicatorManager.h"
#import "UIActivityIndicatorView+AFNetworking.h"
#import "UIButton+AFNetworking.h"
#import "UIImage+AFNetworking.h"
#import "UIImageView+AFNetworking.h"
#import "UIKit+AFNetworking.h"
#import "UIProgressView+AFNetworking.h"
#import "UIRefreshControl+AFNetworking.h"
#import "UIWebView+AFNetworking.h"

FOUNDATION_EXPORT double AFNNetworkingVersionNumber;
FOUNDATION_EXPORT const unsigned char AFNNetworkingVersionString[];

