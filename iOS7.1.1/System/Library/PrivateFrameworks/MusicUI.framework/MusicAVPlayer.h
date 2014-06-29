/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:58 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MPAVController.h>

@protocol OS_dispatch_queue;
@class NSObject, RadioStation;

@interface MusicAVPlayer : MPAVController {

	NSObject<OS_dispatch_queue>* _accessQueue;
	NSObject<OS_dispatch_queue>* _lastPlayedStationSaveQueue;
	bool _checkedDefaultsForLastPlayedStation;
	RadioStation* _lastPlayedStation;

}

@property (nonatomic,readonly) RadioStation * currentStation; 
@property (nonatomic,retain) RadioStation * lastPlayedStation; 
+(id)sharedAVPlayer;
-(void)_networkTypeDidChangeNotification:(id)arg1 ;
-(id)_expectedAssetTypesForPlaybackMode:(int)arg1 ;
-(void)_downloadCancelledNotification:(id)arg1 ;
-(void)_matchCellularRestrictedDidChangeNotification:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void).cxx_destruct;
-(void)reloadWithPlaybackContext:(id)arg1 ;
-(id)currentStation;
-(void)_previewSessionDidStopNotification:(id)arg1 ;
-(void)_currentStationDidChangeNotification:(id)arg1 ;
-(void)_reloadLastPlayedStation;
-(void)_endPlaybackIfNeededForCurrentNetwork;
-(id)lastPlayedStation;
-(void)beginPlayback;
-(void)setLastPlayedStation:(id)arg1 ;
-(void)_musicPlayer_defaultsDidChangeNotification;
-(void)beginOrTogglePlayback;
-(void)seekAlbum:(int)arg1 ;
-(void)seekPlaylist:(int)arg1 ;
@end

