/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:03 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CHAutoStyling;
#import <OfficeImport/OfficeImport-Structs.h>
@class CHDChart;

@interface CHBState : NSObject {

	CHDChart* mChart;
	CFArrayRef mXlChartDataSeriesCollection;
	int mXlSeriesCount;
	int mXlCurrentSeriesIndex;
	<CHAutoStyling>* mAutoStyling;
	bool mHasPrimaryMixedArea;
	bool mHasPrimaryMixedColumn;
	bool mHasPrimaryMixedLine;
	bool mHasSecondaryMixedArea;
	bool mHasSecondaryMixedColumn;
	bool mHasSecondaryMixedLine;

}
-(void)dealloc;
-(id)init;
-(id)workbook;
-(id)resources;
-(id)chart;
-(id)autoStyling;
-(void)readAndCacheXlChartDataSeries;
-(int)xlSeriesCount;
-(XlChartDataSeries*)xlChartDataSeriesAtIndex:(int)arg1 ;
-(void)setXlCurrentSeriesIndex:(int)arg1 ;
-(void)setChart:(id)arg1 ;
-(void)deleteXlChartDataSeriesCollection;
-(bool)hasPrimaryMixedArea;
-(bool)hasSecondaryMixedArea;
-(bool)hasPrimaryMixedColumn;
-(bool)hasSecondaryMixedColumn;
-(bool)hasPrimaryMixedLine;
-(XlChartDataSeries*)xlCurrentChartDataSeries;
-(int)xlCurrentChartDataSeriesIndex;
-(void)setHasPrimaryMixedArea:(bool)arg1 ;
-(void)setHasPrimaryMixedColumn:(bool)arg1 ;
-(void)setHasPrimaryMixedLine:(bool)arg1 ;
-(void)setHasSecondaryMixedArea:(bool)arg1 ;
-(void)setHasSecondaryMixedColumn:(bool)arg1 ;
-(bool)hasSecondaryMixedLine;
-(void)setHasSecondaryMixedLine:(bool)arg1 ;
-(unsigned)chartGroupIndexForType:(int)arg1 isForPrimary:(bool)arg2 ;
@end

