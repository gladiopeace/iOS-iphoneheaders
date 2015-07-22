/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:31:56 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSRecursiveLock, NSDate, MRImage, NSMutableDictionary, MRGIFMoviePlayer;

@interface MRImageInfo : NSObject {

	NSString* _imageBufferKey;
	NSRecursiveLock* _lock;
	unsigned _retainCount;
	NSDate* _modDate;
	MRImage* _image;
	NSMutableDictionary* _options;
	MRGIFMoviePlayer* _gifMoviePlayer;
	NSMutableDictionary* _imagesForRemoteKeys;
	char _isMovie;

}

@property (readonly) NSString * imageBufferKey;                            //@synthesize imageBufferKey=_imageBufferKey - In the implementation block
@property (assign) unsigned retainCount;                                   //@synthesize retainCount=_retainCount - In the implementation block
@property (retain) NSDate * modDate;                                       //@synthesize modDate=_modDate - In the implementation block
@property (retain) MRImage * image;                                        //@synthesize image=_image - In the implementation block
@property (retain) NSMutableDictionary * options;                          //@synthesize options=_options - In the implementation block
@property (retain) MRGIFMoviePlayer * gifMoviePlayer;                      //@synthesize gifMoviePlayer=_gifMoviePlayer - In the implementation block
@property (retain) NSMutableDictionary * imagesForRemoteKeys;              //@synthesize imagesForRemoteKeys=_imagesForRemoteKeys - In the implementation block
@property (assign) char isMovie;                                           //@synthesize isMovie=_isMovie - In the implementation block
-(void)dealloc;
-(void)setImage:(MRImage *)arg1 ;
-(unsigned)retainCount;
-(void)lock;
-(void)unlock;
-(MRImage *)image;
-(void)setOptions:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)options;
-(void)cleanup;
-(NSString *)imageBufferKey;
-(id)initWithImageBufferKey:(id)arg1 ;
-(void)setRetainCount:(unsigned)arg1 ;
-(NSDate *)modDate;
-(void)setModDate:(NSDate *)arg1 ;
-(char)isMovie;
-(void)setIsMovie:(char)arg1 ;
-(MRGIFMoviePlayer *)gifMoviePlayer;
-(void)setGifMoviePlayer:(MRGIFMoviePlayer *)arg1 ;
-(NSMutableDictionary *)imagesForRemoteKeys;
-(void)setImagesForRemoteKeys:(NSMutableDictionary *)arg1 ;
@end
