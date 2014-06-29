/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:34:06 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CLTimerScheduler;
@class CLSilo;

@interface CLTimer : NSObject {

	CLSilo* _silo;
	<CLTimerScheduler>* _scheduler;
	/*^block*/ id _handler;
	double _nextFireTime;
	double _fireInterval;

}

@property (nonatomic,copy) id handler;                         //@synthesize handler=_handler - In the implementation block
@property (assign,nonatomic) double nextFireTime;              //@synthesize nextFireTime=_nextFireTime - In the implementation block
@property (assign,nonatomic) double fireInterval;              //@synthesize fireInterval=_fireInterval - In the implementation block
-(void)shouldFire;
-(id)initInSilo:(id)arg1 withScheduler:(id)arg2 ;
-(void)updateScheduler;
-(void)setNextFireAfterDelay:(double)arg1 ;
-(void)setNextFireTime:(double)arg1 ;
-(void)setFireInterval:(double)arg1 ;
-(void)setNextFireAfterDelay:(double)arg1 interval:(double)arg2 ;
-(void)setNextFireTime:(double)arg1 interval:(double)arg2 ;
-(double)nextFireTime;
-(double)fireInterval;
-(void)invalidate;
-(void).cxx_destruct;
-(void)setHandler:(/*^block*/ id)arg1 ;
-(/*^block*/ id)handler;
@end

