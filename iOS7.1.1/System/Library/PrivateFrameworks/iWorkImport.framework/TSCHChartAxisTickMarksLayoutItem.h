/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:33 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHChartLayoutItem.h>

@interface TSCHChartAxisTickMarksLayoutItem : TSCHChartLayoutItem

@property (nonatomic,readonly) float majorTickmarkLength; 
@property (nonatomic,readonly) float minorTickmarkLength; 
-(CGRect)calcDrawingRect;
-(CGAffineTransform)transformForRenderingOutElementSize:(CGSize*)arg1 outClipRect:(CGRect*)arg2 ;
-(float)majorTickmarkLength;
-(float)minorTickmarkLength;
-(CGSize)calcMinSize;
-(CGRect)p_effectiveRootedLayoutRect;
-(int)location;
-(id)initWithParent:(id)arg1 ;
@end

