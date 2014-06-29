/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:54 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <MusicLibrary/MusicLibrary-Structs.h>
@class ML3DatabaseConnection, MLMediaLibraryServiceStatementAccumulator, ML3SortMap, NSMutableSet, ML3ImportPersistentIDGenerator, NSMutableDictionary, NSCache, ML3MusicLibrary, NSDictionary;

@interface MLImportSession : NSObject {

	ML3DatabaseConnection* _readerConnection;
	MLMediaLibraryServiceStatementAccumulator* _accumulator;
	ML3SortMap* _sortMap;
	unordered_map<long long, ML3CollectionPIDSet, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<std::__1::pair<const long long, ML3CollectionPIDSet> > >* collectionPIDSetForTrackPID;
	NSMutableSet* _albumPIDsToRecomputeAlbumYear;
	SCD_Struct_ML26 _stats;
	int _sourceType;
	bool _rebuildIndexes;
	bool _rebuildCollections;
	ML3ImportPersistentIDGenerator* _persistentIDGenerator;
	NSMutableDictionary* _persistentIdHintMap;
	NSCache* _artistPIDsForGroupingKeys;
	NSCache* _albumArtistPIDsForGroupingKeys;
	NSCache* _composerPIDsForGroupingKeys;
	NSCache* _genrePIDsForGroupingKeys;
	NSCache* _albumDataForGroupingIdentifier;
	vector<MLRowDataSource *, std::__1::allocator<MLRowDataSource *> >* _rowDataSources;
	ML3MusicLibrary* _library;
	ML3DatabaseConnection* _connection;
	NSDictionary* _cachedNameOrders;

}

@property (nonatomic,retain) ML3MusicLibrary * library;                       //@synthesize library=_library - In the implementation block
@property (nonatomic,retain) ML3DatabaseConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSDictionary * cachedNameOrders;                 //@synthesize cachedNameOrders=_cachedNameOrders - In the implementation block
-(void)dealloc;
-(bool)begin;
-(id).cxx_construct;
-(void).cxx_destruct;
-(id)connection;
-(bool)finish;
-(void)setConnection:(id)arg1 ;
-(id)library;
-(void)setLibrary:(id)arg1 ;
-(SCD_Struct_ML29)collectionPIDSetForTrackPID:(long long)arg1 ;
-(id)cachedNameOrders;
-(bool)removeSource:(int)arg1 fromTracksWithPersistentIDs:(id)arg2 ;
-(bool)begin:(unsigned long long)arg1 ;
-(int)importLogLevel;
-(bool)_updateTrackData:(id)arg1 isUpdate:(bool)arg2 ;
-(long long)persistentIdentifierForItem:(id)arg1 existing:(bool*)arg2 ;
-(bool)_prepareSortDataForTrack:(id)arg1 isUpdate:(bool)arg2 ;
-(bool)_prepareCollectionsForTrack:(id)arg1 isUpdate:(bool)arg2 ;
-(long long)_artistPIDForTrack:(id)arg1 isUpdate:(bool)arg2 ;
-(long long)_albumArtistPIDForTrack:(id)arg1 isUpdate:(bool)arg2 ;
-(long long)_composerPIDForTrack:(id)arg1 ;
-(long long)_genrePIDForTrack:(id)arg1 ;
-(long long)_locationKindPIDForTrack:(id)arg1 ;
-(long long)_albumPIDForTrack:(id)arg1 albumArtistPID:(long long)arg2 isUpdate:(bool)arg3 ;
-(bool)updateCollectionRepresentativePIDs;
-(bool)updateEntityRevisionTable;
-(id)_generateInsertionSQLWithInsertPart:(id)arg1 numberOfValues:(unsigned long long)arg2 ;
-(id)_existingCollectionPidForTable:(id)arg1 groupingKey:(id)arg2 ;
-(id)_existingArtistPidForGroupingKey:(id)arg1 ;
-(id)_insertIntoItemArtistSQL;
-(id)_existingAlbumArtistForGroupingKey:(id)arg1 ;
-(id)_insertIntoAlbumArtistSQL;
-(id)_albumGroupingIdentifierWithAlbumArtistPersistentID:(long long)arg1 withTrack:(id)arg2 ;
-(id)_existingAlbumStateForGroupingIdentifier:(id)arg1 ;
-(id)_insertIntoAlbumSQL;
-(id)_insertIntoComposerSQL;
-(id)_insertIntoGenreSQL;
-(id)initWithLibrary:(id)arg1 onConnection:(id)arg2 ;
-(void)addPersistentIdMapping:(id)arg1 forProperty:(unsigned)arg2 ;
-(bool)addTrack:(id)arg1 ;
-(bool)updateTrack:(id)arg1 ;
-(bool)removeTrack:(id)arg1 ;
-(id)_artistGroupingNameFromDataSource:(id)arg1 ;
-(id)_albumArtistGroupingNameFromDataSource:(id)arg1 ;
-(id)_composerGroupingNameFromDataSource:(id)arg1 ;
-(id)_genreGroupingNameFromDataSource:(id)arg1 ;
-(void)_populateNameOrderWithNameOrderForPIDMap:(unordered_map<long long, ML3NameOrder, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<std::__1::pair<const long long, ML3NameOrder> > >*)arg1 tableName:(id)arg2 nameSQL:(id)arg3 ;
-(void)setCachedNameOrders:(id)arg1 ;
@end

