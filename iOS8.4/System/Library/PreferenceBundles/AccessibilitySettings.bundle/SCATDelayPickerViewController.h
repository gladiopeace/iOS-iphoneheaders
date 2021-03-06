/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:19:46 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@interface SCATDelayPickerViewController : PSListController
-(double)stepAmount;
-(id)delay:(id)arg1 ;
-(double)maximumTime;
-(id)delayEnabled:(id)arg1 ;
-(double)delayFromPreferences;
-(BOOL)userCanDisableDelay;
-(id)localizedFooterText;
-(void)setDelayEnabled:(id)arg1 specifier:(id)arg2 ;
-(BOOL)delayEnabledFromPreferences;
-(id)_delayPickerSpecifier;
-(void)setDelayFromUser:(double)arg1 ;
-(void)setDelayEnabledFromUser:(BOOL)arg1 ;
-(void)setDelay:(id)arg1 specifier:(id)arg2 ;
-(double)minimumTime;
-(id)localizedTitle;
-(id)specifiers;
@end

