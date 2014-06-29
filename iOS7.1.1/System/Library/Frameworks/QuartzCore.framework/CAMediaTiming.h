/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:37 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CAMediaTiming
@property (assign) double beginTime; 
@property (assign) double duration; 
@property (assign) float speed; 
@property (assign) double timeOffset; 
@property (assign) float repeatCount; 
@property (assign) double repeatDuration; 
@property (assign) bool autoreverses; 
@property (copy) NSString * fillMode; 
@required
-(void)setSpeed:(float)arg1;
-(double)duration;
-(void)setDuration:(double)arg1;
-(void)setFillMode:(id)arg1;
-(void)setBeginTime:(double)arg1;
-(void)setRepeatCount:(float)arg1;
-(void)setAutoreverses:(bool)arg1;
-(double)beginTime;
-(float)speed;
-(double)timeOffset;
-(void)setTimeOffset:(double)arg1;
-(double)repeatDuration;
-(void)setRepeatDuration:(double)arg1;
-(float)repeatCount;
-(bool)autoreverses;
-(id)fillMode;
@end

