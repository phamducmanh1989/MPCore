//
//  MPSDK.h
//  MPSDK
//
//  Created by Manh Pham on 7/28/18.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@class RACSignal;
extern NSString *const kSDKAppKey; // required
@interface MPSDK : NSObject
- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions NS_REQUIRES_SUPER;
- (void)application:(UIApplication *)application register:(NSDictionary*)options NS_REQUIRES_SUPER;
- (NSString*)getIdentifier:(NSString*)key;


@end
