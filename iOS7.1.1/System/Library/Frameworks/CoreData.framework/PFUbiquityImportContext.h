/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:49 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class _PFUbiquityStack, PFUbiquityStoreMetadata, PFUbiquityPeer, PFUbiquityKnowledgeVector, NSString, PFUbiquityTransactionLog, PFUbiquityStoreSaveSnapshot, NSDictionary, NSMutableDictionary, PFUbiquitySwitchboardCacheWrapper, PFUbiquityBaselineHeuristics;

@interface PFUbiquityImportContext : NSObject {

	_PFUbiquityStack* _stack;
	PFUbiquityStoreMetadata* _storeMetadata;
	PFUbiquityPeer* _actingPeer;
	PFUbiquityKnowledgeVector* _kv;
	PFUbiquityKnowledgeVector* _currentKnowledgeVector;
	NSString* _exportingPeerID;
	PFUbiquityTransactionLog* _transactionLog;
	PFUbiquityStoreSaveSnapshot* _storeSaveSnapshot;
	NSDictionary* _globalIDToLocalIDURICache;
	NSMutableDictionary* _globalIDToFetchedObject;
	PFUbiquitySwitchboardCacheWrapper* _cacheWrapper;
	PFUbiquityBaselineHeuristics* _heuristics;

}

@property (nonatomic,retain) _PFUbiquityStack * stack;                                        //@synthesize stack=_stack - In the implementation block
@property (nonatomic,retain) PFUbiquityStoreMetadata * storeMetadata;                         //@synthesize storeMetadata=_storeMetadata - In the implementation block
@property (nonatomic,readonly) PFUbiquityPeer * actingPeer;                                   //@synthesize actingPeer=_actingPeer - In the implementation block
@property (nonatomic,retain) PFUbiquityKnowledgeVector * knowledgeVector;                     //@synthesize kv=_kv - In the implementation block
@property (nonatomic,retain) PFUbiquityKnowledgeVector * currentKnowledgeVector;              //@synthesize currentKnowledgeVector=_currentKnowledgeVector - In the implementation block
@property (nonatomic,retain) NSString * exportingPeerID;                                      //@synthesize exportingPeerID=_exportingPeerID - In the implementation block
@property (nonatomic,retain) PFUbiquityTransactionLog * transactionLog;                       //@synthesize transactionLog=_transactionLog - In the implementation block
@property (nonatomic,retain) PFUbiquityStoreSaveSnapshot * storeSaveSnapshot;                 //@synthesize storeSaveSnapshot=_storeSaveSnapshot - In the implementation block
@property (nonatomic,retain) NSDictionary * globalIDToLocalIDURICache;                        //@synthesize globalIDToLocalIDURICache=_globalIDToLocalIDURICache - In the implementation block
@property (nonatomic,retain) PFUbiquitySwitchboardCacheWrapper * cacheWrapper;                //@synthesize cacheWrapper=_cacheWrapper - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * globalIDToFetchedObject;                 //@synthesize globalIDToFetchedObject=_globalIDToFetchedObject - In the implementation block
@property (nonatomic,retain) PFUbiquityBaselineHeuristics * heuristics;                       //@synthesize heuristics=_heuristics - In the implementation block
-(id)cacheWrapper;
-(void)setGlobalIDToLocalIDURICache:(id)arg1 ;
-(bool)prefetchManagedObjectsInContext:(id)arg1 error:(id*)arg2 ;
-(id)transactionLog;
-(id)initWithStack:(id)arg1 andStoreMetadata:(id)arg2 ;
-(void)setHeuristics:(id)arg1 ;
-(void)setCacheWrapper:(id)arg1 ;
-(void)setStack:(id)arg1 ;
-(void)setStoreMetadata:(id)arg1 ;
-(id)exportingPeerID;
-(void)setExportingPeerID:(id)arg1 ;
-(void)setTransactionLog:(id)arg1 ;
-(void)setStoreSaveSnapshot:(id)arg1 ;
-(id)storeSaveSnapshot;
-(id)knowledgeVector;
-(void)setKnowledgeVector:(id)arg1 ;
-(void)setCurrentKnowledgeVector:(id)arg1 ;
-(id)stack;
-(id)globalIDToLocalIDURICache;
-(id)globalIDToFetchedObject;
-(id)currentKnowledgeVector;
-(id)heuristics;
-(id)actingPeer;
-(id)storeMetadata;
-(void)setActingPeer:(id)arg1 ;
-(id)initWithStoreName:(id)arg1 andUbiquityRootLocation:(id)arg2 withLocalPeerID:(id)arg3 ;
-(void)dealloc;
-(id)init;
@end

