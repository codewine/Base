//
//  UIButton+Extension.h
//  GLink
//
//  Created by lawrence on 16/9/23.
//  Copyright © 2016年 lawrence. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIButton (Extension)

/** 点击状态栏返回顶部 */
+ (void)show;
+ (void)hide;

@property (strong, nonatomic) UIColor *titleColor;
@property (strong, nonatomic) UIColor *highlightedTitleColor;
@property (strong, nonatomic) UIColor *selectedTitleColor;

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *highlightedTitle;
@property (copy, nonatomic) NSString *selectedTitle;

@property (copy, nonatomic) NSString *image;
@property (copy, nonatomic) NSString *highlightedImage;
@property (copy, nonatomic) NSString *selectedImage;

@property (copy, nonatomic) NSString *bgImage;
@property (copy, nonatomic) NSString *highlightedBgImage;
@property (copy, nonatomic) NSString *selectedBgImage;

- (void)addTarget:(id)target action:(SEL)action;

@end
