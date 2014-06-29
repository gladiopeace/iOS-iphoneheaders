/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:30 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface MPCloudAssetDownloadController : NSObject {

	NSMutableDictionary* _downloadSessionsForMediaItemIDs;
	bool _downloadSessionsPaused;
	unsigned long long _prioritizedMediaItemID;

}
+(id)sharedAssetDownloadController;
-(void)prioritizeDownloadSessionForMediaItem:(id)arg1 ;
-(id)assetForMediaItem:(id)arg1 assetOptions:(id)arg2 ;
-(void)_networkTypeChangedNotification:(id)arg1 ;
-(void)_matchCellularDataRestrictedDidChangeNotification:(id)arg1 ;
-(void)_cancelDownloadSession:(id)arg1 ;
-(void)_resumedPausedDownloadSessionsForCompletedMediaItemID:(unsigned long long)arg1 ;
-(void)_removeNotificationObserversForDownloadSession:(id)arg1 ;
-(id)_lowBitrateCachedAssetDestinationDirectory;
-(id)_cachedAssetDestinationDirectory;
-(void)_stopDownloadsBasedOnCurrentNetworkIfNeeded;
-(bool)_canPlayCachedAssetAtPath:(id)arg1 ;
-(id)_newAVAssetForMediaItem:(id)arg1 assetOptions:(id)arg2 ;
-(id)_newAssetForExistingDownloadSession:(id)arg1 assetOptions:(id)arg2 ;
-(id)_urlConnectionRequestForMediaItem:(id)arg1 ;
-(id)_newAVAssetForPurchaseResponseDictionary:(id)arg1 mediaItem:(id)arg2 preferredAssetFlavor:(id)arg3 assetOptions:(id)arg4 ;
-(bool)_mediaItemHasDownloadSessionForPersistentID:(unsigned long long)arg1 ;
-(void)_prioritizeDownloadSessionForMediaItemPersistentID:(unsigned long long)arg1 ;
-(id)_downloadKeyCookieWithValue:(id)arg1 URL:(id)arg2 ;
-(void)_downloadSucceededNotification:(id)arg1 ;
-(void)_downloadFailedNotification:(id)arg1 ;
-(void)_downloadFileSizeAvailableNotification:(id)arg1 ;
-(bool)mediaItemHasDownloadSession:(id)arg1 ;
-(void)pauseAllDownloadSessions;
-(void)resumeAllDownloadSessions;
-(void)dealloc;
-(id)init;
-(void).cxx_destruct;
@end

