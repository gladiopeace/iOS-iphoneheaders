/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 5:50:38 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>
#import <iTunesStore/ISStoreURLOperationDelegate.h>

@class NSString, StoreKitClientIdentity;

@interface LoadCompletedMicroPaymentsOperation : ISOperation <ISStoreURLOperationDelegate> {

	NSString* _applicationUsername;
	StoreKitClientIdentity* _clientIdentity;
	BOOL _partialFailure;
	/*^block*/ id _paymentBatchBlock;

}

@property (copy) NSString * applicationUsername; 
@property (copy) StoreKitClientIdentity * clientIdentity; 
@property (copy) id paymentBatchBlock; 
@property (getter=isPartialFailure,readonly) BOOL partialFailure; 
-(id)clientIdentity;
-(void)setClientIdentity:(id)arg1 ;
-(void)_runForIdentity:(id)arg1 ;
-(id)_newFetchOperationForIdentity:(id)arg1 startID:(id)arg2 endID:(id)arg3 ;
-(id)_copyResponseForIdentity:(id)arg1 startID:(id)arg2 endID:(id)arg3 returningError:(id*)arg4 ;
-(BOOL)isPartialFailure;
-(/*^block*/ id)paymentBatchBlock;
-(void)setPaymentBatchBlock:(/*^block*/ id)arg1 ;
-(id)applicationUsername;
-(void)setApplicationUsername:(id)arg1 ;
-(void)dealloc;
-(void)run;
-(BOOL)operation:(id)arg1 processData:(id)arg2 error:(id*)arg3 ;
-(void)operation:(id)arg1 willSendRequest:(id)arg2 ;
@end

