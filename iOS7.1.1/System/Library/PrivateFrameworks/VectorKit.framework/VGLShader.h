/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:41 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class VGLResource;

@interface VGLShader : NSObject {

	VGLResource* _resource;

}

@property (nonatomic,readonly) unsigned token; 
-(void)dealloc;
-(unsigned)token;
-(void)printShaderInfoLog;
-(bool)status:(unsigned)arg1 ;
-(id)initWithName:(id)arg1 shaderType:(unsigned)arg2 resource:(id)arg3 ;
@end

