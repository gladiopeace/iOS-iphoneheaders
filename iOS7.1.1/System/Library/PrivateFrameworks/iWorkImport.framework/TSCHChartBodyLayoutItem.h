/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:33 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHChartLayoutItem.h>

@interface TSCHChartBodyLayoutItem : TSCHChartLayoutItem {

	bool mVertical;

}
-(CGRect)calcDrawingRect;
-(void)p_layoutOutward;
-(id)renderersWithRep:(id)arg1 ;
-(CGAffineTransform)transformForRenderingLabelForSeries:(unsigned long long)arg1 forGroup:(unsigned long long)arg2 outElementSize:(CGSize*)arg3 outClipRect:(CGRect*)arg4 ;
-(id)subselectionKnobPositionsForSelection:(id)arg1 ;
-(CGPathRef)newDragAndDropHighlightPathForSelection:(id)arg1 ;
-(CGRect)calcOverhangRect;
-(CGRect)p_calcDrawingRectForModel:(id)arg1 ;
-(unsigned long long)countOfElementsForModel:(id)arg1 series:(id)arg2 forGroupsBySeries:(id)arg3 outNewElementBounds:(CGRect*)arg4 outNewClipRects:(CGRect*)arg5 outNewElementPaths:(const CGPath*)arg6 ;
-(CGRect)p_exactLabelsDrawingRectForSeries:(id)arg1 ;
-(void)p_addRendererOfClass:(Class)arg1 andRep:(id)arg2 toArray:(id)arg3 ;
-(void)p_nudgeBarElementFrame:(CGRect*)arg1 usingBarModelCache:(id)arg2 unitSpaceValueBegin:(double)arg3 unitSpaceValueEnd:(double)arg4 ;
-(CGAffineTransform)p_transformForRenderingLabelForBarColSeries:(unsigned long long)arg1 forGroup:(unsigned long long)arg2 outElementSize:(CGSize*)arg3 outClipRect:(CGRect*)arg4 ;
-(CGAffineTransform)p_transformForRenderingLabelForLineAreaSeries:(unsigned long long)arg1 forGroup:(unsigned long long)arg2 outElementSize:(CGSize*)arg3 outClipRect:(CGRect*)arg4 ;
-(id)p_valueLabelSubselectionKnobsForSeries:(id)arg1 ;
-(id)p_errorBarSubselectionKnobsForSeries:(id)arg1 axisID:(id)arg2 ;
-(id)p_trendLineSubselectionKnobsForSeries:(id)arg1 ;
-(id)p_trendLineEquationSubselectionKnobsForSeries:(id)arg1 ;
-(id)p_trendLineR2SubselectionKnobsForSeries:(id)arg1 ;
-(void)protected_iterateHitChartElements:(CGPoint)arg1 withBlock:(/*^block*/ id)arg2 ;
-(id)initWithParent:(id)arg1 ;
@end

