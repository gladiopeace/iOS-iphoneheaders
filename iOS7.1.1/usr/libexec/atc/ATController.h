/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:32:28 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/atc
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <atc/atc-Structs.h>
#import <atc/ATLinkDelegate.h>
#import <atc/ATStoreLinkDelegate.h>
#import <atc/ATRestoreLinkDelegate.h>
#import <atc/ATWorkspaceObserverDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class ATXPCServer, NSMutableArray, NSMutableDictionary, ATLink, ATStoreLink, ATRestoreLink, NSObject, ATUserDefaults, ATClientController, ATAssetManager, NSString, NSMutableSet, ATAsset, ATWorkspaceObserver, NSDate;

@interface ATController : NSObject <ATLinkDelegate, ATStoreLinkDelegate, ATRestoreLinkDelegate, ATWorkspaceObserverDelegate> {

	ATXPCServer* _xpcServer;
	NSMutableArray* _links;
	NSMutableDictionary* _libraryLinks;
	ATLink* _link;
	ATStoreLink* _store;
	ATRestoreLink* _restore;
	NSObject<OS_dispatch_queue>* _workQueue;
	ATUserDefaults* _defaults;
	BOOL _isSyncing;
	BOOL _restoreMode;
	BOOL _disableTimeout;
	BOOL _automaticSync;
	BOOL _cancelRestore;
	ATClientController* _clients;
	NSMutableArray* _dataclasses;
	NSMutableArray* _reconciledDataclasses;
	ATAssetManager* _assetManager;
	NSString* _hostLibrary;
	long long _backoff;
	NSMutableSet* _progressObservers;
	unsigned _currentStage;
	ATAsset* _currentAsset;
	NSString* _currentDataclass;
	NSString* _currentStatus;
	double _overallProgress;
	/*^block*/ id _clientProgressCallback;
	NSObject<OS_dispatch_queue>* _diskUsageQueue;
	NSMutableDictionary* _diskUsageInfo;
	int _assetErrors;
	ATWorkspaceObserver* _workspaceObserver;
	BOOL _inactive;
	NSObject<OS_dispatch_source>* _timerSource;
	NSObject<OS_dispatch_queue>* _timerQueue;
	NSDate* _startTime;
	NSMutableDictionary* _dataclassTimers;
	unsigned long _grappaId;
	int _plugToken;
	BOOL _plugged;
	int _atcRunningToken;
	SCNetworkReachabilityRef _reachability;
	BOOL _hasNetwork;
	BOOL _restorePendingNetwork;
	BOOL _localSyncRequest;
	BOOL _localSyncRequestCanceled;

}

@property (nonatomic,readonly) NSObject<OS_dispatch_queue> * workQueue;              //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,readonly) BOOL isSyncing;                                       //@synthesize isSyncing=_isSyncing - In the implementation block
@property (nonatomic,readonly) BOOL restoreMode;                                     //@synthesize restoreMode=_restoreMode - In the implementation block
@property (assign,nonatomic) BOOL hasNetwork;                                        //@synthesize hasNetwork=_hasNetwork - In the implementation block
@property (assign,nonatomic) BOOL restorePendingNetwork;                             //@synthesize restorePendingNetwork=_restorePendingNetwork - In the implementation block
-(BOOL)keepRunning;
-(void)linkDidCancel:(id)arg1 ;
-(void)_sendSyncAllowed;
-(void)updatePurgeableStorageUsage;
-(BOOL)startAssetTransfersForDataclass:(id)arg1 ;
-(void)startRestoreMode;
-(id)_localProgressMessage;
-(void)_reportLocalProgress;
-(void)reportDiskUsageWithChangedDataclasses:(id)arg1 ;
-(void)endiTunesTimer;
-(void)buildAssetManifestForDataclass:(id)arg1 ;
-(BOOL)endSyncIfCompleted;
-(void)resetTimeout;
-(void)restoreCanceled;
-(void)_reportAssetProgress:(id)arg1 ;
-(void)syncError:(id)arg1 localOrigin:(BOOL)arg2 ;
-(void)_prioritizeIdentifier:(id)arg1 dataClass:(id)arg2 ;
-(void)cancelAsset:(id)arg1 ;
-(void)startTimerForDataclass:(id)arg1 ;
-(void)endPrepTimerForDataclass:(id)arg1 ;
-(void)endReconcileTimerForDataclass:(id)arg1 ;
-(void)_reportTransferProgress:(double)arg1 toClientOfAsset:(id)arg2 ;
-(void)_registerLinkHandlers:(id)arg1 ;
-(void)reportInstalledAssetsToLink:(id)arg1 ;
-(void)_startMonitoringSyncAbility;
-(void)lockdownConnectedWithLink:(id)arg1 ;
-(void)_registerLocalHandlers;
-(void)_reportLinkProgress:(double)arg1 ;
-(BOOL)downloadAsset:(id)arg1 withProgress:(/*^block*/ id)arg2 withCompletion:(/*^block*/ id)arg3 ;
-(BOOL)installAsset:(id)arg1 withProgress:(/*^block*/ id)arg2 withCompletion:(/*^block*/ id)arg3 ;
-(void)asset:(id)arg1 wasInstalled:(BOOL)arg2 withError:(id)arg3 ;
-(void)storeLink:(id)arg1 encounteredError:(id)arg2 ;
-(void)restoreInProgress;
-(void)restoredAsset:(id)arg1 successfully:(BOOL)arg2 withError:(id)arg3 ;
-(void)restoreAsset:(id)arg1 updatedProgress:(float)arg2 ;
-(id)findAppSyncHost;
-(BOOL)isSyncing;
-(BOOL)restoreMode;
-(BOOL)hasNetwork;
-(void)setHasNetwork:(BOOL)arg1 ;
-(BOOL)restorePendingNetwork;
-(void)setRestorePendingNetwork:(BOOL)arg1 ;
-(void)applicationInstallsDidCancel:(id)arg1 ;
-(void)applicationInstallsDidChange:(id)arg1 ;
-(void)applicationsDidInstall:(id)arg1 ;
-(void)applicationInstallsArePrioritized:(id)arg1 arePaused:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(void)run;
-(void)_reset;
-(void)startTimer;
-(id)workQueue;
-(void)shutdown;
-(void)endTimer;
@end

