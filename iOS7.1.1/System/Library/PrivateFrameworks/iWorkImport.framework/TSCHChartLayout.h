/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:33 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSCHChartInfo, TSCHChartModel;

@interface TSCHChartLayout : NSObject {

	bool mNeedsLayout;
	TSCHChartInfo* mChartInfo;
	SCD_Struct_TS408 mLayoutSettings;
	CGRect _legendModelGeometryFrame;

}

@property (readonly) TSCHChartInfo * chartInfo; 
@property (readonly) TSCHChartModel * model; 
@property (readonly) CGRect outerLayoutFrame; 
@property (readonly) CGRect outerShadowFrame; 
@property (readonly) CGRect chartAreaFrame; 
@property (readonly) CGRect legendFrame; 
@property (readonly) CGRect legendDrawingFrame; 
@property (assign) CGRect legendGeometryFrame; 
@property (assign) CGRect legendModelGeometryFrame;              //@synthesize legendModelGeometryFrame=_legendModelGeometryFrame - In the implementation block
@property (readonly) CGRect chartBodyFrame; 
@property (assign) unsigned long long dataSetIndex; 
@property (assign) SCD_Struct_TS408 layoutSettings; 
+(id)chartLayoutWithChartInfo:(id)arg1 ;
+(id)propertiesThatInvalidateLayout;
+(bool)layoutFrameEnclosesInfoGeometry;
+(CGSize)legendSizeForChartInfo:(id)arg1 initialWidth:(double)arg2 ;
-(void)setLayoutSettings:(SCD_Struct_TS408)arg1 ;
-(id)chartInfo;
-(SCD_Struct_TS408)layoutSettings;
-(id)renderersWithRep:(id)arg1 ;
-(void)layoutForChartBodySize:(CGSize)arg1 ;
-(CGRect)chartBodyFrame;
-(CGRect)legendFrame;
-(id)initWithChartInfo:(id)arg1 ;
-(void)processChanges:(id)arg1 ;
-(id)mutationTuplesToApplyDuringResize;
-(void)setForceOmitLegend:(bool)arg1 ;
-(void)layoutForCircumscribingSize:(CGSize)arg1 ;
-(CGRect)chartAreaFrame;
-(CGRect)outerLayoutFrame;
-(CGRect)outerShadowFrame;
-(CGPoint)convertChartLayoutSpaceToNaturalSpace:(CGPoint)arg1 ;
-(id)hitChartElements:(CGPoint)arg1 passingTest:(/*^block*/ id)arg2 ;
-(void)takeSizeFromTracker:(id)arg1 ;
-(CGPoint)convertNaturalSpaceToChartLayoutSpace:(CGPoint)arg1 ;
-(CGRect)legendDrawingFrame;
-(CGRect)convertChartLayoutSpaceRectToNaturalSpaceRect:(CGRect)arg1 ;
-(id)subselectionHaloPositionsForSelections:(id)arg1 ;
-(id)subselectionKnobPositionsForSelection:(id)arg1 ;
-(CGRect)legendModelGeometryFrame;
-(void)setLegendModelGeometryFrame:(CGRect)arg1 ;
-(void)beginDynamicOperation;
-(void)endDynamicOperation;
-(void)beginResize;
-(void)endResize;
-(unsigned long long)dataSetIndex;
-(void)setDataSetIndex:(unsigned long long)arg1 ;
-(CGPathRef)newDragAndDropHighlightPathForSelection:(id)arg1 ;
-(CGRect)legendGeometryFrame;
-(void)setLegendGeometryFrame:(CGRect)arg1 ;
-(CGAffineTransform)transformToConvertChartLayoutToNatural;
-(CGRect)convertNaturalSpaceRectToChartLayoutSpaceRect:(CGRect)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(bool)isValid;
-(id)model;
@end

