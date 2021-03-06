/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:04:25 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKit/PKPassbookSettingsOptionsDelegate.h>

@class NSDictionary, CNContact, NSString;

@interface PKPaymentOptionsDefaults : NSObject <PKPassbookSettingsOptionsDelegate> {

	NSDictionary* _defaultBillingAddresses;

}

@property (nonatomic,retain) CNContact * defaultShippingAddress; 
@property (nonatomic,retain) NSDictionary * defaultBillingAddresses;               //@synthesize defaultBillingAddresses=_defaultBillingAddresses - In the implementation block
@property (nonatomic,retain) CNContact * defaultContactEmail; 
@property (nonatomic,retain) CNContact * defaultContactPhone; 
@property (nonatomic,retain) CNContact * defaultContactName; 
@property (nonatomic,retain) NSString * defaultPaymentPassIdentifier; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaults;
-(id)defaultBillingAddressForPaymentPass:(id)arg1 ;
-(void)setDefaultBillingAddress:(id)arg1 forPaymentPass:(id)arg2 ;
-(void)_setKeychainData:(id)arg1 forKey:(id)arg2 ;
-(void)_keychainData:(id*)arg1 forKey:(id)arg2 ;
-(id)_contactForKeychainKey:(id)arg1 ;
-(void)_setContact:(id)arg1 propertyID:(int)arg2 forKeychainKey:(id)arg3 ;
-(id)_rawDefaultBillingAddresses;
-(NSDictionary *)defaultBillingAddresses;
-(void)_setContact:(id)arg1 forKeychainKey:(id)arg2 ;
-(CNContact *)defaultShippingAddress;
-(CNContact *)defaultContactEmail;
-(CNContact *)defaultContactPhone;
-(NSString *)defaultPaymentPassIdentifier;
-(void)setDefaultShippingAddress:(CNContact *)arg1 ;
-(void)setDefaultContactEmail:(CNContact *)arg1 ;
-(void)setDefaultContactPhone:(CNContact *)arg1 ;
-(void)setDefaultPaymentPassIdentifier:(NSString *)arg1 ;
-(void)deleteDefaultBillingAddress:(id)arg1 ;
-(CNContact *)defaultContactName;
-(void)setDefaultContactName:(CNContact *)arg1 ;
-(void)setDefaultBillingAddresses:(NSDictionary *)arg1 ;
-(id)init;
@end

