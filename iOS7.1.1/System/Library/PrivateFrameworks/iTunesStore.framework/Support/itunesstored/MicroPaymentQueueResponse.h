/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 5:50:38 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSData, NSLock, NSMutableArray, NSNumber, NSArray;

@interface MicroPaymentQueueResponse : NSObject {

	NSData* _appReceipt;
	NSLock* _lock;
	NSMutableArray* _payments;
	NSMutableArray* _rangesToLoad;
	int _requestType;
	int _serverPaymentCount;
	BOOL _shouldTriggerQueueCheck;
	NSNumber* _userIdentifier;

}

@property (readonly) int requestType; 
@property (readonly) NSData * appReceipt; 
@property (copy) NSArray * payments; 
@property (readonly) NSArray * rangesToLoad; 
@property (assign) int serverPaymentCount; 
@property (assign) BOOL shouldTriggerQueueCheck; 
@property (copy) NSNumber * userIdentifier; 
-(id)rangesToLoad;
-(id)payments;
-(id)appReceipt;
-(BOOL)shouldTriggerQueueCheck;
-(BOOL)_ntsLoadFromPropertyList:(id)arg1 ;
-(id)_dsidFromDictionary:(id)arg1 ;
-(id)_copyPaymentsFromDictionary:(id)arg1 ;
-(id)_copyAppReceiptFromDictionary:(id)arg1 ;
-(id)initWithRequestType:(int)arg1 ;
-(void)appendResponse:(id)arg1 ;
-(int)serverPaymentCount;
-(void)setServerPaymentCount:(int)arg1 ;
-(void)setPayments:(id)arg1 ;
-(void)setRangesToLoad:(id)arg1 ;
-(void)setShouldTriggerQueueCheck:(BOOL)arg1 ;
-(id)userIdentifier;
-(void)dealloc;
-(int)requestType;
-(BOOL)loadFromPropertyList:(id)arg1 ;
-(void)setUserIdentifier:(id)arg1 ;
@end

