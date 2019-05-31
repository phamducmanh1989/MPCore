//
//  RACSignal+MP.h
//  BaseSDK
//
//  Created by Manh Pham on 7/16/18.
//  Copyright © 2018 Manh Pham. All rights reserved.
//

#import <ReactiveObjC/ReactiveObjC.h>

@interface RACSignal (MP)
- (void)subscribe;
+ (RACSignal*)keyboard;
@end

@interface UISearchBar (RACSignalSupport)
@property (nonatomic, strong, readonly) RACDelegateProxy *rac_delegateProxy;
- (RACSignal<NSString *> *)rac_textSignal;
@end
