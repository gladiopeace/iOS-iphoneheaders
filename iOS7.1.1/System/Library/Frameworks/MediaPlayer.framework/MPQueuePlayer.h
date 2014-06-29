/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:29 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPAVRoutingControllerDelegate.h>

@protocol OS_dispatch_queue;
@class MPAVRoutingController, AVPlayerItem, MPAVRoute, AVQueuePlayer, NSMutableArray, NSObject, NSError, NSArray, AVPlayer, NSString;

@interface MPQueuePlayer : NSObject <MPAVRoutingControllerDelegate> {

	MPAVRoutingController* _routingController;
	AVPlayerItem* _currentItem;
	SCD_Struct_MP17 _currentTime;
	bool _isExternalPlaybackActive;
	bool _pausedForPlaybackQueueTransaction;
	MPAVRoute* _lastPickedRoute;
	/*^block*/ id _playbackQueueCommitHandler;
	long long _playbackQueueTransactionCount;
	AVQueuePlayer* _player;
	NSMutableArray* _queuedOperations;
	NSObject<OS_dispatch_queue>* _queuedOperationsAccessQueue;
	float _rate;
	float _rateBeforePlaybackQueueTransaction;
	bool _routeDidChangeDuringPlaybackQueueTransaction;
	long long _status;
	long long _defaultItemEQPresetType;
	bool _outputObscuredDueToInsufficientExternalProtection;

}

@property (nonatomic,readonly) long long status; 
@property (nonatomic,readonly) NSError * error; 
@property (assign,nonatomic) float rate; 
@property (assign,nonatomic) long long actionAtItemEnd; 
@property (assign,getter=isClosedCaptionDisplayEnabled,nonatomic) bool closedCaptionDisplayEnabled; 
@property (assign,nonatomic) bool allowsExternalPlayback; 
@property (getter=isExternalPlaybackActive,nonatomic,readonly) bool externalPlaybackActive; 
@property (assign,nonatomic) bool usesExternalPlaybackWhileExternalScreenIsActive; 
@property (assign,nonatomic) bool usesAudioOnlyModeForExternalPlayback; 
@property (nonatomic,readonly) long long externalPlaybackType; 
@property (assign,nonatomic) long long defaultItemEQPresetType;                                                  //@synthesize defaultItemEQPresetType=_defaultItemEQPresetType - In the implementation block
@property (nonatomic,readonly) bool outputObscuredDueToInsufficientExternalProtection; 
@property (nonatomic,readonly) AVPlayerItem * currentItem; 
@property (nonatomic,copy) id playbackQueueCommitHandler;                                                        //@synthesize playbackQueueCommitHandler=_playbackQueueCommitHandler - In the implementation block
@property (nonatomic,readonly) bool isPlaybackQueueTransactionActive; 
@property (nonatomic,readonly) NSArray * items; 
@property (nonatomic,readonly) AVPlayer * _player; 
@property (nonatomic,readonly) long long _externalProtectionStatus; 
@property (nonatomic,copy) NSString * externalPlaybackVideoGravity; 
@property (nonatomic,readonly) id playerAVAudioSession; 
@property (assign,nonatomic) bool disallowsAMRAudio; 
-(id)_player;
-(void)play;
-(bool)isExternalPlaybackActive;
-(SCD_Struct_MP17)currentTime;
-(bool)disallowsAMRAudio;
-(void)setDisallowsAMRAudio:(bool)arg1 ;
-(void)setActionAtItemEnd:(long long)arg1 ;
-(void)_setEQPreset:(int)arg1 ;
-(void)seekToTime:(SCD_Struct_MP17)arg1 ;
-(void)removeTimeObserver:(id)arg1 ;
-(void)_setStoppingFadeOutDuration:(float)arg1 ;
-(bool)allowsExternalPlayback;
-(void)setAllowsExternalPlayback:(bool)arg1 ;
-(bool)isClosedCaptionDisplayEnabled;
-(bool)usesExternalPlaybackWhileExternalScreenIsActive;
-(void)setUsesExternalPlaybackWhileExternalScreenIsActive:(bool)arg1 ;
-(void)setClosedCaptionDisplayEnabled:(bool)arg1 ;
-(float)_userVolume;
-(void)_setUserVolume:(float)arg1 ;
-(long long)externalPlaybackType;
-(id)externalPlaybackVideoGravity;
-(void)_setPreferredLanguageList:(id)arg1 ;
-(void)_setPreparesItemsForPlaybackAsynchronously:(bool)arg1 ;
-(id)playerAVAudioSession;
-(void)setExternalPlaybackVideoGravity:(id)arg1 ;
-(void)seekToTime:(SCD_Struct_MP17)arg1 toleranceBefore:(SCD_Struct_MP17)arg2 toleranceAfter:(SCD_Struct_MP17)arg3 ;
-(void)setUsesAudioOnlyModeForExternalPlayback:(bool)arg1 ;
-(bool)usesAudioOnlyModeForExternalPlayback;
-(bool)_CALayerDestinationIsTVOut;
-(void)_setCALayerDestinationIsTVOut:(bool)arg1 ;
-(bool)isPlaybackQueueTransactionActive;
-(long long)actionAtItemEnd;
-(bool)_resumePlayback:(double)arg1 error:(id*)arg2 ;
-(void)routingControllerAvailableRoutesDidChange:(id)arg1 ;
-(bool)outputObscuredDueToInsufficientExternalProtection;
-(void)_setClientName:(id)arg1 ;
-(void)_setExpectedAssetTypes:(id)arg1 ;
-(id)addBoundaryTimeObserverForTimes:(id)arg1 queue:(id)arg2 usingBlock:(/*^block*/ id)arg3 ;
-(void)_setWantsVolumeChangesWhenPausedOrInactive:(bool)arg1 ;
-(void)advanceToNextItem;
-(void)setPlaybackQueueCommitHandler:(/*^block*/ id)arg1 ;
-(long long)defaultItemEQPresetType;
-(void)beginPlaybackQueueTransactionAndPause:(bool)arg1 ;
-(void)setCurrentPlaybackQueueTransactionDisplayTime:(SCD_Struct_MP17)arg1 ;
-(void)commitPlaybackQueueTransaction;
-(void)insertItem:(id)arg1 afterItem:(id)arg2 ;
-(long long)_externalProtectionStatus;
-(void)prepareItem:(id)arg1 withCompletionHandler:(/*^block*/ id)arg2 ;
-(void)setMediaSelectionCriteria:(id)arg1 forMediaCharacteristic:(id)arg2 ;
-(void)setDefaultItemEQPresetType:(long long)arg1 ;
-(/*^block*/ id)playbackQueueCommitHandler;
-(void)dealloc;
-(id)init;
-(id)items;
-(id)currentItem;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)removeItem:(id)arg1 ;
-(void).cxx_destruct;
-(void)pause;
-(long long)status;
-(float)rate;
-(id)error;
-(void)setRate:(float)arg1 ;
@end

