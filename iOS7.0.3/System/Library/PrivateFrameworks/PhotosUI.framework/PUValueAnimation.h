/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:51 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class CADisplayLink;

@interface PUValueAnimation : NSObject {

	double _duration;
	double _fromValue;
	double _toValue;
	double _w0;
	double _zeta;
	double _A;
	double _B;
	double _wd;
	/*^block*/ id _valueApplier;
	/*^block*/ id _completion;
	double _startTime;
	CADisplayLink* _displayLink;

}
-(void)dealloc;
-(void)_update:(id)arg1 ;
-(void)runWithValueApplier:(/*^block*/ id)arg1 completion:(/*^block*/ id)arg2 ;
-(id)initWithDuration:(double)arg1 mass:(double)arg2 stiffness:(double)arg3 damping:(double)arg4 initialVelocity:(double)arg5 fromValue:(double)arg6 toValue:(double)arg7 ;
-(void).cxx_destruct;
@end
