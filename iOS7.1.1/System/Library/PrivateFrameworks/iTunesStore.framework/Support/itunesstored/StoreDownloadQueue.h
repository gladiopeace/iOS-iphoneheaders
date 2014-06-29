/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 5:50:54 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableOrderedSet, NSObject, NSNumber, LoadDownloadQueueOperation, ISOperationQueue, PerformStaleAutoUpdatesOperation, NSMutableSet, NSSet;

@interface StoreDownloadQueue : NSObject {

	NSMutableOrderedSet* _activeRestoreIDs;
	NSObject<OS_dispatch_queue>* _dispatchQueue;
	NSNumber* _lastCheckedAccountID;
	LoadDownloadQueueOperation* _loadAutomaticDownloadQueueOperation;
	ISOperationQueue* _operationQueue;
	ISOperationQueue* _restoreOperationQueue;
	BOOL _restoreItemsUnavailableScheduled;
	PerformStaleAutoUpdatesOperation* _staleAutoUpdatesOperation;
	NSMutableSet* _storeQueueRequests;
	NSMutableOrderedSet* _trackedPurchaseDownloadIDs;

}

@property (readonly) NSSet * downloadKindsBeingChecked; 
@property (nonatomic,copy) NSSet * automaticDownloadKinds; 
+(id)sharedDownloadQueue;
+(void)observeXPCServer:(id)arg1 ;
+(void)getAutomaticDownloadKindsWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)reloadFromServerWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)setAutomaticDownloadKindsWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)synchronizeAutomaticDownloadKindsWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)triggerDownloadsWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)restoreAllRestorableDownloadsWithReason:(id)arg1 ;
-(void)restoreDownloadsWithIdentifiers:(id)arg1 reason:(id)arg2 ;
-(void)_handleMessage:(id)arg1 connection:(id)arg2 usingBlock:(/*^block*/ id)arg3 ;
-(void)checkAutomaticDownloadQueue;
-(void)commitAutomaticDownloadKinds:(id)arg1 markAsDirty:(BOOL)arg2 ;
-(void)_accountAuthenticatedNotification:(id)arg1 ;
-(void)_adjustCellularPolicyForAutoUpdates;
-(void)_promptForCellularAutoUpdates;
-(void)_retryCanceledRestoreDownloads;
-(void)_retrySoftFailedRestoreDownloads;
-(id)_automaticDownloadsQueryWithDatabase:(id)arg1 accountID:(id)arg2 ;
-(id)_newQueueRequestsWithReason:(id)arg1 session:(id)arg2 ;
-(void)_addOperationsForRequests:(id)arg1 reason:(id)arg2 ;
-(id)_restorableDownloadsQueryInDatabase:(id)arg1 ;
-(void)_showRestoreItemsUnavailableIfNecessary;
-(void)setAutomaticDownloadKinds:(id)arg1 account:(id)arg2 ;
-(id)_newOperationByCommitingAutomaticDownloadKinds:(id)arg1 account:(id)arg2 ;
-(BOOL)checkQueuesWithReason:(id)arg1 ;
-(id)_newSetAutomaticDownloadKindsOperationWithDownloadKinds:(id)arg1 account:(id)arg2 ;
-(id)_newLoadQueueOperationForQueueRequest:(id)arg1 ;
-(id)_newCheckQueueOperationForQueueRequest:(id)arg1 ;
-(void)_setLastCheckedAccountID:(id)arg1 ;
-(id)_downloadQueryWithQueueRequest:(id)arg1 database:(id)arg2 ;
-(BOOL)cancelAllRedownloads;
-(void)checkQueuesWithRequest:(id)arg1 ;
-(id)downloadKindsBeingChecked;
-(void)setAutomaticDownloadKinds:(id)arg1 ;
-(void)scheduleRestoreItemsUnavailableDialog;
-(void)_networkTypeChangedNotification:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)_accountStoreChangedNotification:(id)arg1 ;
-(void)synchronizeAutomaticDownloadKinds;
-(id)automaticDownloadKinds;
@end

