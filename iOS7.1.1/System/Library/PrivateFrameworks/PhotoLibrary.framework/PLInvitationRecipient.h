/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:27 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class MFComposeRecipient, NSString, NSMutableArray, NSArray;

@interface PLInvitationRecipient : NSObject {

	MFComposeRecipient* _mfRecipient;
	NSString* _firstName;
	NSString* _lastName;
	NSMutableArray* _allEmails;
	NSMutableArray* _allPhones;
	NSString* _selectedPhoneString;
	NSString* _selectedEmailString;
	NSString* _invalidAddressString;

}

@property (nonatomic,readonly) NSString * firstName; 
@property (nonatomic,readonly) NSString * lastName; 
@property (nonatomic,readonly) NSArray * allEmails;                          //@synthesize allEmails=_allEmails - In the implementation block
@property (nonatomic,readonly) NSArray * allPhones;                          //@synthesize allPhones=_allPhones - In the implementation block
@property (nonatomic,readonly) NSString * selectedPhoneString;               //@synthesize selectedPhoneString=_selectedPhoneString - In the implementation block
@property (nonatomic,readonly) NSString * selectedEmailString;               //@synthesize selectedEmailString=_selectedEmailString - In the implementation block
@property (nonatomic,readonly) NSString * invalidAddressString;              //@synthesize invalidAddressString=_invalidAddressString - In the implementation block
+(id)validPhoneNumberFromString:(id)arg1 ;
+(id)validEmailAddressFromComposeRecipient:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)displayName;
-(id)firstName;
-(id)lastName;
-(id)invalidAddressString;
-(id)allEmails;
-(id)allPhones;
-(id)initWithRecipient:(id)arg1 ;
-(id)selectedPhoneString;
-(id)selectedEmailString;
@end

