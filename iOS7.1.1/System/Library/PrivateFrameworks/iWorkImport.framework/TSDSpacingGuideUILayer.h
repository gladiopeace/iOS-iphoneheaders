/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:43 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <QuartzCore/CALayer.h>

@class CAShapeLayer, TSDSwappableAxesGeometry;

@interface TSDSpacingGuideUILayer : CALayer {

	CAShapeLayer* mArrowLayer;
	bool mUseVisibleRect;
	double mWidth;
	TSDSwappableAxesGeometry* mHorizontalGeom;
	CGColorRef mGuideColor;

}
-(id)initWithSpacingRect:(CGRect)arg1 ofOrientation:(int)arg2 icc:(id)arg3 useVisibleRect:(bool)arg4 ;
-(void)setFrameFromSpacingRect:(CGRect)arg1 icc:(id)arg2 ;
-(void)p_generateArrowLayerForSpacingRect:(CGRect)arg1 andViewScale:(double)arg2 ;
@end

