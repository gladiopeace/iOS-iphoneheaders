/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:09 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
@class NSArray, SUPurchaseManager;

@interface SUPurchaseBatch : NSObject {

	NSArray* _continuations;
	NSArray* _errors;
	NSArray* _items;
	NSArray* _offers;
	SUPurchaseManager* _purchaseManager;
	bool _shouldSuspendWhenFinished;
	NSArray* _validPurchases;

}

@property (nonatomic,readonly) NSArray * items;                                       //@synthesize items=_items - In the implementation block
@property (nonatomic,readonly) NSArray * offers;                                      //@synthesize offers=_offers - In the implementation block
@property (assign,nonatomic,__weak) SUPurchaseManager * purchaseManager;              //@synthesize purchaseManager=_purchaseManager - In the implementation block
@property (nonatomic,retain) NSArray * continuations;                                 //@synthesize continuations=_continuations - In the implementation block
@property (nonatomic,retain) NSArray * errors;                                        //@synthesize errors=_errors - In the implementation block
@property (nonatomic,retain) NSArray * validPurchases;                                //@synthesize validPurchases=_validPurchases - In the implementation block
-(id)offers;
-(void)dealloc;
-(id)items;
-(id)initWithItems:(id)arg1 ;
-(id)errors;
-(id)continuations;
-(id)validPurchases;
-(id)initWithItems:(id)arg1 offers:(id)arg2 ;
-(void)setPurchaseManager:(id)arg1 ;
-(id)purchaseManager;
-(void)setPurchasesAndContinuationsFromPurchases:(id)arg1 ;
-(void)_validateItems;
-(id)copyContinuationsForPurchases:(id)arg1 ;
-(void)setContinuations:(id)arg1 ;
-(void)setValidPurchases:(id)arg1 ;
-(/*function pointer*/ void*)errorEqualCallback;
-(id)_copyModifiedErrorsFromDictionary:(CFDictionaryRef)arg1 ;
-(id)copyFilteredItemsFromItems:(id)arg1 ;
-(id)_copyValidPurchasesForItems:(id)arg1 ;
-(void)setDocumentTargetIdentifier:(id)arg1 ;
-(id)everythingFailedErrorForError:(id)arg1 ;
-(id)mergedErrorForError:(id)arg1 withCount:(long long)arg2 ;
-(id)_copyUniqueErrorsFromErrors:(id)arg1 ;
-(void)setErrors:(id)arg1 ;
@end

