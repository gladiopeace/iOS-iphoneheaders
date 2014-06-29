/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:33 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DChartType.h>

@interface TSCHChartTypePie3D : TSCH3DChartType
-(TSCH3DChartRotationLimit)rotation3DLimit;
-(CGRect)adjustChartFrame:(CGRect)arg1 forPresetImageTarget:(int)arg2 ;
-(void)setupPresetImageChart:(id)arg1 ;
-(id)titlePositionerWithInfo:(id)arg1 scene:(id)arg2 ;
-(id)timeSliceWithChartInfo:(id)arg1 renderSeriesProvider:(id)arg2 animationClass:(Class)arg3 deliveryStyle:(unsigned long long)arg4 ;
-(id)cascadeTimeSliceWithChartInfo:(id)arg1 renderSeriesProvider:(id)arg2 animationClass:(Class)arg3 ;
-(id)valueLabelPositioner;
-(id)categoryLabelPositioner;
-(id)defaultSeriesType:(unsigned long long)arg1 ;
-(id)userInterfaceName;
-(id)imageWithPreset:(id)arg1 target:(int)arg2 imageSize:(CGSize)arg3 imageScale:(double)arg4 swatchFrame:(CGRect)arg5 documentRoot:(id)arg6 ;
-(bool)supportsGroupedShadows;
-(id)animationFilters;
-(bool)supportsBevels;
-(id)animationDeliveryStylesForFilter:(id)arg1 ;
-(bool)approximatesTitleAccommodationUsingLegendSize;
-(id)init;
@end

