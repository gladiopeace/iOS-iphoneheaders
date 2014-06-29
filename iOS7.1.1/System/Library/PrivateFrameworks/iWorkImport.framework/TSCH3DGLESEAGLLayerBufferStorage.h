/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:37 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DRenderBufferStorage.h>

@class CAEAGLLayer;

@interface TSCH3DGLESEAGLLayerBufferStorage : TSCH3DRenderBufferStorage {

	CAEAGLLayer* mLayer;
	tvec2<int> mSize;

}
+(id)storageWithLayer:(id)arg1 ;
-(void)allocateStorageWithFramebufferAttributes:(const FramebufferAttributes*)arg1 size:(tvec2<int>*)arg2 internalFormat:(unsigned)arg3 ;
-(void)updateSize;
-(void)dealloc;
-(id).cxx_construct;
-(id)initWithLayer:(id)arg1 ;
@end

