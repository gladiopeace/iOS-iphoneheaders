/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:21 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/MobileCalSettings.bundle/MobileCalSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class PSSpecifier;

@interface CSTimeZoneController : PSListController {

	PSSpecifier* _calendarTimeZoneSpecifier;
	PSSpecifier* _timeZoneSupportSpecifier;
	bool _timeZoneSupportEnabled;

}
-(void).cxx_destruct;
-(id)timeZoneSupportEnabled:(id)arg1 ;
-(void)setCalendarTimeZone:(id)arg1 specifier:(id)arg2 ;
-(bool)_timeZoneSupportEnabled;
-(void)setTimeZoneSupportEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)calendarTimeZone:(id)arg1 ;
-(id)specifiers;
@end

