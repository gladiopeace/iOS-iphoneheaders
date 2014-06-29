/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:34 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PreferenceBundles/VPNPreferences.bundle/VPNPreferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSListController.h>
#import <UIKit/UIAlertViewDelegate.h>

@class PSSpecifier, NSArray, NSString, UIAlertView;

@interface VPNController : PSListController <UIAlertViewDelegate> {

	PSSpecifier* _statusSpecifier;
	PSSpecifier* _switchSpecifier;
	PSSpecifier* _vpnListSeparatorGroupSpecifier;
	PSSpecifier* _otherVPNSpecifier;
	NSArray* _cancelSpecifiers;
	NSString* _activeVPNServiceID;
	PSSpecifier* _activeVPNSpecifier;
	UIAlertView* _alert;
	int _vpnServiceCount;

}
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)loadView;
-(void)viewDidAppear:(bool)arg1 ;
-(void)alertView:(id)arg1 willDismissWithButtonIndex:(long long)arg2 ;
-(id)_connection;
-(void)_vpnStatusChanged:(id)arg1 ;
-(void)_setVPNActive:(bool)arg1 ;
-(void)setVPNActive:(id)arg1 forSpecifier:(id)arg2 ;
-(id)vpnActiveForSpecifier:(id)arg1 ;
-(void)confirmAirplaneModeDisable:(id)arg1 ;
-(void)cancelAirplaneModeDisable:(id)arg1 ;
-(void)_vpnConfigurationChanged:(id)arg1 ;
-(void)activateVPN:(id)arg1 ;
-(void)_setCancelButtonVisible:(bool)arg1 ;
-(void)_updateVPNSwitchStatus:(bool)arg1 ;
-(id)statusForConnection:(id)arg1 ;
-(void)_timerUpdated:(id)arg1 ;
-(void)cancelConnection:(id)arg1 ;
-(void)_setActiveVPNServiceID:(id)arg1 ;
-(void)changeActiveVPN:(id)arg1 ;
-(id)serverForConnection:(id)arg1 ;
-(id)usernameForConnection:(id)arg1 ;
-(id)typeForConnection:(id)arg1 ;
-(id)localIPForSpecifier:(id)arg1 ;
-(id)remoteIPForSpecifier:(id)arg1 ;
-(id)timeConnectedForSpecifier:(id)arg1 ;
-(void)updateVPNConfigurationsList;
-(id)specifiers;
-(void)formSheetViewWillDisappear;
-(void)willBecomeActive;
-(void)showStatus:(id)arg1 ;
@end

