/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:33 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHChartAxisLabelsLayoutItem.h>

@interface TSCHChartCategoryAxisLabelsLayoutItem : TSCHChartAxisLabelsLayoutItem
-(double)unitSpaceValueForAxis:(id)arg1 index:(unsigned long long)arg2 ;
-(unsigned long long)numberOfLabelsForAxis:(id)arg1 ;
-(unsigned long long)selectionPathLabelIndexForIndex:(unsigned long long)arg1 axis:(id)arg2 ;
-(id)labelStringForAxis:(id)arg1 index:(unsigned long long)arg2 ;
-(id)selectionPathLabelType;
-(CGPoint)axisAnchorForPosition:(int)arg1 degrees:(float)arg2 area:(CGRect)arg3 unrotatedSize:(CGSize)arg4 unitSpaceValue:(double)arg5 ;
-(CGPoint)labelAnchorForPosition:(int)arg1 degrees:(float)arg2 ;
-(id)initWithParent:(id)arg1 ;
@end

