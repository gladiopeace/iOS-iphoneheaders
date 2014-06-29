/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:47 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, PFUbiquityLocation, PFUbiquityKnowledgeVector;

@interface PFUbiquityBaselineHeuristics : NSObject {

	NSString* _localPeerID;
	NSString* _storeName;
	PFUbiquityLocation* _ubiquityRootLocation;
	NSString* _modelVersionHash;
	long long _numRequiredTransactions;
	long long _storeSize;
	long long _logSize;
	D _logToStoreSizeRatio;
	long long _minLogBytes;
	PFUbiquityKnowledgeVector* _currentBaselineKV;
	PFUbiquityKnowledgeVector* _currentKV;

}

@property (nonatomic,readonly) NSString * localPeerID;                                   //@synthesize localPeerID=_localPeerID - In the implementation block
@property (nonatomic,readonly) NSString * storeName;                                     //@synthesize storeName=_storeName - In the implementation block
@property (nonatomic,readonly) PFUbiquityLocation * ubiquityRootLocation;                //@synthesize ubiquityRootLocation=_ubiquityRootLocation - In the implementation block
@property (nonatomic,readonly) NSString * modelVersionHash;                              //@synthesize modelVersionHash=_modelVersionHash - In the implementation block
@property (assign,nonatomic) long long numRequiredTransactions;                          //@synthesize numRequiredTransactions=_numRequiredTransactions - In the implementation block
@property (nonatomic,readonly) long long storeSize;                                      //@synthesize storeSize=_storeSize - In the implementation block
@property (nonatomic,readonly) long long logSize;                                        //@synthesize logSize=_logSize - In the implementation block
@property (assign,nonatomic) D logToStoreSizeRatio;                                      //@synthesize logToStoreSizeRatio=_logToStoreSizeRatio - In the implementation block
@property (assign,nonatomic) long long minLogBytes;                                      //@synthesize minLogBytes=_minLogBytes - In the implementation block
@property (nonatomic,retain) PFUbiquityKnowledgeVector * currentBaselineKV;              //@synthesize currentBaselineKV=_currentBaselineKV - In the implementation block
@property (nonatomic,retain) PFUbiquityKnowledgeVector * currentKV;                      //@synthesize currentKV=_currentKV - In the implementation block
-(void)setCurrentBaselineKV:(id)arg1 ;
-(void)setCurrentKV:(id)arg1 ;
-(id)initWithLocalPeerID:(id)arg1 storeName:(id)arg2 modelVersionHash:(id)arg3 andUbiquityRootLocation:(id)arg4 ;
-(void)setNumRequiredTransactions:(long long)arg1 ;
-(void)setStoreSize:(long long)arg1 ;
-(void)setLogSize:(long long)arg1 ;
-(void)setLogToStoreSizeRatio:(D)arg1 ;
-(void)setMinLogBytes:(long long)arg1 ;
-(long long)bytesForFileAtPath:(id)arg1 ;
-(id)modelVersionHash;
-(bool)haveEnoughTransactionsToRoll;
-(bool)logsConsumeEnoughDiskSpace;
-(void)updateHeuristics;
-(bool)canRollBaseline:(id*)arg1 ;
-(id)localPeerID;
-(id)storeName;
-(id)ubiquityRootLocation;
-(long long)numRequiredTransactions;
-(long long)storeSize;
-(long long)logSize;
-(D)logToStoreSizeRatio;
-(long long)minLogBytes;
-(id)currentBaselineKV;
-(id)currentKV;
-(void)dealloc;
-(id)init;
-(id)copy;
-(id)description;
@end

