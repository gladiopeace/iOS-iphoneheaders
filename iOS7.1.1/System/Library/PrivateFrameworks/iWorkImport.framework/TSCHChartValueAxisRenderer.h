/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:33 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHChartAxisRenderer.h>

@interface TSCHChartValueAxisRenderer : TSCHChartAxisRenderer {

	unsigned long long mEditingLabelIndex;

}
-(double)unitSpaceValueForAxis:(id)arg1 index:(unsigned long long)arg2 ;
-(id)transparencyLayers;
-(void)drawIntoLayer:(int)arg1 inContext:(CGContextRef)arg2 visible:(CGRect)arg3 ;
-(id)labelStringForAxis:(id)arg1 index:(unsigned long long)arg2 ;
-(id)valueAxisLayoutItem;
-(id)labelsLayoutItem;
@end

