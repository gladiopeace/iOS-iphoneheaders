/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:26:57 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <YouTube/YouTube-Structs.h>
#import <UIKit/UIView.h>

@class YTVideo, NSArray, NSURL, YTSearchRequest, UIMoviePlayerController, UIImageView, UILabel;

@interface YTMovieView : UIView {

	id _delegate;
	YTVideo* _video;
	NSArray* _videoList;
	NSURL* _youTubeURL;
	YTSearchRequest* _videoInfoRequest;
	UIMoviePlayerController* _moviePlayer;
	UIImageView* _bugView;
	UIImageView* _gradientView;
	BOOL _canAutoPlay;
	BOOL _shownFromExternalURL;
	BOOL _switchingVideos;
	BOOL _controlsShown;
	BOOL _useSmallLogo;
	BOOL _showControlsAfterFullscreenExit;
	BOOL _isShown;
	double _seekTime;
	UILabel* _logLabel;

}
-(void)setFullscreen:(BOOL)arg1 ;
-(void)play;
-(void)moviePlayerDidShowOverlay:(id)arg1 ;
-(void)moviePlayerDidHideOverlay:(id)arg1 ;
-(id)fullscreenView;
-(BOOL)moviePlayerAddBookmarkButtonPressed:(id)arg1 ;
-(BOOL)moviePlayerBackwardButtonPressed:(id)arg1 ;
-(BOOL)moviePlayerEmailButtonPressed:(id)arg1 ;
-(BOOL)moviePlayerForwardButtonPressed:(id)arg1 ;
-(void)moviePlayerWillEnterFullscreen:(id)arg1 ;
-(void)moviePlayerDidEnterFullscreen:(id)arg1 ;
-(void)moviePlayerWillExitFullscreen:(id)arg1 ;
-(void)moviePlayerDidExitFullscreen:(id)arg1 ;
-(void)moviePlayerWillShowOverlay:(id)arg1 ;
-(void)moviePlayerWillHideOverlay:(id)arg1 ;
-(CGRect)moviePlayerFrameAfterFullscreenExit:(id)arg1 ;
-(BOOL)moviePlayerHeadsetNextTrackPressed:(id)arg1 ;
-(BOOL)moviePlayerHeadsetPreviousTrackPressed:(id)arg1 ;
-(void)moviePlayerBufferingStateDidChange:(id)arg1 ;
-(void)moviePlayerPlaybackStateDidChange:(id)arg1 fromPlaybackState:(unsigned long long)arg2 ;
-(void)moviePlayerPlaybackDidEnd:(id)arg1 ;
-(BOOL)moviePlayerExitRequest:(id)arg1 exitReason:(int)arg2 ;
-(BOOL)moviePlayer:(id)arg1 validateAction:(SEL)arg2 ;
-(BOOL)canContinuePlayingWhenLocked;
-(id)moviePlayer;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(long long)orientation;
-(void)pause;
-(id)video;
-(BOOL)isPlaying;
-(void)searchRequest:(id)arg1 receivedVideos:(id)arg2 startIndex:(unsigned)arg3 videosRemaining:(unsigned)arg4 ;
-(void)searchRequest:(id)arg1 didFailWithError:(id)arg2 ;
-(void)_updateCaptionsForMovie;
-(void)_destroyMoviePlayer;
-(BOOL)_loggingEnabled;
-(void)_setupBackground;
-(BOOL)_canShare;
-(BOOL)_canBookmark;
-(void)_cancelVideoInfoRequest;
-(void)_switchToVideo:(id)arg1 ;
-(void)_loadVideoInfoWithID:(id)arg1 ;
-(void)setCanAutoPlay:(BOOL)arg1 ;
-(void)_loadVideoFromURL:(BOOL)arg1 ;
-(void)_hideOverlay;
-(void)_hideBug;
-(void)_presentAlertForError:(id)arg1 reasonCode:(id)arg2 ;
-(void)setSeekTime:(double)arg1 ;
-(void)willShowForVideo:(id)arg1 inList:(id)arg2 orVideoID:(id)arg3 ;
-(void)didShow;
-(void)willHide;
-(void)didHide;
-(void)willShowAlert;
-(void)useSmallLogo:(BOOL)arg1 ;
-(void)shareSheetWillShow;
-(void)shareSheetDidHide;
-(void)forceControlsVisible:(BOOL)arg1 ;
@end

