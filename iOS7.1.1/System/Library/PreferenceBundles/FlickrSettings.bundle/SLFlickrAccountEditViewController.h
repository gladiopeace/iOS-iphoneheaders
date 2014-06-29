/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:26 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PreferenceBundles/FlickrSettings.bundle/FlickrSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AccountsUI/ACUIViewController.h>

@class ACAccount;

@interface SLFlickrAccountEditViewController : ACUIViewController {

	ACAccount* _account;
	bool _isPasswordDirty;

}
-(id)_passwordWithSpecifier:(id)arg1 ;
-(void)_setPassword:(id)arg1 withSpecifier:(id)arg2 ;
-(void)_textFieldValueDidChange:(id)arg1 ;
-(void)_deleteButtonTapped:(id)arg1 ;
-(id)_usernameWithSpecifier:(id)arg1 ;
-(void)_handlePasswordChangeWithResult:(bool)arg1 error:(id)arg2 ;
-(void)_updatePasswordWithValueFromTextField;
-(void)_showAlertForError:(id)arg1 ;
-(void)setSpecifier:(id)arg1 ;
-(void)setPassword:(id)arg1 ;
-(void)_doneButtonTapped:(id)arg1 ;
-(void)cancelButtonTapped:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(bool)arg1 ;
-(void).cxx_destruct;
-(void)_updateDoneButton;
-(id)specifiers;
@end

