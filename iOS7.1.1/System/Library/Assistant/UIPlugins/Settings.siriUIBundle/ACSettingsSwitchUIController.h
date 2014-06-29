/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:16 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Assistant/UIPlugins/Settings.siriUIBundle/Settings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SiriUI/SiriUISnippetViewController.h>
#import <Settings/ACSettingsUpdateDelegate.h>

@class SASettingBoolSnippet, ACSettingsSwitchSetting, ACSettingsSwitchView;

@interface ACSettingsSwitchUIController : SiriUISnippetViewController <ACSettingsUpdateDelegate> {

	SASettingBoolSnippet* _snippet;
	ACSettingsSwitchSetting* _setting;
	ACSettingsSwitchView* _settingView;
	bool _waitingForSettingInitialState;
	bool _shouldSetSettingDueToFirstAppearance;
	bool _shouldSetSettingDueToTap;
	bool _shouldSetSettingDueToExternalChange;

}
+(id)snippetViewController;
-(void)_setSettingIfNeeded:(bool)arg1 ;
-(void)settingChangedExternally:(id)arg1 ;
-(void)_bluetoothAvailabilityChanged:(id)arg1 ;
-(void)_setSettingFromSwitchTapIfNeeded;
-(void)_switchTapped:(id)arg1 ;
-(bool)_waitingOnSettingState;
-(void)_setSettingFromExternalChangeIfNeeded;
-(void)_bluetoothSettingChangedExternally:(id)arg1 ;
-(double)desiredHeightForWidth:(double)arg1 ;
-(void)dealloc;
-(id)init;
-(void)loadView;
-(void)viewWillAppear:(bool)arg1 ;
-(void)viewDidAppear:(bool)arg1 ;
-(void).cxx_destruct;
-(void)setSnippet:(id)arg1 ;
-(bool)removedAfterDialogProgresses;
@end

