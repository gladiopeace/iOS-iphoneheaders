/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 3:34:43 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/ApplePushService.framework/apsd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <apsd/AppLaunchStatsDelegate.h>

@class NSMapTable, AppLaunchStats;

@interface APSAppLaunchStats : NSObject <AppLaunchStatsDelegate> {

	NSMapTable* _delegateToWork;
	AppLaunchStats* _alsManager;

}
+(id)sharedInstance;
-(void)okToPassPushMessageForTopic:(id)arg1 withHandler:(/*^block*/ id)arg2 ;
-(void)_updatePendingWork;
-(void)setPendingWorkQueue:(id)arg1 forDelegate:(id)arg2 ;
-(unsigned)_messageStatusForALSMessageStatus:(int)arg1 ;
-(unsigned)_resourceTypeForALSResourceType:(int)arg1 ;
-(unsigned)_resourceStatusForALSResourceStatus:(int)arg1 ;
-(void)dealloc;
-(id)init;
-(void)resourceUpdate:(int)arg1 withStatus:(int)arg2 ;
-(void)pendingWorkCanProcess:(id)arg1 ;
-(void)addDelegate:(id)arg1 ;
-(void)removeDelegate:(id)arg1 ;
@end

