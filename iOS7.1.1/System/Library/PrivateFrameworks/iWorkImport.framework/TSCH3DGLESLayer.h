/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:37 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <QuartzCore/CAEAGLLayer.h>
#import <iWorkImport/TSCH3DGLLayer.h>

@class TSCH3DLayerCacheLogic;

@interface TSCH3DGLESLayer : CAEAGLLayer <TSCH3DGLLayer> {

	TSCH3DLayerCacheLogic* mCacheLogic;

}
-(id)cacheLogic;
-(id)framebufferFromContext:(id)arg1 attributes:(const FramebufferAttributes*)arg2 ;
-(id)initWithLayerCacheLogicClass:(Class)arg1 ;
-(void)willDestroyFramebuffer:(id)arg1 session:(id)arg2 ;
-(void)presentLayerWithPresenterInfo:(const PresenterInfo*)arg1 ;
-(Class)layerDelegateClass;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(double)contentsScale;
-(void)setContentsScale:(double)arg1 ;
@end

