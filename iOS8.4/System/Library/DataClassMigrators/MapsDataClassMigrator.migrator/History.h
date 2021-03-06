/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:16:53 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/DataClassMigrators/MapsDataClassMigrator.migrator/MapsDataClassMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapsDataClassMigrator/NMMapsAppXPCInterface.h>
#import <MapsDataClassMigrator/MapsSyncedClient.h>

@protocol OS_dispatch_queue, HistoryDelegate;
@class NSString, NSArray, MapsSyncManager, NSObject, NSXPCConnection, NSMutableArray;

@interface History : NSObject <NMMapsAppXPCInterface, MapsSyncedClient> {

	MapsSyncManager* _syncManager;
	NSObject*<OS_dispatch_queue> _saveQ;
	id<HistoryDelegate> _delegate;
	NSXPCConnection* _connection;
	NSMutableArray* _history;
	NSMutableArray* _syncedHistory;
	NSMutableArray* _failedSearches;
	NSMutableArray* _failedDirectionsRequests;
	BOOL _addressBookCallbackWasRegistered;
	BOOL _shouldSendHistoryDidChangeNotifications;

}

@property (nonatomic,readonly) NSArray * orderedHistory; 
@property (nonatomic,readonly) unsigned long long orderedHistoryCount; 
@property (nonatomic,readonly) NSArray * allHistory; 
@property (assign,nonatomic,__weak) id<HistoryDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL shouldSendHistoryDidChangeNotifications;              //@synthesize shouldSendHistoryDidChangeNotifications=_shouldSendHistoryDidChangeNotifications - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * syncIdentifier; 
@property (nonatomic,readonly) NSArray * syncedItems; 
@property (nonatomic,readonly) BOOL syncSupportsKVO; 
@property (nonatomic,readonly) BOOL syncInvertedOrdering; 
@property (nonatomic,readonly) BOOL syncShouldUseItemPositions; 
@property (nonatomic,readonly) BOOL syncShouldUseCustomStore; 
+(id)sharedHistoryCreatingIfMissing:(BOOL)arg1 ;
+(id)beginHoldingUIInterferingTasks;
+(void)beginPrecachingHistoryIfNeeded;
+(id)sharedHistory;
-(void)_startSyncIfNotYetStarted;
-(void)addHistoryItem:(id)arg1 ;
-(void)_startSyncIfPossible;
-(BOOL)syncSupportsKVO;
-(BOOL)_isValidHistoryItem:(id)arg1 ;
-(void)updateHistoryItemTimestamp:(id)arg1 ;
-(void)_createCompanionConnection;
-(void)_dedupeAndSortHistory;
-(BOOL)syncInvertedOrdering;
-(NSArray *)syncedItems;
-(void)_removeInvalidItems;
-(void)_saveFailedDirectionsRequests;
-(void)_saveFailedSearches;
-(NSString *)syncIdentifier;
-(void)_saveHistory;
-(void)_madeChanges;
-(void)_saveFailuresWithTaskName:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(BOOL)shouldSendHistoryDidChangeNotifications;
-(void)_registerAddressBookIfPossible;
-(void)setShouldSendHistoryDidChangeNotifications:(BOOL)arg1 ;
-(void)_updateHistory;
-(void)_registerAddressBookIfUnregistered;
-(void)_addHistoryItem:(id)arg1 isDirectionsFailure:(BOOL)arg2 isSearchFailure:(BOOL)arg3 ;
-(BOOL)_containsFailedDirectionsHistoryItem:(id)arg1 ;
-(BOOL)syncShouldUseCustomStore;
-(void)insertSyncedItems:(id)arg1 atIndexes:(id)arg2 ;
-(void)removeSyncedItemsAtIndexes:(id)arg1 ;
-(void)updateSyncedItemAtIndexes:(id)arg1 ;
-(BOOL)syncShouldUseItemPositions;
-(id)newSyncedItemForSyncData:(id)arg1 ;
-(BOOL)shouldAddSyncedItem:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)syncManagerDidUpdateSyncedItems:(id)arg1 ;
-(void)holdingStateDidChange;
-(NSArray *)allHistory;
-(BOOL)_holdingUIInterferingTasksIsUseful;
-(void)addDirectionsHistoryItem:(id)arg1 isFailure:(BOOL)arg2 ;
-(void)addSearchRequestHistoryItem:(id)arg1 isFailure:(BOOL)arg2 ;
-(void)clearPreviewRouteWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)updateDroppedPin:(id)arg1 ;
-(void)updateHistoryItem:(id)arg1 ;
-(void)updateHistoryItem:(id)arg1 withTransportType:(int)arg2 ;
-(void)startDirectionsToPreviewRouteWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)stopDirections;
-(void)updateAddressForSearchResult:(id)arg1 ;
-(unsigned long long)orderedHistoryCount;
-(NSArray *)orderedHistory;
-(void)removeAllItems;
-(void)dealloc;
-(void)setDelegate:(id<HistoryDelegate>)arg1 ;
-(id)init;
-(id<HistoryDelegate>)delegate;
@end

