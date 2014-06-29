/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:12 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/GLKit.framework/GLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <GLKit/GLKit-Structs.h>
@class EAGLContext, NSLock;

@interface GLKTextureLoader : NSObject {

	EAGLContext* _glContext;
	NSLock* _nsLock;

}

@property (retain) EAGLContext * glContext;              //@synthesize glContext=_glContext - In the implementation block
@property (retain) NSLock * nsLock;                      //@synthesize nsLock=_nsLock - In the implementation block
+(id)lockAndSwitchContext:(id)arg1 glContext:(id)arg2 ;
+(id)_textureWithTexture:(id)arg1 error:(id*)arg2 ;
+(void)unlockAndRestoreContext:(id)arg1 glContext:(id)arg2 ;
+(id)textureWithContentsOfURL:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
+(id)commonTextureWithContentsOfURL:(id)arg1 options:(id)arg2 error:(id*)arg3 lock:(id)arg4 glContext:(id)arg5 ;
+(id)commonTextureWithContentsOfData:(id)arg1 options:(id)arg2 error:(id*)arg3 lock:(id)arg4 glContext:(id)arg5 ;
+(id)commonTextureWithCGImage:(CGImageRef)arg1 options:(id)arg2 error:(id*)arg3 lock:(id)arg4 glContext:(id)arg5 ;
+(id)commonCubeMapWithContentsOfFiles:(id)arg1 options:(id)arg2 error:(id*)arg3 lock:(id)arg4 glContext:(id)arg5 ;
+(id)cubeMapWithContentsOfURL:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
+(id)commonCubeMapWithContentsOfURL:(id)arg1 options:(id)arg2 error:(id*)arg3 lock:(id)arg4 glContext:(id)arg5 ;
+(id)textureWithContentsOfFile:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
+(id)textureWithContentsOfData:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
+(id)textureWithCGImage:(CGImageRef)arg1 options:(id)arg2 error:(id*)arg3 ;
+(id)cubeMapWithContentsOfFiles:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
+(id)cubeMapWithContentsOfFile:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(void)setGlContext:(id)arg1 ;
-(id)glContext;
-(void)setNsLock:(id)arg1 ;
-(id)nsLock;
-(void)textureWithContentsOfURL:(id)arg1 options:(id)arg2 queue:(dispatch_queue_sRef)arg3 completionHandler:(/*^block*/ id)arg4 ;
-(void)cubeMapWithContentsOfURL:(id)arg1 options:(id)arg2 queue:(dispatch_queue_sRef)arg3 completionHandler:(/*^block*/ id)arg4 ;
-(id)initWithSharegroup:(id)arg1 ;
-(void)textureWithContentsOfFile:(id)arg1 options:(id)arg2 queue:(dispatch_queue_sRef)arg3 completionHandler:(/*^block*/ id)arg4 ;
-(void)textureWithContentsOfData:(id)arg1 options:(id)arg2 queue:(dispatch_queue_sRef)arg3 completionHandler:(/*^block*/ id)arg4 ;
-(void)textureWithCGImage:(CGImageRef)arg1 options:(id)arg2 queue:(dispatch_queue_sRef)arg3 completionHandler:(/*^block*/ id)arg4 ;
-(void)cubeMapWithContentsOfFiles:(id)arg1 options:(id)arg2 queue:(dispatch_queue_sRef)arg3 completionHandler:(/*^block*/ id)arg4 ;
-(void)cubeMapWithContentsOfFile:(id)arg1 options:(id)arg2 queue:(dispatch_queue_sRef)arg3 completionHandler:(/*^block*/ id)arg4 ;
-(void)dealloc;
@end

