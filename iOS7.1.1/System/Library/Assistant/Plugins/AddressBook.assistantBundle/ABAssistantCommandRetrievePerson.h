/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:03 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Assistant/Plugins/AddressBook.assistantBundle/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SADomainObjectRetrieve.h>
#import <AddressBook/ABAssistantCommand.h>

@interface ABAssistantCommandRetrievePerson : SADomainObjectRetrieve <ABAssistantCommand> {

	void* _addressBook;

}

@property (assign,nonatomic) void* addressBook; 
-(id)_retrieve;
-(void)performWithCompletion:(/*^block*/ id)arg1 ;
-(id)_validate;
-(void)dealloc;
-(void*)addressBook;
-(void)setAddressBook:(void*)arg1 ;
@end
