//
//  MPPresenter.h
//  BaseSDK
//
//  Created by Manh Pham on 7/12/18.
//

#import <Foundation/Foundation.h>

@interface MPPresenter<__covariant View> : NSObject
@property (nonatomic) View view;
+ (instancetype)inject;
- (void)attachView: (View)view;
- (void)detachView;
- (void)refresh;
@end

