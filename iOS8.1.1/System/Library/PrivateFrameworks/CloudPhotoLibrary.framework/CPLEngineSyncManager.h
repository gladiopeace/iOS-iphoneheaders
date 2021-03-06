/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:05 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLEngineSyncEmergencyTaskDelegate.h>
#import <CloudPhotoLibrary/CPLPushToTransportTaskDelegate.h>
#import <CloudPhotoLibrary/CPLPullFromTransportTaskDelegate.h>
#import <CloudPhotoLibrary/CPLMinglePulledChangesTaskDelegate.h>
#import <CloudPhotoLibrary/CPLBackgroundUploadsTaskDelegate.h>
#import <CloudPhotoLibrary/CPLBackgroundDownloadsTaskDelegate.h>
#import <CloudPhotoLibrary/CPLAbstractObject.h>
#import <CloudPhotoLibrary/CPLEngineComponent.h>

@protocol CPLEngineStoreUserIdentifier, CPLEngineTransportSetupTask, OS_dispatch_queue;
@class NSMutableArray, NSObject, NSError, CPLEngineSyncEmergencyTask, NSMutableDictionary, CPLPushToTransportTask, CPLGetAssetCountsTask, CPLPullFromTransportTask, CPLMinglePulledChangesTask, CPLBackgroundUploadsTask, CPLBackgroundDownloadsTask, CPLPlatformObject, CPLEngineLibrary, NSString;

@interface CPLEngineSyncManager : NSObject <CPLEngineSyncEmergencyTaskDelegate, CPLPushToTransportTaskDelegate, CPLPullFromTransportTaskDelegate, CPLMinglePulledChangesTaskDelegate, CPLBackgroundUploadsTaskDelegate, CPLBackgroundDownloadsTaskDelegate, CPLAbstractObject, CPLEngineComponent> {

	id<CPLEngineStoreUserIdentifier> _transportUserIdentifier;
	BOOL _setupIsDone;
	id<CPLEngineTransportSetupTask> _setupTask;
	NSMutableArray* _setupBarriers;
	/*^block*/id _closingCompletionHandler;
	NSObject*<OS_dispatch_queue> _lock;
	NSError* _lastError;
	CPLEngineSyncEmergencyTask* _managementTask;
	NSMutableArray* _archivedManagementTasks;
	NSMutableDictionary* _completionHandlerPerTaskIdentifier;
	CPLPushToTransportTask* _pushTask;
	CPLGetAssetCountsTask* _getAssetCountsTask;
	CPLPullFromTransportTask* _pullTask;
	CPLMinglePulledChangesTask* _mingleTask;
	CPLBackgroundUploadsTask* _backgroundUploadsTask;
	CPLBackgroundDownloadsTask* _backgroundDownloadsTask;
	unsigned long long _shouldRestartSessionFromState;
	NSMutableArray* _lastErrors;
	BOOL _foreground;
	BOOL _hasTransactionForSyncSession;
	BOOL _shouldTryToMingleImmediately;
	CPLPlatformObject* _platformObject;
	CPLEngineLibrary* _engineLibrary;
	unsigned long long _state;

}

@property (nonatomic,__weak,readonly) CPLEngineLibrary * engineLibrary;               //@synthesize engineLibrary=_engineLibrary - In the implementation block
@property (assign,setter=_setState:,nonatomic) unsigned long long state;              //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) BOOL shouldTryToMingleImmediately;                       //@synthesize shouldTryToMingleImmediately=_shouldTryToMingleImmediately - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CPLPlatformObject * platformObject;                    //@synthesize platformObject=_platformObject - In the implementation block
+(id)platformImplementationProtocol;
+(id)descriptionForState:(unsigned long long)arg1 ;
+(id)shortDescriptionForState:(unsigned long long)arg1 ;
-(unsigned long long)state;
-(void)_setState:(unsigned long long)arg1 ;
-(id)componentName;
-(void)openWithCompletionHandler:(/*^block*/id)arg1 ;
-(CPLEngineLibrary *)engineLibrary;
-(CPLPlatformObject *)platformObject;
-(void)closeAndDeactivate:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getStatusWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getStatusDictionaryWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithEngineLibrary:(id)arg1 ;
-(void)startSyncSessionWithMinimalPhase:(unsigned long long)arg1 ;
-(void)setSyncSessionShouldBeForeground:(BOOL)arg1 ;
-(void)cancelCurrentSyncSession;
-(void)resetTransportUserIdentifierAndRestartSync:(BOOL)arg1 ;
-(void)addSetupBarrier:(/*^block*/id)arg1 ;
-(id)task:(id)arg1 wantsToPushBatch:(id)arg2 continuationBlock:(/*^block*/id)arg3 ;
-(void)task:(id)arg1 didFinishWithError:(id)arg2 ;
-(void)task:(id)arg1 didProgress:(float)arg2 ;
-(void)kickOffSyncSession;
-(id)_descriptionForCurrentState;
-(id)_descriptionForLaunchedTasks;
-(void)_cancelAllTasksForSetup;
-(void)_cancelAllTasksForManagement;
-(void)_cancelAllTasksForPush;
-(void)_cancelAllTasksForPull;
-(void)_cancelAllTasksForBackgroundUploads;
-(void)_cancelAllTasksForBackgroundDownloads;
-(id)_descriptionForSetupTasks;
-(id)_descriptionForManagementTasks;
-(id)_descriptionForPushTasks;
-(id)_descriptionForGetAssetCountsTasks;
-(id)_descriptionForPullTasks;
-(id)_descriptionForBackgroundUploadsTasks;
-(id)_descriptionForBackgroundDownloadsTasks;
-(BOOL)_launchSetupTask;
-(BOOL)_launchManagementTask;
-(BOOL)_launchNecessaryTasksForPush;
-(BOOL)_launchNecessaryTasksForGetAssetCounts;
-(BOOL)_launchNecessaryTasksForPull;
-(BOOL)_launchNecessaryTasksForBackgroundUploads;
-(BOOL)_launchNecessaryTasksForBackgroundDownloads;
-(BOOL)_launchNecessaryTasksForCurrentStateLocked;
-(void)_notifyEndOfSyncSession;
-(void)_cancelAllTasksLocked;
-(void)_resetErrorForSyncSession;
-(void)_advanceToNextStateLocked;
-(void)_restartSyncSessionFromStateLocked:(unsigned long long)arg1 cancelIfNecessary:(BOOL)arg2 ;
-(void)_moveAllTasksToBackgroundLocked;
-(void)_setErrorForSyncSession:(id)arg1 ;
-(void)_saveManagementTasks;
-(BOOL)_prepareAndLaunchSyncTask:(id*)arg1 ;
-(BOOL)_didFinishSetupTaskWithError:(id)arg1 shouldStop:(BOOL*)arg2 ;
-(BOOL)_didFinishManagementTask:(id)arg1 withError:(id)arg2 shouldStop:(BOOL*)arg3 ;
-(BOOL)_didFinishPushTask:(id)arg1 withError:(id)arg2 shouldStop:(BOOL*)arg3 ;
-(BOOL)_didFinishGetAssetCountsTask:(id)arg1 withError:(id)arg2 shouldStop:(BOOL*)arg3 ;
-(BOOL)_didFinishPullTask:(id)arg1 withError:(id)arg2 shouldStop:(BOOL*)arg3 ;
-(BOOL)_didFinishBackgroundUploadsTask:(id)arg1 withError:(id)arg2 shouldStop:(BOOL*)arg3 ;
-(BOOL)_didFinishBackgroundDownloadsTask:(id)arg1 withError:(id)arg2 shouldStop:(BOOL*)arg3 ;
-(float)_progressForPushTask:(id)arg1 progress:(float)arg2 ;
-(float)_progressForGetAssetCountsTask:(id)arg1 progress:(float)arg2 ;
-(float)_progressForPullTask:(id)arg1 progress:(float)arg2 ;
-(float)_progressForBackgroundUploadsTask:(id)arg1 progress:(float)arg2 ;
-(float)_progressForBackgroundDownloadsTask:(id)arg1 progress:(float)arg2 ;
-(void)_loadManagementTasks;
-(void)beginClientWork:(id)arg1 ;
-(void)endClientWork:(id)arg1 ;
-(id)task:(id)arg1 wantsToDownloadBatchesFromSyncAnchor:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)startEmergencyTask:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_cancelAllTasksForGetAssetCounts;
-(BOOL)shouldTryToMingleImmediately;
-(void)setShouldTryToMingleImmediately:(BOOL)arg1 ;
@end

