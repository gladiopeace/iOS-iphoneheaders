/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:01 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_source, OS_dispatch_queue, OS_dispatch_semaphore;
#import <CoreMotion/CoreMotion-Structs.h>
@class NSObject;

@interface CMActivityManagerInternal : NSObject {

	CLConnectionClient* fLocationdConnection;
	/*^block*/ id fActivityHandler;
	NSObject<OS_dispatch_source>* fWatchdogTimer;
	NSObject<OS_dispatch_queue>* fPrivateQueue;
	BOOL fSubscribedToMotionState;
	NSObject<OS_dispatch_semaphore>* fSidebandOverrideSemaphore;
	NSObject<OS_dispatch_queue>* fSidebandOverrideQueue;
	BOOL fSidebandOverrideWaiting;
	int fSidebandOverrideResult;

}
-(void)startWatchdogCheckinsPrivate;
-(void)stopWatchdogCheckinsPrivate;
-(void)startActivityUpdatesWithHandlerPrivate:(/*^block*/ id)arg1 ;
-(void)stopActivityUpdatesPrivate;
-(void)overrideOscarSideband:(BOOL)arg1 withState:(int)arg2 ;
-(void)dealloc;
-(id)init;
-(void)connect;
-(void)disconnect;
@end

