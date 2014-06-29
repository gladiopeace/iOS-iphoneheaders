/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:28 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPMediaLibraryDataProviderPrivate.h>

@protocol OS_dispatch_queue;
@class NSString, NSArray, NSObject, ML3MusicLibrary, MPMediaEntityCache, NSSet;

@interface MPMediaLibraryDataProviderML3 : NSObject <MPMediaLibraryDataProviderPrivate> {

	NSString* _uniqueIdentifier;
	NSObject<OS_dispatch_queue>* _backgroundTaskQueue;
	unsigned long long _backgroundTask;
	unsigned long long _backgroundTaskCount;
	bool _hasScheduledEventPosting;
	ML3MusicLibrary* _library;
	int _refreshState;
	MPMediaEntityCache* _entityCache;

}

@property (nonatomic,retain) ML3MusicLibrary * library;                            //@synthesize library=_library - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * uniqueIdentifier; 
@property (nonatomic,readonly) MPMediaEntityCache * entityCache;                   //@synthesize entityCache=_entityCache - In the implementation block
@property (nonatomic,readonly) bool requiresAuthentication; 
@property (nonatomic,readonly) NSSet * propertiesToCache; 
@property (nonatomic,readonly) NSString * syncValidity; 
@property (nonatomic,readonly) NSString * databasePath; 
@property (nonatomic,readonly) bool isGeniusEnabled; 
@property (nonatomic,readonly) NSArray * preferredAudioLanguages; 
@property (nonatomic,readonly) NSArray * preferredSubtitleLanguages; 
@property (nonatomic,readonly) NSArray * localizedSectionIndexTitles; 
+(id)_unadjustedValueForMPProperty:(id)arg1 withDefaultValue:(id)arg2 ;
+(id)_unadjustedValueForItemTimeWithDefaultValue:(id)arg1 ;
+(id)_unadjustedValueForItemDateWithDefaultValue:(id)arg1 ;
+(id)_unadjustedValueForItemPropertyRatingWithDefaultValue:(id)arg1 ;
+(id)_unadjustedValueForItemPropertyVolumeAdjustmentWithDefaultValue:(id)arg1 ;
+(id)_unadjustedValueForItemPropertyVolumeNormalizationWithDefaultValue:(id)arg1 ;
-(void)loadValueForAggregateFunction:(id)arg1 onCollectionsForProperty:(id)arg2 queryCriteria:(id)arg3 completionBlock:(/*^block*/ id)arg4 ;
-(void)loadValueForAggregateFunction:(id)arg1 onItemsForProperty:(id)arg2 queryCriteria:(id)arg3 completionBlock:(/*^block*/ id)arg4 ;
-(void)enumerateItemIdentifiersForQueryCriteria:(id)arg1 ordered:(bool)arg2 cancelBlock:(/*^block*/ id)arg3 usingBlock:(/*^block*/ id)arg4 ;
-(void)enumerateCollectionIdentifiersForQueryCriteria:(id)arg1 ordered:(bool)arg2 cancelBlock:(/*^block*/ id)arg3 usingBlock:(/*^block*/ id)arg4 ;
-(unsigned long long)currentEntityRevision;
-(long long)playlistGeneration;
-(bool)writable;
-(bool)hasMediaOfType:(unsigned long long)arg1 ;
-(bool)hasGeniusMixes;
-(bool)hasUbiquitousBookmarkableItems;
-(long long)itemPersistentIDForStoreID:(long long)arg1 ;
-(long long)addPlaylistWithValuesForProperties:(id)arg1 ;
-(bool)removeItemsWithIdentifiers:(long long*)arg1 count:(unsigned long long)arg2 hideFromPurchaseHistory:(bool)arg3 ;
-(bool)removePlaylistWithIdentifier:(long long)arg1 ;
-(void)populateLocationPropertiesOfItemWithIdentifier:(long long)arg1 withPath:(id)arg2 ;
-(id)preferredAudioLanguages;
-(id)preferredSubtitleLanguages;
-(void)performReadTransactionWithBlock:(/*^block*/ id)arg1 ;
-(id)syncValidity;
-(id)entityCache;
-(bool)itemExistsWithPersistentID:(unsigned long long)arg1 ;
-(bool)playlistExistsWithPersistentID:(unsigned long long)arg1 ;
-(id)itemResultSetForQueryCriteria:(id)arg1 ;
-(void)loadQueryCriteria:(id)arg1 hasItemsWithCompletionBlock:(/*^block*/ id)arg2 ;
-(void)loadQueryCriteria:(id)arg1 hasCollectionsWithCompletionBlock:(/*^block*/ id)arg2 ;
-(void)loadQueryCriteria:(id)arg1 countOfItemsWithCompletionBlock:(/*^block*/ id)arg2 ;
-(void)loadQueryCriteria:(id)arg1 countOfCollectionsWithCompletionBlock:(/*^block*/ id)arg2 ;
-(id)collectionResultSetForQueryCriteria:(id)arg1 ;
-(void)setLibraryEntityFilterPredicatesWithCloudFilteringType:(long long)arg1 additionalFilterPredicates:(id)arg2 ;
-(void)setLibraryContainerFilterPredicatesWithCloudFilteringType:(long long)arg1 additionalFilterPredicates:(id)arg2 ;
-(void)enumerateEntityChangesAfterSyncAnchor:(id)arg1 maximumRevisionType:(int)arg2 itemBlock:(/*^block*/ id)arg3 collectionBlock:(/*^block*/ id)arg4 ;
-(void)loadProperties:(id)arg1 ofItemWithIdentifier:(long long)arg2 completionBlock:(/*^block*/ id)arg3 ;
-(void)setValue:(id)arg1 forProperty:(id)arg2 ofItemWithIdentifier:(long long)arg3 completionBlock:(/*^block*/ id)arg4 ;
-(void)loadBestArtworkImageDataForSize:(CGSize)arg1 ofItemWithIdentifier:(long long)arg2 atPlaybackTime:(double)arg3 completionBlock:(/*^block*/ id)arg4 ;
-(void)loadProperties:(id)arg1 ofCollectionWithIdentifier:(long long)arg2 groupingType:(long long)arg3 completionBlock:(/*^block*/ id)arg4 ;
-(void)setValue:(id)arg1 forProperty:(id)arg2 ofCollectionWithIdentifier:(long long)arg3 groupingType:(long long)arg4 completionBlock:(/*^block*/ id)arg5 ;
-(void)setValue:(id)arg1 forProperty:(id)arg2 ofPlaylistWithIdentifier:(long long)arg3 completionBlock:(/*^block*/ id)arg4 ;
-(void)addItemWithIdentifier:(long long)arg1 toPlaylistWithIdentifier:(long long)arg2 completionBlock:(/*^block*/ id)arg3 ;
-(void)addItemsWithIdentifiers:(long long*)arg1 count:(unsigned long long)arg2 toPlaylistWithIdentifier:(long long)arg3 completionBlock:(/*^block*/ id)arg4 ;
-(void)removeItemsWithIdentifiers:(long long*)arg1 atFilteredIndexes:(id)arg2 inPlaylistWithIdentifier:(long long)arg3 completionBlock:(/*^block*/ id)arg4 ;
-(void)removeAllItemsInPlaylistWithIdentifier:(long long)arg1 ;
-(void)moveItemFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 inPlaylistWithIdentifier:(long long)arg3 completionBlock:(/*^block*/ id)arg4 ;
-(void)_libraryContentsDidChange:(id)arg1 ;
-(void)_dynamicPropertiesDidChange:(id)arg1 ;
-(void)_invisiblePropertiesDidChange:(id)arg1 ;
-(void)_displayValuesDidChange:(id)arg1 ;
-(void)_syncGenerationDidChange:(id)arg1 ;
-(void)_libraryUIDDidChange:(id)arg1 ;
-(void)_postEvents;
-(void)performBackgroundTaskWithBlock:(/*^block*/ id)arg1 ;
-(id)adjustedValueForMPProperty:(id)arg1 ofEntity:(id)arg2 withDefaultValue:(id)arg3 ;
-(void)_loadValueForAggregateFunction:(id)arg1 entityClass:(Class)arg2 property:(id)arg3 query:(id)arg4 completionBlock:(/*^block*/ id)arg5 ;
-(void)_loadProperties:(id)arg1 ofEntityWithIdentifier:(long long)arg2 ML3EntityClass:(Class)arg3 completionBlock:(/*^block*/ id)arg4 ;
-(id)ML3SystemFilterPredicatesWithGroupingType:(long long)arg1 cloudTrackFilteringType:(long long)arg2 additionalFilterPredicates:(id)arg3 ;
-(id)systemFilterPredicatesWithGroupingType:(long long)arg1 cloudTrackFilteringType:(long long)arg2 ;
-(id)_adjustedArtworkCacheIDPropertyOfEntity:(id)arg1 withDefaultValue:(id)arg2 ;
-(id)_adjustedItemPropertyAssetURLOfEntity:(id)arg1 withDefaultValue:(id)arg2 ;
-(id)_adjustedItemTimeOfEntity:(id)arg1 withDefaultValue:(id)arg2 ;
-(id)_adjustedItemPropertyChapterArtworkTimesOfEntity:(id)arg1 withDefaultValue:(id)arg2 ;
-(id)_adjustedItemPropertyChaptersOfEntity:(id)arg1 withDefaultValue:(id)arg2 ;
-(id)_adjustedItemPropertyContentRatingOfEntity:(id)arg1 withDefaultValue:(id)arg2 ;
-(id)_adjustedItemDateOfEntity:(id)arg1 withDefaultValue:(id)arg2 ;
-(id)_adjustedItemPropertyEpisodeNumberOfEntity:(id)arg1 withDefaultValue:(id)arg2 ;
-(id)_adjustedItemPropertyEQPresetOfEntity:(id)arg1 withDefaultValue:(id)arg2 ;
-(id)_adjustedItemPropertyFilePathOfEntity:(id)arg1 withDefaultValue:(id)arg2 ;
-(id)_adjustedPropertyMediaTypeOfEntity:(id)arg1 withDefaultValue:(id)arg2 ;
-(id)_adjustedItemPropertyMovieInfoOfEntity:(id)arg1 withDefaultValue:(id)arg2 ;
-(id)_adjustedItemPropertyRatingOfEntity:(id)arg1 withDefaultValue:(id)arg2 ;
-(id)_adjustedItemPropertySeasonNameOfEntity:(id)arg1 withDefaultValue:(id)arg2 ;
-(id)_adjustedItemPropertySeasonNumberOfEntity:(id)arg1 withDefaultValue:(id)arg2 ;
-(id)_adjustedItemPropertyVerifiedIntegrityOfEntity:(id)arg1 withDefaultValue:(id)arg2 ;
-(id)_adjustedItemPropertyVolumeAdjustmentOfEntity:(id)arg1 withDefaultValue:(id)arg2 ;
-(id)_adjustedItemPropertyVolumeNormalizationOfEntity:(id)arg1 withDefaultValue:(id)arg2 ;
-(id)_adjustedPlaylistPropertySeedItemsOfEntity:(id)arg1 withDefaultValue:(id)arg2 ;
-(bool)_dataProviderSupportsEntityChangeTracking;
-(void)_coalesceEvents;
-(bool)_removeEntitiesWithIdentifiers:(long long*)arg1 count:(unsigned long long)arg2 entityClass:(Class)arg3 ;
-(void)dealloc;
-(id)name;
-(void).cxx_destruct;
-(id)uniqueIdentifier;
-(id)initWithLibrary:(id)arg1 ;
-(id)valueForDatabaseProperty:(id)arg1 ;
-(bool)setValue:(id)arg1 forDatabaseProperty:(id)arg2 ;
-(bool)performTransactionWithBlock:(/*^block*/ id)arg1 ;
-(id)library;
-(void)setLibrary:(id)arg1 ;
-(bool)isCurrentThreadInTransaction;
-(unsigned long long)syncGenerationID;
-(id)localizedSectionIndexTitles;
-(id)localizedSectionHeaderForSectionIndex:(unsigned long long)arg1 ;
-(id)databasePath;
-(id)lastModifiedDate;
@end

