/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:38 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface CATransaction : NSObject
+(id)_implicitAnimationForLayer:(id)arg1 keyPath:(id)arg2 ;
+(double)inputTime;
+(void)activateBackground:(bool)arg1 ;
+(double)commitTime;
+(void)setCommitTime:(double)arg1 ;
+(void)pushAnimator:(/*^block*/ id)arg1 ;
+(void)popAnimator;
+(bool)animatesFromModelValues;
+(void)setAnimatesFromModelValues:(bool)arg1 ;
+(void)synchronize;
+(unsigned)currentState;
+(void)setInputTime:(double)arg1 ;
+(void)activate;
+(/*^block*/ id)animator;
+(bool)beginWithoutBlocking;
+(void)setValue:(id)arg1 forKey:(id)arg2 ;
+(void)flush;
+(id)valueForKey:(id)arg1 ;
+(void)setAnimationDuration:(double)arg1 ;
+(bool)disableActions;
+(void)setDisableActions:(bool)arg1 ;
+(void)lock;
+(void)unlock;
+(void)commit;
+(double)animationDuration;
+(void)begin;
+(void)setCompletionBlock:(/*^block*/ id)arg1 ;
+(/*^block*/ id)completionBlock;
+(void)setAnimationTimingFunction:(id)arg1 ;
+(id)animationTimingFunction;
@end

