/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 2:29:06 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/PassKit.framework/passd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKitCore/PDPassLibraryExportedInterface.h>

@protocol PDPassLibraryDelegate;
@class WDEntitlementWhitelist, NSMutableArray, PDDatabaseManager, WDCardFileManager, PDBulletinManager, NSXPCConnection;

@interface PDPassLibrary : NSObject <PDPassLibraryExportedInterface> {

	WDEntitlementWhitelist* _whitelist;
	NSMutableArray* _userNotifications;
	<PDPassLibraryDelegate>* _delegate;
	PDDatabaseManager* _databaseManager;
	WDCardFileManager* _cardFileManager;
	PDBulletinManager* _bulletinManager;
	NSXPCConnection* _connection;

}

@property (assign,nonatomic) <PDPassLibraryDelegate> * delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) WDCardFileManager * cardFileManager;              //@synthesize cardFileManager=_cardFileManager - In the implementation block
@property (nonatomic,retain) PDDatabaseManager * databaseManager;              //@synthesize databaseManager=_databaseManager - In the implementation block
@property (nonatomic,retain) PDBulletinManager * bulletinManager;              //@synthesize bulletinManager=_bulletinManager - In the implementation block
@property (nonatomic,readonly) NSXPCConnection * connection;                   //@synthesize connection=_connection - In the implementation block
-(void)setCardFileManager:(id)arg1 ;
-(void)setDatabaseManager:(id)arg1 ;
-(void)setBulletinManager:(id)arg1 ;
-(void)sendPassAdded:(id)arg1 catalog:(id)arg2 ;
-(void)sendPassUpdated:(id)arg1 catalog:(id)arg2 ;
-(void)sendPassRemoved:(id)arg1 catalog:(id)arg2 ;
-(void)sendCatalogChanged:(id)arg1 ;
-(BOOL)_entitledForPass:(id)arg1 ;
-(id)_entitlementFilteredPasses:(id)arg1 ;
-(BOOL)_entitledForUniqueID:(id)arg1 ;
-(BOOL)_writePass:(id)arg1 withSettings:(int)arg2 error:(id*)arg3 ;
-(void)_addPasses:(id)arg1 withHandler:(/*^block*/ id)arg2 ;
-(BOOL)_entitledForPassTypeID:(id)arg1 teamID:(id)arg2 ;
-(id)databaseManager;
-(id)cardFileManager;
-(id)bulletinManager;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)invalidate;
-(id)connection;
-(id)initWithConnection:(id)arg1 ;
-(void)getPassWithPassTypeID:(id)arg1 serialNumber:(id)arg2 handler:(/*^block*/ id)arg3 ;
-(void)getManifestHashAndSettingsForPassTypeID:(id)arg1 serialNumber:(id)arg2 handler:(/*^block*/ id)arg3 ;
-(void)replacePassWithPassData:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(void)addPassesWithData:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(void)libraryResumed;
-(void)librarySuspended;
-(void)getPassesWithHandler:(/*^block*/ id)arg1 ;
-(void)getPassesAndCatalog:(BOOL)arg1 withHandler:(/*^block*/ id)arg2 ;
-(void)sendUserEditedCatalog:(id)arg1 ;
-(void)ingestPassDatas:(id)arg1 settings:(id)arg2 handler:(/*^block*/ id)arg3 ;
-(void)updateSettings:(int)arg1 forPassWithUniqueID:(id)arg2 ;
-(void)notePassSharedWithUniqueID:(id)arg1 ;
-(void)updatePassWithUniqueID:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(void)getRouteRelevantPassesForLocation:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(void)getContentForUniqueID:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(void)getImageSet:(int)arg1 forUniqueID:(id)arg2 displayProfile:(id)arg3 handler:(/*^block*/ id)arg4 ;
-(void)nukeDatabaseAndExit;
-(void)addFakeBulletin;
-(void)introduceDatabaseIntegrityProblem;
-(void)removePassWithUniqueID:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(void)noteAccountChanged;
-(void)shuffleGroups:(int)arg1 ;
-(void)logDelayExitReasons;
-(void)migrateDataWithHandler:(/*^block*/ id)arg1 ;
-(void)getBulletinDictsForPassTypeID:(id)arg1 count:(unsigned)arg2 sinceDate:(id)arg3 handler:(/*^block*/ id)arg4 ;
-(void)clearBulletinRecordsForPassTypeID:(id)arg1 beforeDate:(id)arg2 ;
-(void)getBulletinDictWithRecordID:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(void)getBulletinSectionInfoForRecordID:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(void)getDiffForBulletinRecordID:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(void)getPassWithUniqueID:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(void)getArchivedPassWithUniqueID:(id)arg1 handler:(/*^block*/ id)arg2 ;
@end

