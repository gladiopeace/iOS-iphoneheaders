/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:33 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHChartAxis.h>

@class NSNumber;

@interface TSCHChartValueAxis : TSCHChartAxis

@property (nonatomic,readonly) NSNumber * userMin; 
@property (nonatomic,readonly) NSNumber * userMax; 
+(id)axisForInfo:(id)arg1 ;
-(id)g_genericToSpecificPropertyMap;
-(pair<TSCH3DAxisLabelEnumerator *, TSCH3DAxisLabelEnumerator *>)labelEnumeratorPair;
-(int)specificPropertyForGeneric:(int)arg1 ;
-(void)updateModelMinMaxInAnalysis:(id)arg1 ;
-(void)adjustMinMaxForDataRangeInAnalysis:(id)arg1 ;
-(id)computeMajorGridlinesFromMinMaxInAnalysis:(id)arg1 ;
-(bool)editableFormatForValueStrings;
-(void)updateModelMinMaxForTrendLineOnSeries:(id)arg1 axisID:(id)arg2 analysis:(id)arg3 ;
-(void)updateModelMinMaxForErrorBarsOnSeries:(id)arg1 axisID:(id)arg2 analysis:(id)arg3 ;
-(id)userMin;
-(id)userMax;
-(id)p_computeMajorGridlines:(long long)arg1 analysis:(id)arg2 ;
-(id)p_computeMajorGridlinesAutomaticallyInAnalysis:(id)arg1 forHorizChart:(bool)arg2 ;
-(double)p_calculateAxisDeltaFromSpread:(double)arg1 spreadRanges:(const CGSize*)arg2 ;
-(SCD_Struct_TS448)p_axisDescFromPositiveMinValue:(double)arg1 positiveMaxValue:(double)arg2 spreadRanges:(const CGSize*)arg3 ;
-(SCD_Struct_TS448)p_axisDescFromNegativeMinValue:(double)arg1 positiveMaxValue:(double)arg2 spreadRanges:(const CGSize*)arg3 ;
-(SCD_Struct_TS448)p_axisDescFromFixedPositiveMinValue:(double)arg1 positiveMaxValue:(double)arg2 spreadRanges:(const CGSize*)arg3 ;
-(SCD_Struct_TS448)p_axisDescFromFixedNegativeMinValue:(double)arg1 positiveMaxValue:(double)arg2 spreadRanges:(const CGSize*)arg3 ;
-(SCD_Struct_TS448)p_axisDescFromPositiveMinValue:(double)arg1 fixedPositiveMaxValue:(double)arg2 spreadRanges:(const CGSize*)arg3 ;
-(SCD_Struct_TS448)p_axisDescFromNegativeMinValue:(double)arg1 fixedPositiveMaxValue:(double)arg2 spreadRanges:(const CGSize*)arg3 ;
-(SCD_Struct_TS448)p_axisDescFromFixedMinValue:(double)arg1 fixedMaxValue:(double)arg2 spreadRanges:(const CGSize*)arg3 ;
-(SCD_Struct_TS448)p_axisDescFromMinValue:(double)arg1 maxValue:(double)arg2 userValues:(long long)arg3 ;
-(SCD_Struct_TS448)p_calculateAxisDescFromMinValue:(double)arg1 maxValue:(double)arg2 userValues:(long long)arg3 ;
-(void)p_includeZeroWithMinValue:(double*)arg1 maxValue:(double*)arg2 userValues:(long long)arg3 ;
-(id)p_GetGenericToValuePropertyMap;
-(double)validateUserMinForDouble:(double)arg1 ;
-(double)validateUserMaxForDouble:(double)arg1 ;
-(void)dealloc;
-(id)defaultProperties;
@end

