/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:48 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <MusicLibrary/NSCopying.h>

@class MIPArtist, NSString;

@interface MIPAlbum : PBCodable <NSCopying> {

	long long _persistentId;
	long long _storeId;
	MIPArtist* _artist;
	NSString* _artworkId;
	NSString* _name;
	int _numDiscs;
	int _numTracks;
	NSString* _sortName;
	int _userRating;
	BOOL _compilation;
	SCD_Struct_MI13 _has;

}

@property (assign,nonatomic) BOOL hasStoreId; 
@property (assign,nonatomic) long long storeId;                   //@synthesize storeId=_storeId - In the implementation block
@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name;                     //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) BOOL hasSortName; 
@property (nonatomic,retain) NSString * sortName;                 //@synthesize sortName=_sortName - In the implementation block
@property (nonatomic,readonly) BOOL hasArtist; 
@property (nonatomic,retain) MIPArtist * artist;                  //@synthesize artist=_artist - In the implementation block
@property (assign,nonatomic) BOOL hasNumTracks; 
@property (assign,nonatomic) int numTracks;                       //@synthesize numTracks=_numTracks - In the implementation block
@property (assign,nonatomic) BOOL hasNumDiscs; 
@property (assign,nonatomic) int numDiscs;                        //@synthesize numDiscs=_numDiscs - In the implementation block
@property (nonatomic,readonly) BOOL hasArtworkId; 
@property (nonatomic,retain) NSString * artworkId;                //@synthesize artworkId=_artworkId - In the implementation block
@property (assign,nonatomic) BOOL hasUserRating; 
@property (assign,nonatomic) int userRating;                      //@synthesize userRating=_userRating - In the implementation block
@property (assign,nonatomic) BOOL hasCompilation; 
@property (assign,nonatomic) BOOL compilation;                    //@synthesize compilation=_compilation - In the implementation block
@property (assign,nonatomic) BOOL hasPersistentId; 
@property (assign,nonatomic) long long persistentId;              //@synthesize persistentId=_persistentId - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setArtist:(MIPArtist *)arg1 ;
-(BOOL)hasArtist;
-(MIPArtist *)artist;
-(void)setUserRating:(int)arg1 ;
-(void)setHasUserRating:(BOOL)arg1 ;
-(BOOL)hasUserRating;
-(int)userRating;
-(long long)persistentId;
-(void)setStoreId:(long long)arg1 ;
-(void)setHasStoreId:(BOOL)arg1 ;
-(BOOL)hasStoreId;
-(void)setPersistentId:(long long)arg1 ;
-(void)setHasPersistentId:(BOOL)arg1 ;
-(BOOL)hasPersistentId;
-(long long)storeId;
-(void)setSortName:(NSString *)arg1 ;
-(BOOL)hasSortName;
-(NSString *)sortName;
-(void)setArtworkId:(NSString *)arg1 ;
-(void)setNumTracks:(int)arg1 ;
-(void)setHasNumTracks:(BOOL)arg1 ;
-(BOOL)hasNumTracks;
-(void)setNumDiscs:(int)arg1 ;
-(void)setHasNumDiscs:(BOOL)arg1 ;
-(BOOL)hasNumDiscs;
-(BOOL)hasArtworkId;
-(void)setCompilation:(BOOL)arg1 ;
-(void)setHasCompilation:(BOOL)arg1 ;
-(BOOL)hasCompilation;
-(int)numTracks;
-(int)numDiscs;
-(NSString *)artworkId;
-(BOOL)compilation;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasName;
@end

