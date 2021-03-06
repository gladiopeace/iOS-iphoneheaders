/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:12 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Setup/SetupChoiceController.h>
#import <UIKit/UIAlertViewDelegate.h>

@class PSKeychainSyncManager, UIAlertView, NSTimer, SetupChoice, NSString;

@interface BuddyAppleIDKeychainSyncPage : SetupChoiceController <UIAlertViewDelegate> {

	PSKeychainSyncManager* _manager;
	UIAlertView* _disableConfirmationAlert;
	UIAlertView* _approvalSentAlert;
	char _brokenMode;
	NSTimer* _initializationTimeoutTimer;
	char _circleExists;
	char _isBackupEnabled;
	char _restoreFlow;
	SetupChoice* _enableChoice;
	SetupChoice* _disableChoice;
	SetupChoice* _otherDeviceChoice;
	SetupChoice* _securityCodeChoice;
	/*^block*/id _extendedInitializationCompletion;

}

@property (assign,nonatomic) char restoreFlow;                               //@synthesize restoreFlow=_restoreFlow - In the implementation block
@property (nonatomic,retain) SetupChoice * enableChoice;                     //@synthesize enableChoice=_enableChoice - In the implementation block
@property (nonatomic,retain) SetupChoice * disableChoice;                    //@synthesize disableChoice=_disableChoice - In the implementation block
@property (nonatomic,retain) SetupChoice * otherDeviceChoice;                //@synthesize otherDeviceChoice=_otherDeviceChoice - In the implementation block
@property (nonatomic,retain) SetupChoice * securityCodeChoice;               //@synthesize securityCodeChoice=_securityCodeChoice - In the implementation block
@property (nonatomic,copy) id extendedInitializationCompletion;              //@synthesize extendedInitializationCompletion=_extendedInitializationCompletion - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)controllerNeedsToRun;
-(void)choice:(id)arg1 resultWasValid:(char)arg2 ;
-(char)wantsNextButton;
-(id)footerDetailText;
-(void)performExtendedInitializationWithCompletion:(/*^block*/id)arg1 ;
-(char)controllerAllowsNavigatingBack;
-(id)footerIconName;
-(char)footerIconHasRoundedCorners;
-(id)learnMoreButtonText;
-(void)learnMoreButtonTapped:(id)arg1 ;
-(void)setEnableChoice:(SetupChoice *)arg1 ;
-(void)setDisableChoice:(SetupChoice *)arg1 ;
-(SetupChoice *)enableChoice;
-(SetupChoice *)disableChoice;
-(void)_setBrokenMode:(char)arg1 ;
-(id)extendedInitializationCompletion;
-(void)setExtendedInitializationCompletion:(id)arg1 ;
-(void)initializationTimeoutTimerFired:(id)arg1 ;
-(void)loadSecureBackupState;
-(void)loadOptions;
-(void)setSecurityCodeChoice:(SetupChoice *)arg1 ;
-(void)setOtherDeviceChoice:(SetupChoice *)arg1 ;
-(void)_controllerDone;
-(void)_startEnableFlow;
-(SetupChoice *)otherDeviceChoice;
-(void)_showPeerApprovalAcknowledgement;
-(SetupChoice *)securityCodeChoice;
-(char)restoreFlow;
-(void)setRestoreFlow:(char)arg1 ;
-(void)reloadOptions;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(int)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(int)arg2 ;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(id)titleText;
@end

