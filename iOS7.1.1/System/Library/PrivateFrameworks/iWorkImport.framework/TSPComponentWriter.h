/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:22 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol TSPComponentWriterDelegate, TSPComponentWriteChannel, OS_dispatch_queue, OS_dispatch_semaphore, OS_dispatch_group;
#import <iWorkImport/iWorkImport-Structs.h>
@class TSPComponent, NSString, TSPObject, TSPArchiverManager, NSObject, NSHashTable, NSMapTable;

@interface TSPComponentWriter : NSObject {

	TSPComponent* _component;
	NSString* _locator;
	TSPObject* _rootObject;
	<TSPComponentWriterDelegate>* _delegate;
	long long _mode;
	unsigned char _packageIdentifier;
	<TSPComponentWriteChannel>* _writeChannel;
	TSPArchiverManager* _archiverManager;
	NSObject<OS_dispatch_queue>* _globalConcurrentQueue;
	NSObject<OS_dispatch_semaphore>* _delegateSemaphore;
	NSHashTable* _archivedObjects;
	NSMapTable* _archivedObjectsDictionary;
	vector<TSP::ObjectStackEntry, std::__1::allocator<TSP::ObjectStackEntry> >* _objectStack;
	NSObject<OS_dispatch_group>* _writeGroup;
	NSObject<OS_dispatch_queue>* _writeQueue;
	NSHashTable* _weakReferences;
	NSHashTable* _lazyReferences;
	NSHashTable* _dataReferences;
	unsigned long long _readVersion;
	unsigned long long _writeVersion;
	NSHashTable* _analyzedCommandToModelReferences;
	NSHashTable* _commandToModelReferences;
	NSHashTable* _newCommandToModelReferences;
	NSHashTable* _indirectCommandToModelExternalReferences;
	NSHashTable* _externalReferences;
	struct {
		unsigned success : 1;
		unsigned isErrorRecoverable : 1;
		unsigned delegateRespondsToNeedsDocumentRecovery : 1;
		unsigned delegateRespondsToLocatorForClaimingComponent : 1;
		unsigned delegateRespondsToObjectBelongsToLinkedComponent : 1;
		unsigned delegateRespondsToExternalPackageDidWriteObject : 1;
		unsigned delegateRespondsToShouldDelayWritingObject : 1;
	}  _flags;

}

@property (nonatomic,readonly) TSPComponent * component;                     //@synthesize component=_component - In the implementation block
@property (nonatomic,readonly) unsigned long long readVersion;               //@synthesize readVersion=_readVersion - In the implementation block
@property (nonatomic,readonly) unsigned long long writeVersion;              //@synthesize writeVersion=_writeVersion - In the implementation block
-(unsigned long long)writeVersion;
-(unsigned long long)readVersion;
-(id)initWithComponent:(id)arg1 locator:(id)arg2 rootObject:(id)arg3 delegate:(id)arg4 mode:(long long)arg5 packageIdentifier:(unsigned char)arg6 writeChannel:(id)arg7 archiverManager:(id)arg8 ;
-(void)writeWithCompletionQueue:(id)arg1 completion:(/*^block*/ id)arg2 ;
-(void)writeObjects:(id)arg1 parentObject:(id)arg2 isCommandToModelReference:(bool)arg3 isAnalyzingExternalComponent:(bool)arg4 completion:(/*^block*/ id)arg5 ;
-(bool)shouldDelayWritingObject:(id)arg1 ;
-(bool)isObjectExternal:(id)arg1 parentObject:(id)arg2 validateAmbiguousObjectOwnership:(bool)arg3 claimingComponent:(id*)arg4 isOwnedByDifferentPackage:(bool*)arg5 ;
-(bool)validateObjectContextForObject:(id)arg1 ;
-(bool)shouldWriteObject:(id)arg1 ;
-(bool)shouldAnalyzeCommandToModelReference:(id)arg1 isAnalyzingExternalComponent:(bool)arg2 ;
-(void)writeObject:(id)arg1 archiver:(id)arg2 parentObject:(id)arg3 completion:(/*^block*/ id)arg4 ;
-(void)analyzeCommandToModelReference:(id)arg1 isAnalyzingExternalComponent:(bool)arg2 archiver:(id)arg3 completion:(/*^block*/ id)arg4 ;
-(id)commandToModelReferencesToWrite;
-(void)validateAmbiguousObjectOwnershipForObject:(id)arg1 parentObject:(id)arg2 claimingComponent:(id)arg3 claimingPackageIdentifier:(unsigned char)arg4 claimingComponentWillBeLinked:(bool)arg5 ;
-(void)validateExplicitComponentOwnershipForObject:(id)arg1 parentObject:(id)arg2 ;
-(void)addCommandToModelReferences:(id)arg1 parentObject:(id)arg2 ;
-(void)writeArchiver:(id)arg1 ;
-(bool)canSkipArchivingStronglyReferencedObject:(id)arg1 fromComponentRootObject:(id)arg2 ;
-(bool)isObjectExternalBecauseItAlreadyBelongsToAnotherComponent:(id)arg1 parentObject:(id)arg2 claimingComponent:(id*)arg3 claimingPackageIdentifier:(unsigned char*)arg4 claimingComponentWillBeLinked:(bool*)arg5 ;
-(id)init;
-(id).cxx_construct;
-(void).cxx_destruct;
-(id)component;
@end

