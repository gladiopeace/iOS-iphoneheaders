/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:27:11 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/SyncBundles/VoiceMemos.syncBundle/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ATClient <NSObject>
@optional
-(void)registerMessageHandlersWithLink:(id)arg1;
-(id)currentSyncAnchor;
-(bool)prepareForSyncWithHostAnchor:(id)arg1 progressCallback:(/*^block*/ id)arg2 error:(id*)arg3;
-(bool)prepareForSyncWithHostAnchor:(id)arg1 progressCallback:(/*^block*/ id)arg2 grappaID:(unsigned)arg3 hostVersion:(id)arg4 error:(id*)arg5;
-(bool)reconcileSync:(unsigned)arg1 withNewAnchor:(id)arg2 progressCallback:(/*^block*/ id)arg3 error:(id*)arg4;
-(void)syncEndedWithSuccess:(bool)arg1;
-(void)cancelSyncOperations;
-(bool)reconcileRestoreWithError:(id*)arg1;
-(void)restoreEndedWithError:(id)arg1;
-(id)outstandingAssetTransfers;
-(id)outstandingAssetTransfersWithDownloadManager:(id)arg1;
-(void)assetTransfer:(id)arg1 succeeded:(bool)arg2 withError:(id)arg3;
-(void)assetTransfer:(id)arg1 updatedProgress:(double)arg2;
-(void)metadataUpdate:(id)arg1 forAsset:(id)arg2 withNewAnchor:(id)arg3;
-(void)assetInstallFailed:(id)arg1 withError:(id)arg2;
-(void)assetInstallSucceeded:(id)arg1;
-(void)assetTransferEndedWithSuccess:(bool)arg1;
-(void)prioritizeAsset:(id)arg1;
-(void)prepareForBackup;
-(void)backupEnded;
-(void)pathsToBackup:(id*)arg1 pathsNotToBackup:(id*)arg2;
-(id)appleIDsForAssets;
-(bool)shouldRestoreFile:(id)arg1 backupManager:(id)arg2;
-(bool)shouldBackgroundRestorePath:(id)arg1 backupManager:(id)arg2;
-(bool)shouldBackgroundRestoreFile:(id)arg1 backupManager:(id)arg2;
-(void)clearSyncData;
-(id)disabledAssetTypes;
-(id)installedAssetMetrics;
-(id)installedAssets;

@required
-(id)supportedDataclasses;
@end

