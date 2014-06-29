/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:32:47 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/gamed
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <gamed/gamed-Structs.h>
@class NSObject, GKDispatchGroup, NSURL, NSError, GKFairPlaySAPSession, NSSet, NSDictionary, NSDate;

@interface GKStoreBag : NSObject {

	NSObject<OS_dispatch_queue>* _syncQueue;
	GKDispatchGroup* _fetchGroup;
	NSURL* _url;
	NSError* _error;
	GKFairPlaySAPSession* _SAPSession;
	NSSet* _APNSRequired;
	NSSet* _signatureRequired;
	NSDictionary* _internalBag;
	NSDate* _expiration;

}

@property (nonatomic,readonly) NSURL * url;                                         //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) NSError * error;                                       //@synthesize error=_error - In the implementation block
@property (setter=APSession,retain) GKFairPlaySAPSession * SAPSession;              //@synthesize SAPSession=_SAPSession - In the implementation block
@property (retain) NSSet * APNSRequired;                                            //@synthesize APNSRequired=_APNSRequired - In the implementation block
@property (retain) NSSet * signatureRequired;                                       //@synthesize signatureRequired=_signatureRequired - In the implementation block
@property (nonatomic,retain) NSDictionary * internalBag;                            //@synthesize internalBag=_internalBag - In the implementation block
@property (nonatomic,retain) NSDate * expiration;                                   //@synthesize expiration=_expiration - In the implementation block
+(id)storeBagForEnvironment:(int)arg1 ;
+(id)storeBagURLForEnvironment:(int)arg1 ;
+(id)storeBagForURL:(id)arg1 ;
-(void)performAsync:(/*^block*/ id)arg1 ;
-(void)getValuesForKeys:(id)arg1 queue:(id)arg2 handler:(/*^block*/ id)arg3 ;
-(void)writeDataForBagKey:(id)arg1 postData:(id)arg2 client:(id)arg3 completion:(/*^block*/ id)arg4 ;
-(void)readDataForBagKey:(id)arg1 postData:(id)arg2 client:(id)arg3 completion:(/*^block*/ id)arg4 ;
-(id)omnitureQueryParametersForContext:(id)arg1 ;
-(BOOL)_isLastProtocolVersionUsedValid;
-(id)_storeBagForData:(id)arg1 error:(id*)arg2 ;
-(void)_setupSAPSessionWithRetries:(id)arg1 ;
-(void)_setupAPNSRequired:(id)arg1 ;
-(void)_setupSignatureRequired:(id)arg1 ;
-(id)internalBag;
-(void)setInternalBag:(id)arg1 ;
-(BOOL)_isValid;
-(void)_fetchFromServerWithHandler:(/*^block*/ id)arg1 ;
-(BOOL)_isValidAndNotExpired;
-(void)_fetchFromCacheWithHandler:(/*^block*/ id)arg1 ;
-(void)updateURLPatternCache;
-(void)_fetchBagWithHandler:(/*^block*/ id)arg1 ;
-(void)setAPNSRequired:(id)arg1 ;
-(void)setSignatureRequired:(id)arg1 ;
-(void)getBagWithHandler:(/*^block*/ id)arg1 ;
-(BOOL)_shouldUseHTTPPipelining;
-(SecTrustRef)_createTrustForCertificates:(id)arg1 host:(id)arg2 ;
-(BOOL)_checkData:(id)arg1 againstSignature:(id)arg2 withTrust:(SecTrustRef)arg3 ;
-(void)_setupSAPSession:(id)arg1 group:(id)arg2 retries:(int)arg3 ;
-(void)readDataForURL:(id)arg1 postData:(id)arg2 client:(id)arg3 includeUDID:(BOOL)arg4 includeAPNS:(BOOL)arg5 completion:(/*^block*/ id)arg6 ;
-(id)expiration;
-(id)_bagKeyValidationDict;
-(id)_requestWithURL:(id)arg1 playerID:(id)arg2 authToken:(id)arg3 pushToken:(id)arg4 client:(id)arg5 postData:(id)arg6 includeUDID:(BOOL)arg7 includeAPNS:(BOOL)arg8 sapSession:(id)arg9 ;
-(void)_sendAsynchronousRequest:(id)arg1 completion:(/*^block*/ id)arg2 ;
-(void)getURLForKey:(id)arg1 queue:(id)arg2 handler:(/*^block*/ id)arg3 ;
-(BOOL)isLoadValidForBagKey:(id)arg1 date:(id)arg2 ;
-(id)_networkSynchonizationQueue;
-(void)_loadDataForBagKey:(id)arg1 postData:(id)arg2 client:(id)arg3 completion:(/*^block*/ id)arg4 ;
-(BOOL)_isFetching;
-(BOOL)shouldUseHTTPPipelining;
-(void)invalidateBagKeys:(id)arg1 ;
-(id)APNSRequired;
-(id)signatureRequired;
-(BOOL)_isExpired;
-(void)setError:(id)arg1 ;
-(id)SAPSession;
-(void)setSAPSession:(id)arg1 ;
-(void)performSync:(/*^block*/ id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)valueForUndefinedKey:(id)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(id)url;
-(void)setExpiration:(id)arg1 ;
-(id)error;
@end

