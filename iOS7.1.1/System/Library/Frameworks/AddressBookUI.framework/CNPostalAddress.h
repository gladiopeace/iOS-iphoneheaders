/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:43 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSMutableCopying.h>

@class NSMutableDictionary, NSString;

@interface CNPostalAddress : NSObject <NSCopying, NSMutableCopying> {

	NSMutableDictionary* _addressDictionary;

}

@property (readonly) NSString * street; 
@property (readonly) NSString * subLocality; 
@property (readonly) NSString * city; 
@property (readonly) NSString * subAdministrativeArea; 
@property (readonly) NSString * state; 
@property (readonly) NSString * postalCode; 
@property (readonly) NSString * country; 
@property (readonly) NSString * ISOCountryCode; 
@property (retain) NSMutableDictionary * addressDictionary; 
@property (nonatomic,readonly) NSString * formattedAddress; 
@property (nonatomic,readonly) NSString * formattedAddressSinleLine; 
+(id)postalAddress;
+(id)localizedAddressFormatDictionaryForCountryCode:(id)arg1 ;
+(id)defaultCountryCode;
+(id)addressFormatsDictionary;
+(id)localizedCountryNameForCountryCode:(id)arg1 ;
+(id)postalAddressWithDictionary:(id)arg1 ;
-(id)city;
-(id)keyboardSettingsForAddressPart:(id)arg1 ;
-(id)ISOCountryCode;
-(id)formattedAddress;
-(id)formattedAddressSinleLine;
-(id)postalCode;
-(bool)_isAddressFieldEqual:(id)arg1 toField:(id)arg2 ;
-(void)setAddressDictionary:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(bool)isEqual:(id)arg1 ;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)state;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)mutableCopyWithZone:(NSZone)arg1 ;
-(id)addressDictionary;
-(id)subLocality;
-(id)subAdministrativeArea;
-(id)country;
-(id)street;
@end

