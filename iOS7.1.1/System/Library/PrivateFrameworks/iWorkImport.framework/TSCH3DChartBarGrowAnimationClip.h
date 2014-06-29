/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:25 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DChartGrowAnimationClip.h>

@class TSCH3DAnimationInterpolation;

@interface TSCH3DChartBarGrowAnimationClip : TSCH3DChartGrowAnimationClip {

	TSCH3DAnimationInterpolation* mShaderPerElementInterpolation;
	box<glm::detail::tvec1<float> > mShaderPerElementInterpolationRange;
	box<glm::detail::tvec1<float> > mShaderPerElementBlendRange;

}

@property (nonatomic,retain) TSCH3DAnimationInterpolation * shaderPerElementInterpolation; 
@property (assign,nonatomic) box<glm::detail::tvec1<float> > shaderPerElementInterpolationRange; 
@property (assign,nonatomic) box<glm::detail::tvec1<float> > shaderPerElementBlendRange; 
-(void)didAddToAnimationClipsWithSceneObject:(id)arg1 scene:(id)arg2 animation:(id)arg3 ;
-(bool)willProcessSeries:(id)arg1 sceneObject:(id)arg2 pipeline:(id)arg3 context:(id)arg4 ;
-(void)didGenerateShaderEffectsForSeriesAtIndex:(const tvec2<int>*)arg1 effects:(id)arg2 sceneObject:(id)arg3 pipeline:(id)arg4 context:(id)arg5 ;
-(bool)renderPassDelayDisallowedForSceneObject:(id)arg1 pipeline:(id)arg2 context:(id)arg3 ;
-(bool)shouldUpdateSeriesElementTimingWithAnyElement;
-(Class)animationDataClass;
-(id)makeClipEffectAtIndex:(const tvec2<int>*)arg1 sceneObject:(id)arg2 scene:(id)arg3 ;
-(int)renderMethodPoint;
-(void)renderAnimationElementInfo:(const ChartAnimationElementInfo*)arg1 ;
-(bool)p_canOptimizePositiveOnlyForSceneObject:(id)arg1 ;
-(void)p_updateElementsTimeForAnimationElementInfo:(const ChartAnimationElementInfo*)arg1 ;
-(void)p_updateBlendingForAnimationElementInfo:(const ChartAnimationElementInfo*)arg1 ;
-(void)p_updateCapScaleForAnimationElementInfo:(const ChartAnimationElementInfo*)arg1 ;
-(id)shaderPerElementInterpolation;
-(void)setShaderPerElementInterpolation:(id)arg1 ;
-(box<glm::detail::tvec1<float> >)shaderPerElementInterpolationRange;
-(void)setShaderPerElementInterpolationRange:(box<glm::detail::tvec1<float> >)arg1 ;
-(box<glm::detail::tvec1<float> >)shaderPerElementBlendRange;
-(void)setShaderPerElementBlendRange:(box<glm::detail::tvec1<float> >)arg1 ;
-(void)dealloc;
-(id).cxx_construct;
@end

