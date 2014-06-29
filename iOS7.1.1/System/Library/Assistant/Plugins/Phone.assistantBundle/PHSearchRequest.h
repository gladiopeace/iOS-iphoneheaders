/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:06 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Assistant/Plugins/Phone.assistantBundle/Phone
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Phone/Phone-Structs.h>
#import <SAObjects/SAPhoneSearch.h>
#import <AddressBook/AFServiceCommand.h>

@interface PHSearchRequest : SAPhoneSearch <AFServiceCommand>
-(void*)addressBookRecordForRawAddress:(id)arg1 ;
-(id)labelForRawAddress:(id)arg1 ;
-(id)copyCTCalls;
-(id)contactForPhoneNumber:(CFPhoneNumberRef)arg1 ;
-(id)voicemails;
-(id)typedDataForRawAddress:(id)arg1 ;
-(id)contactForAddress:(id)arg1 ;
-(id)_perform;
-(void)performWithCompletion:(/*^block*/ id)arg1 ;
-(id)abValuesFromPersonInURL:(id)arg1 forProperty:(int)arg2 ;
-(id)personFromRawAddress:(id)arg1 ;
-(id)_validate;
-(id)initWithDictionary:(id)arg1 ;
@end

