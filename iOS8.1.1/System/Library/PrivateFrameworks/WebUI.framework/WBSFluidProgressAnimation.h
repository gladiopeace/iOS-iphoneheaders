/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:55 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CAMediaTimingFunction;

@interface WBSFluidProgressAnimation : NSObject {

	CAMediaTimingFunction* _timingFunction;
	double _initialPosition;
	double _destinationPosition;
	double _animationDuration;

}

@property (nonatomic,retain) CAMediaTimingFunction * timingFunction;              //@synthesize timingFunction=_timingFunction - In the implementation block
@property (assign,nonatomic) double initialPosition;                              //@synthesize initialPosition=_initialPosition - In the implementation block
@property (assign,nonatomic) double destinationPosition;                          //@synthesize destinationPosition=_destinationPosition - In the implementation block
@property (assign,nonatomic) double animationDuration;                            //@synthesize animationDuration=_animationDuration - In the implementation block
-(void)setAnimationDuration:(double)arg1 ;
-(void)setTimingFunction:(CAMediaTimingFunction *)arg1 ;
-(CAMediaTimingFunction *)timingFunction;
-(double)animationDuration;
-(double)initialPosition;
-(void)setInitialPosition:(double)arg1 ;
-(double)destinationPosition;
-(void)setDestinationPosition:(double)arg1 ;
@end
