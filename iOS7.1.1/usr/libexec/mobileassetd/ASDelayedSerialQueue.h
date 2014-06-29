/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:34:28 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/mobileassetd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject;

@interface ASDelayedSerialQueue : NSObject {

	NSObject<OS_dispatch_queue>* _queue;
	NSObject<OS_dispatch_source>* _timer;
	NSObject<OS_dispatch_queue>* _sourceQueue;
	BOOL _draining;

}
-(void)drainAndExecuteOnQueue:(id)arg1 block:(/*^block*/ id)arg2 ;
-(void)resumeAfterDelay:(int)arg1 ;
-(id)initWithQueue:(id)arg1 ;
-(void)dealloc;
-(void)suspend;
@end

