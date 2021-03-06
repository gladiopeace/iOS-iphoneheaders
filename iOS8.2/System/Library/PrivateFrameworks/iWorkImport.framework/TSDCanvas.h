/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:13 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol TSDCanvasDelegate;
#import <iWorkImport/iWorkImport-Structs.h>
@class TSDInteractiveCanvasController, NSArray, NSSet, TSDLayoutController, TSKDocumentRoot, TSPObjectContext, TSKChangeNotifier, TSKAccessController;

@interface TSDCanvas : NSObject {

	id<TSDCanvasDelegate> mDelegate;
	TSDInteractiveCanvasController* mCanvasController;
	NSArray* mInfos;
	NSArray* mTopLevelReps;
	NSSet* mAllReps;
	CFDictionaryRef mRepsByLayout;
	TSDLayoutController* mLayoutController;
	char mIsTemporaryForLayout;
	CGSize mUnscaledSize;
	float mViewScale;
	float mContentsScale;
	struct {
		unsigned layout : 1;
		unsigned reps : 1;
		unsigned visibleBounds : 1;
		unsigned layers : 1;
	}  mInvalidFlags;
	char mInLayout;
	NSArray* mPreviouslyVisibleLayouts;
	char mIgnoringClickThrough;
	CGColorRef mBackgroundColor;
	UIEdgeInsets mContentInset;
	char mClipToCanvas;
	char mAllowsFontSubpixelQuantization;
	char mSuppressesShadowsAndReflections;

}

@property (assign,nonatomic) id<TSDCanvasDelegate> delegate; 
@property (nonatomic,readonly) TSKDocumentRoot * documentRoot; 
@property (nonatomic,readonly) TSPObjectContext * objectContext; 
@property (nonatomic,readonly) TSKChangeNotifier * changeNotifier; 
@property (nonatomic,readonly) TSKAccessController * accessController; 
@property (nonatomic,readonly) TSDInteractiveCanvasController * canvasController; 
@property (nonatomic,readonly) char supportsAdaptiveLayout; 
@property (assign,nonatomic) char allowsFontSubpixelQuantization; 
@property (assign,nonatomic) char suppressesShadowsAndReflections; 
@property (assign,nonatomic) CGColorRef backgroundColor; 
@property (assign,nonatomic) UIEdgeInsets contentInset; 
@property (nonatomic,copy) NSArray * infosToDisplay; 
@property (nonatomic,readonly) TSDLayoutController * layoutController; 
@property (nonatomic,readonly) char isTemporaryForLayout; 
@property (nonatomic,readonly) char isCanvasInteractive; 
@property (assign,nonatomic) CGSize unscaledSize; 
@property (assign,nonatomic) float viewScale; 
-(TSKChangeNotifier *)changeNotifier;
-(TSKAccessController *)accessController;
-(float)viewScale;
-(CGRect)visibleUnscaledRectForClippingReps;
-(char)isCanvasInteractive;
-(CGPoint)convertBoundsToUnscaledPoint:(CGPoint)arg1 ;
-(void)invalidateLayers;
-(CGRect)convertBoundsToUnscaledRect:(CGRect)arg1 ;
-(CGRect)convertUnscaledToBoundsRect:(CGRect)arg1 ;
-(char)isPrinting;
-(char)isDrawingIntoPDF;
-(TSDInteractiveCanvasController *)canvasController;
-(void)layoutInvalidated;
-(CGSize)unscaledSize;
-(id)commandController;
-(char)shouldSuppressBackgrounds;
-(TSDLayoutController *)layoutController;
-(void)i_setCanvasController:(id)arg1 ;
-(id)allReps;
-(void)p_layoutWithReadLock;
-(void)invalidateReps;
-(void)invalidateVisibleBounds;
-(id)topLevelReps;
-(CGPoint)convertUnscaledToBoundsPoint:(CGPoint)arg1 ;
-(char)spellCheckingSupported;
-(char)spellCheckingSuppressed;
-(char)shouldShowTextOverflowGlyphs;
-(char)shouldShowInstructionalText;
-(NSArray *)infosToDisplay;
-(void)i_setInfosToDisplay:(id)arg1 updatingLayoutController:(char)arg2 ;
-(void)i_updateInfosInLayoutController;
-(id)repForLayout:(id)arg1 ;
-(void)recreateAllLayoutsAndReps;
-(void)i_unregisterRep:(id)arg1 ;
-(id)hitRep:(CGPoint)arg1 inTopLevelReps:(id)arg2 smallRepOutset:(float)arg3 passingTest:(/*^block*/id)arg4 ;
-(void)i_performBlockWhileIgnoringClickThrough:(/*^block*/id)arg1 ;
-(TSPObjectContext *)objectContext;
-(char)i_needsLayout;
-(CGRect)i_unscaledRectOfLayouts;
-(void)setUnscaledSize:(CGSize)arg1 ;
-(char)supportsAdaptiveLayout;
-(void)setInfosToDisplay:(NSArray *)arg1 ;
-(CGSize)convertUnscaledToBoundsSize:(CGSize)arg1 ;
-(CGSize)convertBoundsToUnscaledSize:(CGSize)arg1 ;
-(void)i_registerRep:(id)arg1 ;
-(void)addBitmapsToRenderingQualityInfo:(id)arg1 inContext:(CGContextRef)arg2 ;
-(CGImageRef)i_imageInScaledRect:(CGRect)arg1 withTargetIntegralSize:(CGSize)arg2 distortedToMatch:(char)arg3 forceSRGB:(char)arg4 ;
-(void)i_clipsImagesToBounds:(char)arg1 ;
-(CGImageRef)i_imageInScaledRect:(CGRect)arg1 forceSRGB:(char)arg2 ;
-(void)i_drawBackgroundInContext:(CGContextRef)arg1 ;
-(void)i_drawRepsInContext:(CGContextRef)arg1 ;
-(CGContextRef)i_createContextToDrawImageInScaledRect:(CGRect)arg1 withTargetIntegralSize:(CGSize)arg2 returningBounds:(CGRect*)arg3 integralBounds:(CGRect*)arg4 forceSRGB:(char)arg5 ;
-(CGImageRef)i_newImageInContext:(CGContextRef)arg1 bounds:(CGRect)arg2 integralBounds:(CGRect)arg3 distortedToMatch:(char)arg4 ;
-(void)orderRepsForLayout:(id)arg1 ;
-(id)initForTemporaryLayout;
-(char)i_shouldIgnoreClickThrough;
-(CGRect)i_approximateScaledFrameOfEditingMenuAtPoint:(CGPoint)arg1 ;
-(void)p_removeAllReps;
-(char)p_updateRepsFromLayouts;
-(char)isTemporaryForLayout;
-(CGRect)p_bounds;
-(char)p_expandHitRegionOfPoint:(CGPoint)arg1 forRep:(id)arg2 smallRepOutset:(float)arg3 forShortestDistance:(float*)arg4 ;
-(char)p_shouldRep:(id)arg1 countAsClosestSmallRepForSizeLimit:(float)arg2 ;
-(void)i_drawBackgroundInContext:(CGContextRef)arg1 bounds:(CGRect)arg2 ;
-(void)i_drawRepsInContext:(CGContextRef)arg1 distort:(CGAffineTransform)arg2 ;
-(CGRect)i_clipRectForCreatingRepsFromLayouts;
-(void)i_setContentsScale:(float)arg1 ;
-(CGImageRef)i_image;
-(char)suppressesShadowsAndReflections;
-(void)setSuppressesShadowsAndReflections:(char)arg1 ;
-(id)textRendererForLayer:(id)arg1 context:(CGContextRef)arg2 ;
-(char)allowsFontSubpixelQuantization;
-(void)setAllowsFontSubpixelQuantization:(char)arg1 ;
-(void)dealloc;
-(void)setBackgroundColor:(CGColorRef)arg1 ;
-(CGColorRef)backgroundColor;
-(void)setDelegate:(id<TSDCanvasDelegate>)arg1 ;
-(id)init;
-(id<TSDCanvasDelegate>)delegate;
-(void)layoutIfNeeded;
-(float)contentsScale;
-(UIEdgeInsets)contentInset;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void)teardown;
-(TSKDocumentRoot *)documentRoot;
-(void)setViewScale:(float)arg1 ;
@end

