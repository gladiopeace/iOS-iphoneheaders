/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:19 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/BulletinBoardPlugins/CalendarProvider.bundle/CalendarProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BulletinBoard/BBDataProvider.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSMutableDictionary, NSTimer, EKEventStore;

@interface EKBBDataProvider : NSObject <BBDataProvider> {

	NSObject<OS_dispatch_queue>* _alertQueue;
	NSObject<OS_dispatch_queue>* _databaseQueue;
	NSMutableDictionary* _alerts;
	NSTimer* _syncTimer;
	bool _pendingChanges;
	NSObject<OS_dispatch_queue>* _eventStoreQueue;
	EKEventStore* _eventStore;
	NSObject<OS_dispatch_source>* _eventStoreIdleTimerSource;
	bool _ignoreLowLevelDatabaseChangedNotifications;

}
-(bool)supportsAlerts;
-(void)databaseChanged:(id)arg1 ;
-(void)eventStoreWillClose;
-(void)clearAlerts;
-(id)emptyModalTitle;
-(id)actionButtonTitleForAlertInfo:(id)arg1 ;
-(id)entityScheme;
-(void)acknowledgeAlerts:(id)arg1 ;
-(void)removeAlerts:(id)arg1 ;
-(id)modalTitleForAlertInfo:(id)arg1 ;
-(id)modalMessageForAlertInfo:(id)arg1 ;
-(id)defaultURLForAlertInfo:(id)arg1 ;
-(id)messageStringForAlert:(id)arg1 ;
-(void)alarmsDidFire:(id)arg1 ;
-(id)expirationDateForAlertInfo:(id)arg1 ;
-(void)bulletinClosed:(id)arg1 ;
-(void)_killEventStoreIdleTimer;
-(void)_alarmsDidFire:(id)arg1 ;
-(id)_findAlarmForCalendarItem:(id)arg1 matchingExternalID:(id)arg2 ;
-(void)_eventStoreChangedNotification:(id)arg1 ;
-(void)_resetEventStoreIdleTimer;
-(void)_withdrawAlertBulletin:(id)arg1 ;
-(void)_bulletinRequestAcknowledged:(id)arg1 alertInfo:(id)arg2 performActions:(/*^block*/ id)arg3 ;
-(void)_addAlertModalContent:(id)arg1 bulletin:(id)arg2 ;
-(id)_bulletinRequestWithAlertInfo:(id)arg1 ;
-(void)setUpAndAddRequestToCar:(id)arg1 ;
-(void)_calDatabaseChangedNotificationReceived;
-(void)_databaseChanged;
-(id)eventStore;
-(unsigned long long)allowedEntityTypes;
-(void)_killSyncTimer;
-(void)_timeZoneChanged:(id)arg1 ;
-(void)_syncTimerFired:(id)arg1 ;
-(void)_syncDidEnd;
-(void)_resetSyncTimer;
-(void)_syncDidStart;
-(void)dealloc;
-(id)init;
-(void).cxx_destruct;
-(id)sectionIdentifier;
-(bool)syncsBulletinDismissal;
-(void)dataProviderDidLoad;
-(id)bulletinsFilteredBy:(unsigned long long)arg1 count:(unsigned long long)arg2 lastCleared:(id)arg3 ;
-(id)sortDescriptors;
-(id)alerts;
@end

