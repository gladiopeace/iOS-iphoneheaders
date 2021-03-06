/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:26 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PreferenceBundles/FacebookSettings.bundle/FacebookSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FacebookSettings/SLFacebookRegistrationInfoPrompt.h>

@class NSString, PSSpecifier;

@interface SLFacebookRegistrationPasswordPrompt : SLFacebookRegistrationInfoPrompt {

	NSString* _password;
	NSString* _verify;
	PSSpecifier* _signUpButton;

}
-(id)_passwordWithSpecifier:(id)arg1 ;
-(void)_setPassword:(id)arg1 withSpecifier:(id)arg2 ;
-(void)_setVerify:(id)arg1 withSpecifier:(id)arg2 ;
-(void)updateRegistrationInfo;
-(id)_verifyWithSpecifier:(id)arg1 ;
-(void)_signUpTapped:(id)arg1 ;
-(bool)isReadyToValidate;
-(bool)validate;
-(id)initWithRegistrationInfo:(id)arg1 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(void)textFieldValueDidChange:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(bool)arg1 ;
-(void).cxx_destruct;
-(id)specifiers;
@end

