/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:39 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDMediaRep.h>
#import <iWorkImport/TSDMagicMoveMatching.h>
#import <iWorkImport/TSDShapeControlRep.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class TSDLayoutGeometry, CALayer, CAShapeLayer, TSDInstantAlphaTracker, NSRecursiveLock, TSDImageRepSizingState, NSObject, NSCache, NSMutableArray;

@interface TSDImageRep : TSDMediaRep <TSDMagicMoveMatching, TSDShapeControlRep> {

	TSDLayoutGeometry* mLastImageGeometryInRoot;
	TSDLayoutGeometry* mLastMaskGeometryInRoot;
	CGAffineTransform mLastLayoutToImageTransform;
	CGRect mFrameInUnscaledCanvasRelativeToSuper;
	bool mFrameInUnscaledCanvasIsValid;
	CALayer* mContentsLayer;
	CAShapeLayer* mMaskPathLayer;
	CAShapeLayer* mIAMaskLayer;
	CAShapeLayer* mMaskSublayer;
	CGAffineTransform mLastPictureFrameLayerTransform;
	bool mDirectlyManagesLayerContent;
	bool mShowImageHighlight;
	bool mInInstantAlphaMode;
	TSDInstantAlphaTracker* mInstantAlphaTracker;
	CGImageRef mInstantAlphaImage;
	CGAffineTransform mBaseMaskLayoutTransform;
	NSRecursiveLock* mLayerUpdateAndSizingStateLock;
	TSDImageRepSizingState* mSizingState;
	bool mSizingStateReady;
	NSObject<OS_dispatch_queue>* mSizedImageAccessQueue;
	CGImageRef mSizedImage;
	CGSize mSizedImageSize;
	long long mSizedImageOrientation;
	bool mSizedImageHasMaskBakedIn;
	bool mSizedImageHasAdjustmentsBakedIn;
	CGPathRef mSizedImageMaskPath;
	NSCache* mHitTestCache;
	long long mHitTestCacheOnce;
	NSMutableArray* mUpdateFromLayoutBlocks;
	NSObject<OS_dispatch_semaphore>* mUpdateFromLayoutBlocksLock;

}

@property (nonatomic,readonly) TSDInstantAlphaTracker * instantAlphaTracker; 
+(double)magicMoveAttributeMatchPercentBetweenOutgoingObject:(id)arg1 incomingObject:(id)arg2 ;
+(CGPathRef)p_newPathToBakeIntoSizedImageForSize:(CGSize)arg1 withImageLayout:(id)arg2 orientation:(long long)arg3 ;
-(void)processChanges:(id)arg1 ;
-(id)initWithLayout:(id)arg1 canvas:(id)arg2 ;
-(void)layoutInRootChangedFrom:(id)arg1 to:(id)arg2 translatedOnly:(bool)arg3 ;
-(void)willBeRemoved;
-(CGRect)frameInUnscaledCanvas;
-(void)willUpdateLayer:(id)arg1 ;
-(void)didUpdateLayer:(id)arg1 ;
-(void)becameNotSelected;
-(bool)shouldShowSelectionHighlight;
-(void)dynamicDragDidBegin;
-(void)dynamicDragDidEnd;
-(id)dynamicResizeDidBegin;
-(void)dynamicResizeDidEndWithTracker:(id)arg1 ;
-(void)viewScaleDidChange;
-(CGRect)boundsForStandardKnobs;
-(void)updatePositionsOfKnobs:(id)arg1 ;
-(id)newTrackerForKnob:(id)arg1 ;
-(bool)directlyManagesLayerContent;
-(bool)canDrawInParallel;
-(bool)shouldShowDragHUD;
-(id)textureForContext:(id)arg1 ;
-(void)updateFromLayout;
-(id)overlayLayers;
-(CGPoint)centerForRotation;
-(int)dragTypeAtCanvasPoint:(CGPoint)arg1 ;
-(void)addKnobsToArray:(id)arg1 ;
-(CGRect)snapRectForDynamicDragWithOffset:(CGPoint)arg1 ;
-(void)processChangedProperty:(int)arg1 ;
-(void)drawInLayerContext:(CGContextRef)arg1 ;
-(id)imageLayout;
-(double)maskScale;
-(void)beginDynamicallyChangingMaskScale;
-(id)resizedGeometryForTransform:(CGAffineTransform)arg1 ;
-(id)maskLayout;
-(id)maskInfo;
-(void)endDynamicallyChangingMaskScale:(double)arg1 ;
-(void)editMaskWithHUD:(bool)arg1 ;
-(void)beginEditingImageInMaskEditMode;
-(void)beginEditingMaskInMaskEditMode;
-(void)willBeginReadMode;
-(bool)handleDoubleTapAtPoint:(CGPoint)arg1 ;
-(void)i_willEnterForeground;
-(void)updateLayerGeometryFromLayout:(id)arg1 ;
-(id)additionalLayersOverLayer;
-(id)hitRepChrome:(CGPoint)arg1 ;
-(bool)shouldCreateSelectionKnobs;
-(CGPoint)positionOfStandardKnob:(id)arg1 forBounds:(CGRect)arg2 ;
-(CGRect)boundsForHighlightLayer;
-(CGAffineTransform)transformForHighlightLayer;
-(CGPoint)i_dragOffset;
-(bool)allowDragDelegate;
-(void)addBitmapsToRenderingQualityInfo:(id)arg1 inContext:(CGContextRef)arg2 ;
-(double)additionalRotationForKnobOrientation;
-(bool)providesGuidesWhileAligning;
-(bool)exclusivelyProvidesGuidesWhileAligning;
-(bool)resetGuidesAfterDragAfterReset;
-(bool)demandsExclusiveSelection;
-(double)angleForRotation;
-(CGPoint)unscaledGuidePosition;
-(void)dynamicallyRotatingWithTracker:(id)arg1 ;
-(void)dynamicRotateDidEndWithTracker:(id)arg1 ;
-(CGRect)targetRectForEditMenu;
-(id)infoForTransforming;
-(bool)wantsGuidesWhileResizing;
-(bool)wantsToDistortWithImagerContext;
-(void)dynamicMoveSmartShapeKnobDidBegin;
-(void)dynamicallyMovedSmartShapeKnobTo:(CGPoint)arg1 withTracker:(id)arg2 ;
-(bool)shouldShowShadow;
-(void)dynamicMoveSmartShapeKnobDidEndWithTracker:(id)arg1 ;
-(void)drawInContextWithoutEffects:(CGContextRef)arg1 withContent:(bool)arg2 withStroke:(bool)arg3 withOpacity:(bool)arg4 forAlphaOnly:(bool)arg5 drawChildren:(bool)arg6 ;
-(id)imageOfStroke:(CGRect*)arg1 ;
-(id)pathSourceForSelectionHighlightBehavior;
-(bool)canDrawShadowInOneStepWithChildren:(bool)arg1 ;
-(void)p_updateDirectlyManagesLayerContentForLayer:(id)arg1 ;
-(void)p_disposeStrokeLayer;
-(void)p_disposeMaskLayer;
-(void)p_setDefaultMaskWithActionString:(id)arg1 ;
-(void)p_endEditingMask;
-(bool)p_shouldBakeMaskIntoSizedImage;
-(void)p_invalidateSizedImage;
-(void)p_setUpMaskModeUI;
-(void)p_updateHUD;
-(void)endInstantAlphaMode;
-(void)endEditingMask;
-(bool)p_hitCacheGetCachedValue:(bool*)arg1 forPoint:(CGPoint)arg2 ;
-(void)p_drawInContext:(CGContextRef)arg1 withContent:(bool)arg2 withStroke:(bool)arg3 withOpacity:(double)arg4 withMask:(bool)arg5 withIAMask:(bool)arg6 forLayer:(bool)arg7 forShadowOrHitTest:(bool)arg8 ;
-(void)p_hitCacheSetCachedValue:(bool)arg1 forPoint:(CGPoint)arg2 ;
-(void)maskWithHUD:(bool)arg1 ;
-(bool)shouldShowSmartMaskKnobs;
-(id)p_validatedBitmapImageProvider;
-(void)p_invalidateSizedImageFromQueue;
-(void)p_invalidateHitTestCache;
-(bool)shouldShowMediaReplaceUI;
-(bool)shouldAllowReplacementFromPaste;
-(id)commandToResetToSize:(CGSize)arg1 ;
-(void)beginInstantAlphaMode;
-(id)p_validatedImageProvider;
-(void)p_cleanUpMaskModeUI;
-(CGImageRef)p_newImageByApplyingAdjustmentsToImage:(CGImageRef)arg1 alreadyEnhanced:(bool)arg2 ;
-(id)p_validatedThumbnailImageProvider;
-(id)p_imageData;
-(CGSize)p_desiredSizedImageSize;
-(bool)p_directlyManagesContentForLayer:(id)arg1 ;
-(CGImageRef)p_imageForDirectlyManagedLayer:(id)arg1 ;
-(bool)p_shouldRenderWithMaskToBounds;
-(void)p_getAliasedValuesForMaskToBoundsDirectLayerFrame:(out CGRect*)arg1 transform:(out CGAffineTransform*)arg2 ;
-(long long)p_orientationForDirectlyManagedLayer;
-(void)p_takeSizedImageFromStateIfReady;
-(void)p_generateSizedImageIfNecessary;
-(void)p_createMaskLayerForLayer:(id)arg1 ;
-(void)p_updateStrokeLayerForStroke:(id)arg1 repLayer:(id)arg2 ;
-(bool)p_shouldMaskWithFrameLayers;
-(void)p_updateMaskSublayersForMaskEditMode;
-(void)p_updateMaskLayer:(id)arg1 forRepLayer:(id)arg2 shouldIncludeMask:(bool)arg3 shouldIncludeInstantAlpha:(bool)arg4 ;
-(void)setMagicMoveTextureAttributes:(id)arg1 ;
-(id)p_imageProvider;
-(bool)p_drawsInOneStep;
-(bool)shouldShowReflection;
-(bool)p_okayToGenerateSizedImage;
-(void)p_startSizing;
-(void)p_generateSizedImageInBackground:(id)arg1 ;
-(void)p_generateSizedImage:(id)arg1 ;
-(void)p_didGenerateSizedImageInBackground;
-(void)p_takeSizedImageFromState;
-(void)unhighlightImage;
-(void)maskScaleLimitsReturningMin:(double*)arg1 max:(double*)arg2 ;
-(void)dynamicallySetMaskScale:(double)arg1 ;
-(void)resetMask;
-(void)p_canvasSelectionDidChange:(id)arg1 ;
-(CGImageRef)imageForInstantAlpha;
-(void)p_popoverViewPresented:(id)arg1 ;
-(id)instantAlphaTracker;
-(void)dealloc;
-(bool)containsPoint:(CGPoint)arg1 ;
-(void)highlightImage;
-(id)imageInfo;
-(bool)isDraggable;
-(int)tilingMode;
@end

