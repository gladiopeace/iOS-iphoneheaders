/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:58 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class EKEventStore, PCPersistentTimer, NSDate, NSTimer, NSObject, NSArray, NSMutableArray;

@interface _EKNotificationMonitor : NSObject {

	EKEventStore* _eventStore;
	/*^block*/ id _eventStoreGetter;
	bool _running;
	PCPersistentTimer* _timer;
	NSDate* _nextFireTime;
	NSTimer* _syncTimer;
	bool _pendingChanges;
	NSObject<OS_dispatch_queue>* _queue;
	NSObject<OS_dispatch_queue>* _timerQueue;
	unsigned long long _lastCount;
	NSArray* _notificationReferences;
	NSMutableArray* _recentlyRepliedNotifications;
	NSMutableArray* _culledRecentlyRepliedNotifications;
	bool _initialCheck;
	bool _shouldInstallPersistentTimer;
	bool _useSyncIdleTimer;
	bool _loadRecentlyRepliedNotifications;

}

@property (nonatomic,readonly) unsigned long long notificationCount; 
@property (nonatomic,readonly) NSArray * notificationReferences; 
-(void)_databaseChanged;
-(id)initWithEventStore:(id)arg1 ;
-(void)_killSyncTimer;
-(void)_syncTimerFired:(id)arg1 ;
-(void)_syncDidEnd;
-(void)_resetSyncTimer;
-(void)_syncDidStart;
-(void)_resetTimer;
-(void)attemptReload;
-(void)killTimer;
-(id)_eventStore;
-(unsigned long long)_checkForNotifications:(id)arg1 ;
-(void)_notifyForUnalertedNotifications:(id)arg1 ;
-(void)_timerFired;
-(void)adjust;
-(id)initForBulletinBoardWithEventStoreGetter:(/*^block*/ id)arg1 ;
-(unsigned long long)notificationCount;
-(id)notificationReferences;
-(void)_notificationCountChangedExternally;
-(void)dealloc;
-(id)init;
-(void)start;
-(void)stop;
@end

