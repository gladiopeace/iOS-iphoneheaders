/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:39 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSLock, NSMutableArray, NSObject;

@interface ACDTelemetryWatchdog : NSObject {

	NSLock* _lock;
	bool _fired;
	NSMutableArray* _telemetry;
	NSObject<OS_dispatch_queue>* _timerQueue;
	NSObject<OS_dispatch_source>* _timerSource;

}
-(void)dealloc;
-(void).cxx_destruct;
-(void)logWithLevel:(int)arg1 format:(id)arg2 ;
-(void)_dumpTelemetryData;
-(id)initWithTimeout:(double)arg1 ;
-(void)recordCurrentState;
@end

