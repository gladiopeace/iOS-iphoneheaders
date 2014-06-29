/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:22 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKitCore/PKPassLibraryExportedInterface.h>

@protocol PKPassLibraryDelegate;
@class NSXPCConnection, PKAsyncCache, PKPassLibraryExportedProxy;

@interface PKPassLibrary : NSObject <PKPassLibraryExportedInterface> {

	NSXPCConnection* _connection;
	PKAsyncCache* _libraryCache;
	PKPassLibraryExportedProxy* _exportedProxy;
	<PKPassLibraryDelegate>* _delegate;

}

@property (assign,nonatomic) <PKPassLibraryDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
+(bool)isPassLibraryAvailable;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(void)catalogChanged:(id)arg1 withNewPasses:(id)arg2 ;
-(void)passAdded:(id)arg1 ;
-(void)passUpdated:(id)arg1 ;
-(void)passRemoved:(id)arg1 ;
-(void)_registerForApplicationLifeCycleNotifications;
-(void)_establishPassLibraryConnection;
-(void)_tearDownPassLibraryConnection;
-(void)_unregisterForApplicationLifeCycleNotifications;
-(/*^block*/ id)_errorHandlerWithSemaphore:(id)arg1 ;
-(void)_registerPass:(id)arg1 ;
-(void)removePassWithUniqueID:(id)arg1 ;
-(void)getContainmentStatusAndSettingsForPass:(id)arg1 withHandler:(/*^block*/ id)arg2 ;
-(/*^block*/ id)_errorHandlerWithCompletion:(/*^block*/ id)arg1 ;
-(void)_sendResumed;
-(void)_sendSuspended;
-(void)_registerPasses:(id)arg1 ;
-(void)_postLibraryChangeWithUserInfo:(id)arg1 ;
-(id)_passesWithRetries:(unsigned long long)arg1 ;
-(void)getPassesAndCatalog:(bool)arg1 withRetries:(unsigned long long)arg2 withHandler:(/*^block*/ id)arg3 ;
-(void)getPassesAndCatalog:(bool)arg1 withHandler:(/*^block*/ id)arg2 ;
-(void)sendUserEditedCatalog:(id)arg1 ;
-(void)_getPassWithUniqueID:(id)arg1 completion:(/*^block*/ id)arg2 ;
-(void)_getArchivedPassWithUniqueID:(id)arg1 completion:(/*^block*/ id)arg2 ;
-(void)updateSettings:(long long)arg1 forPassWithUniqueID:(id)arg2 ;
-(void)nukeDatabaseAndExit;
-(void)addFakeBulletin;
-(void)introduceDatabaseIntegrityProblem;
-(void)noteAccountChanged;
-(void)shuffleGroups:(int)arg1 ;
-(void)logDelayExitReasons;
-(void)clearBulletinRecordsForPassTypeID:(id)arg1 beforeDate:(id)arg2 ;
-(void)removePass:(id)arg1 ;
-(bool)replacePassWithPass:(id)arg1 ;
-(void)addPasses:(id)arg1 withCompletionHandler:(/*^block*/ id)arg2 ;
-(id)passWithUniqueID:(id)arg1 ;
-(id)archivedPassForUniqueID:(id)arg1 ;
-(void)ingestPassData:(id)arg1 settings:(id)arg2 completion:(/*^block*/ id)arg3 ;
-(void)notePassShared:(id)arg1 ;
-(void)updatePassWithUniqueID:(id)arg1 completion:(/*^block*/ id)arg2 ;
-(void)getRouteRelevantPassesFromLocation:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(void)fetchContentForUniqueID:(id)arg1 withCompletion:(/*^block*/ id)arg2 ;
-(void)fetchImageSet:(long long)arg1 forUniqueID:(id)arg2 displayProfile:(id)arg3 withCompletion:(/*^block*/ id)arg4 ;
-(bool)migrateData;
-(id)bulletinDictsForPassTypeID:(id)arg1 count:(unsigned long long)arg2 sinceDate:(id)arg3 ;
-(id)bulletinDictWithRecordID:(id)arg1 ;
-(id)bulletinSectionInfoForRecordID:(id)arg1 ;
-(id)diffForBulletinRecordID:(id)arg1 ;
-(bool)containsPass:(id)arg1 ;
-(id)passWithPassTypeIdentifier:(id)arg1 serialNumber:(id)arg2 ;
-(id)passes;
@end

