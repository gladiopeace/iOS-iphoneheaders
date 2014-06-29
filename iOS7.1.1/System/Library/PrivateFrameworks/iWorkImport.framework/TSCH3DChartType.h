/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:32 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH2DChartType.h>

@interface TSCH3DChartType : TSCH2DChartType
+(tvec3<float>)adjustedScaleForInfoChartScale:(const tvec3<float>*)arg1 chartType:(id)arg2 barShape:(int)arg3 ;
+(id)allAnimationFilters;
-(int)deprecated3DBevelEdgesSpecificProperty;
-(int)deprecated3DShadowSpecificProperty;
-(int)p_layoutCachePlatform;
-(id)p_layoutCacheForCacheType:(TSCH3DPrecalculatedLayoutCacheType)arg1 ;
-(id)p_activateLayoutCacheForTarget:(int)arg1 ;
-(CGRect)adjustChartFrame:(CGRect)arg1 forPresetImageTarget:(int)arg2 ;
-(void)setupPresetImageChart:(id)arg1 ;
-(void)p_layoutInwardForSwatchFrame:(CGRect)arg1 chart:(id)arg2 offset:(CGPoint)arg3 ;
-(void)didRenderIconForInfo:(id)arg1 ;
-(bool)p_isIPhone;
-(id)drawableChartInfoForIconWithPreset:(id)arg1 target:(int)arg2 inFrame:(CGRect)arg3 offset:(CGPoint)arg4 ;
-(id)valueLabelPositioner;
-(id)categoryLabelPositioner;
-(tvec3<float>)adjustedScaleForInfoChartScale:(const tvec3<float>*)arg1 barShape:(int)arg2 ;
-(double)sageMaxDepthRatio;
-(double)maxDepthRatio;
-(unsigned long long)depthRatioDimension;
-(id)sceneWithChartInfo:(id)arg1 layoutSettings:(SCD_Struct_TS408)arg2 ;
-(Class)stageClass;
-(Class)repClass;
-(id)renderers;
-(bool)isHomogeneous;
-(bool)supportsSeriesFill;
-(bool)supportsSeriesStroke;
-(Class)presetImagerClass;
-(bool)supportsBorderFrame;
-(bool)supportsGroupedShadows;
-(bool)supportsBackgroundFill;
-(bool)supportsTrendLines;
-(bool)supportsErrorBars;
-(bool)supportsCategoryAxisMinorTickmarks;
-(bool)supportsConnectingLines;
-(bool)supportsBubbleOptions;
-(id)animationFiltersWithDefaultFilters:(id)arg1 ;
-(Class)chartLayoutItemClass;
-(Class)chartLayoutClass;
-(Class)sageGeometeryHelperClass;
-(id)animationFilters;
-(bool)supportsMinorGridlines;
-(bool)supportsAxisLine;
-(int)labelOrientation;
-(bool)supportsBevels;
-(bool)supportsColumnShape;
-(id)columnShapeUIName;
-(id)animationDeliveryStylesForFilter:(id)arg1 ;
-(unsigned long long)presentationDimension;
-(int)chartBodyBoundsDefinition;
-(CGSize)minimumChartBodySize;
-(bool)approximatesTitleAccommodationUsingLegendSize;
-(bool)supportsShadowOffset;
-(bool)supportsSeriesShadow;
-(bool)supportsValueAxisLabelsPosition;
-(bool)supportsAxisLabelsOrientation;
-(bool)supportsTickmarks;
-(bool)supportsIncrementalResize;
-(bool)supportsInterSetDepthGap;
-(double)minDepthRatio;
-(bool)needsRefinementForInwardLayout;
-(Class)layoutClass;
@end

