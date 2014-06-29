/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:20 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterUI/GKBubblePathAnimator.h>

@interface GKFloatInAnimator : GKBubblePathAnimator {

	bool _useWelcomeSpringValues;
	long long _focusBubbleType;
	double _delayIncrement;
	double _additionalDelay;

}

@property (assign,nonatomic) long long focusBubbleType;                //@synthesize focusBubbleType=_focusBubbleType - In the implementation block
@property (assign,nonatomic) double delayIncrement;                    //@synthesize delayIncrement=_delayIncrement - In the implementation block
@property (assign,nonatomic) bool useWelcomeSpringValues;              //@synthesize useWelcomeSpringValues=_useWelcomeSpringValues - In the implementation block
@property (assign,nonatomic) double additionalDelay;                   //@synthesize additionalDelay=_additionalDelay - In the implementation block
-(void)setFocusBubbleType:(long long)arg1 ;
-(long long)focusBubbleType;
-(long long)animatorType;
-(void)setDelayIncrement:(double)arg1 ;
-(void)setUseWelcomeSpringValues:(bool)arg1 ;
-(id)floatBubblesSortedLeftToRightInContext:(id)arg1 ;
-(double)delayIncrement;
-(bool)useWelcomeSpringValues;
-(double)additionalDelay;
-(void)setAdditionalDelay:(double)arg1 ;
-(id)init;
-(void)animateTransition:(id)arg1 ;
@end

