/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:35 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/MDM.framework/MDM
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MDM/MCJobQueueObserver.h>

@protocol OS_dispatch_queue;
@class MCMDMServer, NSString, NSMutableDictionary, NSObject, MCJobQueue, MCUserNotificationManager;

@interface MCManagedAppManager : NSObject <MCJobQueueObserver> {

	MCMDMServer* _server;
	NSString* _manifestPath;
	NSMutableDictionary* _manifest;
	NSObject<OS_dispatch_queue>* _manifestQueue;
	MCJobQueue* _jobQueue;
	MCUserNotificationManager* _userNotificationManager;
	NSObject<OS_dispatch_queue>* _busyCountQueue;
	int _busyCount;

}

@property (assign,nonatomic,__weak) MCMDMServer * server;              //@synthesize server=_server - In the implementation block
+(id)stringForAppState:(int)arg1 ;
+(id)sharedManager;
-(id)server;
-(void)cleanUp;
-(void)setServer:(id)arg1 ;
-(void)retainBusy;
-(void)releaseBusy;
-(id)initWithManifestPath:(id)arg1 ;
-(void)busyCountQueueRetainBusy;
-(void)busyCountQueueReleaseBusy;
-(BOOL)manifestQueueHasMetadataForBundleID:(id)arg1 ;
-(void)manifestQueueCommitManifest;
-(id)manifestQueueManagedAppMetadataByBundleID;
-(void)manifestQueueSetManagedAppMetadataByBundleID:(id)arg1 ;
-(void)manifestQueueSetMetadata:(id)arg1 forBundleID:(id)arg2 ;
-(id)manifestQueueMetadataForBundleID:(id)arg1 ;
-(int)manifestQueueAppStateForBundleID:(id)arg1 ;
-(void)manifestQueueSetAppState:(int)arg1 forBundleID:(id)arg2 ;
-(void)cancelAppDownloadForBundleID:(id)arg1 ;
-(void)manifestQueueRemoveBundleID:(id)arg1 ;
-(BOOL)_isBundleIDInstalled:(id)arg1 ;
-(void)_promptUserForiTunesAccount:(id)arg1 accountNameEditable:(BOOL)arg2 canCreateNewAccount:(BOOL)arg3 completionBlock:(/*^block*/ id)arg4 ;
-(void)_displayAppInstallationAlertMessage:(id)arg1 isUpdate:(BOOL)arg2 completionBlock:(/*^block*/ id)arg3 ;
-(BOOL)_appBundleID:(id)arg1 wasInstalledOutIsManaged:(BOOL*)arg2 ;
-(void)_displayPromptForAppInstallationTitle:(id)arg1 bundleID:(id)arg2 isAppStore:(BOOL)arg3 isUpdate:(BOOL)arg4 completionBlock:(/*^block*/ id)arg5 ;
-(void)_displayPromptForStoreAppUpdateIfNeededPurchaserAccount:(id)arg1 purchase:(id)arg2 title:(id)arg3 bundleID:(id)arg4 completionBlock:(/*^block*/ id)arg5 ;
-(id)downloadingAppIDs;
-(id)_appAlreadyQueuedError:(id)arg1 ;
-(id)_bundleIDAlreadyInstalledError:(id)arg1 ;
-(void)_displayPromptForLoginCompletionBlock:(/*^block*/ id)arg1 ;
-(id)_cannotValidateAppIDError;
-(id)_cannotValidateAppIDErrorUnderlyingError:(id)arg1 ;
-(void)_searchPurchaseHistoryForITunesStoreID:(id)arg1 appIdentifier:(id)arg2 completionBlock:(/*^block*/ id)arg3 ;
-(BOOL)_willQueueAppBundleID:(id)arg1 forDownloadManagementFlags:(int)arg2 outRejectionReason:(id*)arg3 outIsUpdate:(BOOL*)arg4 outError:(id*)arg5 ;
-(void)_purchase:(id)arg1 completionBlock:(/*^block*/ id)arg2 ;
-(void)_displayAppInstallationFailureAlertTitle:(id)arg1 completionBlock:(/*^block*/ id)arg2 ;
-(void)_promptUserForStoreAppInstallationPurchase:(id)arg1 title:(id)arg2 bundleID:(id)arg3 requireAuthenticatedAccount:(BOOL)arg4 completionBlock:(/*^block*/ id)arg5 ;
-(void)_displayAppUpdateFailureAlertTitle:(id)arg1 completionBlock:(/*^block*/ id)arg2 ;
-(void)_promptUserForStoreAppUpdatePurchase:(id)arg1 title:(id)arg2 bundleID:(id)arg3 completionBlock:(/*^block*/ id)arg4 ;
-(void)_lookupItemIfNeededPurchaseHistoryPurchase:(id)arg1 mustRedownload:(BOOL)arg2 iTunesStoreID:(id)arg3 appIdentifier:(id)arg4 completionBlock:(/*^block*/ id)arg5 ;
-(void)searchPurchaseHistoryForITunesStoreID:(id)arg1 appIdentifier:(id)arg2 completionBlock:(/*^block*/ id)arg3 ;
-(void)_promptUserToLogInToITunesStoreIfNeededCompletionBlock:(/*^block*/ id)arg1 ;
-(id)_invalidManifestErrorWithURL:(id)arg1 underlyingError:(id)arg2 ;
-(void)_installEnterpriseAppManifestURL:(id)arg1 completionBlock:(/*^block*/ id)arg2 ;
-(void)_promptUserForEnterpriseAppUpdateManifestURL:(id)arg1 title:(id)arg2 bundleID:(id)arg3 completionBlock:(/*^block*/ id)arg4 ;
-(void)_promptUserForEnterpriseAppInstallationManifestURL:(id)arg1 title:(id)arg2 bundleID:(id)arg3 completionBlock:(/*^block*/ id)arg4 ;
-(id)bundleIDsWithFlags:(int)arg1 ;
-(BOOL)_advanceTransientStateForBundleID:(id)arg1 params:(id)arg2 outNewParams:(id*)arg3 outSetChanged:(BOOL*)arg4 ;
-(BOOL)hasMetadataForBundleID:(id)arg1 ;
-(id)managedAppMetadataByBundleID;
-(void)setMetadata:(id)arg1 forBundleID:(id)arg2 ;
-(id)metadataForBundleID:(id)arg1 ;
-(int)appStateForBundleID:(id)arg1 ;
-(void)setAppState:(int)arg1 forBundleID:(id)arg2 ;
-(void)removeBundleID:(id)arg1 ;
-(id)_notAnAppError;
-(void)installITunesStoreID:(id)arg1 appIdentifier:(id)arg2 managementFlags:(int)arg3 attributes:(id)arg4 configuration:(id)arg5 mustRedownload:(BOOL)arg6 completionBlock:(/*^block*/ id)arg7 ;
-(void)installManifestURL:(id)arg1 managementFlags:(int)arg2 attributes:(id)arg3 configuration:(id)arg4 completionBlock:(/*^block*/ id)arg5 ;
-(void)uninstallManagedAppsAccordingToFlags;
-(BOOL)applyRedemptionCode:(id)arg1 forBundleID:(id)arg2 outError:(id*)arg3 ;
-(BOOL)hasPendingInstallations;
-(void)updateApplicationInstallationStates;
-(void)advanceTransientStates;
-(void)advanceTransientStatesForBundleID:(id)arg1 ;
-(void)inviteUserToCloudVPPProgramURL:(id)arg1 completionBlock:(/*^block*/ id)arg2 ;
-(id)doNotBackupAppIDs;
-(void)jobQueueDidRetainBusy:(id)arg1 ;
-(void)jobQueueDidReleaseBusy:(id)arg1 ;
-(BOOL)isAppManaged:(id)arg1 ;
-(void).cxx_destruct;
@end

