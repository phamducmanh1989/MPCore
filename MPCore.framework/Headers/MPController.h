//
//  MPController.h
//  BaseSDK
//
//  Created by Manh Pham on 7/12/18.
//

#import <UIKit/UIKit.h>
@interface MPController : UIViewController
-(void)initViews;
-(void)initContraints;
-(void)initNavigation;
-(void)attachPresenter;
-(void)detachPresenter;
@end
