/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:33 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHRenderer.h>

@interface TSCHChartBarElementsRenderer : TSCHRenderer {

	bool mVertical;
	bool mTouchInResize;
	bool mTouchInBody;
	unsigned long long mHitSeriesIndex;
	unsigned long long mHitValueIndex;
	double mHitFudgeOffset;
	bool mResizeIsOutsideBody;
	CGRect mLastDrawRect;

}
-(id)initWithChartRep:(id)arg1 layoutItem:(id)arg2 ;
-(int)chunkPlane;
-(void)p_renderIntoContext:(CGContextRef)arg1 visible:(CGRect)arg2 ;
-(SCD_Struct_TS449)p_valueRangeForModelCache:(id)arg1 groupIndex:(unsigned long long)arg2 ;
-(CGRect)renderingElementFrameForBarElementFrame:(CGRect)arg1 groupIndex:(unsigned long long)arg2 modelCache:(id)arg3 stroke:(id)arg4 viewScale:(double)arg5 contextInfo:(SCD_Struct_TS450)arg6 returningFillRect:(CGRect*)arg7 strokeRect:(CGRect*)arg8 ;
-(void)p_drawBars:(CGContextRef)arg1 visible:(CGRect)arg2 ;
-(void)p_drawLabels:(CGContextRef)arg1 visible:(CGRect)arg2 ;
-(bool)supportsSeparateLabelsRenderPass;
-(CGRect)barElementFrameForSeries:(id)arg1 groupIndex:(unsigned long long)arg2 ;
@end

