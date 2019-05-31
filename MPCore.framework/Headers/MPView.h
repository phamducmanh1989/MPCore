//
//  MPView.h
//  BaseSDK
//
//  Created by Manh Pham on 6/29/18.
//

#ifndef MPView_h
#define MPView_h

#import "MPInject.h"
@protocol MPView <MPInject>
@optional
-(void)reloadData;
-(void)showError:(NSError*)error;
@end
#endif /* MPView_h */
