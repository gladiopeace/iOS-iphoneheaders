/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:18 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@interface SCATSwitchesController : PSListController
-(id)_switchSpecifiers;
-(id)actionStringForSpecifier:(id)arg1 ;
-(bool)_shouldAllowEditing;
-(void)_sortSwitches:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)setEditing:(bool)arg1 animated:(bool)arg2 ;
-(void)viewWillAppear:(bool)arg1 ;
-(id)specifiers;
@end

