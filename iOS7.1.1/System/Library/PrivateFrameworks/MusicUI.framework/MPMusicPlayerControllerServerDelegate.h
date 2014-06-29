/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:56 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MPMusicPlayerControllerServerDelegate <NSObject>
@required
-(void)musicPlayerServer:(id)arg1 setNowPlayingItem:(id)arg2;
-(id)nowPlayingItemForMusicPlayerServer:(id)arg1;
-(id)currentMediaQueryForMusicPlayerServer:(id)arg1;
-(id)currentRadioStationForMusicPlayerServer:(id)arg1;
-(void)musicPlayerServer:(id)arg1 setPlaybackSpeed:(long long)arg2;
-(long long)playbackSpeedForMusicPlayerServer:(id)arg1;
-(unsigned long long)indexOfNowPlayingItemForMusicPlayerServer:(id)arg1;
-(unsigned long long)unshuffledIndexOfNowPlayingItemForMusicPlayerServer:(id)arg1;
-(bool)isNowPlayingItemFromGeniusMixForMusicPlayerServer:(id)arg1;
-(void)musicPlayerServer:(id)arg1 registerForShuffleModeChangesWithChangeHandler:(/*^block*/ id)arg2;
-(void)musicPlayerServer:(id)arg1 registerForRepeatModeChangesWithChangeHandler:(/*^block*/ id)arg2;
-(id)playerForMusicPlayerServer:(id)arg1 usingApplicationSpecificQueue:(bool)arg2;
-(void)musicPlayerServer:(id)arg1 setFirstItem:(id)arg2;
-(void)musicPlayerServer:(id)arg1 setShuffleMode:(long long)arg2;
-(void)musicPlayerServer:(id)arg1 prepareQueueWithQuery:(id)arg2;
-(void)musicPlayerServer:(id)arg1 prepareQueueWithGeniusMixPlaylist:(id)arg2;
-(void)musicPlayerServer:(id)arg1 prepareQueueWithRadioStation:(id)arg2;
@end

