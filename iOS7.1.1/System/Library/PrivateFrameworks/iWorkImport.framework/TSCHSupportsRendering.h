/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:33 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol TSCHSupportsRendering <NSObject>
@required
-(double)viewScale;
-(id)chartLayout;
-(CGRect*)outerShadowFrame;
-(CGRect*)convertUnscaledToBoundsRect:(CGRect)arg1;
-(void)didDrawInLayer:(id)arg1 context:(CGContextRef)arg2;
-(bool)isDrawingIntoPDF;
-(bool)shouldShowLegendHighlight;
-(id)commandController;
-(bool)forceRenderBlankBackground;
-(bool)renderElementsShadowOnly;
-(bool)renderElementsWithoutShadows;
-(id)renderSeriesIndexSet;
-(id)renderValueIndexSetForSeries:(unsigned long long)arg1;
-(bool)renderElements;
-(bool)renderLabels;
-(void)setupForDrawingInLayer:(id)arg1 context:(CGContextRef)arg2;
-(bool)renderTrendLinesForSeriesIndex:(unsigned long long)arg1;
-(bool)shadowsEnabled;
-(id)geometry;
-(void)drawInContext:(CGContextRef)arg1;
@end

