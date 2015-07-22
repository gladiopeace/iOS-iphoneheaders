/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:34:03 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AccessibilitySettings/AccessibilityBaseListController.h>

@interface VoiceOverPronunciationController : AccessibilityBaseListController
-(void)_edit;
-(void)updatePronunciationList;
-(void)_donePressed;
-(id)_replacementString:(id)arg1 ;
-(int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(char)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)viewDidLoad;
-(void)_updateEditButton;
-(id)specifiers;
-(void)reloadSpecifiers;
-(id)controllerForSpecifier:(id)arg1 ;
@end
