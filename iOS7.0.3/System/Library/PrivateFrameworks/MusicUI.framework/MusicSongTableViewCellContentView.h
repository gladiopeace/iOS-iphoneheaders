/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:55 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MusicUI/MusicUI-Structs.h>
#import <MusicUI/MusicTableViewCellContentView.h>

@class UIImageView, MusicNowPlayingIndicatorView, MPUItemOfferButton;

@interface MusicSongTableViewCellContentView : MusicTableViewCellContentView {

	BOOL _explicitTrack;
	BOOL _geniusTrack;
	BOOL _playing;
	BOOL _itemOfferButtonNeedsSetup;
	UIImageView* _explicitImageView;
	UIImageView* _geniusImageView;
	MusicNowPlayingIndicatorView* _nowPlayingIndicatorView;
	MPUItemOfferButton* _itemOfferButton;

}

@property (assign,getter=isExplicitTrack,nonatomic) BOOL explicitTrack;                             //@synthesize explicitTrack=_explicitTrack - In the implementation block
@property (nonatomic,readonly) UIImageView * explicitImageView;                                     //@synthesize explicitImageView=_explicitImageView - In the implementation block
@property (assign,getter=isGeniusTrack,nonatomic) BOOL geniusTrack;                                 //@synthesize geniusTrack=_geniusTrack - In the implementation block
@property (nonatomic,readonly) UIImageView * geniusImageView;                                       //@synthesize geniusImageView=_geniusImageView - In the implementation block
@property (assign,getter=isPlaying,nonatomic) BOOL playing;                                         //@synthesize playing=_playing - In the implementation block
@property (nonatomic,readonly) MusicNowPlayingIndicatorView * nowPlayingIndicatorView;              //@synthesize nowPlayingIndicatorView=_nowPlayingIndicatorView - In the implementation block
@property (nonatomic,retain) MPUItemOfferButton * itemOfferButton;                                  //@synthesize itemOfferButton=_itemOfferButton - In the implementation block
@property (assign,nonatomic) BOOL itemOfferButtonNeedsSetup;                                        //@synthesize itemOfferButtonNeedsSetup=_itemOfferButtonNeedsSetup - In the implementation block
-(BOOL)isExplicitTrack;
-(BOOL)isPlaying;
-(void)drawRect:(CGRect)arg1 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setGeniusTrack:(BOOL)arg1 ;
-(void)setExplicitTrack:(BOOL)arg1 ;
-(id)nowPlayingIndicatorView;
-(id)explicitImageView;
-(void)setPlaying:(BOOL)arg1 ;
-(id)geniusImageView;
-(void)setItemOfferButton:(id)arg1 ;
-(void)_itemOfferButtonShowConfirmationAction:(id)arg1 ;
-(void)_itemOfferButtonCancelConfirmationAction:(id)arg1 ;
-(BOOL)isGeniusTrack;
-(BOOL)itemOfferButtonNeedsSetup;
-(void)setItemOfferButtonNeedsSetup:(BOOL)arg1 ;
-(void).cxx_destruct;
-(id)itemOfferButton;
@end

