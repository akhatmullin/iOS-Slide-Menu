//
//  SlideNavigationContorllerAnimationScale.h
//  SlideMenu
//
//  Created by Aryan Gh on 1/26/14.
//  Copyright (c) 2014 Aryan Ghassemi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SlideNavigationContorllerAnimator.h"

@interface SlideNavigationContorllerAnimatorScale : NSObject <SlideNavigationContorllerAnimator>

@property (nonatomic, assign) CGFloat minimumScale;

- (id)initWithMinimumScale:(CGFloat)minimumScale;

@end