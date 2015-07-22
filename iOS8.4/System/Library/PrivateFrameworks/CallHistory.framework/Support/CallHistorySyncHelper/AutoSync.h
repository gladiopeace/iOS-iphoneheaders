/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:02 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/Support/CallHistorySyncHelper
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <CallHistory/CHSynchronizedLoggable.h>

@class WatchDogTimer;

@interface AutoSync : CHSynchronizedLoggable {

	BOOL _alreadyWaiting;
	unsigned _syncWindowSeconds;
	unsigned _syncIntervalSeconds;
	WatchDogTimer* _watchDog;

}
-(void)handleTransactionAdded:(id)arg1 ;
-(void)handleTransactionAdded_sync:(id)arg1 withUpdate:(id)arg2 ;
-(void)fireSyncNotification;
-(void)startWatchDogTimer;
-(BOOL)canWeSync;
-(id)getSyncHistory;
-(void)updateSyncHistory:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)flush;
-(void)registerForNotifications;
@end
