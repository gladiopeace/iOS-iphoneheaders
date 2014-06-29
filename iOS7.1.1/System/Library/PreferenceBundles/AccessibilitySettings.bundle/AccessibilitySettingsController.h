/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:16 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSListController.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>

@class UISlider, UIActionSheet, UIAlertView;

@interface AccessibilitySettingsController : PSListController <UIActionSheetDelegate, UIAlertViewDelegate> {

	bool _didConfirmDisabling;
	long long _ignoreNextAXNotificationCount;
	UISlider* _leftRightSlider;
	UIActionSheet* _restartActionSheet;
	UIAlertView* _restartAlertView;

}
-(id)quickSpeakEnabled:(id)arg1 ;
-(void)_handleCancelForBoldText;
-(void)_handleSpeakCorrectionsEnabled:(bool)arg1 ;
-(id)tripleClickStatus:(id)arg1 ;
-(id)largerTextEnabled:(id)arg1 ;
-(id)AXInspectorEnabled:(id)arg1 ;
-(id)accessibilityLargeFontStatus:(id)arg1 ;
-(id)largeFontsStatus:(id)arg1 ;
-(id)guidedAccessEnabled:(id)arg1 ;
-(id)zoomTouchEnabled:(id)arg1 ;
-(void)_handleRestartForBoldText;
-(void)_handleMonoAudioEnabled:(bool)arg1 ;
-(void)handleReloadSpecifiers;
-(id)voiceOverTouchEnabled:(id)arg1 ;
-(id)scatEnabled:(id)arg1 ;
-(id)homeClickSpeed:(id)arg1 ;
-(id)handEnabled:(id)arg1 ;
-(void)disableOption:(id)arg1 ;
-(bool)confirmDisablingWithString:(id)arg1 forKey:(id)arg2 ;
-(void)_handleInvertColorsEnabled:(bool)arg1 ;
-(void)_showTextLegibilityMenuToRestart;
-(void)_enableAXInspector;
-(id)accessibilityPreferenceForSpecifier:(id)arg1 ;
-(void)accessibilitySetPreference:(id)arg1 specifier:(id)arg2 ;
-(void)setAXInspectorEnabled:(id)arg1 specifier:(id)arg2 ;
-(void)_orientationChange:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)actionSheetCancel:(id)arg1 ;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)alertViewCancel:(id)arg1 ;
-(void)viewWillAppear:(bool)arg1 ;
-(id)specifierForKey:(id)arg1 ;
-(id)specifiers;
@end

