/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:33 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHChartLayoutItem.h>

@class TSCHChartAxisID, TSCHChartAxisTitleLayoutItem, TSCHChartAxisPaddingLayoutItem, TSCHChartAxisTickMarksLayoutItem, TSCHChartAxisLineLayoutItem;

@interface TSCHChartAxisLayoutItem : TSCHChartLayoutItem {

	TSCHChartAxisID* mAxisID;
	int mAxisPosition;
	TSCHChartAxisTitleLayoutItem* mAxisTitle;
	TSCHChartAxisPaddingLayoutItem* mAxisPadding;
	TSCHChartAxisTickMarksLayoutItem* mTickMarks;
	TSCHChartAxisLineLayoutItem* mAxisLine;
	CGSize mChartBodySize;

}

@property (assign,nonatomic) CGSize chartBodySize; 
@property (nonatomic,retain) TSCHChartAxisID * axisID; 
@property (nonatomic,readonly) int axisPosition; 
@property (nonatomic,readonly) TSCHChartAxisTitleLayoutItem * axisTitleLayoutItem; 
@property (nonatomic,readonly) TSCHChartAxisPaddingLayoutItem * axisPaddingLayoutItem; 
@property (nonatomic,readonly) TSCHChartAxisTickMarksLayoutItem * axisTickMarksLayoutItem; 
@property (nonatomic,readonly) TSCHChartAxisLineLayoutItem * axisLineLayoutItem; 
+(id)selectionPathType;
-(id)axisID;
-(void)p_layoutInward;
-(void)p_layoutOutward;
-(id)renderersWithRep:(id)arg1 ;
-(void)setAxisID:(id)arg1 ;
-(id)axisTitleLayoutItem;
-(id)axisLineLayoutItem;
-(id)axisTickMarksLayoutItem;
-(id)subselectionHaloPositionsForSelections:(id)arg1 ;
-(id)subselectionKnobPositionsForSelection:(id)arg1 ;
-(void)setChartBodySize:(CGSize)arg1 ;
-(CGRect)calcOverhangRect;
-(id)p_description;
-(void)p_layoutLabelsNow;
-(CGRect)protected_layoutSpaceRectForAllLabels;
-(id)p_subselectionKnobPositionsForLabelsSelection:(id)arg1 ;
-(id)p_subselectionHaloPositionsForLabelsSelections:(id)arg1 ;
-(id)initWithParent:(id)arg1 axisPosition:(int)arg2 ;
-(CGSize)calcMinSize;
-(id)axisPaddingLayoutItem;
-(CGSize)chartBodySize;
-(void)dealloc;
-(int)axisPosition;
@end

