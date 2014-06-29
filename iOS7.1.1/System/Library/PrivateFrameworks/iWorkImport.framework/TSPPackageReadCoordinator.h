/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:21 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPReadCoordinatorBase.h>
#import <iWorkImport/TSPReadCoordinator.h>

@protocol TSPPackage, OS_dispatch_queue, OS_dispatch_group;
@class TSPObjectContext, TSPObject, TSPFinalizeHandlerQueue, TSPDocumentResourceDataProvider, NSObject, NSError, NSMutableArray, NSMapTable;

@interface TSPPackageReadCoordinator : TSPReadCoordinatorBase <TSPReadCoordinator> {

	TSPObjectContext* _context;
	TSPObject* _documentObject;
	<TSPPackage>* _package;
	TSPFinalizeHandlerQueue* _finalizeHandlerQueue;
	TSPDocumentResourceDataProvider* _documentResourceDataProvider;
	bool _areExternalDataReferencesAllowed;
	unsigned long long _readVersion;
	unsigned long long _writeVersion;
	NSObject<OS_dispatch_queue>* _errorQueue;
	NSError* _error;
	NSObject<OS_dispatch_group>* _completionGroup;
	NSObject<OS_dispatch_queue>* _ioQueue;
	NSObject<OS_dispatch_queue>* _ioCompletionQueue;
	NSObject<OS_dispatch_queue>* _readCompletionQueue;
	NSObject<OS_dispatch_queue>* _componentQueue;
	hash_map<const long long, bool, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, bool> > >* _readIdentifiers;
	NSMutableArray* _componentsToUpgrade;
	NSObject<OS_dispatch_queue>* _objectQueue;
	NSMapTable* _objects;
	hash_map<const long long, bool, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, bool> > >* _readExternalObjects;
	bool _didRequireUpgrade;

}

@property (nonatomic,readonly) unsigned long long readVersion;               //@synthesize readVersion=_readVersion - In the implementation block
@property (nonatomic,readonly) unsigned long long writeVersion;              //@synthesize writeVersion=_writeVersion - In the implementation block
@property (nonatomic,readonly) bool didRequireUpgrade;                       //@synthesize didRequireUpgrade=_didRequireUpgrade - In the implementation block
@property (nonatomic,readonly) bool isReadingFromDocument; 
-(id)initWithContext:(id)arg1 package:(id)arg2 finalizeHandlerQueue:(id)arg3 documentResourceDataProvider:(id)arg4 areExternalDataReferencesAllowed:(bool)arg5 ;
-(bool)didRequireUpgrade;
-(unsigned long long)writeVersion;
-(void)readRootObjectWithCompletionQueue:(id)arg1 completion:(/*^block*/ id)arg2 ;
-(bool)endReading;
-(void)readComponent:(id)arg1 completionQueue:(id)arg2 completion:(/*^block*/ id)arg3 ;
-(bool)requestDocumentResourcesUsingDataProvider:(id)arg1 ;
-(void)processMetadata:(id)arg1 ;
-(void)readComponent:(id)arg1 additionalComponents:(id)arg2 completionQueue:(id)arg3 completion:(/*^block*/ id)arg4 ;
-(void)readPackageMetadataWithComponent:(id)arg1 completionQueue:(id)arg2 completion:(/*^block*/ id)arg3 ;
-(bool)readComponentIfNeededAsync:(id)arg1 ;
-(void)readComponentAsync:(id)arg1 ;
-(void)componentForRootObjectIdentifier:(long long)arg1 isWeakReference:(bool)arg2 queue:(id)arg3 completion:(/*^block*/ id)arg4 ;
-(void)readExternalReferenceComponentIfNeededAsyncForObjectIdentifier:(long long)arg1 componentIdentifier:(long long)arg2 isWeak:(bool)arg3 fromComponent:(id)arg4 ;
-(void)reader:(id)arg1 didFindExternalReferenceToObjectIdentifier:(long long)arg2 componentIdentifier:(long long)arg3 isWeak:(bool)arg4 allowUnknownObject:(bool)arg5 fromParentObject:(id)arg6 completion:(/*^block*/ id)arg7 ;
-(void)reader:(id)arg1 didFindExternalRepeatedReference:(id)arg2 isWeak:(bool)arg3 allowUnknownObject:(bool)arg4 fromParentObject:(id)arg5 completion:(/*^block*/ id)arg6 ;
-(void)prepareForFullDocumentUpgrade;
-(bool)isReadingFromDocument;
-(void)didUpdateLazyReferenceDelegate:(id)arg1 ;
-(id)unarchivedObjectForIdentifier:(long long)arg1 isReadFinished:(bool)arg2 ;
-(id)externalObjectForIdentifier:(long long)arg1 componentIdentifier:(long long)arg2 isReadFinished:(bool)arg3 ;
-(void)didReferenceExternalObject:(id)arg1 withIdentifier:(long long)arg2 ;
-(id)reader:(id)arg1 wantsDataForIdentifier:(long long)arg2 ;
-(void)reader:(id)arg1 didResetObjectIdentifierForObject:(id)arg2 originalObjectIdentifier:(long long)arg3 ;
-(unsigned long long)readVersion;
-(void)setError:(id)arg1 ;
-(id)init;
-(id)context;
-(id).cxx_construct;
-(void).cxx_destruct;
-(id)error;
@end

