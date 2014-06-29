/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:40 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AccountsUI/AccountsUI-Structs.h>
#import <Preferences/PSListController.h>

@protocol ACUIIdentityPickerViewControllerDelegate;
@class NSString, NSArray;

@interface ACUIIdentityPickerViewController : PSListController {

	<ACUIIdentityPickerViewControllerDelegate>* _delegate;
	NSString* _property;
	NSArray* _identities;
	NSArray* _emailAddresses;
	bool _allowEditing;

}

@property (nonatomic,readonly) NSString * property;              //@synthesize property=_property - In the implementation block
-(id)property;
-(void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewDidLoad;
-(void).cxx_destruct;
-(void)_finishedFetchingIdentities:(id)arg1 ;
-(SecIdentityRef)_selectedIdentity;
-(bool)_isPropertyEnabled;
-(void)_setValue:(id)arg1 forSwitchSpecifier:(id)arg2 ;
-(id)_valueForSwitchSpecifier:(id)arg1 ;
-(id)_specifiersForIdentities:(id)arg1 ;
-(SecIdentityRef)_identityToAutoselectWithEnabled:(bool)arg1 ;
-(void)_setPropertyEnabled:(bool)arg1 identity:(SecIdentityRef)arg2 ;
-(void)_updateCell:(id)arg1 selected:(bool)arg2 ;
-(bool)_allowIdentitySelection;
-(id)_identitySpecifiers;
-(id)specifiers;
@end

