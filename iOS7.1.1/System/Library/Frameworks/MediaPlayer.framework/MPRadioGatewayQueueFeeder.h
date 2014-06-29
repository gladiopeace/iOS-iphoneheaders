/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:30 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MPQueueFeeder.h>

@class MPAVItem, RadioStation;

@interface MPRadioGatewayQueueFeeder : MPQueueFeeder {

	MPAVItem* _gatewayItem;
	RadioStation* _station;

}

@property (nonatomic,retain) MPAVItem * gatewayItem;              //@synthesize gatewayItem=_gatewayItem - In the implementation block
@property (nonatomic,retain) RadioStation * station;              //@synthesize station=_station - In the implementation block
-(unsigned long long)itemCount;
-(id)copyRawItemAtIndex:(unsigned long long)arg1 ;
-(id)localizedAttributedPositionInPlaylistStringForItem:(id)arg1 withRegularTextAttributes:(id)arg2 emphasizedTextAttributes:(id)arg3 ;
-(id)localizedPositionInPlaylistString:(id)arg1 ;
-(bool)reloadWithDataSource:(id)arg1 keepPlayingCurrentItemIfPossible:(bool)arg2 ;
-(unsigned long long)initialPlaybackQueueDepth;
-(bool)canSkipItem:(id)arg1 ;
-(bool)canSkipToPreviousItem;
-(unsigned long long)itemTypeForIndex:(unsigned long long)arg1 ;
-(bool)playerPreparesItemsForPlaybackAsynchronously;
-(unsigned long long)realRepeatType;
-(id)station;
-(void)setStation:(id)arg1 ;
-(bool)reloadWithDataSource:(id)arg1 keepPlayingCurrentItemIfPossible:(bool)arg2 startPlayback:(bool)arg3 ;
-(bool)isRadioQueueFeeder;
-(id)gatewayItem;
-(void)setGatewayItem:(id)arg1 ;
-(void).cxx_destruct;
-(bool)canSeek;
@end

