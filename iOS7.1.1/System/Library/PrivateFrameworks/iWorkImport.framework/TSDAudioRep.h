/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:41 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDMediaRep.h>
#import <iWorkImport/TSKAVPlayerControllerDelegate.h>
#import <iWorkImport/TSDAudioHUDControllerDelegate.h>

@protocol TSDAudioHUDController;
@class TSKAVPlayerController, CALayer, TSDMovieInfo;

@interface TSDAudioRep : TSDMediaRep <TSKAVPlayerControllerDelegate, TSDAudioHUDControllerDelegate> {

	TSKAVPlayerController* mPlayerController;
	CALayer* mPlayPauseButtonLayer;
	CALayer* mAudioImageLayer;
	float mDynamicVolume;
	bool mIsChangingDynamicVolume;
	<TSDAudioHUDController>* mAudioHUDController;

}

@property (nonatomic,readonly) TSDMovieInfo * movieInfo; 
@property (nonatomic,readonly) TSKAVPlayerController * playerController; 
@property (nonatomic,readonly) <TSDAudioHUDController> * audioHUDController; 
@property (nonatomic,readonly) float volume; 
-(id)initWithLayout:(id)arg1 canvas:(id)arg2 ;
-(void)willBeRemoved;
-(void)willUpdateLayer:(id)arg1 ;
-(void)becameSelected;
-(void)becameNotSelected;
-(bool)shouldShowSelectionHighlight;
-(bool)shouldShowKnobs;
-(void)willBeginZooming;
-(void)didEndZooming;
-(CGRect)boundsForStandardKnobs;
-(void)updatePositionsOfKnobs:(id)arg1 ;
-(id)newTrackerForKnob:(id)arg1 ;
-(bool)directlyManagesLayerContent;
-(bool)shouldShowSizesInRulers;
-(bool)shouldShowDragHUD;
-(void)addKnobsToArray:(id)arg1 ;
-(void)processChangedProperty:(int)arg1 ;
-(void)willBeginReadMode;
-(void)updateLayerGeometryFromLayout:(id)arg1 ;
-(id)hitRepChrome:(CGPoint)arg1 ;
-(bool)shouldCreateSelectionKnobs;
-(bool)providesGuidesWhileAligning;
-(bool)exclusivelyProvidesGuidesWhileAligning;
-(void)drawInContextWithoutEffects:(CGContextRef)arg1 withContent:(bool)arg2 withStroke:(bool)arg3 withOpacity:(bool)arg4 forAlphaOnly:(bool)arg5 drawChildren:(bool)arg6 ;
-(bool)shouldShowMediaReplaceUI;
-(bool)shouldAllowReplacementFromPaste;
-(id)movieInfo;
-(void)p_updateRepeatMode;
-(void)p_updateVolume;
-(void)p_updateStartTime;
-(void)p_updateEndTime;
-(bool)p_shouldPlayerControllerExistThroughoutSelection;
-(void)p_setupPlayerControllerIfNecessary;
-(id)playerController;
-(void)p_teardownPlayerController;
-(bool)canResetMediaSize;
-(void)playerController:(id)arg1 playbackDidFailWithError:(id)arg2 ;
-(void)playbackDidStopForPlayerController:(id)arg1 ;
-(void)dynamicVolumeChangeDidBegin;
-(void)dynamicVolumeUpdateToValue:(float)arg1 ;
-(void)dynamicVolumeChangeDidEnd;
-(bool)p_shouldShowPlayPauseLayers;
-(bool)p_isPlaying;
-(void)p_updateButtonForPlaying:(bool)arg1 pressed:(bool)arg2 ;
-(void)p_teardownAudioHUD;
-(bool)hitPlayPauseButtonWithPoint:(CGPoint)arg1 ;
-(void)p_updateAudioHUDWithFrame:(CGRect)arg1 ;
-(bool)p_isEditingAnimations;
-(void)setupPlayerControllerForAudioHUDController:(id)arg1 ;
-(void)updatePlayButtonForPoint:(CGPoint)arg1 ;
-(bool)shouldAllowReplacementFromDrop;
-(id)textureWithContext:(id)arg1 ;
-(id)audioHUDController;
-(void)dealloc;
-(bool)containsPoint:(CGPoint)arg1 ;
-(Class)layerClass;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(bool)isDraggable;
-(float)volume;
-(void)drawInContext:(CGContextRef)arg1 ;
@end

