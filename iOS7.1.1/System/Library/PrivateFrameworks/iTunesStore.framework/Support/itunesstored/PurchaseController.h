/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 5:51:29 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class ISOperationQueue, NSMutableIndexSet, NSMutableArray, NSObject, NSMutableSet;

@interface PurchaseController : NSObject {

	ISOperationQueue* _authenticationOperationQueue;
	NSMutableIndexSet* _authenticatingBatchIdentifiers;
	NSMutableArray* _clients;
	BOOL _didGarbageCollect;
	NSObject<OS_dispatch_queue>* _dispatchQueue;
	NSMutableSet* _inflightCanceledIdentifiers;
	ISOperationQueue* _purchaseOperationQueue;
	NSMutableSet* _purchasingIdentifiers;

}
+(void)observeXPCServer:(id)arg1 ;
+(void)addPurchasesWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)cancelPurchasesWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)connectClientWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)getPurchasesWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)finishPurchasesWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)insertPurchasesWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)movePurchasesWithMessage:(id)arg1 connection:(id)arg2 ;
+(id)sharedController;
-(void)_clientDisconnectNotification:(id)arg1 ;
-(void)_handleMessage:(id)arg1 connection:(id)arg2 usingReplyBlock:(/*^block*/ id)arg3 ;
-(void)_addPurchases:(id)arg1 forClient:(id)arg2 ;
-(void)_beginPurchaseBatch:(id)arg1 forClient:(id)arg2 ;
-(void)_enqueueNextPurchase;
-(void)_addEncodedPurchases:(id)arg1 forClient:(id)arg2 ;
-(void)_cancelEncodedPurchases:(id)arg1 forClient:(id)arg2 ;
-(void)_connectClient:(id)arg1 withOutputConnection:(id)arg2 ;
-(void)_finishEncodedPurchaseIdentifiers:(id)arg1 forClient:(id)arg2 ;
-(void)_insertEncodedPurchases:(id)arg1 afterPurchaseID:(long long)arg2 forClient:(id)arg3 ;
-(void)_moveEncodedPurchaseIDs:(id)arg1 afterPurchaseID:(long long)arg2 forClient:(id)arg3 ;
-(id)_newPurchasesFromEncodedArray:(id)arg1 client:(id)arg2 ;
-(void)_filterPurchases:(id)arg1 withTransaction:(id)arg2 block:(/*^block*/ id)arg3 ;
-(void)_authenticateForPurchases:(id)arg1 client:(id)arg2 ;
-(id)_newPurchaseIdentifiersFromEncodedArray:(id)arg1 ;
-(void)_finishAuthenticationRequestForBatchIdentifier:(int)arg1 client:(id)arg2 withAccountID:(id)arg3 error:(id)arg4 ;
-(id)_authenticationOperationQueue;
-(void)_cancelPurchasesForLackOfDiskSpace:(id)arg1 client:(id)arg2 ;
-(void)_showNotEnoughDiskSpaceDialogForPurchases:(id)arg1 ;
-(id)_newEncodedPurchaseEntityPropertiesWithResponse:(id)arg1 ;
-(void)_garbageCollectInflightPurchases;
-(id)_clientForUniqueIdentifier:(long long)arg1 ;
-(void)_finishPurchaseRequestForClientUniqueID:(long long)arg1 withResponse:(id)arg2 ;
-(id)_purchaseOperationQueue;
-(BOOL)_cancelPurchasesWithBatchIdentifier:(long long)arg1 client:(id)arg2 response:(id)arg3 ;
-(void)_checkStoreDownloadQueuesForPurchase:(id)arg1 response:(id)arg2 ;
-(void)_showPurchasesFailedDialogWithFirstTitle:(id)arg1 count:(int)arg2 ;
-(id)_clientForMessage:(id)arg1 connection:(id)arg2 ;
-(void)beginPurchaseBatch:(id)arg1 ;
-(id)_placeholderAppPathForBundleIdentifier:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)start;
-(void)_dispatchAsync:(/*^block*/ id)arg1 ;
-(void)addPurchases:(id)arg1 ;
@end

