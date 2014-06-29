/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:41 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSOperationQueue;

@interface TSDSwatchCache : NSObject {

	NSOperationQueue* mOperationQueue;

}
+(id)swatchCache;
-(CGSize)imageSizeForPreset:(id)arg1 swatchSize:(CGSize)arg2 ;
-(id)imageForImagePreset:(id)arg1 imageSize:(CGSize)arg2 imageScale:(double)arg3 imageInfo:(id)arg4 shouldClipVertically:(bool)arg5 documentRoot:(id)arg6 ;
-(id)imageForShapePreset:(id)arg1 imageSize:(CGSize)arg2 imageScale:(double)arg3 shapeType:(int)arg4 angle:(double)arg5 documentRoot:(id)arg6 ;
-(CGSize)shapeSwatchInset;
-(void)applyFakeShadowForWhitePresetsIfNecessary:(id)arg1 documentRoot:(id)arg2 ;
-(CGImageRef)p_newImageWithConnectionLineKnobsForShape:(id)arg1 atScale:(double)arg2 ofSize:(CGSize)arg3 overImage:(CGImageRef)arg4 ;
-(id)p_thumbnailImageDataForImageData:(id)arg1 ;
-(id)p_maskInfoForMovieInfo:(id)arg1 context:(id)arg2 ;
-(void)warmStyle:(id)arg1 withFillProperty:(int)arg2 documentRoot:(id)arg3 ;
-(id)imageForShapePreset:(id)arg1 imageSize:(CGSize)arg2 imageScale:(double)arg3 swatchFrame:(CGRect)arg4 shapeType:(int)arg5 angle:(double)arg6 documentRoot:(id)arg7 ;
-(id)imageForImagePreset:(id)arg1 imageSize:(CGSize)arg2 imageScale:(double)arg3 swatchFrame:(CGRect)arg4 imageInfo:(id)arg5 shouldClipVertically:(bool)arg6 documentRoot:(id)arg7 ;
-(id)imageForMoviePreset:(id)arg1 imageSize:(CGSize)arg2 imageScale:(double)arg3 swatchFrame:(CGRect)arg4 movieInfo:(id)arg5 shouldClipVertically:(bool)arg6 documentRoot:(id)arg7 ;
-(id)imageForMoviePreset:(id)arg1 imageSize:(CGSize)arg2 imageScale:(double)arg3 movieInfo:(id)arg4 shouldClipVertically:(bool)arg5 documentRoot:(id)arg6 ;
-(void)dealloc;
-(id)init;
@end

