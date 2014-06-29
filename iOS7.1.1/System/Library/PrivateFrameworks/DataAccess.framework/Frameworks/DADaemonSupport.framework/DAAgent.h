/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:15 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DADaemonSupport.framework/DADaemonSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class DAAccount;

@interface DAAgent : NSObject {

	DAAccount* _account;
	double _lastRetryTimeout;
	bool _syncWhenReachable;
	/*^block*/ id _networkReachableBlock;
	bool _isMonitoring;
	bool _isWaitingForPassword;

}

@property (assign) bool isMonitoring;              //@synthesize isMonitoring=_isMonitoring - In the implementation block
-(int)preferredEventDaysToSync;
-(int)preferredToDoDaysToSync;
-(void)addObserverForPreferredDaysToSyncChangeNotifications;
-(void)removeObserverForPreferredDaysToSyncChangeNotifications;
-(bool)isMonitoring;
-(void)startMonitoring;
-(void)dealloc;
-(void)setIsMonitoring:(bool)arg1 ;
-(void)observeReachabilityWithBlock:(/*^block*/ id)arg1 ;
-(void)refreshFolderListRequireChangedFolders:(bool)arg1 isUserRequested:(bool)arg2 ;
-(void)stopObservingReachability;
-(void)syncFolderIDs:(id)arg1 forDataclasses:(int)arg2 isUserRequested:(bool)arg3 ;
-(void)processMeetingRequestDatas:(id)arg1 deliveryIdsToClear:(id)arg2 deliveryIdsToSoftClear:(id)arg3 inFolderWithId:(id)arg4 callback:(/*^block*/ id)arg5 ;
-(void)requestAgentStopMonitoringWithCompletionBlock:(/*^block*/ id)arg1 ;
-(id)stateString;
-(id)account;
-(id)initWithAccount:(id)arg1 ;
-(void)_reachabilityChanged:(id)arg1 ;
-(void)shutdown;
@end

