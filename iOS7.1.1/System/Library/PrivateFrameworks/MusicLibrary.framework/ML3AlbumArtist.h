/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:54 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MusicLibrary/ML3Collection.h>

@interface ML3AlbumArtist : ML3Collection
+(id)propertyForMPMediaEntityProperty:(id)arg1 ;
+(void)initialize;
+(id)defaultOrderingProperties;
+(id)joinClausesForProperty:(id)arg1 ;
+(id)databaseTable;
+(id)allProperties;
+(bool)propertyIsCountProperty:(id)arg1 ;
+(id)countingQueryForBaseQuery:(id)arg1 countProperty:(id)arg2 forIdentifier:(long long)arg3 ;
+(id)predisambiguatedProperties;
+(id)sectionPropertyForProperty:(id)arg1 ;
+(id)foreignPropertyForProperty:(id)arg1 entityClass:(Class)arg2 ;
+(id)effectiveAlbumArtistNameForAlbumArtistName:(id)arg1 artistName:(id)arg2 seriesName:(id)arg3 compilation:(bool)arg4 ;
+(id)effectiveAlbumArtistSortNameForAlbumArtistSortName:(id)arg1 albumArtistName:(id)arg2 artistSortName:(id)arg3 artistName:(id)arg4 compilation:(bool)arg5 ;
+(id)propertiesForGroupingKey;
+(id)trackForeignPersistentID;
+(id)artworkCacheIDProperty;
-(void)updateTrackValues:(id)arg1 ;
-(void)updateRepresentativeItem:(id)arg1 inLibrary:(id)arg2 withArtworkCacheID:(id)arg3 ;
@end

