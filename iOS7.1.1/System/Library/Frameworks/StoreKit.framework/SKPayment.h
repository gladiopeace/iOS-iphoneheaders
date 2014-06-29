/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:46 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKit/StoreKit-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSMutableCopying.h>

@class NSString, NSData, NSDictionary;

@interface SKPayment : NSObject <NSCopying, NSMutableCopying> {

	id _internal;

}

@property (nonatomic,readonly) NSString * productIdentifier; 
@property (nonatomic,readonly) NSData * requestData; 
@property (nonatomic,readonly) long long quantity; 
@property (nonatomic,readonly) NSString * applicationUsername; 
@property (nonatomic,readonly) NSString * partnerIdentifier; 
@property (nonatomic,readonly) NSString * partnerTransactionIdentifier; 
@property (nonatomic,readonly) NSDictionary * requestParameters; 
+(id)paymentWithProduct:(id)arg1 ;
+(id)paymentWithProductIdentifier:(id)arg1 ;
-(id)productIdentifier;
-(id)applicationUsername;
-(long long)quantity;
-(id)requestData;
-(id)partnerTransactionIdentifier;
-(void)dealloc;
-(id)init;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)mutableCopyWithZone:(NSZone)arg1 ;
-(id)partnerIdentifier;
-(id)requestParameters;
@end

