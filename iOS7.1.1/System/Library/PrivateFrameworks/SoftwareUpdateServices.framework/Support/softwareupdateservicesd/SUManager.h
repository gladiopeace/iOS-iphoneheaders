/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 4:55:58 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/Support/softwareupdateservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SUNetworkObserver.h>

@protocol SUManagerDelegate;
@class SUState, SUScanOptions, NSMutableArray, ASAsset, MSUUpdateBrainAssetLoader, SUDownload, SUOperationProgress, NSTimer;

@interface SUManager : NSObject <SUNetworkObserver> {

	<SUManagerDelegate>* _delegate;
	SUState* _state;
	BOOL _foreground;
	SUScanOptions* _autoScanOptions;
	BOOL _scanning;
	NSMutableArray* _scanRequests;
	ASAsset* _assetToDownloadFromLastScan;
	MSUUpdateBrainAssetLoader* _brainAssetDownloader;
	BOOL _downloading;
	ASAsset* _downloadAsset;
	SUDownload* _download;
	SUOperationProgress* _downloadProgressSnapshot;
	NSTimer* _documentationDownloadTimer;
	BOOL _installing;
	BOOL _installed;

}

@property (assign,nonatomic) <SUManagerDelegate> * delegate;                              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isForeground,nonatomic) BOOL foreground;                         //@synthesize foreground=_foreground - In the implementation block
@property (nonatomic,retain) SUState * state;                                             //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) SUDownload * download;                                       //@synthesize download=_download - In the implementation block
@property (assign,getter=isDownloading,nonatomic,@dynamic) BOOL downloading; 
@property (assign,getter=isScanning,nonatomic) BOOL scanning;                             //@synthesize scanning=_scanning - In the implementation block
@property (assign,getter=isInstalling,nonatomic) BOOL installing;                         //@synthesize installing=_installing - In the implementation block
@property (nonatomic,retain) ASAsset * downloadAsset;                                     //@synthesize downloadAsset=_downloadAsset - In the implementation block
@property (nonatomic,retain) ASAsset * assetToDownloadFromLastScan;                       //@synthesize assetToDownloadFromLastScan=_assetToDownloadFromLastScan - In the implementation block
+(id)sharedInstance;
+(void)initialize;
-(BOOL)isInstalling;
-(void)noteAutodownloadFailedToStartWithError:(id)arg1 ;
-(void)tryAutodownload;
-(void)endAutodownloadTasksAndResetState;
-(void)autoScanAndDownloadIfAvailable:(int)arg1 ;
-(void)_autoDownloadWiFiPeriodDidEnd;
-(void)_setupManualDownloadPolicyPeriodIfNecessary:(id)arg1 fromDate:(id)arg2 save:(BOOL)arg3 ;
-(BOOL)_updateAssetDownloadOptions;
-(void)_resumeFromLastKnownState;
-(void)setDownloading:(BOOL)arg1 ;
-(void)setDownloadAsset:(id)arg1 ;
-(void)setDownload:(id)arg1 ;
-(BOOL)__startBrainAssetDownload;
-(void)_updateLastSavedDownloadPhase:(id)arg1 ;
-(void)_verifyAndPrepareUpdate;
-(BOOL)__startUpdateAssetDownload:(BOOL)arg1 ;
-(void)_purgeSUAsset:(id)arg1 ;
-(BOOL)_doAutodownload:(id)arg1 error:(id*)arg2 ;
-(BOOL)startDownloadWithMetadata:(id)arg1 error:(id*)arg2 ;
-(void)_cleanupPreviousDownload;
-(void)_tryOrScheduleAutodownloadWithPolicy:(id)arg1 allowOneTimeRetry:(BOOL)arg2 ;
-(void)scanForUpdates:(id)arg1 complete:(/*^block*/ id)arg2 ;
-(BOOL)_isWithinAutodownloadWifiWindow;
-(void)_endOrRescheduleAutodownloadRetryInOneDay:(id)arg1 ;
-(void)_endAutodownloadTasksAndResetState:(BOOL)arg1 ;
-(BOOL)_isDateWithinAutodownloadWifiWindow:(id)arg1 ;
-(BOOL)isDownloadHalted;
-(BOOL)_cancelDownload:(BOOL)arg1 userRequested:(BOOL)arg2 error:(id*)arg3 ;
-(void)notifyScanRequestDidStart:(id)arg1 ;
-(void)setScanning:(BOOL)arg1 ;
-(void)setAssetToDownloadFromLastScan:(id)arg1 ;
-(void)notifyScanRequestDidFinish:(id)arg1 update:(id)arg2 error:(id)arg3 ;
-(void)notifyScanDidComplete:(id)arg1 error:(id)arg2 ;
-(void)_sendDownloadInvalidatedForNewDescriptor:(id)arg1 ;
-(void)_doScanWithCompletion:(/*^block*/ id)arg1 ;
-(void)_fetchDocumentationFromSoftwareUpdateAsset:(id)arg1 completion:(/*^block*/ id)arg2 ;
-(void)_remoteQueryWithMatcher:(id)arg1 completion:(/*^block*/ id)arg2 ;
-(void)_scheduleDocumentationDownloadTimeoutTimer:(id)arg1 ;
-(void)_invalidateDocumentationDownloadTimeoutTimer;
-(void)_documentationDownloadTimeout:(id)arg1 ;
-(BOOL)_killDownload:(BOOL)arg1 userRequested:(BOOL)arg2 error:(id*)arg3 ;
-(void)_downloadFailedWithError:(id)arg1 ;
-(void)_updateLastSavedDownloadsMetadata:(id)arg1 ;
-(int)_downloadPriority;
-(id)_computedDownloadOptions;
-(id)assetToDownloadFromLastScan;
-(void)_cleanupPreviousDownload:(BOOL)arg1 ;
-(BOOL)_reapplyExistingDownloadPolicyIfDownloadable:(BOOL)arg1 ;
-(void)_updateDownloadStatusForBrainAssetState:(id)arg1 ;
-(void)_updateDownloadStatusForUpdateAssetState:(id)arg1 ;
-(BOOL)cancelDownloadUserRequested:(BOOL)arg1 error:(id*)arg2 ;
-(int)_orderForPhase:(id)arg1 ;
-(BOOL)_isPhase:(id)arg1 afterPhase:(id)arg2 ;
-(void)_notePhaseCompleted:(id)arg1 ;
-(void)_changeDownloadPhase:(id)arg1 state:(id)arg2 ;
-(void)_updateNormalizedDownloadProgressAndNotifyDelegate;
-(void)_updateNormalizedDownloadProgress;
-(BOOL)_shouldSendUpdatedProgressToDelegate;
-(void)_snapshotProgress;
-(void)_setVerifyExclusions:(id)arg1 ;
-(void)_downloadFinished;
-(void)setInstalling:(BOOL)arg1 ;
-(void)resumeOrResetIfNecessary;
-(BOOL)purgeDownloadUserRequested:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)updateDownloadMetadata:(id)arg1 error:(id*)arg2 ;
-(BOOL)_isPhase:(id)arg1 beforePhase:(id)arg2 ;
-(BOOL)isDownloading;
-(BOOL)pauseDownload:(id*)arg1 ;
-(id)download;
-(id)downloadAsset;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(id)state;
-(void)setState:(id)arg1 ;
-(BOOL)isScanning;
-(BOOL)isForeground;
-(void)setForeground:(BOOL)arg1 ;
-(BOOL)startDownload:(id*)arg1 ;
-(BOOL)isUpdateReadyForInstallation:(id*)arg1 ;
-(BOOL)installUpdate:(id*)arg1 ;
-(void)operatorBundleChanged;
-(void)resumeDownload:(id*)arg1 ;
@end

