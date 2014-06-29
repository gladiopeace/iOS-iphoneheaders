/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:19 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_xpc_object, OS_dispatch_queue;
@class NSObject, NSMutableSet, NSMutableDictionary;

@interface DADConnection : NSObject {

	NSObject<OS_xpc_object>* _conn;
	NSObject<OS_dispatch_queue>* _muckingWithConn;
	NSObject<OS_dispatch_queue>* _muckingWithInFlightCollections;
	NSMutableSet* _accountIdsWithAlreadyResetCerts;
	NSMutableSet* _accountIdsWithAlreadyResetThrottleTimers;
	/*^block*/ id _statusReportBlock;
	NSMutableDictionary* _inFlightSearchQueries;
	NSMutableDictionary* _inFlightFolderChanges;
	NSMutableDictionary* _inFlightAttachmentDownloads;
	NSMutableDictionary* _inFlightShareRequests;

}
+(id)sharedConnection;
+(id)sharedConnectionIfServerIsRunning;
+(void)setShouldIgnoreAccountChanges;
-(bool)performServerContactsSearch:(id)arg1 forAccountWithID:(id)arg2 ;
-(void)cancelServerContactsSearch:(id)arg1 ;
-(bool)updateContentsOfAllFoldersForAccountID:(id)arg1 andDataclass:(int)arg2 isUserRequested:(bool)arg3 ;
-(bool)updateFolderListForAccountID:(id)arg1 andDataclasses:(int)arg2 isUserRequested:(bool)arg3 ;
-(void)cancelDownloadingAttachmentWithDownloadID:(id)arg1 error:(id)arg2 ;
-(id)beginDownloadingAttachmentWithUUID:(id)arg1 accountID:(id)arg2 queue:(id)arg3 progressBlock:(/*^block*/ id)arg4 completionBlock:(/*^block*/ id)arg5 ;
-(void)dealloc;
-(id)init;
-(id)_init;
-(id)_connection;
-(void)handleURL:(id)arg1 ;
-(bool)registerForInterrogationWithBlock:(/*^block*/ id)arg1 ;
-(void)removeStoresForAccountWithID:(id)arg1 ;
-(bool)updateContentsOfAllFoldersForAccountID:(id)arg1 andDataclasses:(int)arg2 isUserRequested:(bool)arg3 ;
-(void)_dispatchMessage:(id)arg1 ;
-(id)_createReplyToRequest:(id)arg1 withProperties:(id)arg2 ;
-(void)_foldersUpdated:(id)arg1 ;
-(void)fillOutCurrentEASTimeZoneInfo;
-(bool)resumeWatchingFoldersWithKeys:(id)arg1 forAccountID:(id)arg2 ;
-(bool)watchFoldersWithKeys:(id)arg1 forAccountID:(id)arg2 ;
-(bool)stopWatchingFoldersWithKeys:(id)arg1 forAccountID:(id)arg2 ;
-(bool)processMeetingRequests:(id)arg1 deliveryIdsToClear:(id)arg2 deliveryIdsToSoftClear:(id)arg3 inFolderWithId:(id)arg4 forAccountWithId:(id)arg5 ;
-(bool)setFolderIdsThatExternalClientsCareAboutAdded:(id)arg1 deleted:(id)arg2 foldersTag:(id)arg3 forAccountID:(id)arg4 ;
-(bool)suspendWatchingFoldersWithKeys:(id)arg1 forAccountID:(id)arg2 ;
-(bool)processFolderChange:(id)arg1 forAccountWithID:(id)arg2 ;
-(void)reportFolderItemsSyncSuccess:(bool)arg1 forFolderWithID:(id)arg2 andAccountWithID:(id)arg3 ;
-(bool)requestPolicyUpdateForAccountID:(id)arg1 ;
-(bool)updateContentsOfFoldersWithKeys:(id)arg1 forAccountID:(id)arg2 andDataclass:(int)arg3 isUserRequested:(bool)arg4 ;
-(void)_tearDownInFlightObjects;
-(void)_reallyRegisterForInterrogation;
-(void)_serverDiedWithReason:(id)arg1 ;
-(id)decodedErrorFromData:(id)arg1 ;
-(void)_resetCertWarningsForAccountId:(id)arg1 andDataclasses:(int)arg2 isUserRequested:(bool)arg3 ;
-(void)_requestDaemonChangeAgentMonitoringStatus:(bool)arg1 waitForReply:(bool)arg2 ;
-(void)_resetThrottleTimersForAccountId:(id)arg1 ;
-(bool)updateContentsOfFoldersWithKeys:(id)arg1 forAccountID:(id)arg2 andDataclasses:(int)arg3 isUserRequested:(bool)arg4 ;
-(void)_sendSynchronousXPCMessageWithParameters:(id)arg1 handlerBlock:(/*^block*/ id)arg2 ;
-(void)_cancelDownloadsWithIDs:(id)arg1 error:(id)arg2 ;
-(void)_registerForAppResumedNotification;
-(void)resetTimersAndWarnings;
-(void)_policyKeyChanged:(id)arg1 ;
-(void)_logDataAccessStatus:(id)arg1 ;
-(void)_serverContactsSearchQueryFinished:(id)arg1 ;
-(void)_folderChangeFinished:(id)arg1 ;
-(void)_getStatusReportsFromClient:(id)arg1 ;
-(void)_downloadProgress:(id)arg1 ;
-(void)_downloadFinished:(id)arg1 ;
-(void)_shareResponseFinished:(id)arg1 ;
-(id)currentPolicyKeyForAccountID:(id)arg1 ;
-(void)requestDaemonStartMonitoringAgents;
-(void)requestDaemonStopMonitoringAgents;
-(void)requestDaemonStartMonitoringAgents_Sync;
-(void)_requestDaemonStopMonitoringAgents_Sync;
-(void)requestDaemonShutdown;
-(bool)updateContentsOfFoldersWithKeys:(id)arg1 forAccountID:(id)arg2 andDataclass:(int)arg3 ;
-(bool)updateContentsOfAllFoldersForAccountID:(id)arg1 andDataclass:(int)arg2 ;
-(void)respondToSharedCalendarInvite:(int)arg1 forCalendarWithID:(id)arg2 accountID:(id)arg3 queue:(id)arg4 completionBlock:(/*^block*/ id)arg5 ;
-(id)statusReports;
-(id)activeSyncDeviceIdentifier;
-(bool)updateFolderListForAccountID:(id)arg1 andDataclasses:(int)arg2 ;
-(bool)updateFolderListForAccountID:(id)arg1 andDataclasses:(int)arg2 requireChangedFolders:(bool)arg3 isUserRequested:(bool)arg4 ;
@end

