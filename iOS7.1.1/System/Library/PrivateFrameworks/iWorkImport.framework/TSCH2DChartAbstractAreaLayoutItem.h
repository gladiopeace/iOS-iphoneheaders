/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:36 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHChartAbstractAreaLayoutItem.h>

@class TSCHChartTitleLayoutItem, TSCHChartDataSetNameLayoutItem, TSCHChartBodyLayoutItem;

@interface TSCH2DChartAbstractAreaLayoutItem : TSCHChartAbstractAreaLayoutItem {

	TSCHChartTitleLayoutItem* mTitleElement;
	TSCHChartDataSetNameLayoutItem* mDataSetNameElement;
	TSCHChartBodyLayoutItem* mChartBody;

}

@property (nonatomic,readonly) TSCHChartBodyLayoutItem * bodyLayoutItem; 
-(void)setChartBodyLayoutSize:(CGSize)arg1 ;
-(CGRect)chartBodyLayoutRect;
-(CGRect)i_currentBufferAreaUnitRect;
-(id)bodyLayoutItem;
-(void)dealloc;
@end

