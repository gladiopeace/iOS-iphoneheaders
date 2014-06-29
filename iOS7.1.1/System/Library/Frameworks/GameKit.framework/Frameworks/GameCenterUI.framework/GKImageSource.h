/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:17 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <GameCenterUI/GameCenterUI-Structs.h>
@class GKThreadsafeCache, NSString, GKImageBrush, UIImage;

@interface GKImageSource : NSObject {

	bool _shouldRenderDefaultImageWithBrush;
	GKThreadsafeCache* _cache;
	NSString* _name;
	GKImageBrush* _imageBrush;
	UIImage* _defaultImage;
	UIImage* _renderedDefaultImage;

}

@property (nonatomic,readonly) NSString * name;                                   //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) GKImageBrush * imageBrush;                         //@synthesize imageBrush=_imageBrush - In the implementation block
@property (nonatomic,retain) UIImage * defaultImage;                              //@synthesize defaultImage=_defaultImage - In the implementation block
@property (nonatomic,retain) UIImage * renderedDefaultImage;                      //@synthesize renderedDefaultImage=_renderedDefaultImage - In the implementation block
@property (assign,nonatomic) bool shouldRenderDefaultImageWithBrush;              //@synthesize shouldRenderDefaultImageWithBrush=_shouldRenderDefaultImageWithBrush - In the implementation block
@property (nonatomic,retain) GKThreadsafeCache * cache;                           //@synthesize cache=_cache - In the implementation block
+(id)cacheDirectoryForImageID:(id)arg1 ;
+(id)syncQueue;
+(id)sharedCache;
+(void)clearCache;
-(id)cachedImageForIdentifier:(id)arg1 ;
-(id)initWithName:(id)arg1 imageBrush:(id)arg2 ;
-(id)processAndCacheImage:(id)arg1 forIdentifier:(id)arg2 ;
-(id)imageBrush;
-(void)didReceiveCacheInvalidation:(id)arg1 ;
-(void)clearCachedImageForIdentifier:(id)arg1 ;
-(id)renderedImageWithImage:(id)arg1 defaultSize:(CGSize)arg2 returnContext:(id*)arg3 ;
-(id)renderedImageWithImage:(id)arg1 returnContext:(id*)arg2 ;
-(bool)shouldRenderDefaultImageWithBrush;
-(id)renderedImageWithImage:(id)arg1 ;
-(void)setRenderedDefaultImage:(id)arg1 ;
-(bool)shouldUseTestImage;
-(id)renderedTestImage;
-(id)keyForImageIdentifier:(id)arg1 ;
-(id)fastCachedImageForKey:(id)arg1 ;
-(id)renderedDefaultImage;
-(id)fastCachedImageForIdentifier:(id)arg1 ;
-(void)validateFileSystemCache;
-(id)cachedImageForKey:(id)arg1 ;
-(id)processAndCacheImageDataInContext:(id)arg1 withImage:(id)arg2 forKey:(id)arg3 ;
-(id)processAndCacheImage:(id)arg1 forKey:(id)arg2 ;
-(id)subsourceWithBrush:(id)arg1 ;
-(unsigned long long)cacheCostForImage:(id)arg1 ;
-(id)fastCachedOrDefaultImageForForKey:(id)arg1 ;
-(id)fastCachedOrDefaultImageForIdentifier:(id)arg1 ;
-(id)processAndCacheImageDataInContext:(id)arg1 withImage:(id)arg2 forIdentifier:(id)arg3 ;
-(id)defaultImage;
-(void)setDefaultImage:(id)arg1 ;
-(void)setShouldRenderDefaultImageWithBrush:(bool)arg1 ;
-(void)dealloc;
-(id)name;
-(id)cache;
-(void)setCache:(id)arg1 ;
@end

