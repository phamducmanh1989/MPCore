//
//  MPMacros.h
//  BaseSDK
//
//  Created by Manh Pham on 7/12/18.
//

#ifndef MPMacros_h
#define MPMacros_h

#define MP_ABSTRACT_METHOD NSAssert(NO, @"abstract method");
#define MP_ABSTRACT_RAC_METHOD \
MP_ABSTRACT_METHOD \
return [RACSignal return:nil];

#ifdef DEBUG
# define MPLog(fmt, ...) NSLog((@"%s [Line %d] " fmt), __PRETTY_FUNCTION__, __LINE__, ## __VA_ARGS__);
#else
# define MPLog(...)
#endif
#define IMAGE(x) [UIImage imageNamed:x inBundle:[NSBundle bundleForClass:self.class] compatibleWithTraitCollection:nil]
#define NIB(x) [UINib nibWithNibName:x bundle:[NSBundle bundleForClass:self.class]]
#define UIColorRGB(rgb) ([[UIColor alloc] initWithRed:(((rgb >> 16) & 0xff) / 255.0f) green:(((rgb >> 8) & 0xff) / 255.0f) blue:(((rgb) & 0xff) / 255.0f) alpha:1.0f])

/**
 *
 */
#define RAC_TOUCH_UP_INSIDE(owner, block) \
    [[[owner rac_signalForControlEvents:UIControlEventTouchUpInside] throttle:0.3] subscribeNext:^(__kindof UIControl * _Nullable sender) { \
    block; \
    }];


/**
 *
 */

#define IS_IPHONE4 (([[UIScreen mainScreen] bounds].size.height-480)?NO:YES)

#define IS_IPHONE5 (([[UIScreen mainScreen] bounds].size.height-568)?NO:YES)

#define IS_IPHONE6 (([[UIScreen mainScreen] bounds].size.height-667)?NO:YES)

#define IS_IPHONE6P (([[UIScreen mainScreen] bounds].size.height-736)?NO:YES)

#define IS_IPHONEX (([[UIScreen mainScreen] bounds].size.height-812)?NO:YES)

#define STRING_FMT(fmt, ...) [NSString stringWithFormat: fmt, ## __VA_ARGS__]
#define EDGE_INSETS(offset) UIEdgeInsetsMake(offset, offset, offset, offset)
#define EDGE_INSETS_TOP(offset) UIEdgeInsetsMake(offset, 0, 0, 0)
#define EDGE_INSETS_LEFT(offset) UIEdgeInsetsMake(0, offset, 0, 0)
#define EDGE_INSETS_BOTTOM(offset) UIEdgeInsetsMake(0, 0, offset, 0)
#define EDGE_INSETS_RIGHT(offset) UIEdgeInsetsMake(0, 0, 0, offset)
#define EDGE_INSETS_LEFT_RIGHT(offset) UIEdgeInsetsMake(0, offset, 0, offset)
#define EDGE_INSETS_TOP_BOTTOM(offset) UIEdgeInsetsMake(offset, 0, offset, 0)

#define INSET_LAYOUT_SPEC(offset, __child) \
    [ASInsetLayoutSpec insetLayoutSpecWithInsets:EDGE_INSETS(offset) child:__child]
#define INSET_LAYOUT_SPEC_TOP(offset, __child) \
    [ASInsetLayoutSpec insetLayoutSpecWithInsets:EDGE_INSETS_TOP(offset) child:__child]
#define INSET_LAYOUT_SPEC_LEFT(offset, __child) \
    [ASInsetLayoutSpec insetLayoutSpecWithInsets:EDGE_INSETS_LEFT(offset) child:__child]
#define INSET_LAYOUT_SPEC_BOTTOM(offset, __child) \
    [ASInsetLayoutSpec insetLayoutSpecWithInsets:EDGE_INSETS_BOTTOM(offset) child:__child]
#define INSET_LAYOUT_SPEC_RIGHT(offset, __child) \
    [ASInsetLayoutSpec insetLayoutSpecWithInsets:EDGE_INSETS_RIGHT(offset) child:__child]
#define INSET_LAYOUT_SPEC_LEFT_RIGHT(offset, __child) \
    [ASInsetLayoutSpec insetLayoutSpecWithInsets:EDGE_INSETS_LEFT_RIGHT(offset) child:__child]
#define INSET_LAYOUT_SPEC_TOP_BOTTOM(offset, __child) \
    [ASInsetLayoutSpec insetLayoutSpecWithInsets:EDGE_INSETS_TOP_BOTTOM(offset) child:__child]
#define CENTER_LAYOUT_SPEC(__child) \
    [ASCenterLayoutSpec centerLayoutSpecWithCenteringOptions: ASCenterLayoutSpecCenteringXY sizingOptions:ASCenterLayoutSpecSizingOptionDefault child: __child]


#define MPLocalizedString(key, comment) \
    [[[NSBundle mainBundle] localizedStringForKey:(key) value:nil table:nil] isEqualToString:(key)] ? \
    [[NSBundle bundleWithPath:[[NSBundle bundleForClass:self.class] pathForResource:@"Settings" ofType:@"bundle"]] localizedStringForKey:(key) value:@"" table:@"Root"] : \
    [[NSBundle mainBundle] localizedStringForKey:(key) value:@"" table:nil]

#endif /* MPMacros_h */
