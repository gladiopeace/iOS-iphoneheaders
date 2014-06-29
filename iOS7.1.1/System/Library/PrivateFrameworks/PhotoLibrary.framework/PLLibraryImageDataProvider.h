/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:27 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class PLImageCache, PLImageLoadingQueue, NSMutableDictionary;

@interface PLLibraryImageDataProvider : NSObject {

	PLImageCache* _imageCache;
	PLImageLoadingQueue* _imageLoadingQueue;
	NSMutableDictionary* _imageSources;

}
-(void)dealloc;
-(id)init;
-(void)invalidateCachedImagesForAsset:(id)arg1 ;
-(void)invalidateCachedImagesForAsset:(id)arg1 format:(int)arg2 ;
-(void)cancelLoadForAsset:(id)arg1 format:(int)arg2 ;
-(id)_imageSourceForFormat:(int)arg1 ;
-(void)cancelLoadForAsset:(id)arg1 ;
-(void)pauseLoading;
-(void)resumeLoading;
-(id)loadImageSynchronously:(bool)arg1 forAsset:(id)arg2 format:(int)arg3 priority:(int)arg4 completion:(/*^block*/ id)arg5 ;
@end

