/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:32 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSCHChartSeriesTypeBar.h>

@interface TSCHChartSeriesTypeStackedBar : TSCHChartSeriesTypeBar
-(id)g_genericToSpecificPropertyMapStackedBar;
-(unsigned)adjustLabelPosition:(unsigned)arg1 forValue:(double)arg2 ;
-(id)genericToSpecificPropertyMap;
-(unsigned)filterChartLabelPosition:(unsigned)arg1 ;
-(id)elementBuilder;
-(bool)supportsBarGap;
-(id)legalChartLabelPositions;
-(id)userInterfaceNameForLabelPosition:(id)arg1 ;
-(double)beginValueForSeries:(unsigned long long)arg1 index:(unsigned long long)arg2 unitSpaceIntercept:(double)arg3 relativelyPositive:(bool)arg4 valueAxis:(id)arg5 ;
-(double)beginDataValueForSeries:(id)arg1 groupIndex:(unsigned long long)arg2 valueAxisID:(id)arg3 ;
-(unsigned long long)seriesIndexForDrawing:(id)arg1 ;
-(unsigned long long)numberOfSeriesForCalculatingBarWidth:(id)arg1 ;
-(id)init;
@end

