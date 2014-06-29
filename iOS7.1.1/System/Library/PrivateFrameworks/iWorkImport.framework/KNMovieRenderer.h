/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:54 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/KNBuildRenderer.h>
#import <iWorkImport/TSKAVPlayerControllerDelegate.h>

@protocol TSDMovieHUDViewController;
@class TSKAVPlayerController, CALayer, KNBuildRenderer;

@interface KNMovieRenderer : KNBuildRenderer <TSKAVPlayerControllerDelegate> {

	TSKAVPlayerController* mPlayerController;
	CALayer* mVideoLayer;
	double mStartTime;
	double mPlaybackAtStartTimePauseTime;
	double mPlaybackAtStartTimePauseOffset;
	KNBuildRenderer* mBuildInRenderer;
	<TSDMovieHUDViewController>* mViewController;
	CGRect mFrameInContainerView;
	id mMovieStartCallbackTarget;
	SEL mMovieStartCallbackSelector;
	unsigned mHasMoviePlaybackStarted : 1;
	unsigned mNeedsToSendMovieStartCallback : 1;
	unsigned mNeedsToSendBuildEndCallback : 1;
	unsigned mIsObservingVideoLayerReadyForDisplay : 1;
	unsigned mNeedsPlaybackAtStartTime : 1;
	unsigned mHasPendingTogglePlayingControl : 1;
	unsigned mPendingTogglePlayingControlStartsPlaying : 1;
	unsigned mShouldMoviePlaybackEndOnCompletion : 1;
	unsigned mWasMoviePlayingBeforeAnimationPause : 1;

}

@property (assign,nonatomic) KNBuildRenderer * buildInRenderer; 
@property (nonatomic,readonly) bool hasMoviePlaybackStarted; 
@property (nonatomic,readonly) TSKAVPlayerController * playerController; 
@property (nonatomic,retain) <TSDMovieHUDViewController> * viewController; 
@property (nonatomic,readonly) CALayer * offscreenVideoLayer; 
@property (nonatomic,readonly) NSObject<NSCopying> * movieTimelineMovieIdentifier; 
+(id)movieTimelineMovieIdentifierForMovieInfo:(id)arg1 ;
+(id)movieInfoForMovieTimelineMovieIdentifier:(id)arg1 ;
-(id)playerController;
-(void)playerController:(id)arg1 playbackDidFailWithError:(id)arg2 ;
-(void)playbackDidStopForPlayerController:(id)arg1 ;
-(void)p_playbackDidFailWithError:(id)arg1 ;
-(id)initWithInfo:(id)arg1 build:(id)arg2 stageIndex:(long long)arg3 session:(id)arg4 model:(id)arg5 animatedSlideView:(id)arg6 ;
-(void)setBuildInRenderer:(id)arg1 ;
-(void)removeAnimationsAndFinish:(bool)arg1 ;
-(void)updateAnimationsForLayerTime:(double)arg1 ;
-(void)forceRemoveAnimations;
-(void)pauseAnimationsAtTime:(double)arg1 ;
-(void)resumeAnimationsIfPausedAtTime:(double)arg1 ;
-(bool)addAnimationsAtLayerTime:(double)arg1 ;
-(void)animateAfterDelay:(double)arg1 ;
-(void)pauseAnimations;
-(void)resumeAnimationsIfPaused;
-(void)p_setupPlayerController;
-(void)p_schedulePlaybackAtStartTime;
-(void)p_setupVideoLayer;
-(void)p_startMoviePlaybackIfNeeded;
-(void)p_teardownUpdatingTexture:(bool)arg1 ;
-(void)p_unschedulePlaybackAtStartTime;
-(void)p_showVideoLayer;
-(void)p_didStartMoviePlayback;
-(void)p_applyActionEffect:(id)arg1 ;
-(void)p_startPlaybackAtStartTime;
-(void)p_setupReflectionAndMaskingOnMovieTexture:(id)arg1 strokeTexture:(id)arg2 reflectionTexture:(id)arg3 ;
-(void)p_cancelPlaybackAtStartTime;
-(void)p_didEndMoviePlayback;
-(CGImageRef)p_copyCurrentVideoFrameImage;
-(void)interruptAndReset;
-(bool)hasMoviePlaybackStarted;
-(void)registerForMovieStartCallback:(SEL)arg1 target:(id)arg2 ;
-(void)applyMovieControl:(long long)arg1 ;
-(void)setFrameOnViewLayer:(id)arg1 ;
-(void)updateHUD;
-(id)offscreenVideoLayer;
-(id)movieTimelineMovieIdentifier;
-(id)buildInRenderer;
-(void)dealloc;
-(void)setViewController:(id)arg1 ;
-(id)viewController;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)stopAnimations;
@end

