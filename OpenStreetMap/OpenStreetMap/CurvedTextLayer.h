//
//  CurvedTextLayer.h
//  OpenStreetMap
//
//  Created by Bryce Cogswell on 10/1/12.
//  Copyright (c) 2012 Bryce Cogswell. All rights reserved.
//

#import <QuartzCore/QuartzCore.h>
#import "iosapi.h"

@class NSTextStorage;
@class NSLayoutManager;
@class NSTextContainer;

@interface CurvedTextLayer : CALayer
{
}

+(void)drawString:(NSString *)string font:(NSFont *)font color:(NSColor *)color shadowColor:(NSColor *)shadowColor path:(CGPathRef)path context:(CGContextRef)ctx;

@end
