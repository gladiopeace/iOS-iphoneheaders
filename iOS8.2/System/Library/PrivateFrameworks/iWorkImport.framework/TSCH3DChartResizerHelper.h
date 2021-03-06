/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:07 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSCHChartInfo, TSCH3DChartBoundsLayout, TSCH3DVector;

@interface TSCH3DChartResizerHelper : NSObject {

	TSCHChartInfo* mChartInfo;
	tvec2<int> mContainingViewport;
	tvec2<int> mOriginalContainingViewport;
	TSCH3DChartBoundsLayout* mBoundsLayout;
	SCD_Struct_TS398 mLayoutSettings;

}

@property (nonatomic,readonly) TSCHChartInfo * chartInfo; 
@property (assign,nonatomic) tvec2<int> containingViewport; 
@property (nonatomic,readonly) TSCH3DVector * containingViewportVector; 
@property (nonatomic,readonly) tvec2<int> originalContainingViewport; 
@property (assign,nonatomic) SCD_Struct_TS398 layoutSettings; 
+(id)helperWithInfo:(id)arg1 ;
+(tvec2<int>)containingViewportForVector:(id)arg1 ;
+(id)vectorForContainingViewport:(const tvec2<int>*)arg1 ;
-(void)setLayoutSettings:(SCD_Struct_TS398)arg1 ;
-(id)boundsLayoutForScene:(id)arg1 mode:(int)arg2 ;
-(id)boundsLayoutResizedForScene:(id)arg1 bounds:(const box<glm::detail::tvec2<float> >*)arg2 resizeStartingSize:(tvec2<float>*)arg3 mode:(int)arg4 returningResultSize:(tvec2<float>*)arg5 ;
-(TSCH3DVector *)containingViewportVector;
-(void)invalidateBounds;
-(tvec2<int>)containingViewport;
-(tvec2<float>)chartBodyLayoutOffsetInChartAreaLayoutSpaceUsingConverter:(const ChartProjectedBoundsConverter*)arg1 ;
-(TSCHChartInfo *)chartInfo;
-(SCD_Struct_TS398)layoutSettings;
-(void)invalidateLabelsBoundsForSceneObjectClass:(Class)arg1 boundsIndex:(int)arg2 ;
-(void)setContainingViewport:(tvec2<int>)arg1 ;
-(tvec2<int>)originalContainingViewport;
-(void)initializeOriginalContainingViewport;
-(tvec2<float>)chartBodySizeByResizingScene:(id)arg1 toLayoutSize:(const tvec2<float>*)arg2 resizeStartingSize:(tvec2<float>*)arg3 returningChartBodyLayoutOffsetInChartAreaLayoutSpace:(tvec2<float>*)arg4 resultLayoutSize:(tvec2<float>*)arg5 ;
-(tvec2<float>)layoutSizeByResizingScene:(id)arg1 toChartBodyLayoutSize:(const tvec2<float>*)arg2 resizeStartingSize:(tvec2<float>*)arg3 returningChartBodyLayoutBoundsInChartAreaLayoutSpace:(box<glm::detail::tvec2<float> >*)arg4 ;
-(id)initWithInfo:(id)arg1 ;
-(void)dealloc;
@end

