/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:50 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIControl.h>

@interface UIRemoveControlMinusButton : UIControl {

	unsigned _rotated : 1;
	unsigned _rotating : 1;
	unsigned _hiding : 1;
	unsigned _showAsPlus : 1;
	unsigned _reserved : 28;
	float _verticalOffset;

}
+(id)minusImage;
+(float)defaultWidth;
+(id)plusImage;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(bool)isRotating;
-(void)animator:(id)arg1 stopAnimation:(id)arg2 ;
-(void)_toggleRotateAnimationDidStop:(id)arg1 finished:(bool)arg2 ;
-(id)initWithRemoveControl:(id)arg1 ;
-(void)setHiding:(bool)arg1 ;
-(bool)isHiding;
-(void)toggleRotate:(bool)arg1 ;
-(bool)isRotated;
@end

