/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:06 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreMediaStream/MSBackoffManagerDelegate.h>
#import <CoreMediaStream/MSASAssetUploaderDelegate.h>
#import <CoreMediaStream/MSASAssetDownloaderDelegate.h>

@protocol OS_dispatch_queue;
@class MSASPersonModel, NSString, NSDictionary, MSBackoffManager, MSASAssetUploader, MSASAssetDownloader, MSAlbumSharingDaemon, NSMutableArray, MSASProtocol, MSASPhoneInvitations, MSImageScalingSpecification, NSArray, NSObject;

@interface MSASStateMachine : NSObject <MSBackoffManagerDelegate, MSASAssetUploaderDelegate, MSASAssetDownloaderDelegate> {

	int _commandState;
	MSASPersonModel* _model;
	NSString* _currentCommand;
	long long _currentCommandID;
	NSDictionary* _currentCommandParams;
	MSBackoffManager* _metadataBackoffManager;
	MSBackoffManager* _MMCSBackoffManager;
	MSASAssetUploader* _assetUploader;
	MSASAssetDownloader* _assetDownloader;
	bool _isRetryingOutstandingActivities;
	bool _hasShutDown;
	int _maxMetadataRetryCount;
	MSAlbumSharingDaemon* _daemon;
	NSString* _personID;
	id _delegate;
	NSDictionary* _serverSideConfiguration;
	NSString* _serverSideConfigurationVersion;
	NSString* _focusAlbumGUID;
	NSString* _focusAssetCollectionGUID;
	NSMutableArray* _assetInfoToReauthForDownload;
	/*^block*/ id _stopHandlerBlock;
	MSASProtocol* _protocol;
	MSASPhoneInvitations* _phoneInvitations;
	MSImageScalingSpecification* _derivativeImageScalingSpecification;
	MSImageScalingSpecification* _thumbnailImageScalingSpecification;
	NSArray* _derivativeSpecifications;
	NSDictionary* _metadataBackoffManagerParameters;
	NSDictionary* _MMCSBackoffManagerParameters;
	NSObject<OS_dispatch_queue>* _workQueue;
	NSObject<OS_dispatch_queue>* _eventQueue;
	NSObject<OS_dispatch_queue>* _serverSideConfigQueue;
	NSObject<OS_dispatch_queue>* _memberQueue;
	/*^block*/ id _postCommandCompletionBlock;

}

@property (assign,nonatomic,__weak) MSAlbumSharingDaemon * daemon;                                                                 //@synthesize daemon=_daemon - In the implementation block
@property (assign,nonatomic) int maxMetadataRetryCount;                                                                            //@synthesize maxMetadataRetryCount=_maxMetadataRetryCount - In the implementation block
@property (nonatomic,retain) NSDictionary * serverSideConfiguration;                                                               //@synthesize serverSideConfiguration=_serverSideConfiguration - In the implementation block
@property (nonatomic,readonly) NSString * serverSideConfigurationVersion;                                                          //@synthesize serverSideConfigurationVersion=_serverSideConfigurationVersion - In the implementation block
@property (nonatomic,retain) MSASProtocol * protocol;                                                                              //@synthesize protocol=_protocol - In the implementation block
@property (nonatomic,retain) MSASPhoneInvitations * phoneInvitations;                                                              //@synthesize phoneInvitations=_phoneInvitations - In the implementation block
@property (nonatomic,retain) NSString * focusAlbumGUID;                                                                            //@synthesize focusAlbumGUID=_focusAlbumGUID - In the implementation block
@property (nonatomic,retain) NSString * focusAssetCollectionGUID;                                                                  //@synthesize focusAssetCollectionGUID=_focusAssetCollectionGUID - In the implementation block
@property (nonatomic,readonly) NSArray * derivativeSpecifications;                                                                 //@synthesize derivativeSpecifications=_derivativeSpecifications - In the implementation block
@property (nonatomic,readonly) MSImageScalingSpecification * derivativeImageScalingSpecification;                                  //@synthesize derivativeImageScalingSpecification=_derivativeImageScalingSpecification - In the implementation block
@property (nonatomic,readonly) MSImageScalingSpecification * thumbnailImageScalingSpecification;                                   //@synthesize thumbnailImageScalingSpecification=_thumbnailImageScalingSpecification - In the implementation block
@property (assign,nonatomic,__weak) id delegate;                                                                                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSString * personID;                                                                                  //@synthesize personID=_personID - In the implementation block
@property (assign,nonatomic) bool isRetryingOutstandingActivities;                                                                 //@synthesize isRetryingOutstandingActivities=_isRetryingOutstandingActivities - In the implementation block
@property (setter=_setAssetInfoToReauthForDownload:,nonatomic,retain) NSMutableArray * _assetInfoToReauthForDownload;              //@synthesize assetInfoToReauthForDownload=_assetInfoToReauthForDownload - In the implementation block
@property (setter=_setStopHandlerBlock:,nonatomic,copy) id _stopHandlerBlock;                                                      //@synthesize stopHandlerBlock=_stopHandlerBlock - In the implementation block
@property (nonatomic,retain) NSObject<OS_dispatch_queue> * workQueue;                                                              //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) NSObject<OS_dispatch_queue> * eventQueue;                                                             //@synthesize eventQueue=_eventQueue - In the implementation block
@property (nonatomic,retain) NSObject<OS_dispatch_queue> * serverSideConfigQueue;                                                  //@synthesize serverSideConfigQueue=_serverSideConfigQueue - In the implementation block
@property (nonatomic,retain) NSObject<OS_dispatch_queue> * memberQueue;                                                            //@synthesize memberQueue=_memberQueue - In the implementation block
@property (assign,nonatomic) bool hasShutDown;                                                                                     //@synthesize hasShutDown=_hasShutDown - In the implementation block
@property (nonatomic,retain) NSDictionary * metadataBackoffManagerParameters;                                                      //@synthesize metadataBackoffManagerParameters=_metadataBackoffManagerParameters - In the implementation block
@property (nonatomic,retain) NSDictionary * MMCSBackoffManagerParameters;                                                          //@synthesize MMCSBackoffManagerParameters=_MMCSBackoffManagerParameters - In the implementation block
@property (nonatomic,copy) id postCommandCompletionBlock;                                                                          //@synthesize postCommandCompletionBlock=_postCommandCompletionBlock - In the implementation block
-(void)setProtocol:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(void)start;
-(void).cxx_destruct;
-(id)protocol;
-(bool)isInRetryState;
-(void)setDaemon:(id)arg1 ;
-(id)initWithPersonID:(id)arg1 ;
-(id)daemon;
-(void)MSBackoffManagerDidUpdateNextExpiryDate:(id)arg1 ;
-(id)workQueue;
-(void)shutDownCompletionBlock:(/*^block*/ id)arg1 ;
-(void)setFocusAlbumGUID:(id)arg1 ;
-(void)setFocusAssetCollectionGUID:(id)arg1 ;
-(bool)isRetryingOutstandingActivities;
-(void)setIsRetryingOutstandingActivities:(bool)arg1 ;
-(void)stopAssetDownloadsCompletionBlock:(/*^block*/ id)arg1 ;
-(void)cancelCompletionBlock:(/*^block*/ id)arg1 ;
-(void)checkForChangesInfo:(id)arg1 ;
-(int)assetsInDownloadQueueCount;
-(bool)hasEnqueuedActivities;
-(id)serverCommunicationBackoffDate;
-(void)acceptInvitationWithToken:(id)arg1 info:(id)arg2 completionBlock:(/*^block*/ id)arg3 ;
-(void)retrieveAssets:(id)arg1 inAlbumWithGUID:(id)arg2 ;
-(id)serverSideConfiguration;
-(id)focusAssetCollectionGUID;
-(void)refreshServerSideConfig;
-(id)persistentObjectForKey:(id)arg1 ;
-(void)setPersistentObject:(id)arg1 forKey:(id)arg2 ;
-(void)setWorkQueue:(id)arg1 ;
-(id)memberQueue;
-(id)serverSideConfigurationVersion;
-(id)initWithPersonID:(id)arg1 eventQueue:(id)arg2 ;
-(void)workQueueUpdateNextActivityDate;
-(id)_model;
-(void)workQueueApplyServerSideConfiguration;
-(void)_sendGetServerSideConfigurationDisposition:(int)arg1 params:(id)arg2 ;
-(void)workQueueRetryOutstandingActivities;
-(id)_metadataBackoffManager;
-(id)_assetDownloader;
-(void)setMaxMetadataRetryCount:(int)arg1 ;
-(id)_assetUploader;
-(id)eventQueue;
-(void)setHasShutDown:(bool)arg1 ;
-(void)_workQueueEmptyFileTransferQueuesCompletionBlock:(/*^block*/ id)arg1 ;
-(void)setPostCommandCompletionBlock:(/*^block*/ id)arg1 ;
-(/*^block*/ id)_stopHandlerBlock;
-(id)_stoppedError;
-(void)workQueueCancelCompletionBlock:(/*^block*/ id)arg1 ;
-(id)_canceledError;
-(void)workQueueCancelAllCommandsFilteredByAlbumGUID:(id)arg1 assetCollectionGUID:(id)arg2 ;
-(void)setRootCtagFromPendingRootCtag;
-(void)_cancelOutstandingCommandsDisposition:(int)arg1 params:(id)arg2 ;
-(void)workQueueDidFinishCommand;
-(id)serverSideConfigQueue;
-(id)serverSideQueueServerSideConfiguration;
-(id)_serverSideConfigDictionaryByApplyingDefaultsToDictionary:(id)arg1 ;
-(void)serverSideQueueSetServerSideConfiguration:(id)arg1 ;
-(void)workQueueRefreshServerSideConfig;
-(bool)workQueueEndCommandWithError:(id)arg1 command:(id)arg2 params:(id)arg3 albumGUID:(id)arg4 assetCollectionGUID:(id)arg5 ;
-(id)latestNextActivityDate;
-(id)MMCSBackoffManagerParameters;
-(void)setMMCSBackoffManagerParameters:(id)arg1 ;
-(id)metadataBackoffManagerParameters;
-(void)setMetadataBackoffManagerParameters:(id)arg1 ;
-(void)workQueueCheckForNextCommand;
-(bool)hasShutDown;
-(void)workQueuePerformNextCommand;
-(/*^block*/ id)postCommandCompletionBlock;
-(void)workQueueDidFinishCommandDueToCancellation;
-(void)workQueueDidFinishCommandByLeavingCommandInQueue;
-(void)workQueueDidFailToFinishCommandDueToTemporaryError:(id)arg1 ;
-(void)_getAlbumURLDisposition:(int)arg1 params:(id)arg2 ;
-(void)workQueueDidFinishCommandByReplacingCurrentCommandWithCommand:(id)arg1 params:(id)arg2 personID:(id)arg3 albumGUID:(id)arg4 assetCollectionGUID:(id)arg5 ;
-(int)maxMetadataRetryCount;
-(id)_URLReauthFailureWithUnderlyingError:(id)arg1 ;
-(void)checkForChangesResetSync:(bool)arg1 info:(id)arg2 ;
-(void)_checkForChangesDisposition:(int)arg1 params:(id)arg2 ;
-(id)rootCtagToCheckForChanges;
-(void)_setStopHandlerBlock:(/*^block*/ id)arg1 ;
-(void)setPendingRootCtag:(id)arg1 ;
-(void)_checkForUpdatesInAlbumDisposition:(int)arg1 params:(id)arg2 ;
-(void)_didFinishCheckingUpdatesInAlbumsDisposition:(int)arg1 params:(id)arg2 ;
-(void)getAccessControlsForAlbums:(id)arg1 info:(id)arg2 ;
-(void)_getAccessControlsDisposition:(int)arg1 params:(id)arg2 ;
-(void)_subscribeToAlbumDisposition:(int)arg1 params:(id)arg2 ;
-(void)_unsubscribeFromAlbumDisposition:(int)arg1 params:(id)arg2 ;
-(void)_checkForAssetCollectionUpdatesDisposition:(int)arg1 params:(id)arg2 ;
-(void)_checkForCommentChangesDisposition:(int)arg1 params:(id)arg2 ;
-(void)_checkForAlbumSyncedStateDisposition:(int)arg1 params:(id)arg2 ;
-(void)_setAlbumSyncedStateDisposition:(int)arg1 params:(id)arg2 ;
-(void)_setAssetCollectionSyncedStateDisposition:(int)arg1 params:(id)arg2 ;
-(void)_deleteAlbumDisposition:(int)arg1 params:(id)arg2 ;
-(void)_deleteAssetCollectionsDisposition:(int)arg1 params:(id)arg2 ;
-(void)_deleteCommentDisposition:(int)arg1 params:(id)arg2 ;
-(void)_createAlbumDisposition:(int)arg1 params:(id)arg2 ;
-(void)_updateAlbumDisposition:(int)arg1 params:(id)arg2 ;
-(id)_createHardlinkedOrCopiedAssetsInAssetCollections:(id)arg1 ;
-(void)_addAssetCollectionsDisposition:(int)arg1 params:(id)arg2 ;
-(id)_assetCollectionFailedError;
-(void)addAssetCollections:(id)arg1 toAlbum:(id)arg2 info:(id)arg3 ;
-(void)_deleteAssetFilesInAssetCollection:(id)arg1 ;
-(id)derivativeSpecifications;
-(void)_deleteAssetFilesInAssetCollections:(id)arg1 ;
-(void)_continueAddingAssetCollectionsDisposition:(int)arg1 params:(id)arg2 ;
-(void)_sendUploadCompleteDisposition:(int)arg1 params:(id)arg2 ;
-(void)_sendPutAssetCollectionsDisposition:(int)arg1 params:(id)arg2 ;
-(id)_assetCollectionRejectedError;
-(void)cancelOutstandingCommandsForAssetCollectionWithGUID:(id)arg1 ;
-(void)_sendGetUploadTokensDisposition:(int)arg1 params:(id)arg2 ;
-(void)_addSharingRelationshipsDisposition:(int)arg1 params:(id)arg2 ;
-(id)phoneInvitations;
-(id)memberQueueMetadataBackoffManager;
-(void)_removeSharingRelationshipsDisposition:(int)arg1 params:(id)arg2 ;
-(void)_addCommentDisposition:(int)arg1 params:(id)arg2 ;
-(void)_scheduleEventDisposition:(int)arg1 params:(id)arg2 ;
-(void)_setAssetInfoToReauthForDownload:(id)arg1 ;
-(id)_assetInfoToReauthForDownload;
-(void)_sendReauthorizeAssetsForDownloadDisposition:(int)arg1 params:(id)arg2 ;
-(void)workQueueScheduleReauthForAssets:(id)arg1 inAlbum:(id)arg2 ;
-(void)MSASAssetUploader:(id)arg1 didFinishUploadingAssetCollection:(id)arg2 intoAlbum:(id)arg3 error:(id)arg4 ;
-(void)MSASAssetDownloader:(id)arg1 willBeginBatchCount:(unsigned long long)arg2 ;
-(void)MSASAssetDownloader:(id)arg1 didFinishDownloadingAsset:(id)arg2 inAlbumGUID:(id)arg3 error:(id)arg4 ;
-(void)MSASAssetDownloaderDidFinishBatch:(id)arg1 ;
-(void)purgeEverythingCompletionBlock:(/*^block*/ id)arg1 ;
-(void)cancelOutstandingCommandsForAlbumWithGUID:(id)arg1 ;
-(void)setServerSideConfiguration:(id)arg1 ;
-(void)checkForUpdatesInAlbums:(id)arg1 resetSync:(bool)arg2 info:(id)arg3 ;
-(void)subscribeToAlbum:(id)arg1 info:(id)arg2 ;
-(void)unsubscribeFromAlbum:(id)arg1 info:(id)arg2 ;
-(void)checkForAssetCollectionUpdates:(id)arg1 inAlbum:(id)arg2 info:(id)arg3 ;
-(void)checkForCommentChanges:(id)arg1 inAlbumWithGUID:(id)arg2 ;
-(void)checkForAlbumSyncedStateChangesInAlbums:(id)arg1 info:(id)arg2 ;
-(void)setAlbumSyncedState:(id)arg1 forAlbum:(id)arg2 info:(id)arg3 ;
-(void)setAssetCollectionSyncedState:(id)arg1 forAssetCollection:(id)arg2 album:(id)arg3 info:(id)arg4 ;
-(void)deleteAlbum:(id)arg1 info:(id)arg2 ;
-(void)deleteAssetCollections:(id)arg1 inAlbum:(id)arg2 info:(id)arg3 ;
-(void)deleteComments:(id)arg1 inAssetCollection:(id)arg2 inAlbum:(id)arg3 info:(id)arg4 ;
-(void)createAlbum:(id)arg1 info:(id)arg2 ;
-(void)updateAlbum:(id)arg1 updateAlbumFlags:(int)arg2 info:(id)arg3 ;
-(void)continueAddingAssetCollections:(id)arg1 skipAssetCollections:(id)arg2 toAlbum:(id)arg3 info:(id)arg4 ;
-(void)addSharingRelationships:(id)arg1 toOwnedAlbum:(id)arg2 info:(id)arg3 ;
-(void)removeSharingRelationships:(id)arg1 fromOwnedAlbum:(id)arg2 info:(id)arg3 ;
-(void)addComments:(id)arg1 toAssetCollection:(id)arg2 inAlbum:(id)arg3 info:(id)arg4 ;
-(void)scheduleEvent:(id)arg1 assetCollectionGUID:(id)arg2 albumGUID:(id)arg3 info:(id)arg4 ;
-(void)setPublicAccessEnabled:(bool)arg1 forAlbum:(id)arg2 info:(id)arg3 completionBlock:(/*^block*/ id)arg4 ;
-(void)setMultipleContributorsEnabled:(bool)arg1 forAlbum:(id)arg2 info:(id)arg3 completionBlock:(/*^block*/ id)arg4 ;
-(void)videoURLForAssetCollection:(id)arg1 inAlbum:(id)arg2 completionBlock:(/*^block*/ id)arg3 ;
-(void)videoURLsForAssetCollection:(id)arg1 forMediaAssetType:(unsigned long long)arg2 inAlbum:(id)arg3 completionBlock:(/*^block*/ id)arg4 ;
-(id)focusAlbumGUID;
-(void)setPhoneInvitations:(id)arg1 ;
-(id)derivativeImageScalingSpecification;
-(id)thumbnailImageScalingSpecification;
-(void)setEventQueue:(id)arg1 ;
-(void)setServerSideConfigQueue:(id)arg1 ;
-(void)setMemberQueue:(id)arg1 ;
-(id)personID;
-(void)setPersonID:(id)arg1 ;
-(void)retryOutstandingActivities;
@end

