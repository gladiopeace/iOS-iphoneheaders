/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:54 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDCanvasDelegate.h>

@class KNDocumentRoot, KNPlaybackSession, KNAnimatedSlideView, NSMutableSet, CALayer, KNSlideNode, NSSet;

@interface KNAnimatedOffscreenPlaybackController : NSObject <TSDCanvasDelegate> {

	KNDocumentRoot* mDocumentRoot;
	KNPlaybackSession* mSession;
	KNAnimatedSlideView* mAnimator;
	NSMutableSet* mActiveBuildRenderers;
	NSMutableSet* mMovieRenderers;
	double mCurrentEventAnimationsStartTime;
	double mCurrentEventAnimationsNonDelayedEndTime;
	double mCurrentEventAnimationsDelay;
	double mCurrentEventPauseStartTime;
	long long mConcealingStyle;
	CALayer* mConcealingLayer;
	bool mIsAnimating;
	bool mIsPaused;

}

@property (nonatomic,readonly) KNDocumentRoot * documentRoot; 
@property (nonatomic,readonly) CALayer * layer; 
@property (nonatomic,readonly) KNSlideNode * currentSlideNode; 
@property (nonatomic,readonly) unsigned long long currentEventIndex; 
@property (nonatomic,readonly) KNSlideNode * firstSlideNode; 
@property (nonatomic,readonly) KNSlideNode * nextSlideNode; 
@property (nonatomic,readonly) unsigned long long currentSlideNodeEventCount; 
@property (nonatomic,readonly) NSSet * movieRenderers; 
-(id)currentSlideNode;
-(void)p_invalidateAnimator;
-(void)p_renderCurrentEvent;
-(unsigned long long)currentEventIndex;
-(id)firstSlideNode;
-(bool)p_isCurrentEventTransition;
-(void)p_addAnimationsForBuildRenderer:(id)arg1 atBuildStartTime:(double)arg2 relativeToTime:(double)arg3 ;
-(void)pauseCurrentEventAnimationsWithConcealingStyle:(long long)arg1 atLayerTime:(double)arg2 ;
-(void)p_updateConcealingStyle:(long long)arg1 atTime:(double)arg2 ;
-(void)p_animateConcealingLayerToOpacity:(float)arg1 fromDefaultOpacity:(float)arg2 atTime:(double)arg3 ;
-(id)initWithDocumentRoot:(id)arg1 layerSize:(CGSize)arg2 ;
-(void)gotoSlideNode:(id)arg1 eventIndex:(unsigned long long)arg2 resetBuildTextures:(bool)arg3 ;
-(id)nextSlideNode;
-(unsigned long long)currentSlideNodeEventCount;
-(void)beginCurrentEventAnimationsAtLayerTime:(double)arg1 ;
-(void)updateCurrentEventAnimationsForLayerTime:(double)arg1 ;
-(void)endCurrentEventAnimations;
-(double)currentEventAnimationsRemainingTimeAfterLayerTime:(double)arg1 ;
-(void)pauseCurrentEventAnimationsAtLayerTime:(double)arg1 ;
-(void)resumeCurrentEventAnimationsAtLayerTime:(double)arg1 ;
-(void)updateMovieRenderersForLayerTime:(double)arg1 ;
-(id)movieRenderers;
-(void)dealloc;
-(id)layer;
-(id)init;
-(void)invalidate;
-(id)documentRoot;
@end

