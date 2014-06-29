/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:32 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSCache;

@interface PLPlaceholderThumbnailManager : NSObject {

	NSCache* _placeholderDataCache;
	NSCache* _placeholderImageCache;

}
+(id)sharedManager;
-(void)dealloc;
-(id)init;
-(id)newPlaceholderImageForFormat:(int)arg1 photoImageSize:(CGSize)arg2 ;
-(id)placeholderDataForFormat:(int)arg1 photoImageSize:(CGSize)arg2 width:(int*)arg3 height:(int*)arg4 bytesPerRow:(int*)arg5 dataWidth:(int*)arg6 dataHeight:(int*)arg7 imageDataOffset:(int*)arg8 ;
-(id)_cacheKeyForFormat:(int)arg1 photoImageSize:(CGSize)arg2 ;
-(id)_placeholderImageForFormat:(int)arg1 ;
@end

