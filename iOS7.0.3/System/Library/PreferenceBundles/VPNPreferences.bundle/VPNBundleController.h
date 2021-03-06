/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:03 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PreferenceBundles/VPNPreferences.bundle/VPNPreferences
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <VPNPreferences/VPNPreferences-Structs.h>
#import <Preferences/PSBundleController.h>
#import <VPNPreferences/VPNPasswordDelegate.h>
#import <HomeSharing/RadiosPreferencesDelegate.h>
#import <UIKit/UIApplicationDelegate.h>

@class UIWindow, PSSpecifier, PSConfirmationSpecifier, VPNConnectionStore, NSNumber;

@interface VPNBundleController : PSBundleController <VPNPasswordDelegate, RadiosPreferencesDelegate, UIApplicationDelegate> {

	PSSpecifier* _passwordSetupSpecifier;
	PSSpecifier* _vpnSpecifier;
	PSConfirmationSpecifier* _toggleVPNSpecifier;
	PSSpecifier* _linkVPNSpecifier;
	VPNConnectionStore* _store;
	BOOL _isToggleSwitchInRootMenu;
	BOOL _isRootMenuItem;
	BOOL _networkSpinnerVisible;
	NSNumber* _serviceCount;

}

@property (nonatomic,retain) UIWindow * window; 
-(void)unload;
-(void)dealloc;
-(void)freeSC;
-(void)updateNetworkSpinnerVisibility:(int)arg1 ;
-(int)getStatusAndUpdateNetworkSpinnerVisibility:(SCNetworkConnectionRef)arg1 ;
-(void)_vpnStatusChanged:(id)arg1 ;
-(void)_showPasswordDialog;
-(void)_setVPNActive:(BOOL)arg1 ;
-(BOOL)_vpnNetworkingIsDisabled;
-(void)setVPNActive:(id)arg1 forSpecifier:(id)arg2 ;
-(id)vpnActiveForSpecifier:(id)arg1 ;
-(void)confirmAirplaneModeDisable:(id)arg1 ;
-(void)cancelAirplaneModeDisable:(id)arg1 ;
-(void)_vpnConfigurationChanged:(id)arg1 ;
-(void)applicationResigned:(id)arg1 ;
-(void)initSC;
-(BOOL)_lastConnectionAttemptFailedForServiceId:(id)arg1 ;
-(void)_updateVPNSwitchStatus;
-(void)activateVPN:(id)arg1 ;
-(void)passwordController:(id)arg1 enteredPassword:(id)arg2 ;
-(void)passwordControllerCancelled:(id)arg1 ;
-(id)statusForSpecifier:(id)arg1 ;
-(void)airplaneModeChanged;
-(void)applicationResumed:(id)arg1 ;
-(id)initWithParentListController:(id)arg1 ;
-(id)specifiersWithSpecifier:(id)arg1 ;
@end

