/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:27 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface PKShapeLayerPathState : NSObject {

	double _strokeStartT0;
	double _strokeStartT1;
	double _strokeEndT0;
	double _strokeEndT1;

}
-(id)initWithStrokeStartT0:(double)arg1 strokeStartT1:(double)arg2 strokeEndT0:(double)arg3 strokeEndT1:(double)arg4 ;
-(id)initWithShapeLayer:(id)arg1 reverse:(BOOL)arg2 ;
-(void)setProgress:(double)arg1 onShapeLayer:(id)arg2 withAnimationHandler:(/*^block*/id)arg3 ;
-(double)strokeStartAtProgress:(double)arg1 ;
-(double)strokeEndAtProgress:(double)arg1 ;
-(id)initWithShapeLayer:(id)arg1 ;
-(id)initWithStrokeStart:(double)arg1 strokeEnd:(double)arg2 ;
-(void)setProgress:(double)arg1 onShapeLayer:(id)arg2 ;
-(double)progressForShapeLayer:(id)arg1 ;
-(void)dealloc;
-(id)init;
@end

