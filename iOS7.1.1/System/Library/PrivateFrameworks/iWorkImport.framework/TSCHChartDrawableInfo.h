/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:35 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDDrawableInfo.h>
#import <iWorkImport/TSDReducableInfo.h>
#import <iWorkImport/TSPCopying.h>
#import <iWorkImport/TSKSearchable.h>
#import <iWorkImport/TSKModel.h>
#import <iWorkImport/TSSPresetSource.h>
#import <iWorkImport/TSSThemedObject.h>
#import <iWorkImport/TSCHStyleSwapSupporting.h>
#import <iWorkImport/TSDMixing.h>
#import <iWorkImport/TSSStyleClient.h>
#import <iWorkImport/TSCECalculationEngineRegistration.h>

@protocol TSCHMediatorProvider;
@class TSCHChartInfo, TSPObject, TSCHChunkManager;

@interface TSCHChartDrawableInfo : TSDDrawableInfo <TSDReducableInfo, TSPCopying, TSKSearchable, TSKModel, TSSPresetSource, TSSThemedObject, TSCHStyleSwapSupporting, TSDMixing, TSSStyleClient, TSCECalculationEngineRegistration> {

	TSCHChartInfo* mChart;
	TSPObject<TSCHMediatorProvider>* mMediatorPersistentObject;
	TSCHChunkManager* mChunkManager;

}

@property (nonatomic,readonly) TSCHChartInfo * chart; 
@property (nonatomic,readonly) TSCHChunkManager * chunkManager; 
+(id)presetKinds;
+(void)bootstrapPresetsOfKind:(id)arg1 inTheme:(id)arg2 alternate:(int)arg3 ;
-(id)componentRootObject;
-(void)registerWithCalculationEngineForDocumentLoad:(id)arg1 ;
-(void)unregisterFromCalculationEngine:(id)arg1 ;
-(bool)registerLast;
-(id)objectToArchiveInDependencyTracker;
-(id)titleForBuildChunk:(id)arg1 ;
-(id)buildImageTitle;
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)adoptStylesheet:(id)arg1 withMapper:(id)arg2 ;
-(id)initFromPreUFFArchiveWithUnarchiver:(id)arg1 ;
-(id)p_copyFor3DAs2DWithContext:(id)arg1 chartFrame:(CGRect)arg2 legendFrame:(CGRect)arg3 ;
-(bool)aspectRatioLocked;
-(void)willModify;
-(id)copyWithContext:(id)arg1 ;
-(void)acceptVisitor:(id)arg1 ;
-(id)referencedStyles;
-(void)replaceReferencedStylesUsingBlock:(/*^block*/ id)arg1 ;
-(void)setGeometry:(id)arg1 omitLegendResize:(bool)arg2 ;
-(Class)repClass;
-(id)initWithContext:(id)arg1 chartType:(id)arg2 legendShowing:(id)arg3 chartBodyFrame:(id)arg4 chartAreaFrame:(id)arg5 circumscribingFrame:(id)arg6 legendFrame:(id)arg7 stylePreset:(id)arg8 privateSeriesStyles:(id)arg9 chartNonStyle:(id)arg10 legendNonStyle:(id)arg11 valueAxisNonStyles:(id)arg12 categoryAxisNonStyles:(id)arg13 seriesNonStyles:(id)arg14 ;
-(id)chunkManager;
-(void)modelDidInvalidateWithDetails:(id)arg1 ;
-(id)animationFilters;
-(id)applyStyleSwapTuples:(id)arg1 ;
-(id)p_drawableGeometry;
-(void)p_setDrawableGeometry:(id)arg1 clearObjectPlaceholderFlag:(bool)arg2 ;
-(void)chartTypeDidChangeWithDetails:(id)arg1 ;
-(void)chartDidInvalidateWithProperties:(id)arg1 ;
-(id)applyStyleSwapTuple:(id)arg1 ;
-(Class)editorClass;
-(id)childInfos;
-(id)styleOwnerFromSwapType:(int)arg1 andIndex:(unsigned long long)arg2 ;
-(id)childCommandForApplyThemeCommand:(id)arg1 ;
-(id)commandForTransformingByTransform:(CGAffineTransform)arg1 context:(id)arg2 transformedObjects:(id)arg3 inBounds:(CGRect)arg4 ;
-(bool)hasBackgroundLayerForPieChart;
-(bool)canAspectRatioLockBeChangedByUser;
-(id)searchForString:(id)arg1 options:(unsigned long long)arg2 onHit:(/*^block*/ id)arg3 ;
-(id)searchForSpellingErrors:(/*^block*/ id)arg1 stop:(bool*)arg2 ;
-(unsigned long long)textureDeliveryStyleFromDeliveryString:(id)arg1 ;
-(id)textureDeliveryStylesLocalized:(bool)arg1 animationFilter:(id)arg2 ;
-(id)initWithContext:(id)arg1 chartType:(id)arg2 legendShowing:(id)arg3 chartBodyFrame:(id)arg4 stylePreset:(id)arg5 privateSeriesStyles:(id)arg6 chartNonStyle:(id)arg7 legendNonStyle:(id)arg8 valueAxisNonStyles:(id)arg9 categoryAxisNonStyles:(id)arg10 seriesNonStyles:(id)arg11 ;
-(id)initWithContext:(id)arg1 chartType:(id)arg2 legendShowing:(id)arg3 chartAreaFrame:(id)arg4 stylePreset:(id)arg5 privateSeriesStyles:(id)arg6 chartNonStyle:(id)arg7 legendNonStyle:(id)arg8 valueAxisNonStyles:(id)arg9 categoryAxisNonStyles:(id)arg10 seriesNonStyles:(id)arg11 ;
-(id)initWithContext:(id)arg1 chartType:(id)arg2 legendShowing:(id)arg3 circumscribingFrame:(id)arg4 stylePreset:(id)arg5 privateSeriesStyles:(id)arg6 chartNonStyle:(id)arg7 legendNonStyle:(id)arg8 valueAxisNonStyles:(id)arg9 categoryAxisNonStyles:(id)arg10 seriesNonStyles:(id)arg11 ;
-(id)initWithContext:(id)arg1 chartType:(id)arg2 legendShowing:(id)arg3 chartAreaFrame:(id)arg4 legendFrame:(id)arg5 stylePreset:(id)arg6 privateSeriesStyles:(id)arg7 chartNonStyle:(id)arg8 legendNonStyle:(id)arg9 valueAxisNonStyles:(id)arg10 categoryAxisNonStyles:(id)arg11 seriesNonStyles:(id)arg12 ;
-(void)setPersistentMediator:(id)arg1 ;
-(void)coalesceChanges:(id)arg1 ;
-(void)p_searchString:(id)arg1 atSelectionPath:(id)arg2 forString:(id)arg3 options:(unsigned long long)arg4 hitBlock:(/*^block*/ id)arg5 ;
-(void)p_processAllChartStrings:(/*^block*/ id)arg1 ;
-(void)willBeAddedToDocumentRoot:(id)arg1 context:(id)arg2 ;
-(void)wasAddedToDocumentRoot:(id)arg1 context:(id)arg2 ;
-(void)willBeRemovedFromDocumentRoot:(id)arg1 ;
-(void)wasRemovedFromDocumentRoot:(id)arg1 ;
-(void)p_sendInvalidationWithKind:(int)arg1 details:(id)arg2 ;
-(id)imageDatasForReducingFileSizeWithAssociatedHints;
-(CGSize)targetSizeForImageData:(id)arg1 associatedHint:(id)arg2 ;
-(id)commandToReplaceImageData:(id)arg1 withReducedImageData:(id)arg2 associatedHint:(id)arg3 ;
-(id)childCommandForReplaceAllCommand:(id)arg1 ;
-(long long)mixingTypeWithObject:(id)arg1 ;
-(id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2 ;
-(id)initWithContext:(id)arg1 chartType:(id)arg2 chartBodyFrame:(id)arg3 stylePreset:(id)arg4 privateSeriesStyles:(id)arg5 ;
-(id)initWithContext:(id)arg1 chartType:(id)arg2 chartAreaFrame:(id)arg3 stylePreset:(id)arg4 privateSeriesStyles:(id)arg5 ;
-(id)initWithContext:(id)arg1 chartType:(id)arg2 circumscribingFrame:(id)arg3 stylePreset:(id)arg4 privateSeriesStyles:(id)arg5 ;
-(id)initWithContext:(id)arg1 chartType:(id)arg2 chartAreaFrame:(id)arg3 legendFrame:(id)arg4 stylePreset:(id)arg5 privateSeriesStyles:(id)arg6 ;
-(CGRect)visibleBoundsForPositioning;
-(void)tsaMoveToPosition:(CGPoint)arg1 size:(CGSize)arg2 ;
-(void)setInsertionCenterPosition:(CGPoint)arg1 ;
-(unsigned long long)chunkCountForTextureDeliveryStyle:(unsigned long long)arg1 animationFilter:(id)arg2 ;
-(bool)reverseChunkingIsSupported;
-(bool)shouldAddMultiDataBuildWhenAddingToDocument;
-(bool)supportsHyperlinks;
-(bool)canSizeBeChangedIncrementally;
-(void)dealloc;
-(id)geometry;
-(void)setGeometry:(id)arg1 ;
-(id)chart;
-(Class)layoutClass;
@end

