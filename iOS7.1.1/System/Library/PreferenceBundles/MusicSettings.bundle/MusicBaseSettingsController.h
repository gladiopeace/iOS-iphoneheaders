/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:30 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PreferenceBundles/MusicSettings.bundle/MusicSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSListController.h>
#import <StoreServices/SSURLConnectionRequestDelegate.h>
#import <UIKit/UIActionSheetDelegate.h>

@class SSURLConnectionRequest, UIAlertView, NSString;

@interface MusicBaseSettingsController : PSListController <SSURLConnectionRequestDelegate, UIActionSheetDelegate> {

	SSURLConnectionRequest* _request;
	UIAlertView* _signedInAlertView;

}

@property (nonatomic,readonly) NSString * stringTable; 
@property (nonatomic,retain) NSString * appleID; 
@property (nonatomic,retain) NSString * password; 
-(id)password;
-(void)setPassword:(id)arg1 ;
-(id)appleID;
-(void)setAppleID:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)suspend;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)alertViewCancel:(id)arg1 ;
-(void)viewWillDisappear:(bool)arg1 ;
-(id)bundle;
-(void).cxx_destruct;
-(id)musicSpecifiers;
-(id)homeSharingSpecifiers;
-(id)stringTable;
-(void)_verifyHomeSharingAccount;
-(void)_ditchUnsupportedSpecifiersFromArray:(id)arg1 ;
-(id)_resetMediaLibrarySpecifier;
-(void)_fixupVolumeLimitSpecifier:(id)arg1 ;
-(void)_fixupEQSpecifier:(id)arg1 ;
-(void)_fixupSoundCheck:(id)arg1 ;
-(id)_homeSharingGroupSpecifier;
-(id)_homeSharingButtonSpecifier;
-(id)_homeSharingAppleIDSpecifier;
-(id)_homeSharingPasswordSpecifier;
-(void)_resetMediaLibraryAction:(id)arg1 ;
-(void)_updateHomeSharingSpecifiers;
-(void)_resetMediaLibrary;
-(void)settingsChangedExternally;
-(id)videoSpecifiers;
-(void)_signOut;
-(void)_buttonAction:(id)arg1 ;
@end

