/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:56 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, PFUbiquityLocation, PFUbiquityGlobalObjectIDCache, PFUbiquityPeerRangeCache, PFUbiquityTransactionLogCache, PFUbiquityTransactionHistoryCache, PFUbiquityKnowledgeVector, PFUbiquityPeerReceipt, NSLock;

@interface PFUbiquitySwitchboardCacheWrapper : NSObject {

	NSString* _localPeerID;
	PFUbiquityLocation* _ubiquityRootLocation;
	NSString* _storeName;
	PFUbiquityGlobalObjectIDCache* _globalIDCache;
	PFUbiquityPeerRangeCache* _peerRangeCache;
	PFUbiquityTransactionLogCache* _transactionLogCache;
	PFUbiquityTransactionHistoryCache* _transactionHistoryCache;
	PFUbiquityKnowledgeVector* _kv;
	PFUbiquityKnowledgeVector* _baselineKV;
	PFUbiquityPeerReceipt* _peerReceipt;
	BOOL _pendingReceiptWrite;
	NSLock* _receiptFileLock;
	BOOL _allowSchedulingOfReceiptFileWrites;

}

@property (nonatomic,readonly) PFUbiquityGlobalObjectIDCache * globalIDCache;                            //@synthesize globalIDCache=_globalIDCache - In the implementation block
@property (nonatomic,readonly) PFUbiquityPeerRangeCache * peerRangeCache;                                //@synthesize peerRangeCache=_peerRangeCache - In the implementation block
@property (nonatomic,readonly) PFUbiquityTransactionLogCache * transactionLogCache;                      //@synthesize transactionLogCache=_transactionLogCache - In the implementation block
@property (nonatomic,readonly) PFUbiquityTransactionHistoryCache * transactionHistoryCache;              //@synthesize transactionHistoryCache=_transactionHistoryCache - In the implementation block
@property (nonatomic,readonly) PFUbiquityPeerReceipt * peerReceipt;                                      //@synthesize peerReceipt=_peerReceipt - In the implementation block
@property (retain) PFUbiquityKnowledgeVector * kv;                                                       //@synthesize kv=_kv - In the implementation block
@property (retain) PFUbiquityKnowledgeVector * baselineKV;                                               //@synthesize baselineKV=_baselineKV - In the implementation block
@property (nonatomic,readonly) NSString * localPeerID;                                                   //@synthesize localPeerID=_localPeerID - In the implementation block
@property (nonatomic,retain) PFUbiquityLocation * ubiquityRootLocation;                                  //@synthesize ubiquityRootLocation=_ubiquityRootLocation - In the implementation block
@property (nonatomic,readonly) NSString * storeName;                                                     //@synthesize storeName=_storeName - In the implementation block
-(NSString *)localPeerID;
-(NSString *)storeName;
-(PFUbiquityLocation *)ubiquityRootLocation;
-(PFUbiquityPeerRangeCache *)peerRangeCache;
-(PFUbiquityTransactionHistoryCache *)transactionHistoryCache;
-(PFUbiquityKnowledgeVector *)baselineKV;
-(void)setKv:(PFUbiquityKnowledgeVector *)arg1 ;
-(void)scheduleReceiptFileWrite:(id)arg1 ;
-(PFUbiquityKnowledgeVector *)kv;
-(PFUbiquityTransactionLogCache *)transactionLogCache;
-(void)setUbiquityRootLocation:(PFUbiquityLocation *)arg1 ;
-(void)cacheWrapperWillBeRemovedFromEntry;
-(id)initWithStoreName:(id)arg1 privateStore:(id)arg2 forLocalPeerID:(id)arg3 andUbiquityRootLocation:(id)arg4 ;
-(void)setBaselineKV:(PFUbiquityKnowledgeVector *)arg1 ;
-(PFUbiquityGlobalObjectIDCache *)globalIDCache;
-(void)_appWillResignActive:(id)arg1 ;
-(BOOL)writeReceiptFile:(BOOL)arg1 error:(id*)arg2 ;
-(PFUbiquityPeerReceipt *)peerReceipt;
-(void)dealloc;
-(id)init;
@end

