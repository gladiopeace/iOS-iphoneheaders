/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:57:48 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPMediaItemArtwork.h>

@class MPArtworkCatalog;

@interface MPConcreteMediaItemArtwork : MPMediaItemArtwork {

	MPArtworkCatalog* _catalog;
	CGRect _bounds;

}

@property (nonatomic,readonly) MPArtworkCatalog * artworkCatalog; 
-(MPArtworkCatalog *)artworkCatalog;
-(id)imageWithSize:(CGSize)arg1 ;
-(id)initWithArtworkCatalog:(id)arg1 ;
-(CGRect)bounds;
@end

