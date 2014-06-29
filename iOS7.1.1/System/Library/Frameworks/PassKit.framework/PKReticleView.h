/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:36 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKit/PassKit-Structs.h>
#import <UIKit/UIView.h>

@class CAShapeLayer;

@interface PKReticleView : UIView {

	CAShapeLayer* _shapeLayer;
	CGPathRef _bouncePathSquare;
	CGPathRef _bouncePathRectangle;
	CGColorRef _shadowColorDefault;
	CGColorRef _shadowColorSuccess;
	CGColorRef _shadowColorFailure;

}
+(Class)layerClass;
-(CGPathRef)_createReticlePathForPoints:(CGPoint*)arg1 ;
-(CGPoint*)_makeSanitizedCorners:(CGPoint*)arg1 ;
-(void)positionWithCorners:(CGPoint*)arg1 completion:(/*^block*/ id)arg2 ;
-(void)blinkForSuccess:(bool)arg1 completion:(/*^block*/ id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)reset;
@end

