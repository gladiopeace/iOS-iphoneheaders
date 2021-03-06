/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:10 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <PassKitCore/NSCopying.h>
#import <PassKitCore/NSSecureCoding.h>

@class NSString, NSDecimalNumber;

@interface PKPaymentSummaryItem : NSObject <NSCopying, NSSecureCoding> {

	NSString* _label;
	NSDecimalNumber* _amount;

}

@property (nonatomic,copy) NSString * label;                      //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * amount;              //@synthesize amount=_amount - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)summaryItemWithLabel:(id)arg1 amount:(id)arg2 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(void)setAmount:(NSDecimalNumber *)arg1 ;
-(NSDecimalNumber *)amount;
-(BOOL)isEqualToPaymentSummaryItem:(id)arg1 ;
@end

