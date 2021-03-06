/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:47 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/KNAnimationRenderer.h>

@class NSDictionary, CALayer, NSMutableArray, TSDTextureSet, KNAnimationInfo, KNAnimatedBuild, KNBuildChunk, TSDDrawableInfo, TSDFPSCounter, TSDTextureContext, TSDRep, NSArray;

@interface KNBuildRenderer : KNAnimationRenderer {

	long long mNumberOfAnimationsStarted;
	NSDictionary* mAnimatedLayers;
	CALayer* mParentLayer;
	id mBuildEndCallbackTarget;
	SEL mBuildEndCallbackSelector;
	NSMutableArray* mAnimatedBuildsToStartAtEnd;
	TSDTextureSet* mTextureSet;
	TSDTextureSet* mFinalAttributesTextureSet;
	KNAnimationInfo* mAnimationInfo;
	KNAnimatedBuild* mAnimatedBuild;
	KNBuildChunk* mBuildStage;
	TSDDrawableInfo* mInfo;
	BOOL mIsPreview;
	BOOL mInterrupted;
	BOOL mIsAnimationForPlayback;
	BOOL mAreAnimationsPrepared;
	BOOL mUsingFinalTexture;
	BOOL mIsTextureCachedAtEndOfBuild;
	BOOL mShouldUseMagicMoveTextures;
	BOOL mIsNonCachedTextureValid;
	TSDFPSCounter* mFPSCounter;
	TSDTextureContext* mTextureContext;

}

@property (nonatomic,readonly) KNBuildChunk * buildStage; 
@property (nonatomic,readonly) unsigned long long textureDeliveryStyle; 
@property (nonatomic,readonly) TSDDrawableInfo * info; 
@property (nonatomic,readonly) TSDRep * rep; 
@property (nonatomic,readonly) TSDTextureSet * textureSet; 
@property (nonatomic,readonly) TSDTextureSet * nonCachedTextureSet; 
@property (nonatomic,retain) TSDTextureContext * textureContext; 
@property (nonatomic,retain) CALayer * parentLayer; 
@property (nonatomic,readonly) NSArray * animatedBuildsToStartAtEnd; 
@property (nonatomic,readonly) BOOL isTextDrawable; 
@property (nonatomic,readonly) KNAnimatedBuild * animatedBuild; 
-(TSDRep *)rep;
-(unsigned long long)textureDeliveryStyle;
-(void)setTextureContext:(TSDTextureContext *)arg1 ;
-(TSDTextureContext *)textureContext;
-(unsigned long long)stageIndex;
-(KNAnimatedBuild *)animatedBuild;
-(id)initializeTextureSetForEndOfBuild:(BOOL)arg1 endOfSlide:(BOOL)arg2 context:(id)arg3 isRenderingToContext:(BOOL)arg4 ;
-(NSArray *)animatedBuildsToStartAtEnd;
-(KNBuildChunk *)buildStage;
-(id)initWithAnimatedBuild:(id)arg1 info:(id)arg2 buildStage:(id)arg3 session:(id)arg4 animatedSlideView:(id)arg5 ;
-(void)addBuildToStartAtEnd:(id)arg1 ;
-(void)setupPluginContext;
-(void)removeAnimationsAndFinish:(BOOL)arg1 ;
-(void)updateAnimationsForLayerTime:(double)arg1 ;
-(void)forceRemoveAnimations;
-(void)pauseAnimationsAtTime:(double)arg1 ;
-(void)resumeAnimationsIfPausedAtTime:(double)arg1 ;
-(id)loadPluginIfNeeded;
-(id)textureSetForStage:(long long)arg1 context:(id)arg2 ;
-(id)p_textureSetForStage:(long long)arg1 context:(id)arg2 isAtEndOfBuild:(BOOL)arg3 shouldForceRebuild:(BOOL)arg4 shouldRender:(BOOL)arg5 ;
-(id)p_textureSetForStage:(long long)arg1 context:(id)arg2 isAtEndOfBuild:(BOOL)arg3 shouldForceRebuild:(BOOL)arg4 ;
-(BOOL)p_isMovieInfo;
-(BOOL)p_isDriftAnimation;
-(id)p_filterForTextDelivery:(long long)arg1 ;
-(BOOL)isTextDrawable;
-(BOOL)addAnimationsAtLayerTime:(double)arg1 ;
-(void)setLayerVisibility:(id)arg1 isAtEndOfBuild:(BOOL)arg2 ;
-(BOOL)p_isPDFOutput;
-(id)setupFinalTextureGivenCurrentTextureSet:(id)arg1 ;
-(id)initializeTextureSetForEndOfBuild:(BOOL)arg1 endOfSlide:(BOOL)arg2 isRenderingToContext:(BOOL)arg3 ;
-(void)prepareAnimations;
-(void)resetHighlightsBeforeAnimationOnTextureSet:(id)arg1 ;
-(id)p_keyForAnimation;
-(void)fadeOutPreviousStageOn:(id)arg1 atLayerTime:(double)arg2 ;
-(void)p_removeAnimations;
-(void)p_resetAnimations;
-(void)setVisibilityAndGeometryOn:(id)arg1 withFinalTextureSet:(id)arg2 ;
-(void)resetPreviousStageUnhighlightOnTextureSet:(id)arg1 ;
-(TSDTextureSet *)textureSet;
-(id)textureSetWithoutRenderedContents;
-(TSDTextureSet *)nonCachedTextureSet;
-(id)textureSetForStage:(long long)arg1 context:(id)arg2 shouldForceRebuild:(BOOL)arg3 ;
-(void)animateAfterDelay:(double)arg1 ;
-(void)registerForBuildEndCallback:(SEL)arg1 target:(id)arg2 ;
-(void)resetTexture;
-(void)dealloc;
-(id)description;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(TSDDrawableInfo *)info;
-(CALayer *)parentLayer;
-(void)setParentLayer:(CALayer *)arg1 ;
-(void)stopAnimations;
@end

