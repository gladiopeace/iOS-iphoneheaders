/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:37 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CAAnimation.h>

@class NSString, CAValueFunction;

@interface CAPropertyAnimation : CAAnimation

@property (copy) NSString * keyPath; 
@property (getter=isAdditive) bool additive; 
@property (getter=isCumulative) bool cumulative; 
@property (retain) CAValueFunction * valueFunction; 
+(id)animationWithKeyPath:(id)arg1 ;
-(bool)_setCARenderAnimation:(Animation*)arg1 layer:(id)arg2 ;
-(unsigned)_propertyFlagsForLayer:(id)arg1 ;
-(bool)isCumulative;
-(void)setCumulative:(bool)arg1 ;
-(bool)additive;
-(bool)cumulative;
-(id)keyPath;
-(void)setKeyPath:(id)arg1 ;
-(void)setAdditive:(bool)arg1 ;
-(bool)isAdditive;
-(void)applyForTime:(double)arg1 presentationObject:(id)arg2 modelObject:(id)arg3 ;
-(void)setValueFunction:(id)arg1 ;
-(id)valueFunction;
@end

