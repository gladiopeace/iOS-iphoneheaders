/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:19 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/AppleAccountSettings.bundle/AppleAccountSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class PSSpecifier, NSMutableArray, NSString;

@interface AAKeychainSyncViewController : PSListController {

	PSSpecifier* _switchCellSpecifier;
	NSMutableArray* _approvalSpecifiers;
	int _keychainSyncStatus;
	int _keychainSyncNotificationToken;
	bool _isTogglingKeychainSync;
	NSString* _pendingApprovalText;
	id _restrictionChangeNotificationObserver;

}
-(int)_keychainSyncStatus;
-(id)_specifierForKeychainSwitchCell;
-(id)_specifierForApproveButton;
-(void)_reloadParentSpecifier;
-(void)_showResetKeychainDialog:(id)arg1 ;
-(void)_updateKeychainSyncStatusAndReloadSpecifiers:(bool)arg1 ;
-(void)_addApprovalPendingSpecifierIfNecessary;
-(id)_specifierForPendingApprovalTextWithSecureBackupEnabled:(bool)arg1 ;
-(id)_specifierForResetKeychainButton;
-(id)_pendingApprovalTextWithSecureBackupEnabled:(bool)arg1 ;
-(void)_showApproveWithSecurityCodeDialog:(id)arg1 ;
-(void)_setKeychainSyncEnabled:(id)arg1 withSpecifier:(id)arg2 ;
-(id)_isKeychainSyncEnabledForSpecifier:(id)arg1 ;
-(void)_handleKeychainSyncEnablingCompletionWithNewState:(int)arg1 error:(id)arg2 ;
-(void)_handleKeychainSyncDisablingCompletionWithError:(id)arg1 ;
-(void)_keychainSyncStatusDidChange;
-(void)_registerForKeychainSyncStatusChangeNotification;
-(void)_stopListeningForKeychainSyncStatusChangeNotification;
-(void)dealloc;
-(void)viewDidAppear:(bool)arg1 ;
-(void)viewDidDisappear:(bool)arg1 ;
-(void).cxx_destruct;
-(id)specifiers;
@end

