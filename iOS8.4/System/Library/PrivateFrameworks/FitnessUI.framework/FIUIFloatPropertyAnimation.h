/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:15 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FitnessUI/FIUIPropertyAnimation.h>

@interface FIUIFloatPropertyAnimation : FIUIPropertyAnimation {

	float _startValue;
	float _endValue;
	float _currentValue;

}

@property (nonatomic,readonly) float startValue;                //@synthesize startValue=_startValue - In the implementation block
@property (nonatomic,readonly) float endValue;                  //@synthesize endValue=_endValue - In the implementation block
@property (nonatomic,readonly) float currentValue;              //@synthesize currentValue=_currentValue - In the implementation block
+(id)animationWithEndingFloatValue:(float)arg1 duration:(double)arg2 timingFunction:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_setStartValue:(id)arg1 ;
-(void)_setCurrentValue:(id)arg1 ;
-(void)_updateWithProgress:(float)arg1 ;
-(id)_endValue;
-(id)_startValue;
-(void)_setEndValue:(id)arg1 ;
-(id)valueByAddingCurrentValueToValue:(id)arg1 ;
-(float)endValue;
-(id)_currentValue;
-(float)startValue;
-(float)currentValue;
@end

