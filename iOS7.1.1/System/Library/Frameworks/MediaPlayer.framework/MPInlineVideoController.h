/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:30 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MPVolumeControllerDelegate.h>
#import <MediaPlayer/MPVideoControllerProtocol.h>
#import <MediaPlayer/MPSwipableViewDelegate.h>
#import <MediaPlayer/MPVideoOverlayDelegate.h>
#import <MediaPlayer/MPTransportControlsTarget.h>
#import <UIKit/UIAlertViewDelegate.h>
#import <UIKit/UIPopoverControllerDelegate.h>

@class MPAVItem, MPAVController, MPVideoBackgroundView, UIColor, UIImage, MPSwipableView, MPVideoPlaybackOverlayView, NSString, UIView, UIAlertView, UIWindow, MPInlineAudioOverlay, UINavigationController, MPVideoContainerView, UITapGestureRecognizer, MPInlineVideoFullscreenViewController, MPWeakTimer, UIActivityIndicatorView, UIPinchGestureRecognizer, MPAudioVideoRoutingPopoverController, MPTVOutWindow, NSSet, MPVolumeController, _UIHostedWindow, MPVideoView;

@interface MPInlineVideoController : NSObject <MPVolumeControllerDelegate, MPVideoControllerProtocol, MPSwipableViewDelegate, MPVideoOverlayDelegate, MPTransportControlsTarget, UIAlertViewDelegate, UIPopoverControllerDelegate> {

	id _delegate;
	MPAVItem* _item;
	MPAVController* _player;
	long long _activeOverlayUserEvents;
	bool _automaticallyHandleTransportControls;
	bool _allowsDetailScrubbing;
	bool _allowsWirelessPlayback;
	bool _alwaysAllowHidingControlsOverlay;
	int _artworkImageStyle;
	bool _attemptAutoPlayWhenControlsHidden;
	MPVideoBackgroundView* _backgroundView;
	UIColor* _backstopColor;
	bool _canAnimateControlsOverlay;
	bool _canShowControlsOverlay;
	bool _controlsOverlayVisible;
	unsigned long long _desiredParts;
	unsigned long long _disabledParts;
	bool _disableAutoRotation;
	bool _disableControlsAutohide;
	bool _displayPlaybackErrorAlerts;
	bool _inlinePlaybackUsesTVOut;
	unsigned long long _itemTypeOverride;
	UIImage* _posterImage;
	unsigned long long _scaleMode;
	bool _TVOutEnabled;
	bool _TVOutEnabledMaster;
	bool _useHostedWindowWhenFullscreen;
	MPSwipableView* _view;
	MPVideoPlaybackOverlayView* _videoOverlayView;
	unsigned long long _visibleParts;
	long long _audioOverlayStyle;
	bool _navigationBarHidden;
	NSString* _playbackErrorDescription;
	long long _videoOverlayStyle;
	UIView* _advertisementView;
	UIAlertView* _alertSheet;
	UIWindow* _alternateTracksWindow;
	MPInlineAudioOverlay* _audioOverlayView;
	unsigned long long _backgroundTaskId;
	bool _batteryMonitoringWasEnabled;
	UINavigationController* _chaptersContainerController;
	MPVideoContainerView* _containerView;
	UITapGestureRecognizer* _doubleTapGestureRecognizer;
	MPInlineVideoFullscreenViewController* _fullscreenViewController;
	bool _fullscreenViewSizeIsExternallyManaged;
	UIWindow* _fullscreenWindow;
	bool _hasShownFirstVideoFrame;
	MPWeakTimer* _idleTimer;
	bool _inCloneMirrorMode;
	bool _isAnimatingOverlay;
	bool _isTransitioningFromFullscreen;
	bool _isTransitioningToFullscreen;
	UIActivityIndicatorView* _loadingIndicator;
	UIPinchGestureRecognizer* _pinchGestureRecognizer;
	MPAudioVideoRoutingPopoverController* _routePopoverController;
	unsigned long long _scaleModeOverride;
	bool _scheduledLoadingIndicator;
	UIView* _subtitlesView;
	bool _swallowNextTapGesture;
	UITapGestureRecognizer* _tapGestureRecognizer;
	MPTVOutWindow* _tvOutWindow;
	UIView* _videoBackgroundView;
	NSSet* _viewsToFade;
	bool _wantsOverlayVisibleWhenItemIsAvailable;
	bool _wasPlaying;
	UIWindow* _windowForDisablingAutorotation;
	UIWindow* _windowForFullscreenTransition;
	bool _shouldDestroyVideoSnapshot;
	MPVolumeController* _volumeController;

}

@property (nonatomic,readonly) UIView * advertisementView;                             //@synthesize advertisementView=_advertisementView - In the implementation block
@property (assign,nonatomic) long long audioOverlayStyle;                              //@synthesize audioOverlayStyle=_audioOverlayStyle - In the implementation block
@property (assign,nonatomic) bool automaticallyHandleTransportControls;                //@synthesize automaticallyHandleTransportControls=_automaticallyHandleTransportControls - In the implementation block
@property (nonatomic,readonly) UIView * fullscreenView; 
@property (nonatomic,copy) NSString * playbackErrorDescription;                        //@synthesize playbackErrorDescription=_playbackErrorDescription - In the implementation block
@property (assign,nonatomic) bool navigationBarHidden;                                 //@synthesize navigationBarHidden=_navigationBarHidden - In the implementation block
@property (nonatomic,readonly) UIView * subtitlesView;                                 //@synthesize subtitlesView=_subtitlesView - In the implementation block
@property (assign,nonatomic) long long videoOverlayStyle;                              //@synthesize videoOverlayStyle=_videoOverlayStyle - In the implementation block
@property (assign,nonatomic,__weak) id delegate;                                       //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) MPAVItem * item;                                          //@synthesize item=_item - In the implementation block
@property (assign,nonatomic) long long orientation; 
@property (nonatomic,retain) MPAVController * player;                                  //@synthesize player=_player - In the implementation block
@property (nonatomic,readonly) UIView * view; 
@property (assign,nonatomic) bool allowsDetailScrubbing;                               //@synthesize allowsDetailScrubbing=_allowsDetailScrubbing - In the implementation block
@property (assign,nonatomic) bool allowsWirelessPlayback;                              //@synthesize allowsWirelessPlayback=_allowsWirelessPlayback - In the implementation block
@property (assign,nonatomic) bool alwaysAllowHidingControlsOverlay;                    //@synthesize alwaysAllowHidingControlsOverlay=_alwaysAllowHidingControlsOverlay - In the implementation block
@property (assign,nonatomic) int artworkImageStyle;                                    //@synthesize artworkImageStyle=_artworkImageStyle - In the implementation block
@property (assign,nonatomic) bool attemptAutoPlayWhenControlsHidden;                   //@synthesize attemptAutoPlayWhenControlsHidden=_attemptAutoPlayWhenControlsHidden - In the implementation block
@property (nonatomic,readonly) UIView * backgroundView;                                //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) UIColor * backstopColor;                                  //@synthesize backstopColor=_backstopColor - In the implementation block
@property (assign,nonatomic) bool canAnimateControlsOverlay;                           //@synthesize canAnimateControlsOverlay=_canAnimateControlsOverlay - In the implementation block
@property (nonatomic,readonly) bool canChangeScaleMode; 
@property (assign,nonatomic) bool canShowControlsOverlay;                              //@synthesize canShowControlsOverlay=_canShowControlsOverlay - In the implementation block
@property (assign,nonatomic) bool controlsOverlayVisible;                              //@synthesize controlsOverlayVisible=_controlsOverlayVisible - In the implementation block
@property (assign,nonatomic) unsigned long long desiredParts;                          //@synthesize desiredParts=_desiredParts - In the implementation block
@property (assign,nonatomic) bool disableAutoRotation;                                 //@synthesize disableAutoRotation=_disableAutoRotation - In the implementation block
@property (assign,nonatomic) bool disableControlsAutohide; 
@property (assign,nonatomic) unsigned long long disabledParts;                         //@synthesize disabledParts=_disabledParts - In the implementation block
@property (assign,nonatomic) bool displayPlaybackErrorAlerts;                          //@synthesize displayPlaybackErrorAlerts=_displayPlaybackErrorAlerts - In the implementation block
@property (nonatomic,readonly) _UIHostedWindow * hostedWindow; 
@property (nonatomic,readonly) unsigned hostedWindowContextID; 
@property (assign,nonatomic) bool inlinePlaybackUsesTVOut;                             //@synthesize inlinePlaybackUsesTVOut=_inlinePlaybackUsesTVOut - In the implementation block
@property (assign,nonatomic) unsigned long long itemTypeOverride;                      //@synthesize itemTypeOverride=_itemTypeOverride - In the implementation block
@property (assign,getter=isFullscreen,nonatomic) bool fullscreen; 
@property (nonatomic,retain) UIImage * posterImage;                                    //@synthesize posterImage=_posterImage - In the implementation block
@property (assign,nonatomic) unsigned long long scaleMode;                             //@synthesize scaleMode=_scaleMode - In the implementation block
@property (assign,nonatomic) bool TVOutEnabled;                                        //@synthesize TVOutEnabled=_TVOutEnabled - In the implementation block
@property (nonatomic,readonly) bool viewControllerWillRequestExit; 
@property (nonatomic,readonly) UIView<MPVideoOverlay> * videoOverlayView; 
@property (nonatomic,readonly) MPVideoView * videoView; 
@property (assign,nonatomic) unsigned long long visibleParts;                          //@synthesize visibleParts=_visibleParts - In the implementation block
@property (assign,nonatomic) bool autoPlayWhenLikelyToKeepUp; 
-(bool)isFullscreen;
-(void)setFullscreen:(bool)arg1 ;
-(void)setFullscreen:(bool)arg1 animated:(bool)arg2 ;
-(void)setScaleModeOverride:(unsigned long long)arg1 animated:(bool)arg2 ;
-(unsigned long long)scaleMode;
-(void)setCanShowControlsOverlay:(bool)arg1 ;
-(void)setAutoPlayWhenLikelyToKeepUp:(bool)arg1 ;
-(void)setAllowsWirelessPlayback:(bool)arg1 ;
-(bool)allowsWirelessPlayback;
-(bool)TVOutEnabled;
-(void)setItem:(id)arg1 ;
-(void)setItemTypeOverride:(unsigned long long)arg1 ;
-(id)videoView;
-(bool)canShowControlsOverlay;
-(void)setVideoSnapshotEnabled:(bool)arg1 ;
-(void)displayVideoView;
-(void)setControlsOverlayVisible:(bool)arg1 animate:(bool)arg2 ;
-(id)advertisementView;
-(bool)controlsOverlayVisible;
-(bool)navigationBarHidden;
-(id)videoOverlayView;
-(unsigned long long)visibleParts;
-(unsigned long long)desiredParts;
-(void)setDesiredParts:(unsigned long long)arg1 ;
-(void)setVisibleParts:(unsigned long long)arg1 ;
-(bool)alwaysAllowHidingControlsOverlay;
-(void)setAlwaysAllowHidingControlsOverlay:(bool)arg1 ;
-(void)setControlsOverlayVisible:(bool)arg1 animate:(bool)arg2 force:(bool)arg3 ;
-(void)setVideoOverlayStyle:(long long)arg1 ;
-(void)setDisplayPlaybackErrorAlerts:(bool)arg1 ;
-(void)setUseHostedWindowWhenFullscreen:(bool)arg1 ;
-(void)setTVOutEnabled:(bool)arg1 ;
-(void)setInlinePlaybackUsesTVOut:(bool)arg1 ;
-(bool)inlinePlaybackUsesTVOut;
-(id)hostedWindow;
-(unsigned)hostedWindowContextID;
-(void)setDisabledParts:(unsigned long long)arg1 ;
-(void)_playbackStateChanged:(id)arg1 ;
-(void)clearWeakReferencesToObject:(id)arg1 ;
-(id)subtitlesView;
-(void)setAttemptAutoPlayWhenControlsHidden:(bool)arg1 ;
-(void)setClosedCaptions:(id)arg1 ;
-(void)setPosterImage:(id)arg1 ;
-(void)setAutomaticallyHandleTransportControls:(bool)arg1 ;
-(void)setArtworkImageStyle:(int)arg1 ;
-(void)setCanAnimateControlsOverlay:(bool)arg1 ;
-(void)setDisableControlsAutohide:(bool)arg1 ;
-(void)setAudioOverlayStyle:(long long)arg1 ;
-(void)setPlaybackErrorDescription:(id)arg1 ;
-(void)setOrientation:(long long)arg1 animate:(bool)arg2 ;
-(void)noteIgnoredChangeTypes:(unsigned long long)arg1 ;
-(void)setDisableAutoRotation:(bool)arg1 ;
-(void)setDesiredParts:(unsigned long long)arg1 animate:(bool)arg2 ;
-(void)setVisibleParts:(unsigned long long)arg1 animate:(bool)arg2 ;
-(bool)canHideOverlay:(bool)arg1 ;
-(void)setAllowsDetailScrubbing:(bool)arg1 ;
-(void)setControlsNeedLayout;
-(id)fullscreenView;
-(bool)viewControllerWillRequestExit;
-(void)prepareToDisplayVideo;
-(id)playbackErrorDescription;
-(void)_applicationSuspended:(id)arg1 ;
-(void)_isExternalPlaybackActiveDidChange:(id)arg1 ;
-(void)_sizeDidChange:(id)arg1 ;
-(void)_firstVideoFrameDisplayed:(id)arg1 ;
-(bool)autoPlayWhenLikelyToKeepUp;
-(void)_screenDidConnect:(id)arg1 ;
-(void)_screenDidDisconnect:(id)arg1 ;
-(bool)disableControlsAutohide;
-(int)artworkImageStyle;
-(unsigned long long)itemTypeOverride;
-(unsigned long long)_itemTypeWithActualTypePreference;
-(bool)_canEnableAirPlayVideoRoutes;
-(bool)canChangeScaleMode;
-(void)setScaleMode:(unsigned long long)arg1 ;
-(void)_updateProgressControlForItem:(id)arg1 ;
-(void)_updateAlwaysPlayWheneverPossible;
-(void)_scheduleLoadingIndicatorIfNeeded;
-(void)_hideLoadingIndicator;
-(void)_updateIdleTimerDisabledFromPlaybackState:(unsigned long long)arg1 ;
-(void)_delayedUpdateBackgroundView;
-(bool)canShowQTAudioOnlyUI;
-(void)_showStillFrameIfNotAlreadyPlaying;
-(unsigned long long)disabledParts;
-(void)exitFullscreen;
-(void)showAlternateTracksController:(id)arg1 ;
-(void)setOwnsStatusBar:(bool)arg1 ;
-(bool)allowsDetailScrubbing;
-(bool)attemptAutoPlayWhenControlsHidden;
-(id)backstopColor;
-(void)setBackstopColor:(id)arg1 ;
-(bool)canAnimateControlsOverlay;
-(void)setControlsOverlayVisible:(bool)arg1 ;
-(bool)disableAutoRotation;
-(bool)displayPlaybackErrorAlerts;
-(void)swipableView:(id)arg1 didMoveToSuperview:(id)arg2 ;
-(void)swipableView:(id)arg1 willMoveToWindow:(id)arg2 ;
-(void)swipableViewHadActivity:(id)arg1 ;
-(void)chapterList:(id)arg1 selectedChapter:(unsigned long long)arg2 ;
-(bool)transportControls:(id)arg1 tappedButtonPart:(unsigned long long)arg2 ;
-(void)overlayTappedBackButton:(id)arg1 ;
-(void)overlayTappedFullscreenButton:(id)arg1 ;
-(void)_durationAvailable:(id)arg1 ;
-(void)_effectiveScaleModeDidChange:(id)arg1 ;
-(void)overlay:(id)arg1 didBeginUserEvent:(long long)arg2 ;
-(void)overlay:(id)arg1 didCancelUserEvent:(long long)arg2 ;
-(void)overlay:(id)arg1 didEndUserEvent:(long long)arg2 ;
-(bool)automaticallyHandleTransportControls;
-(void)volumeController:(id)arg1 volumeValueDidChange:(float)arg2 ;
-(void)_unregisterForPlayerNotifications;
-(void)_registerForPlayerNotifications;
-(void)_availableRoutesChanged:(id)arg1 ;
-(void)_itemTypeAvailable:(id)arg1 ;
-(void)_applicationResumedEventsOnly:(id)arg1 ;
-(void)_applicationDidFinishSuspensionSnapshot:(id)arg1 ;
-(void)_batteryStateDidChange:(id)arg1 ;
-(void)_destroyAudioOverlayView;
-(void)_destroyVideoOverlayView;
-(void)_setupSubviews;
-(void)_enableAirPlayVideoRoutesIfNecessary;
-(void)_updateBackgroundViewInformation;
-(void)_updateDisableAirPlayMirroringDuringPlayback;
-(unsigned long long)_effectiveItemType;
-(void)_viewWasTapped:(id)arg1 ;
-(void)_viewWasPinched:(id)arg1 ;
-(bool)_isAnimatingFullscreenTransition;
-(void)_setupTVOutWindow;
-(void)_transitionFromFullscreenAnimated:(bool)arg1 ;
-(void)_scaleModeDidChange:(id)arg1 ;
-(void)_showOverlayAnimated:(bool)arg1 ;
-(void)_hideOverlayAnimated:(bool)arg1 ;
-(void)_cancelOverlayIdleTimer;
-(void)_resetOverlayIdleTimer;
-(void)_transitionToFullscreenAnimated:(bool)arg1 ;
-(void)_updateTVOutEnabled;
-(bool)_useInlineControls;
-(void)_updateDoubleTapGestureRecognizer;
-(void)_showVideoSnapshotView;
-(void)_destroyVideoSnapshotView;
-(void)_tearDownTVOutWindow;
-(void)_showChapters;
-(void)_transitionFromFullscreenAnimated:(bool)arg1 fromDoneButton:(bool)arg2 ;
-(void)_doneWithChapters:(id)arg1 ;
-(void)_postViewControllerRequestsExitWithReason:(long long)arg1 ;
-(void)_updateBackgroundViewConfiguration:(bool)arg1 ;
-(void)_postScaleModeDidChange;
-(void)_flipFromChaptersDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3 ;
-(void)_delayedShowLoadingIndicator;
-(void)_hideOverlayDidEnd;
-(void)_bufferingStateChanged:(id)arg1 ;
-(void)_playbackError:(id)arg1 ;
-(void)_timedImageMetadataAvailable:(id)arg1 ;
-(void)_validityChanged:(id)arg1 ;
-(void)_overlayIdleTimerFired:(id)arg1 ;
-(bool)_overlayViewIsVisible;
-(long long)audioOverlayStyle;
-(void)_flipToChaptersDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3 ;
-(void)_showOverlayDidEnd;
-(void)_transitionFromFullscreenDidEnd;
-(void)_transitionToFullscreenDidEnd;
-(bool)_shouldShowDestinationPlaceholder;
-(long long)videoOverlayStyle;
-(void)fullscreenOverlayWillHideAnimated:(bool)arg1 ;
-(void)fullscreenOverlayWillShowAnimated:(bool)arg1 ;
-(void)fullscreenOverlayDidHide;
-(void)fullscreenOverlayDidShow;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(id)view;
-(long long)orientation;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(id)backgroundView;
-(id)item;
-(void)setNavigationBarHidden:(bool)arg1 ;
-(void)setOrientation:(long long)arg1 ;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(void).cxx_destruct;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(void)_applicationWillResignActive:(id)arg1 ;
-(void)_applicationDidBecomeActive:(id)arg1 ;
-(id)posterImage;
-(id)player;
-(void)setPlayer:(id)arg1 ;
@end

