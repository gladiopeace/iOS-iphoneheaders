/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:42 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKVectorMapModel.h>
#import <VectorKit/VKStylesheetObserver.h>

@class VGLRenderState, VKStylesheet;

@interface VKPolygonMapModel : VKVectorMapModel <VKStylesheetObserver> {

	bool _drawShapes;
	RenderStepsSet* _renderStepsSet;
	RenderStepsSet* _transitRenderStepsSet;
	VGLRenderState* _transparentRenderState;
	VGLRenderState* _renderState;

}

@property (assign,nonatomic) bool drawShapes;                          //@synthesize drawShapes=_drawShapes - In the implementation block
@property (nonatomic,readonly) VKStylesheet * stylesheet; 
-(void)dealloc;
-(id)init;
-(id).cxx_construct;
-(void)reset;
-(void).cxx_destruct;
-(unsigned long long)textureSize;
-(unsigned long long)mapLayerPosition;
-(void)layoutScene:(id)arg1 withContext:(id)arg2 ;
-(unsigned)supportedRenderPasses;
-(void)drawScene:(id)arg1 withContext:(id)arg2 pass:(unsigned)arg3 ;
-(void)drawDebugScene:(id)arg1 withContext:(id)arg2 ;
-(void)setDrawShapes:(bool)arg1 ;
-(void)stylesheetWillChange;
-(void)stylesheetDidChange;
-(RenderStepsSet*)renderStepSetForFeatureWithAttributes:(id)arg1 ;
-(void)renderNormalPolygonsInRenderStepSet:(const RenderStepsSet*)arg1 withWidth:(float)arg2 minDepth:(float)arg3 context:(id)arg4 ;
-(void)renderTransparentPolygonsInRenderStepSet:(const RenderStepsSet*)arg1 withWidth:(float)arg2 minDepth:(float)arg3 context:(id)arg4 ;
-(void)drawRenderStepSet:(const RenderStepsSet*)arg1 scene:(id)arg2 withContext:(id)arg3 ;
-(void)drawCoastlinesWithContext:(id)arg1 ;
-(void)drawTransparentPolygonsInRenderStepSet:(const RenderStepsSet*)arg1 withContext:(id)arg2 stencil:(int)arg3 ;
-(void)drawTransparentPolygonStrokesInRenderStepSet:(const RenderStepsSet*)arg1 withWidth:(float)arg2 minDepth:(float)arg3 context:(id)arg4 ;
-(bool)drawShapes;
@end

