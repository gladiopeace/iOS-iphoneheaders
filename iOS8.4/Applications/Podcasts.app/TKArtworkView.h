/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:08 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <Podcasts/TKView.h>

@class NSNumber, NSOperationQueue, UIImageView, UIImage, TKArtworkComponent;

@interface TKArtworkView : TKView {

	char _loaded;
	char _delayed;
	NSNumber* _key;
	NSOperationQueue* _imageQueue;
	UIImageView* _image;
	UIImage* _placeholder;
	/*^block*/id _artworkListener;
	float _defaultHeight;
	float _defaultWidth;

}

@property (retain) NSNumber * key;                              //@synthesize key=_key - In the implementation block
@property (assign) NSOperationQueue * imageQueue;               //@synthesize imageQueue=_imageQueue - In the implementation block
@property (retain) UIImageView * image;                         //@synthesize image=_image - In the implementation block
@property (retain) UIImage * placeholder;                       //@synthesize placeholder=_placeholder - In the implementation block
@property (retain) TKArtworkComponent * component; 
@property (copy) id artworkListener;                            //@synthesize artworkListener=_artworkListener - In the implementation block
@property (assign) char loaded;                                 //@synthesize loaded=_loaded - In the implementation block
@property (assign) char delayed;                                //@synthesize delayed=_delayed - In the implementation block
@property (assign) float defaultHeight;                         //@synthesize defaultHeight=_defaultHeight - In the implementation block
@property (assign) float defaultWidth;                          //@synthesize defaultWidth=_defaultWidth - In the implementation block
-(id)initWithFrame:(CGRect)arg1 withComponent:(id)arg2 withTheme:(id)arg3 ;
-(id)artworkListener;
-(void)setArtworkListener:(id)arg1 ;
-(void)addPlaceholder;
-(char)delayed;
-(void)setDefaultHeight:(float)arg1 ;
-(void)setDefaultWidth:(float)arg1 ;
-(char)hasCachedImage;
-(void)setDelayed:(char)arg1 ;
-(void)setImageQueue:(NSOperationQueue *)arg1 ;
-(void)setLoaded:(char)arg1 ;
-(void)setImage:(UIImageView *)arg1 ;
-(void)layoutSubviews;
-(NSNumber *)key;
-(float)defaultHeight;
-(UIImageView *)image;
-(void)setPlaceholder:(UIImage *)arg1 ;
-(float)defaultWidth;
-(UIImage *)placeholder;
-(void)setKey:(NSNumber *)arg1 ;
-(NSOperationQueue *)imageQueue;
-(void)loadImage:(id)arg1 ;
-(void)loadImage;
-(char)loaded;
@end

