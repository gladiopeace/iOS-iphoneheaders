/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:25 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPMediaPlayback.h>

@class NSURL, UIView;

@interface MPMoviePlayerController : NSObject <MPMediaPlayback> {

	id _implementation;

}

@property (nonatomic,copy) NSURL * contentURL; 
@property (nonatomic,readonly) UIView * view; 
@property (nonatomic,readonly) UIView * backgroundView; 
@property (nonatomic,readonly) long long playbackState; 
@property (nonatomic,readonly) long long loadState; 
@property (assign,nonatomic) long long controlStyle; 
@property (assign,nonatomic) long long repeatMode; 
@property (assign,nonatomic) bool shouldAutoplay; 
@property (assign,getter=isFullscreen,nonatomic) bool fullscreen; 
@property (assign,nonatomic) long long scalingMode; 
@property (nonatomic,readonly) bool readyForDisplay; 
@property (nonatomic,readonly) bool isPreparedToPlay; 
@property (assign,nonatomic) double currentPlaybackTime; 
@property (assign,nonatomic) float currentPlaybackRate; 
+(void)allInstancesResignActive;
-(void)setContentURL:(id)arg1 ;
-(id)contentURL;
-(long long)playbackState;
-(long long)loadState;
-(long long)controlStyle;
-(void)setControlStyle:(long long)arg1 ;
-(long long)repeatMode;
-(void)setRepeatMode:(long long)arg1 ;
-(bool)shouldAutoplay;
-(void)setShouldAutoplay:(bool)arg1 ;
-(bool)isFullscreen;
-(void)setFullscreen:(bool)arg1 ;
-(void)setFullscreen:(bool)arg1 animated:(bool)arg2 ;
-(long long)scalingMode;
-(void)setScalingMode:(long long)arg1 ;
-(bool)allowsAirPlay;
-(void)setAllowsAirPlay:(bool)arg1 ;
-(bool)isAirPlayVideoActive;
-(void)prepareToPlay;
-(bool)isPreparedToPlay;
-(void)play;
-(void)beginSeekingForward;
-(void)beginSeekingBackward;
-(void)endSeeking;
-(void)skipToNextItem;
-(void)skipToBeginning;
-(void)skipToPreviousItem;
-(long long)movieMediaTypes;
-(void)setMovieSourceType:(long long)arg1 ;
-(long long)movieSourceType;
-(double)playableDuration;
-(void)setInitialPlaybackTime:(double)arg1 ;
-(double)initialPlaybackTime;
-(void)setEndPlaybackTime:(double)arg1 ;
-(double)endPlaybackTime;
-(double)currentPlaybackTime;
-(void)setCurrentPlaybackTime:(double)arg1 ;
-(float)currentPlaybackRate;
-(void)setCurrentPlaybackRate:(float)arg1 ;
-(void)_resignActive;
-(bool)_isReadyForDisplay;
-(id)initWithContentURL:(id)arg1 ;
-(bool)readyForDisplay;
-(void)dealloc;
-(id)init;
-(id)view;
-(double)duration;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)backgroundView;
-(void)forwardInvocation:(id)arg1 ;
-(id)initWithAsset:(id)arg1 ;
-(void).cxx_destruct;
-(void)stop;
-(void)pause;
-(CGSize)naturalSize;
@end

