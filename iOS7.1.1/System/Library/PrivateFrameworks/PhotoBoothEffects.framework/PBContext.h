/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:23 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PhotoBoothEffects.framework/PhotoBoothEffects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <PhotoBoothEffects/PhotoBoothEffects-Structs.h>
@interface PBContext : NSObject

@property (assign,nonatomic,@dynamic) CAImageQueueRef outputImageQueue; 
@property (nonatomic,@dynamic,retain) CVPixelBufferPoolRef smallPool; 
@property (nonatomic,@dynamic,retain) CVPixelBufferPoolRef largePool; 
+(id)openGLContext;
+(id)openGLContext:(id)arg1 ;
+(id)openCLContext;
-(id)init;
-(CVBufferRef)createCVPixelBufferForFilter:(id)arg1 inputPixelBuffer:(CVBufferRef)arg2 mirrored:(bool)arg3 ;
-(void)applyFilter:(id)arg1 toSurface:(IOSurfaceRef)arg2 mirrored:(bool)arg3 resultHandler:(/*^block*/ id)arg4 ;
-(void)applyFilter:(id)arg1 toSurface:(IOSurfaceRef)arg2 mirrored:(bool)arg3 surfaceResultHandler:(/*^block*/ id)arg4 ;
-(void)renderFilter:(id)arg1 inputPixelBuffer:(CVBufferRef)arg2 ;
-(void)renderFilter:(id)arg1 inputPixelBuffer:(CVBufferRef)arg2 mirrored:(bool)arg3 ;
-(void)renderNineUp:(id)arg1 inputPixelBuffer:(CVBufferRef)arg2 ;
-(void)renderNineUp:(id)arg1 inputPixelBuffer:(CVBufferRef)arg2 mirrored:(bool)arg3 ;
-(CVBufferRef)createCVPixelBufferForFilter:(id)arg1 inputPixelBuffer:(CVBufferRef)arg2 ;
-(CAImageQueueRef)outputImageQueue;
-(void)setOutputImageQueue:(CAImageQueueRef)arg1 ;
-(CVPixelBufferPoolRef)largePool;
-(void)setLargePool:(CVPixelBufferPoolRef)arg1 ;
-(CVPixelBufferPoolRef)smallPool;
-(void)setSmallPool:(CVPixelBufferPoolRef)arg1 ;
-(void)preloadFilter:(id)arg1 ;
@end

