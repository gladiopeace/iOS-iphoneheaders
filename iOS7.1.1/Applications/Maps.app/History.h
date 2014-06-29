/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:58:59 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/MapsSyncedClient.h>

@protocol OS_dispatch_queue;
@class NSString, NSArray, MapsSyncManager, NSObject, NSMutableArray;

@interface History : NSObject <MapsSyncedClient> {

	MapsSyncManager* _syncManager;
	NSObject<OS_dispatch_queue>* _saveQ;
	NSMutableArray* _history;
	NSMutableArray* _syncedHistory;
	NSMutableArray* _failedSearches;
	BOOL _shouldSendHistoryDidChangeNotifications;

}

@property (nonatomic,readonly) NSArray * orderedHistory; 
@property (nonatomic,readonly) unsigned orderedHistoryCount; 
@property (nonatomic,readonly) NSArray * allHistory; 
@property (assign,nonatomic) BOOL shouldSendHistoryDidChangeNotifications;              //@synthesize shouldSendHistoryDidChangeNotifications=_shouldSendHistoryDidChangeNotifications - In the implementation block
@property (nonatomic,readonly) NSString * syncIdentifier; 
@property (nonatomic,readonly) NSArray * syncedItems; 
@property (nonatomic,readonly) BOOL syncSupportsKVO; 
@property (nonatomic,readonly) BOOL syncInvertedOrdering; 
@property (nonatomic,readonly) BOOL syncShouldUseItemPositions; 
@property (nonatomic,readonly) BOOL syncShouldUseCustomStore; 
+(id)sharedHistory;
+(id)sharedHistoryCreatingIfMissing:(BOOL)arg1 ;
+(void)beginPrecachingHistoryIfNeeded;
+(id)beginHoldingUIInterferingTasks;
-(id)orderedHistory;
-(id)syncIdentifier;
-(void)holdingStateDidChange;
-(BOOL)_holdingUIInterferingTasksIsUseful;
-(void)setShouldSendHistoryDidChangeNotifications:(BOOL)arg1 ;
-(void)_startSyncIfNotYetStarted;
-(void)_updateHistory;
-(void)_saveHistory;
-(BOOL)shouldSendHistoryDidChangeNotifications;
-(void)_madeChanges;
-(void)_startSyncIfPossible;
-(BOOL)_isValidHistoryItem:(id)arg1 ;
-(void)_dedupeAndSortHistory;
-(BOOL)syncInvertedOrdering;
-(void)_saveFailedSearches;
-(id)newSyncedItemForSyncData:(id)arg1 ;
-(BOOL)shouldAddSyncedItem:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)insertSyncedItems:(id)arg1 atIndexes:(id)arg2 ;
-(void)removeSyncedItemsAtIndexes:(id)arg1 ;
-(void)updateSyncedItemAtIndexes:(id)arg1 ;
-(void)syncManagerDidUpdateSyncedItems:(id)arg1 ;
-(id)syncedItems;
-(BOOL)syncSupportsKVO;
-(BOOL)syncShouldUseItemPositions;
-(BOOL)syncShouldUseCustomStore;
-(void)_removeInvalidItems;
-(void)addHistoryItem:(id)arg1 ;
-(void)updateHistoryItem:(id)arg1 withTransportType:(int)arg2 ;
-(void)updateAddressForSearchResult:(id)arg1 ;
-(unsigned)orderedHistoryCount;
-(id)allHistory;
-(void)removeAllItems;
-(id)init;
-(void).cxx_destruct;
@end

