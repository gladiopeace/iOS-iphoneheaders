/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:37 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol ABSearchOperationDelegate;
@class NSPredicate, NSArray, NSThread;

@interface ABSearchOperation : NSOperation {

	void* _addressBook;
	NSPredicate* _predicate;
	NSArray* _prefetchProperties;
	unsigned _sortOrdering;
	void* _internalSearchAddressBook;
	<ABSearchOperationDelegate>* _delegate;
	/*^block*/ id _progressBlock;
	NSThread* _progressBlockThread;
	void* _context;

}

@property (assign,nonatomic) void* addressBook;                                   //@synthesize addressBook=_addressBook - In the implementation block
@property (nonatomic,retain) NSPredicate * predicate;                             //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,copy) NSArray * prefetchProperties;                          //@synthesize prefetchProperties=_prefetchProperties - In the implementation block
@property (assign,nonatomic) <ABSearchOperationDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) void* context;                                       //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) unsigned sortOrdering;                               //@synthesize sortOrdering=_sortOrdering - In the implementation block
@property (nonatomic,copy) id progressBlock;                                      //@synthesize progressBlock=_progressBlock - In the implementation block
@property (assign,nonatomic) void* internalSearchAddressBook;                     //@synthesize internalSearchAddressBook=_internalSearchAddressBook - In the implementation block
+(id)personPredicateWithPhoneLike:(id)arg1 countryHint:(id)arg2 addressBook:(void*)arg3 ;
+(id)personPredicateWithNameLike:(id)arg1 addressBook:(void*)arg2 ;
+(id)personPredicateWithName:(id)arg1 addressBook:(void*)arg2 ;
+(id)personPredicateWithNameLike:(id)arg1 inGroup:(void*)arg2 addressBook:(void*)arg3 ;
+(id)personPredicateWithNameLike:(id)arg1 inSource:(void*)arg2 addressBook:(void*)arg3 ;
+(id)personPredicateWithNameLike:(id)arg1 inSource:(void*)arg2 includeSourceInResults:(bool)arg3 addressBook:(void*)arg4 ;
+(id)personPredicateWithNameLike:(id)arg1 inSource:(void*)arg2 includeSourceInResults:(bool)arg3 includePhotosInResults:(bool)arg4 addressBook:(void*)arg5 ;
+(id)personPredicateWithNameLike:(id)arg1 inAccount:(id)arg2 addressBook:(void*)arg3 ;
+(id)personPredicateWithNameLike:(id)arg1 inGroups:(id)arg2 sources:(id)arg3 addressBook:(void*)arg4 ;
+(id)personPredicateWithNameOnly:(id)arg1 inAccount:(id)arg2 addressBook:(void*)arg3 ;
+(id)personPredicateWithAnyValueForProperty:(int)arg1 addressBook:(void*)arg2 ;
+(id)personPredicateWithGroup:(void*)arg1 addressBook:(void*)arg2 ;
+(id)personPredicateWithValue:(id)arg1 comparison:(long long)arg2 forProperty:(int)arg3 addressBook:(void*)arg4 ;
-(bool)predicateShouldContinue:(id)arg1 ;
-(bool)predicateShouldContinue:(id)arg1 afterFindingRecord:(void*)arg2 ;
-(unsigned)sortOrdering;
-(void*)internalSearchAddressBook;
-(void)_mainThread_tellDelegateSearchFoundMatch:(void*)arg1 ;
-(void)setInternalSearchAddressBook:(void*)arg1 ;
-(id)prefetchProperties;
-(void)setPrefetchProperties:(id)arg1 ;
-(void)setSortOrdering:(unsigned)arg1 ;
-(bool)isConcurrent;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void*)context;
-(void)setContext:(void*)arg1 ;
-(void)cancel;
-(void)main;
-(void)setPredicate:(id)arg1 ;
-(id)predicate;
-(void*)addressBook;
-(/*^block*/ id)progressBlock;
-(void)setProgressBlock:(/*^block*/ id)arg1 ;
-(void)setAddressBook:(void*)arg1 ;
@end

