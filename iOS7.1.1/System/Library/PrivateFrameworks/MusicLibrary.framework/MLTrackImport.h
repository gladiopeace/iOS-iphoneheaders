/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:54 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class NSData, NSString, NSArray, NSMutableDictionary, MLContentRating, MLMovieProperties, NSDictionary;

@interface MLTrackImport : NSObject <NSCopying> {

	NSData* _artworkData;
	NSString* _assetFilePath;
	NSArray* _chapters;
	NSMutableDictionary* _properties;
	bool _shouldAddToPurchasedPlaylist;
	bool _assignArtworkCacheIDFromAlbum;

}

@property (nonatomic,copy) NSData * artworkData;                              //@synthesize artworkData=_artworkData - In the implementation block
@property (nonatomic,copy) NSString * assetFilePath;                          //@synthesize assetFilePath=_assetFilePath - In the implementation block
@property (nonatomic,copy) NSArray * chapters;                                //@synthesize chapters=_chapters - In the implementation block
@property (nonatomic,copy) MLContentRating * contentRating; 
@property (assign,nonatomic) unsigned mediaType; 
@property (nonatomic,copy) MLMovieProperties * movieProperties; 
@property (assign,nonatomic) bool shouldAddToPurchasedPlaylist;               //@synthesize shouldAddToPurchasedPlaylist=_shouldAddToPurchasedPlaylist - In the implementation block
@property (assign,nonatomic) bool assignArtworkCacheIDFromAlbum;              //@synthesize assignArtworkCacheIDFromAlbum=_assignArtworkCacheIDFromAlbum - In the implementation block
@property (nonatomic,readonly) NSDictionary * entityProperties; 
+(void)initialize;
-(id)init;
-(id)copyWithZone:(NSZone)arg1 ;
-(void).cxx_destruct;
-(void)setValue:(id)arg1 forEntityProperty:(id)arg2 ;
-(void)_addSortStrings;
-(id)valueForEntityProperty:(id)arg1 ;
-(id)contentRating;
-(id)entityProperties;
-(id)movieProperties;
-(void)setContentRating:(id)arg1 ;
-(void)setMediaType:(unsigned)arg1 ;
-(void)setMovieProperties:(id)arg1 ;
-(id)copyEntityProperties;
-(void)normalizeEntityProperties;
-(id)artworkData;
-(void)setArtworkData:(id)arg1 ;
-(id)assetFilePath;
-(void)setAssetFilePath:(id)arg1 ;
-(bool)assignArtworkCacheIDFromAlbum;
-(void)setAssignArtworkCacheIDFromAlbum:(bool)arg1 ;
-(id)chapters;
-(void)setChapters:(id)arg1 ;
-(bool)shouldAddToPurchasedPlaylist;
-(void)setShouldAddToPurchasedPlaylist:(bool)arg1 ;
-(unsigned)mediaType;
@end

