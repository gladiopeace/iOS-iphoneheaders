/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:35 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <RadioUI/RadioUI-Structs.h>
#import <MediaPlayerUI/MPUNowPlayingPlaybackControlsView.h>

@class UIButton;

@interface RUNowPlayingPlaybackControlsView : MPUNowPlayingPlaybackControlsView {

	UIButton* _infoButton;
	BOOL _isWide;

}

@property (assign,nonatomic,__weak) id<RUNowPlayingPlaybackControlsViewDelegate><MPTransportControlsTarget> delegate; 
@property (nonatomic,readonly) UIButton * infoButton;                                                                              //@synthesize infoButton=_infoButton - In the implementation block
-(id)newProgressIndicator;
-(void)dealloc;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIButton *)infoButton;
-(void)setShowingCreateLoadingIndicator:(BOOL)arg1 ;
-(void)_updateSizeClass;
-(Class)_transportControlsClass;
-(double)_volumeBottomVerticalInsetPhone;
-(CGRect)_boundsForCenteringCreateActivityIndicatorView;
-(BOOL)_shouldAddBottomGap;
-(double)_titlesLastResortVerticalOffsetPhone;
-(double)_transportControlsLastResortVerticalOffsetPhone;
-(void)_updateForItemDidChangeAnimated:(BOOL)arg1 ;
-(void)_infoButtonAction:(id)arg1 ;
-(BOOL)_isRadioItem;
-(void)_destroyInfoButtonAnimated:(BOOL)arg1 ;
@end

