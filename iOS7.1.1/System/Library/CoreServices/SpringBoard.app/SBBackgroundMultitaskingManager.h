/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:58:02 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBWorkStoreObserver.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, SBWorkStore, AppLaunchStats;

@interface SBBackgroundMultitaskingManager : NSObject <SBWorkStoreObserver> {

	NSMutableDictionary* _appToBackgroundTasks;
	NSMutableDictionary* _backgroundFetchTaskValueToWatchdoggableCompletion;
	NSObject<OS_dispatch_queue>* _queue;
	SBWorkStore* _pendingWorkStore;
	AppLaunchStats* _appLaunchStats;
	double _watchdogTimeout;

}

@property (nonatomic,readonly) double watchdogTimeout;              //@synthesize watchdogTimeout=_watchdogTimeout - In the implementation block
+(BOOL)shouldFakeAdoption;
+(id)sharedInstance;
-(int)nextSequenceNumber;
-(void)application:(id)arg1 didSetMinimumFetchInterval:(double)arg2 ;
-(void)_appStateDidChange:(id)arg1 ;
-(void)handlePushNotificationFromApplication:(id)arg1 userInfo:(id)arg2 priority:(int)arg3 completion:(/*^block*/ id)arg4 ;
-(void)workDidChange:(id)arg1 ;
-(id)_opportunisticallyUpdateApplications:(id)arg1 trigger:(unsigned)arg2 ;
-(void)_performPendingWorkForBundleID:(id)arg1 ;
-(void)_appFinishedBackgroundUpdating:(id)arg1 ;
-(void)_startBackgroundFetchForNotification:(id)arg1 ;
-(void)queue_appFinishedBackgroundUpdating:(id)arg1 userInfo:(id)arg2 ;
-(void)queue_startBackgroundFetchTaskForApplication:(id)arg1 trigger:(unsigned)arg2 sequenceNumber:(int)arg3 withWatchdoggableCompletion:(/*^block*/ id)arg4 ;
-(void)_invalidateBackgroundTasksForApplication:(id)arg1 ;
-(void)_watchdogCompletionForBackgroundFetchTaskValue:(id)arg1 ;
-(void)queue_fireWatchdoggableCompletionForBackgroundFetchTaskValue:(id)arg1 ;
-(void)queue_invalidateBackgroundTasksForApplication:(id)arg1 ;
-(void)queue_backgroundTaskFinished:(id)arg1 forApplication:(id)arg2 ;
-(void)_backgroundTaskFinished:(id)arg1 forApplication:(id)arg2 ;
-(double)watchdogTimeout;
-(void)_startBackgroundFetchTaskForApplication:(id)arg1 trigger:(unsigned)arg2 sequenceNumber:(int)arg3 withWatchdoggableCompletion:(/*^block*/ id)arg4 ;
-(BOOL)_launchAppForUpdating:(id)arg1 trigger:(unsigned)arg2 pushNotificationUserInfo:(id)arg3 withWatchdoggableCompletion:(/*^block*/ id)arg4 ;
-(id)init;
@end

