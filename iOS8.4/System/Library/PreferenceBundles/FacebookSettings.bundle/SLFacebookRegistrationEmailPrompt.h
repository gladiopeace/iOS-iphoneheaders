/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:20:02 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PreferenceBundles/FacebookSettings.bundle/FacebookSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FacebookSettings/FacebookSettings-Structs.h>
#import <FacebookSettings/SLFacebookRegistrationInfoPrompt.h>

@class NSString, UILabel;

@interface SLFacebookRegistrationEmailPrompt : SLFacebookRegistrationInfoPrompt {

	NSString* _email;
	NSString* _phone;
	UILabel* _orLabel;

}
-(void)_setEmail:(id)arg1 withSpecifier:(id)arg2 ;
-(id)_emailWithSpecifier:(id)arg1 ;
-(void)_setPhone:(id)arg1 withSpecifier:(id)arg2 ;
-(id)_phoneWithSpecifier:(id)arg1 ;
-(BOOL)isReadyToValidate;
-(void)updateRegistrationInfo;
-(id)initWithRegistrationInfo:(id)arg1 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(BOOL)validate;
-(void)viewWillLayoutSubviews;
-(double)tableView:(id)arg1 maxTitleWidthForFooterInSection:(long long)arg2 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(void)viewDidLoad;
-(id)specifiers;
@end
