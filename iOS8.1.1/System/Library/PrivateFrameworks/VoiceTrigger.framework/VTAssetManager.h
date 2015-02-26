/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:44 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface VTAssetManager : NSObject {

	int _assetMetadataUpdateNotificationToken;
	int _assetInstalledNotificationToken;
	NSObject*<OS_dispatch_queue> _serialAssetQueryQueue;

}
+(id)sharedInstance;
-(id)init;
-(void)_onetimeRemoteQuery;
-(void)_assetDownloaded:(int)arg1 ;
-(void)_metadataUpdated:(int)arg1 ;
-(id)_voicetriggerAssetFromASAsset:(id)arg1 ;
-(void)_startDownloadingVoiceTriggerAsset:(id)arg1 progress:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_voiceAssetQueryForLanguage:(id)arg1 contentVersion:(id)arg2 localOnly:(BOOL)arg3 ;
-(void)_runAssetQuery:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_downloadAsset:(id)arg1 ;
-(id)_defaultDownloadOptions;
-(id)resourcePathForLanguage:(id)arg1 outAsset:(id*)arg2 withTimeout:(double)arg3 ;
-(void)invalidateAsset:(id)arg1 ;
@end
