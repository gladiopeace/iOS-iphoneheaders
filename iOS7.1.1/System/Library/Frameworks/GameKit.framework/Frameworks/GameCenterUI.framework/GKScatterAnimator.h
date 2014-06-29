/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:20 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterUI/GKBubblePathAnimator.h>

@interface GKScatterAnimator : GKBubblePathAnimator {

	long long _focusBubbleType;

}

@property (assign,nonatomic) long long focusBubbleType;              //@synthesize focusBubbleType=_focusBubbleType - In the implementation block
+(double)preferredDuration;
-(void)setFocusBubbleType:(long long)arg1 ;
-(long long)focusBubbleType;
-(double)minimumDurationForViewAnimations;
-(long long)animatorType;
-(id)scatterBubblesSortedLeftToRightInContext:(id)arg1 ;
-(id)scatterAnimationsForBubble:(id)arg1 sortedBubbles:(id)arg2 contractPoint:(_GLKVector3)arg3 context:(id)arg4 ;
-(bool)scatterBubble:(id)arg1 shouldMoveLeftAmongBubbles:(id)arg2 context:(id)arg3 ;
-(bool)scatterBubble:(id)arg1 shouldMoveUpAmongBubbles:(id)arg2 ;
-(void)animateTransition:(id)arg1 ;
@end

