/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:30 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PreferenceBundles/MobileSlideShowSettings.bundle/MobileSlideShowSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSListController.h>
#import <UIKit/UIAlertViewDelegate.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <HomeSharing/RadiosPreferencesDelegate.h>

@class NSMutableArray, ACAccountStore, ACAccount, UIView, RadiosPreferences;

@interface MSSSettingsController : PSListController <UIAlertViewDelegate, UIActionSheetDelegate, RadiosPreferencesDelegate> {

	NSMutableArray* _photoStreamSwitchSpecifiers;
	NSMutableArray* _sharedStreamsSwitchSpecifiers;
	ACAccountStore* _accountStore;
	ACAccount* _photoStreamAccount;
	ACAccount* _sharedStreamsAccount;
	UIView* _turnOffPhotoStreamConfirmationView;
	int _turnOffPhotoStreamCancelButtonIndex;
	int _turnOffPhotoStreamDeleteButtonIndex;
	UIView* _turnOffSharedStreamsConfirmationView;
	int _turnOffSharedStreamsCancelButtonIndex;
	int _turnOffSharedStreamsDeleteButtonIndex;
	ACAccount* _currentlyEnabledPhotoStreamAccount;
	RadiosPreferences* _radiosPreferences;
	unsigned char _originalCellFlag;
	unsigned char _originalWiFiFlag;
	long long _wifiAvailable;
	unsigned _showAirplaneModeAlertWhenViewLoads : 1;
	unsigned _showWifiUnavailableWhenViewLoads : 1;
	unsigned _inAirplaneMode : 1;
	unsigned _observingNetworkChanges : 1;
	unsigned _stoppedObservingNetworkChangesBecauseUIDisappeared : 1;
	unsigned _carrierBundleChanged : 1;
	unsigned _photoStreamEnabled : 1;
	unsigned _sharedStreamsEnabled : 1;
	unsigned _runningAsGuestSettings : 1;

}
+(void)setPhotoStreamsEnabledFromAccountSettings:(id)arg1 ;
+(void)setPhotoStreamsEnabledFromBuddyWorkflow:(id)arg1 ;
+(void)setPhotoSharingEnabledFromAccountSettings:(id)arg1 ;
+(void)setPhotoSharingEnabledFromBuddyWorkflow:(id)arg1 ;
-(void)_accountStoreDidChange:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)viewWillAppear:(bool)arg1 ;
-(void)viewDidAppear:(bool)arg1 ;
-(void)viewWillDisappear:(bool)arg1 ;
-(void)_readPhotoStreamEnabledState;
-(void)_readSharedStreamsEnabledState;
-(bool)_runningAsGuestSettings;
-(void)_wifiReachabilityChanged:(id)arg1 ;
-(void)_clearCachedSpecifiers;
-(void)_updatePhotoStreamConfigurationSpecifiers;
-(void)_updateAvalanchePreferencesVisibility;
-(void)_readPhotoStreamAccountInformation;
-(void)_readSharedStreamsAccountInformation;
-(id)_removeNonPhotoStreamSettingFromSpecifier:(id)arg1 ;
-(void)_updatePhotoStreamSwitchEnabled;
-(void)_updateSharedStreamsSwitchEnabled;
-(void)_setPhotoStreamEnabled:(bool)arg1 ;
-(void)_takeUserToSetupiCloudAccount;
-(void)_confirmTurningOffPhotoStream;
-(void)_setSharedStreamsEnabled:(bool)arg1 ;
-(void)_confirmTurningOffSharedStreams;
-(id)_photoStreamAccount;
-(id)_sharedStreamsAccount;
-(void)_savePhotoStreamEnabled:(bool)arg1 ;
-(void)_saveSharedStreamsEnabled:(bool)arg1 ;
-(bool)_photoStreamAssetsWillBeDeletedIfTurnedOff;
-(bool)_sharedStreamsAssetsWillBeDeletedIfTurnedOff;
-(void)_turnOffPhotoStreamSwitch;
-(void)_showSpinnerForDuration:(double)arg1 withText:(id)arg2 ;
-(void)_turnOffSharedStreamsSwitch;
-(void)_turnOffPhotoStreamConfirmationClickedButtonAtIndex:(long long)arg1 ;
-(void)_turnOffSharedStreamsConfirmationClickedButtonAtIndex:(long long)arg1 ;
-(void)_addAllSharedStreamsSpecifiers;
-(void)_removeAllSharedStreamsSpecifiers;
-(void)_addAllPhotoStreamSpecifiers;
-(void)_removeAllPhotoStreamSpecifiers;
-(id)_photoStreamSwitchSpecifiers;
-(id)_sharedStreamsSwitchSpecifiers;
-(id)_avalancheSpecifiers;
-(void)_updateAvalancheFooterText;
-(bool)_avalancheUploadOnlyPicks;
-(id)selectedPlaylist:(id)arg1 ;
-(void)setSelectedPlaylist:(id)arg1 specifier:(id)arg2 ;
-(id)photoStreamEnabled:(id)arg1 ;
-(id)sharedStreamsEnabled:(id)arg1 ;
-(void)photoStreamsSwitchWasToggled:(id)arg1 specifier:(id)arg2 ;
-(void)sharedStreamsSwitchWasToggled:(id)arg1 specifier:(id)arg2 ;
-(id)useShuffle:(id)arg1 ;
-(void)setShuffle:(id)arg1 specifier:(id)arg2 ;
-(id)cameraWantsGridLines:(id)arg1 ;
-(void)setCameraWantsGridLines:(id)arg1 specifier:(id)arg2 ;
-(bool)_photoStreamEnabled;
-(id)_personID;
-(id)uploadBurstPhotos:(id)arg1 ;
-(void)uploadBurstPhotosSwitchWasToggled:(id)arg1 specifier:(id)arg2 ;
-(void)airplaneModeChanged;
-(id)specifiers;
-(void)reloadSpecifiers;
-(void)pushController:(id)arg1 ;
@end

