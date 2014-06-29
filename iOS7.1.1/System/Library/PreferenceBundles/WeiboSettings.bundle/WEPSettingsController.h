/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:35 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PreferenceBundles/WeiboSettings.bundle/WeiboSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AccountsUI/ACUIViewController.h>
#import <FacebookSettings/ACUIAppInstallerDelegate.h>
#import <WeiboSettings/WEPContactUpdaterDelegate.h>

@class ACAccountType, ACAccount, NSArray, NSMutableDictionary, PSSpecifier, WEPContactUpdater, ACUIAppInstaller, WEPUpdateContactsFooterView, SLNetworkReachabilityWarning, UIAlertView;

@interface WEPSettingsController : ACUIViewController <ACUIAppInstallerDelegate, WEPContactUpdaterDelegate> {

	ACAccountType* _weiboAccountType;
	ACAccount* _signInAccount;
	NSArray* _accounts;
	NSMutableDictionary* _authorizedAppList;
	NSArray* _accountStateDependentSpecifiers;
	NSArray* _authorizedAppListSpecifiers;
	PSSpecifier* _signInButtonSpecifier;
	PSSpecifier* _updateContactsGroupSpecifier;
	PSSpecifier* _updateContactsSpecifier;
	WEPContactUpdater* _contactUpdater;
	ACUIAppInstaller* _weiboAppInstaller;
	WEPUpdateContactsFooterView* _updateContactsFooterView;
	SLNetworkReachabilityWarning* _networkWarning;
	UIAlertView* _appInstallAlert;

}
-(id)_passwordWithSpecifier:(id)arg1 ;
-(void)_setPassword:(id)arg1 withSpecifier:(id)arg2 ;
-(void)_createNewAccountButtonTapped:(id)arg1 ;
-(void)_textFieldValueDidChange:(id)arg1 ;
-(void)_setUsername:(id)arg1 withSpecifier:(id)arg2 ;
-(void)_updateInstallCell:(id)arg1 ;
-(id)_learnMoreLinkGroupSpecifier;
-(id)_loginSpecifiers;
-(id)_authorizedAppsListSpecifiers;
-(id)_networkWarning;
-(void)_setAppAllowedAccess:(id)arg1 withSpecifier:(id)arg2 ;
-(id)_isAppAllowedAccountAccessWithSpecifier:(id)arg1 ;
-(void)_learnMoreLinkButtonTapped:(id)arg1 ;
-(id)_usernameWithSpecifier:(id)arg1 ;
-(void)_handleAccountAuthenticationWithResult:(bool)arg1 error:(id)arg2 ;
-(void)_showAppDownloadAlert;
-(void)_cancelUpdateContactsTapped:(id)arg1 ;
-(void)_installButtonTapped:(id)arg1 ;
-(void)_showActivationAlert;
-(void)_updateContactsButtonTapped:(id)arg1 ;
-(id)_weiboAppInstaller;
-(void)weiboContactUpdater:(id)arg1 didFinishUpdatingContacts:(long long)arg2 ;
-(id)_weiboAccountType;
-(void)weiboContactUpdater:(id)arg1 didUpdateProgress:(float)arg2 ;
-(id)_weiboApp;
-(bool)_isSinaWeiboParentalRestrictionEnabled;
-(void)_signInButtonTapped:(id)arg1 ;
-(id)_specifierForAccount:(id)arg1 ;
-(id)_noAccountsSpecifiers;
-(id)_accountListSpecifiers;
-(id)_installWeiboCellSpecifier;
-(id)_createNewAccountButtonSpecifier;
-(void)_reloadAuthorizedAppList;
-(void)_accountCreated:(id)arg1 ;
-(void)_accountStoreDidChange:(id)arg1 ;
-(void)setPassword:(id)arg1 ;
-(void)dealloc;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)navigationItem;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(bool)arg1 ;
-(void)_willEnterForeground:(id)arg1 ;
-(void).cxx_destruct;
-(void)appInstallerWillStart:(id)arg1 ;
-(void)_stopObservingAccountStoreDidChangeNotification;
-(void)_beginObservingAccountStoreDidChangeNotification;
-(void)_updateSignInButton;
-(void)setUsername:(id)arg1 ;
-(id)specifiers;
-(void)returnPressedAtEnd;
@end

