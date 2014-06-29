/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:22 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PreferenceBundles/AirPortSettings.bundle/AirPortSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSListController.h>
#import <AirPortSettings/AirPortAssistantControllerDelegate.h>

@class WiFiManager, NSMutableArray, PSSpecifier, NSMutableDictionary, NSString, NSTimer, APPasswordAlert, APAlert, APPersonalHotspotAlert, UIAlertView, UILabel, UIView, NSMutableSet, NSArray, NSDictionary, UINavigationController, WiFiNetwork;

@interface APNetworksController : PSListController <AirPortAssistantControllerDelegate> {

	WiFiManager* _manager;
	NSMutableArray* _group1;
	NSMutableArray* _alwaysVisibleGroup;
	NSMutableArray* _poweredOnGroup;
	NSMutableArray* _askToJoinGroup;
	NSMutableArray* _knownNetworksGroup;
	NSMutableArray* _buddyGroup;
	PSSpecifier* _networksGroup;
	PSSpecifier* _powerSpecifier;
	PSSpecifier* _diagnosticsSpecifier;
	NSMutableArray* _networks;
	NSMutableDictionary* _networksDict;
	PSSpecifier* _unconfigGroup;
	NSMutableArray* _unconfig;
	NSMutableDictionary* _config;
	NSMutableDictionary* _unconfigSpecifiers;
	PSSpecifier* _adhocGroup;
	NSMutableArray* _adhocs;
	NSMutableDictionary* _adhocSpecifiers;
	NSMutableDictionary* _securityDict;
	NSString* _enterprisePrompt;
	NSString* _autojoinOn;
	NSString* _autojoinOff;
	NSString* _locationWarning;
	PSSpecifier* _knownNetworks;
	PSSpecifier* _currentNetworkSpecifier;
	NSMutableArray* _tetheringGroup;
	bool _tetheringGroupVisible;
	bool _power;
	NSTimer* _scanTimer;
	bool _scanning;
	bool _disclosing;
	bool _joining;
	bool _joiningEnterprise;
	bool _showingCert;
	bool _showKnownNetworks;
	NSString* _lastNetworkName;
	PSSpecifier* _joiningSpecifier;
	APPasswordAlert* _passwordAlert;
	APAlert* _alert;
	APPersonalHotspotAlert* _hotspotAlert;
	UIAlertView* _adhocJoinAlert;
	UILabel* _buddyHeaderLabel;
	UIView* _buddyFooterView;
	UIView* _buddyIPadContainerView;
	PSSpecifier* _otherSpecifier;
	NSMutableSet* _currentScanList;
	int _role;
	NSArray* _certificateChain;
	NSDictionary* _scanDictForTrustRequest;
	bool _formSheetVisible;
	bool _willResign;
	UINavigationController* _assistantNavController;
	bool _buddyGroupVisible;
	bool _buddyButtonCellular;
	bool _buddySimpleMode;
	bool _visible;
	WiFiNetwork* _otherUINetworkToJoin;
	bool _joinRequestedFromSettings;
	bool _joinedFromSettings;

}
-(void)dealloc;
-(id)init;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)viewDidLayoutSubviews;
-(bool)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2 ;
-(void)viewWillAppear:(bool)arg1 ;
-(id)contentScrollView;
-(void)viewDidAppear:(bool)arg1 ;
-(void)viewWillDisappear:(bool)arg1 ;
-(void)viewDidDisappear:(bool)arg1 ;
-(bool)isVisible;
-(bool)alertViewShouldEnableFirstOtherButton:(id)arg1 ;
-(void)networkChanged:(id)arg1 ;
-(void)requestJoinFromSettings:(id)arg1 ;
-(void)_updateCurrentNetwork:(id)arg1 ;
-(void)updateCurrentNetworkUI;
-(void)scanForNetworks:(id)arg1 ;
-(void)_enableTable:(id)arg1 ;
-(void)_insertSpecifiersForAdhocNetworks:(id)arg1 animated:(bool)arg2 ;
-(void)_insertSpecifiersForNewNetworks:(id)arg1 animated:(bool)arg2 ;
-(id)_specifierForNetwork:(id)arg1 ;
-(void)_deleteSpecifiersForLostAdhocNetworks:(id)arg1 originalSpecifiers:(id)arg2 animated:(bool)arg3 ;
-(void)_deleteSpecifiersForLostNetworks:(id)arg1 originalSpecifiers:(id)arg2 animated:(bool)arg3 ;
-(void)dismissCertificateSheet;
-(void)_processJoinFromSettingsSuccess:(id)arg1 ;
-(void)setJoiningEnterpriseNetwork:(bool)arg1 ;
-(void)hotspotDisabledNowJoin;
-(void)passwordSheetDismissed:(id)arg1 password:(id)arg2 forNetwork:(id)arg3 ;
-(void)_joinFromOtherUI;
-(bool)_joinNetwork:(id)arg1 isOtherNetwork:(bool)arg2 ;
-(unsigned long long)indexOfNetwork:(id)arg1 fromArray:(id)arg2 ;
-(int)networksOffset;
-(id)_unconfigSpecifierForNetwork:(id)arg1 ;
-(void)_updateUnconfigNetworksLabel:(bool)arg1 ;
-(void)setTimeForNextScan:(double)arg1 ;
-(void)_deleteSpecifiersForLostUnconfigNetworks:(id)arg1 originalSpecifiers:(id)arg2 animated:(bool)arg3 ;
-(void)_insertSpecifiersForUnconfigNetworks:(id)arg1 animated:(bool)arg2 ;
-(void)setNetworks:(id)arg1 animated:(bool)arg2 scanComplete:(bool)arg3 ;
-(void)_attemptJoinToNetwork:(id)arg1 ;
-(void)_showCertificateSheet:(bool)arg1 ;
-(void)notifyAirPortSettingsVisible:(bool)arg1 ;
-(void)_scrollToCurrentNetwork;
-(void)stopScanning;
-(void)updateKnownNetworksItemAnimated:(bool)arg1 ;
-(void)_viewMovedToForeground;
-(void)_handleEnterpriseRequest;
-(void)scanComplete:(id)arg1 ;
-(void)partialScanComplete:(id)arg1 ;
-(void)scanFailed:(id)arg1 ;
-(void)networkSettingsChanged:(id)arg1 ;
-(void)powerChanged:(id)arg1 ;
-(void)joinFailed:(id)arg1 ;
-(void)joinSuccess:(id)arg1 ;
-(void)hs20NetworkUpdate:(id)arg1 ;
-(void)chooseOtherTapped:(id)arg1 ;
-(bool)checkPersonalHotspotPrompt:(id)arg1 isHidden:(bool)arg2 ;
-(void)dumpSpecifiers;
-(void)buddyButtonPressed:(id)arg1 ;
-(void)enterpriseStatusChanged:(id)arg1 ;
-(void)configureBaseStation:(id)arg1 ;
-(void)rejectCertificate;
-(void)acceptCertificate:(id)arg1 ;
-(id)specifierWithLabel:(id)arg1 ;
-(id)airportEnabled:(id)arg1 ;
-(void)enableAirport:(id)arg1 ;
-(void)setAirportEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)autojoin:(id)arg1 ;
-(void)setAutojoin:(id)arg1 specifier:(id)arg2 ;
-(bool)joinOtherNetwork:(id)arg1 ;
-(void)controllerWasPushed;
-(void)setBuddyGroupVisible:(bool)arg1 ;
-(void)setBuddyButtonIsCellular:(bool)arg1 ;
-(void)setBuddySimpleMode:(bool)arg1 ;
-(void)handleURL:(id)arg1 ;
-(void)airPortAssistantComplete:(id)arg1 result:(int)arg2 context:(id)arg3 animated:(bool)arg4 ;
-(void)cancelButtonClicked;
-(id)specifiers;
-(void)formSheetViewWillDisappear;
-(void)willUnlock;
-(void)didWake;
-(void)willResignActive;
-(void)willBecomeActive;
-(void)formSheetViewDidDisappear;
@end

