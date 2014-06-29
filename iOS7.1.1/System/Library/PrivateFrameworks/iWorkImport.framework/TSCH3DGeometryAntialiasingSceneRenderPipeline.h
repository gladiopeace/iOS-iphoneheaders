/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:26 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSCH3DSceneRenderPipeline.h>
#import <iWorkImport/TSCH3DMultipassRenderPipeline.h>

@class TSCH3DScene, TSCH3DGLFramebuffer, TSCH3DChartElementEdgeOverdrawSceneObject;

@interface TSCH3DGeometryAntialiasingSceneRenderPipeline : TSCH3DSceneRenderPipeline <TSCH3DMultipassRenderPipeline> {

	TSCH3DScene* mOverdraw;
	TSCH3DGLFramebuffer* mRenderingFBO;
	TSCH3DChartElementEdgeOverdrawSceneObject* mGeometry;
	long long mPass;

}

@property (nonatomic,retain) TSCH3DScene * overdraw; 
@property (nonatomic,retain) TSCH3DGLFramebuffer * renderingFBO; 
-(void)setFramebuffer:(id)arg1 ;
-(id)initWithProcessor:(id)arg1 session:(id)arg2 scene:(id)arg3 ;
-(id)renderingFBOResource;
-(void)setScene:(id)arg1 ;
-(void)resetMultipassRendering;
-(bool)multipassRenderingIsDone;
-(void)skipLowQualityPass;
-(bool)updatesTargetFramebuffer;
-(void)setOverdraw:(id)arg1 ;
-(id)overdraw;
-(void)setRenderingFBO:(id)arg1 ;
-(id)renderingFBO;
-(bool)render;
-(void)dealloc;
-(void)releaseResources;
@end

