/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:36 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DFramebufferCopyPipeline.h>

@interface TSCH3DFramebufferOnepassBlurPipeline : TSCH3DFramebufferCopyPipeline {

	tvec2<float> mPixelSize;

}

@property (nonatomic,readonly) tvec2<float> pixelSize; 
+(id)pipelineWithProcessor:(id)arg1 session:(id)arg2 pixelSize:(const tvec2<float>*)arg3 ;
-(void)updateShaderEffectsStates;
-(id)initWithProcessor:(id)arg1 session:(id)arg2 pixelSize:(const tvec2<float>*)arg3 ;
-(void)dealloc;
-(id).cxx_construct;
-(tvec2<float>)pixelSize;
@end

