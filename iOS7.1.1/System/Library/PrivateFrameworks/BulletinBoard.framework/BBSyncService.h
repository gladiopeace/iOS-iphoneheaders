/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:52 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BulletinBoard/IDSServiceDelegate.h>

@protocol OS_dispatch_queue, BBSyncServiceDelegate;
@class IDSService, NSMutableArray, NSObject, NSString, NSMutableDictionary, NSTimer;

@interface BBSyncService : NSObject <IDSServiceDelegate> {

	IDSService* _service;
	NSMutableArray* _pendingDismissalDictionaries;
	NSMutableArray* _pendingDismissalIDs;
	NSObject<OS_dispatch_queue>* _queue;
	unsigned long long _queuedFeed;
	NSString* _queuedSectionID;
	NSMutableDictionary* _deferredDismissalsBySectionID;
	NSTimer* _deferredTimer;
	int _lockNotifyToken;
	<BBSyncServiceDelegate>* _delegate;

}

@property (assign,nonatomic) <BBSyncServiceDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithQueue:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)enqueueSyncedRemovalForBulletin:(id)arg1 feeds:(unsigned long long)arg2 ;
-(void)sendPendingSyncedRemovals;
-(void)_clearDeferredTimer;
-(void)_sendSyncMessage:(id)arg1 ;
-(id)_syncAccount;
-(void)_addDeferredDismissalForBulletin:(id)arg1 feeds:(unsigned long long)arg2 ;
-(void)_reallyEnqueueBulletin:(id)arg1 feeds:(unsigned long long)arg2 ;
-(id)_dismissalDictionaryForBulletin:(id)arg1 ;
-(void)_deferredTimerFired:(id)arg1 ;
-(void)_sendDeferredDismissals;
-(void)sendSyncedRemovalForBulletin:(id)arg1 feeds:(unsigned long long)arg2 ;
-(void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 ;
-(void)service:(id)arg1 activeAccountsChanged:(id)arg2 ;
-(void)_deviceLocked;
@end

