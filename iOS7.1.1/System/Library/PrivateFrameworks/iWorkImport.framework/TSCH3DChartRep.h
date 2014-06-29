/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:31 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHChartRep.h>
#import <iWorkImport/TSCH3DChartAnimationRendering.h>
#import <iWorkImport/TSCH3DGLLayerProvider.h>
#import <iWorkImport/TSCHChartPieWedgeExplosionTracking.h>

@class TSCH3DChartRenderer, TSCH3DChartRepRenderQueue, TSCH3DChartRendererState, TSCH3DChartRepCachedTexture, TSCH3DChartAnimationEngine, TSCH3DScene, TSCH3DChartRepFPSCounter, NSDictionary, TSCH3DGLContext, NSNumber, NSMutableIndexSet, TSCH3DRotateKnob, CALayer, NSMutableArray;

@interface TSCH3DChartRep : TSCHChartRep <TSCH3DChartAnimationRendering, TSCH3DGLLayerProvider, TSCHChartPieWedgeExplosionTracking> {

	TSCH3DChartRenderer* mRenderer3D;
	TSCH3DChartRepRenderQueue* mRenderQueue;
	TSCH3DChartRendererState* mRendererState;
	unsigned long long mChunkCount;
	TSCH3DChartRepCachedTexture* mCachedTexture;
	bool mHasSkippedInitialTexture;
	bool mTextureForHiding;
	TSCH3DChartAnimationEngine* mEngine;
	Class mAnimationClass;
	long long mAnimationStage;
	long long mAnimationFrameCount;
	int mAnimationBuildType;
	TSCH3DScene* mAnimationLayerScene;
	TSCH3DChartRepFPSCounter* mFPSCounter;
	NSDictionary* mBuildAttributes;
	TSCH3DGLContext* mAnimationGLContext;
	NSNumber* mCustomAnimationContentsScale;
	int mRenderMode;
	bool mIsInInteractiveMode;
	NSMutableIndexSet* mInteractiveFlags;
	bool mMaybeBeginDragging;
	bool mMaybeBeginScrolling;
	bool mDidChangeDepth;
	CGSize mMinimumInteractiveSize;
	CGRect mCurrentVisibleBoundsRect;
	bool mWillChangeAppearance;
	TSCH3DRotateKnob* mRotate3DKnob;
	CGRect mBeginScaleChartBodyLayoutRect;
	bool mHasEverRendered;
	int mCGContextDrawingMode;
	bool mShouldDelayDestroyFramebuffer;
	CALayer* mRootLayer;
	unsigned long long mNumberOfInteractiveRotations;
	NSMutableArray* mSelectionKnobsLayers;
	bool mDocumentWillClose;
	bool mAllowLowResolutionTextures;
	bool mIsBackgroundLayoutAndRendering;
	float mOverrideRenderingSamples;
	bool mHasInterestInSharegroup;
	bool mWillBeRemoved;
	bool mAnimationHasEnded;

}

@property (nonatomic,readonly) TSCH3DScene * layoutScene; 
@property (nonatomic,readonly) TSCH3DScene * renderingScene; 
@property (nonatomic,readonly) Class renderCycleClass; 
@property (nonatomic,readonly) NSDictionary * buildAttributes; 
@property (nonatomic,readonly) int animationBuildType; 
@property (assign,nonatomic) bool textureForHiding; 
@property (nonatomic,retain) TSCH3DGLContext * animationGLContext; 
@property (nonatomic,readonly) TSCH3DChartAnimationEngine * engine; 
@property (nonatomic,readonly) TSCH3DChartRenderer * renderer3D; 
@property (nonatomic,readonly) Class animationClass; 
@property (nonatomic,retain) TSCH3DChartRepCachedTexture * cachedTexture; 
@property (nonatomic,retain) NSNumber * customAnimationContentsScale; 
+(id)chartRep3DFromLayer:(id)arg1 ;
+(id)sharegroupTokensOfInterest;
+(bool)canRenderUsingOpenGL;
+(id)p_allFillProperties;
-(bool)isPieChart;
-(CGPoint)effectivePointForDragPoint:(CGPoint)arg1 startingFrom:(CGPoint)arg2 forSeries:(unsigned long long)arg3 ;
-(float)newExplosionValueForFinalDragPoint:(CGPoint)arg1 startingFrom:(CGPoint)arg2 forSeries:(unsigned long long)arg3 knob:(id)arg4 ;
-(bool)pieWedgeHitByUnscaledPoint:(CGPoint)arg1 seriesIndex:(unsigned long long)arg2 distanceFromCenter:(CGPoint*)arg3 ;
-(void)explosionsDidUpdateForNewSeriesIndexedExplosions:(id)arg1 ;
-(id)deliveryTimeSlice;
-(id)layoutScene;
-(Class)animationClass;
-(id)animationFilter;
-(id)buildAttributes;
-(int)animationBuildType;
-(bool)isLastChunkStageForFinalElements:(bool)arg1 ;
-(id)GLLayer;
-(id)GLLayerWithFrame:(CGRect)arg1 ;
-(CGRect)pixelAlignBodyCanvasBounds:(const CGRect*)arg1 ;
-(id)update3DRendererWithSceneAreaLayoutItem:(id)arg1 ;
-(void)processChanges:(id)arg1 ;
-(void)addRepToRenderQueueInFront:(bool)arg1 ;
-(id)rendererState;
-(float)renderingSamples;
-(id)renderingScene;
-(void)invalidateLayerCache;
-(bool)processMultipassRendering;
-(void)renderIntoContext:(CGContextRef)arg1 visible:(CGRect)arg2 ;
-(void)cancelMultipassRendering;
-(void)knobTrackingDidBegin:(id)arg1 ;
-(void)dynamically3DRotatingWithTracker:(id)arg1 ;
-(void)knobTrackingDidEnd:(id)arg1 ;
-(id)initWithLayout:(id)arg1 canvas:(id)arg2 ;
-(id)cachedTexture;
-(void)p_addInterestForSharegroups;
-(void)p_removeInterestForSharegroupsIfNecessary;
-(id)p_sharegroupTokensOfInterest;
-(bool)p_hasInteractiveFlag:(unsigned long long)arg1 ;
-(id)p_renderQueue;
-(void)clearRenderers;
-(id)p_repSharegroupToken;
-(id)layoutItem;
-(tvec2<float>)normalizedPointFromNaturalPoint:(CGPoint)arg1 ;
-(tvec2<float>)normalizedPointFromUnscaledPoint:(CGPoint)arg1 ;
-(id)GLLayerNoCreate;
-(void)p_clearInteractiveFlag:(unsigned long long)arg1 ;
-(void)p_clearInteractiveFlagsBeforeRemoval;
-(bool)p_threadSafeExitInteractiveMode;
-(void)p_clearCachedTexture;
-(bool)p_isBackgroundLayoutThread;
-(bool)p_shouldDelayDestroyFramebuffer;
-(void)willBeRemoved;
-(void)p_cancelEndInteractiveModeCallback;
-(void)chartWillChangeAppearance;
-(bool)p_needInteractiveMode;
-(bool)p_canEndInteractiveMode;
-(void)p_endInteractiveMode;
-(void)chartDidChangeAppearance;
-(CGRect)canvasBoundsFromBodyCanvasBounds:(const CGRect*)arg1 ;
-(CGRect)bodyCanvasBoundsFromCanvasBounds:(const CGRect*)arg1 ;
-(bool)renderLegendIntoSeparateLayer;
-(CGRect)p_visibleRectInRepLayer;
-(CGRect)p_validateVisibleRect:(CGRect)arg1 ;
-(void)p_setInteractiveFlag:(unsigned long long)arg1 ;
-(void)p_beginInteractiveMode;
-(void)p_createBackgroundLayoutLayer;
-(void)willUpdateLayer:(id)arg1 ;
-(id)customAnimationContentsScale;
-(id)p_pixelAlignmentLayer;
-(void)didUpdateLayer:(id)arg1 ;
-(void)p_calculateGLLayerFrame;
-(CGRect)layerFrameInScaledCanvas;
-(void)setNeedsDisplayIfNecessaryUpdateGLLayerPixelAlignment:(bool)arg1 ;
-(void)p_pixelAlignLegendLayer:(id)arg1 basedOnUnalignedParentLayer:(id)arg2 ;
-(ChartProjectedBoundsConverter*)p_chart3DLayoutBoundsConverter;
-(bool)p_isDrawingInCGContext;
-(id)p_lazyRenderer3D;
-(void)p_setupForRendering;
-(void)p_updateLayerTree;
-(double)p_layerContentsScale;
-(void)p_updateRendererLayoutForCurrentLayer;
-(void)p_recreateGLLayer;
-(void)recursivelyDrawInContext:(CGContextRef)arg1 ;
-(void)didDrawInLayer:(id)arg1 context:(CGContextRef)arg2 ;
-(id)p_animationScene;
-(bool)p_isThumbnailOrInsertionIconCanvas:(id)arg1 ;
-(void)p_updateVisibleBoundsRect;
-(void)p_calculateSelectionKnobsLayersForSelectionPaths:(id)arg1 ;
-(bool)p_canRender;
-(bool)p_shouldRender;
-(void)p_lowQualityRenderWithGLContext:(id)arg1 visible:(CGRect)arg2 renderer:(id)arg3 ;
-(id)p_chart3DLayout;
-(void)p_updateElementSceneObjectPropertiesForScene:(id)arg1 ;
-(void)becameSelected;
-(void)becameNotSelected;
-(void)p_endInteractiveModeAfterDelay:(double)arg1 ;
-(bool)shouldShowSelectionHighlight;
-(bool)shouldShowLegendHighlight;
-(bool)shouldShowKnobs;
-(void)editorIsSelectingInfos:(id)arg1 ;
-(bool)p_shouldShowRotate3DKnobWithInfoCount:(unsigned long long)arg1 ;
-(void)p_set3DRotateKnobVisible:(bool)arg1 ;
-(void)editorIsDeselectingInfo;
-(void)clearDragHighlightAndPreviewState;
-(void)showHitFeedbackForSelectionPath:(id)arg1 ;
-(void)p_removeRepFromRenderQueue;
-(void)dynamicDragDidBegin;
-(void)dynamicDragDidEnd;
-(void)beginDragInsertFromPalette;
-(void)endDragInsertFromPalette;
-(id)dynamicResizeDidBegin;
-(void)dynamicResizeDidEndWithTracker:(id)arg1 ;
-(void)willBeginZooming;
-(void)didEndZooming;
-(void)viewScaleDidChange;
-(void)viewScrollDidChange;
-(void)viewScrollingEnded;
-(CGRect)boundsForStandardKnobs;
-(void)setCachedTexture:(id)arg1 ;
-(void)p_setupForAnimationRendering;
-(void)p_animationFlushResources;
-(void)setTextureStage:(unsigned long long)arg1 ;
-(void)p_setChartChunkStage:(long long)arg1 ;
-(void)p_updateChunkCount;
-(id)p_animationLayoutScene;
-(id)p_renderSeparateAnimationLayers:(id)arg1 intersectedBodyCanvasBounds:(const CGRect*)arg2 ;
-(void)setCustomAnimationContentsScale:(id)arg1 ;
-(void)p_addSeparateRenderedLayersToAnimationLayer:(id)arg1 intersectedBodyCanvasBounds:(const CGRect*)arg2 ;
-(void)p_addLegendLayerToAnimationLayer:(id)arg1 ;
-(void)p_updateChunkCountIfNecessary;
-(long long)p_effectiveStageFromTextureStage:(long long)arg1 isFinalElements:(bool)arg2 ;
-(long long)p_lastTextureStage;
-(bool)isLastChunkStageForFinalElements:(bool)arg1 chunkStage:(long long)arg2 ;
-(bool)isLastAbsoluteChunkStageForFinalElements:(bool)arg1 chunkStage:(long long)arg2 ;
-(long long)p_absoluteStageFromTextureStage:(long long)arg1 isFinalElements:(bool)arg2 ;
-(void)p_setAnimationLevelOfDetailGeometryForScene:(id)arg1 ;
-(CGPoint)p_scaledIntegralOffsetFromFractionInFrame:(CGPoint*)arg1 ;
-(void)markTextureDirty;
-(CGRect)scaledVisibleCanvasBounds;
-(id)p_renderLegendTextureWithBounds:(const CGRect*)arg1 returningBodyCanvasBounds:(CGRect*)arg2 ;
-(void)p_renderTextureWithBounds:(const CGRect*)arg1 finalTexture:(bool)arg2 enumerationBlock:(/*^block*/ id)arg3 ;
-(id)p_generateCachedAnimationTextureForFinalElements:(bool)arg1 includesChart:(bool)arg2 ;
-(bool)p_hasCachedTextureForFinalElements:(bool)arg1 ;
-(void)p_calculateOverrideRenderingSamplesForPrintingOrPdfRendering;
-(void)p_checkPresenterDisplayForAnimationSession:(id)arg1 ;
-(bool)p_isValidTextureStageForFinalElements:(bool)arg1 ;
-(void)p_cacheRenderAnimationTextureForFinalElements:(bool)arg1 ;
-(void)p_invalidateSubselectinoKnobsLayers;
-(void)p_updateGLLayerPixelAlignment;
-(id)knobForDynamicStyleChangeKey:(id)arg1 ;
-(void)addChartKnobsToArray:(id)arg1 ;
-(void)updatePositionsOfKnobs:(id)arg1 ;
-(id)p_wedgeExplosionTracker;
-(id)newTrackerForKnob:(id)arg1 ;
-(void)invalidateSubselectionKnobs;
-(id)hitChartElements:(CGPoint)arg1 passingTest:(/*^block*/ id)arg2 ;
-(void)tswpTextEditingDidEndEditing:(id)arg1 ;
-(void)p_invalidateLayoutLabelsBoundsClass:(Class)arg1 ;
-(void)willAnimateIntoCDE;
-(void)didAnimateFromCDE;
-(void)protected_dynamicStyleChangeWillBegin:(id)arg1 ;
-(void)protected_dynamicStyleChangeDidEnd:(id)arg1 ;
-(void)animationWillBeginForChunkStage:(long long)arg1 ;
-(void)animationDidEndForChunkStage:(long long)arg1 ;
-(void)setAnimationType:(int)arg1 chunkStage:(long long)arg2 buildType:(int)arg3 textureDeliveryStyle:(unsigned long long)arg4 attributes:(id)arg5 ;
-(id)animationLayerWithFrame:(CGRect)arg1 scale:(double)arg2 colorSpace:(CGColorSpaceRef)arg3 returningDrawingFrame:(CGRect*)arg4 TSDGLLayer:(id*)arg5 ;
-(void)renderAnimationFrame:(float)arg1 drawingFrame:(CGRect)arg2 chunkStage:(long long)arg3 ;
-(tvec2<float>)normalizedPointFromTouchPoint:(const tvec2<float>*)arg1 ;
-(void)p_applicationWillResignActive:(id)arg1 ;
-(void)p_documentWillClose:(id)arg1 ;
-(void)p_applicationDidBecomeActive:(id)arg1 ;
-(bool)shouldApplyFractionalTranslationInRootForLegendLayer;
-(bool)shouldUseLegendLayerForLayerBasedRep;
-(bool)directlyManagesLayerContent;
-(bool)frameInUnscaledCanvasNeedsPaddingForShadows;
-(void)willLayoutAndRenderInBackground;
-(void)addAdditionalChildLayersToArray:(id)arg1 ;
-(bool)mustDrawOnMainThreadForInteractiveCanvas;
-(Class)renderCycleClass;
-(bool)canRenderIntoGLLayer;
-(void)renderIntoGLLayerWithGLContext:(id)arg1 ;
-(bool)canDrawInBackgroundDuringScroll;
-(bool)canDrawInParallel;
-(bool)shouldShowSizesInRulers;
-(bool)shouldShowDragHUD;
-(void)animationFrameDidEndForGLLayer;
-(bool)isLastAbsoluteChunkStageForFinalElements:(bool)arg1 ;
-(void)setTextureAnimationInfo:(id)arg1 ;
-(bool)p_shouldSkipInitialTextureRequestForFinalElements:(bool)arg1 ;
-(id)textureForContext:(id)arg1 ;
-(bool)rotationKnobHitByNaturalPoint:(CGPoint)arg1 ;
-(void)dynamicChange3DDepthDidBegin;
-(id)dynamicChange3DDepthDidEndOutInfoGeometryRect:(CGRect*)arg1 ;
-(void)dynamically3DSetNewDepth:(double)arg1 ;
-(id)renderer3D;
-(bool)textureForHiding;
-(void)setTextureForHiding:(bool)arg1 ;
-(id)animationGLContext;
-(void)setAnimationGLContext:(id)arg1 ;
-(void)dealloc;
-(void)setNeedsDisplay;
-(bool)isOpaque;
-(Class)layerClass;
-(id).cxx_construct;
-(id)engine;
-(CGRect)clipRect;
-(void)invalidateLayoutCache;
-(int)tilingMode;
@end

