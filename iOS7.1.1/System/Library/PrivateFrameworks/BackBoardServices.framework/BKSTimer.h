/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:50 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject;

@interface BKSTimer : NSObject {

	NSObject<OS_dispatch_queue>* _queue;
	NSObject<OS_dispatch_source>* _source;
	/*^block*/ id _handler;
	double _fireInterval;
	double _repeatInterval;
	double _leewayInterval;

}
+(id)scheduledTimerWithFireInterval:(double)arg1 queue:(id)arg2 handler:(/*^block*/ id)arg3 ;
-(void)dealloc;
-(void)cancel;
-(id)initWithFireInterval:(double)arg1 queue:(id)arg2 handler:(/*^block*/ id)arg3 ;
-(void)schedule;
-(id)initWithFireInterval:(double)arg1 repeatInterval:(double)arg2 leewayInterval:(double)arg3 queue:(id)arg4 handler:(/*^block*/ id)arg5 ;
@end

