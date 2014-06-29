/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:32 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHUnretainedParent.h>
#import <iWorkImport/TSCHStyleOwning.h>

@protocol TSCHStyleActAlike;
@class TSCHChartModel, TSCHChartAxisID, TSUFastReadInvalidatingCache;

@interface TSCHChartAxis : NSObject <TSCHUnretainedParent, TSCHStyleOwning> {

	TSCHChartModel* mChartModel;
	TSCHChartAxisID* mAxisID;
	<TSCHStyleActAlike>* mStyle;
	<TSCHStyleActAlike>* mNonStyle;
	unsigned long long mStyleIndex;
	unsigned long long mNonStyleIndex;
	TSUFastReadInvalidatingCache* mAnalysisCache;
	TSUFastReadInvalidatingCache* mAxisNumberFormatCache;

}

@property (nonatomic,readonly) TSCHChartAxisID * axisID; 
@property (nonatomic,readonly) TSCHChartModel * model; 
@property (nonatomic,readonly) int currentAxisScaleSetting; 
@property (readonly) bool isCategory; 
@property (readonly) bool isRangeContinuous; 
+(id)paragraphStyleForLabelsFontForInfo:(id)arg1 ;
+(id)axisForInfo:(id)arg1 ;
+(tvec2<float>)sizeOfSeriesLabelsForInfo:(id)arg1 onlyHeight:(bool)arg2 ;
+(tvec2<float>)sizeOfLabelsForInfo:(id)arg1 onlyHeight:(bool)arg2 ;
+(tvec2<float>)sizeOfSeriesLabelsForInfo:(id)arg1 ;
-(id)g_genericToDefaultPropertyMap;
-(tvec2<float>)sizeOfLabelsForInfo:(id)arg1 enumerator:(id)arg2 onlyHeight:(bool)arg3 ;
-(id)objectValueForProperty:(int)arg1 ;
-(void)clearParent;
-(id)chartInfo;
-(float)floatValueForProperty:(int)arg1 defaultValue:(float)arg2 ;
-(double)unitSpaceValueForSeries:(id)arg1 index:(unsigned long long)arg2 ;
-(int)intValueForProperty:(int)arg1 defaultValue:(int)arg2 ;
-(unsigned long long)indexForSelectionPathLabelIndex:(unsigned long long)arg1 ;
-(id)axisID;
-(unsigned long long)selectionPathLabelIndexForIndex:(unsigned long long)arg1 ;
-(bool)isCategory;
-(double)interceptForAxis:(id)arg1 ;
-(double)unitSpaceValueForDataSpaceValue:(double)arg1 ;
-(int)specificPropertyForGeneric:(int)arg1 ;
-(id)nonstyle;
-(double*)unitSpaceValuesForSeries:(id)arg1 indexes:(NSRange)arg2 ;
-(bool)isRangeContinuous;
-(double)unitSpaceValueForCountSpaceValue:(double)arg1 ;
-(id)formattedStringForSeries:(id)arg1 index:(unsigned long long)arg2 ;
-(id)majorGridLocations;
-(id)formattedStringForValue:(id)arg1 ;
-(id)p_axisAnalysisFromCurrentModel;
-(id)p_axisNumberFormatFromCurrentModel;
-(id)analysis;
-(unsigned long long)p_rangeCount;
-(id)minorGridLocations;
-(void)updateMinMaxGridLocationsInAnalysis:(id)arg1 ;
-(double)doubleModelToAxisValue:(double)arg1 forSeries:(id)arg2 ;
-(double)modelMin;
-(double)modelMax;
-(void)updateModelMinMaxInAnalysis:(id)arg1 ;
-(void)adjustMinMaxForDataRangeInAnalysis:(id)arg1 ;
-(id)computeMajorGridlinesFromMinMaxInAnalysis:(id)arg1 ;
-(id)computeMinorGridlinesFromMajorGridlinesInAnalysis:(id)arg1 ;
-(double)unitSpaceValueForDataSpaceValue:(double)arg1 min:(double)arg2 max:(double)arg3 ;
-(double)unitSpaceValueForSeries:(id)arg1 index:(unsigned long long)arg2 min:(double)arg3 max:(double)arg4 ;
-(double*)unitSpaceValuesForSeries:(id)arg1 indexes:(NSRange)arg2 min:(double)arg3 max:(double)arg4 ;
-(unsigned long long)p_count;
-(double)unitSpaceValueForCountSpaceValue:(double)arg1 min:(double)arg2 count:(double)arg3 ;
-(double)unitSpaceHalfOffsetForCountSpaceHalfOffset;
-(double)unitSpaceCenterValueHalfOffset;
-(id)numberFormatForSeries:(id)arg1 index:(unsigned long long)arg2 ;
-(int)defaultPropertyForGeneric:(int)arg1 ;
-(id)p_genericToDefaultPropertyMap;
-(id)drawableInfo;
-(id)p_swapTuplesForMutations:(id)arg1 forImport:(bool)arg2 ;
-(void)invalidateTransientState;
-(bool)hasIntValueForProperty:(int)arg1 value:(int*)arg2 ;
-(bool)hasFloatValueForProperty:(int)arg1 value:(float*)arg2 ;
-(bool)hasObjectValueForProperty:(int)arg1 value:(id*)arg2 ;
-(id)swapTuplesForMutations:(id)arg1 ;
-(id)swapTuplesForMutationsForImport:(id)arg1 ;
-(id)swapTuplesForParagraphStyleMutations:(id)arg1 forReferencingProperty:(int)arg2 ;
-(void)propertiesWereMutated:(id)arg1 ;
-(id)initWithAxisID:(id)arg1 model:(id)arg2 ;
-(int)currentAxisScaleSetting;
-(double)unitSpaceValueForDataSpaceValue:(double)arg1 series:(id)arg2 index:(unsigned long long)arg3 ;
-(double)unitSpaceCenterValueForValue:(double)arg1 ;
-(double)unitSpaceCenterValueForSeries:(id)arg1 index:(unsigned long long)arg2 ;
-(double*)unitSpaceCenterValuesForSeries:(id)arg1 indexes:(NSRange)arg2 ;
-(bool)editableFormatForValueStrings;
-(id)inspectorStringForValue:(id)arg1 ;
-(bool)supportsFormattedStringForInvalidValue;
-(id)valueForFormattedString:(id)arg1 ;
-(unsigned long long)selectionPathLabelIndexForMultiDataSetIndex:(unsigned long long)arg1 ;
-(id)formattedStringForSeries:(id)arg1 index:(unsigned long long)arg2 multiDataSetIndex:(unsigned long long)arg3 ;
-(void)setStyle:(id)arg1 index:(unsigned long long)arg2 ;
-(void)setNonStyle:(id)arg1 index:(unsigned long long)arg2 ;
-(unsigned long long)nonStyleIndex;
-(unsigned long long)axisIndex;
-(void)dealloc;
-(id)description;
-(id)style;
-(id)context;
-(id)model;
-(double)range;
-(id)valueForProperty:(int)arg1 ;
-(id)numberFormat;
-(unsigned long long)styleIndex;
-(id)defaultProperties;
-(double)max;
-(double)min;
@end

