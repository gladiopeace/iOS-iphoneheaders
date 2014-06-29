/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:58 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MusicUI/MusicUI-Structs.h>
#import <MusicUI/MusicMiniPlayerTransportControls.h>

@class UIImageView, MPImageCacheRequest;

@interface MusicMiniPlayerMusicTransportControls : MusicMiniPlayerTransportControls {

	UIImageView* _artworkImageView;
	MPImageCacheRequest* _currentImageCacheRequest;

}
+(unsigned long long)defaultVisibleParts;
+(id)_imageCache;
-(void)setItem:(id)arg1 ;
-(void)_avItemArtworkDidChangeNotification:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void).cxx_destruct;
-(void)_prospectivePlaybackInformationDidChangeAnimated:(bool)arg1 ;
-(void)_updateForItemChangeWithPreviousItem:(id)arg1 animated:(bool)arg2 ;
-(void)_updateItemArtwork;
-(id)_imageCacheRequestForItem:(id)arg1 ;
-(void)_nowPlayingButtonAction:(id)arg1 ;
@end

