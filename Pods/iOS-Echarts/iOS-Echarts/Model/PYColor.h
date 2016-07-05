//
//  PYColor.h
//  iOS-Echarts
//
//  Created by Pluto Y on 15/9/8.
//  Copyright (c) 2015年 pluto-y. All rights reserved.
//

#import <UIKit/UIKit.h>

#define PYRGBA(r, g, b, a) [[PYColor alloc] initWithColor:[UIColor colorWithRed:r/255.0 green:g/255.0 blue:b/255.0 alpha:a]]

/**
 *  转换UIColor为对应的RGBA的输出
 */
@interface PYColor : NSObject

-(instancetype)initWithColor:(UIColor *) uiColor;

/**
 *  设置颜色
 *
 *  @param uiColor 颜色
 */
-(void)setColor:(UIColor *) uiColor;

@end
