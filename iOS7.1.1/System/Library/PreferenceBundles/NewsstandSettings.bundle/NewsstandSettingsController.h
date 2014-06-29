/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:31 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PreferenceBundles/NewsstandSettings.bundle/NewsstandSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class NSDictionary;

@interface NewsstandSettingsController : PSListController {

	NSDictionary* _enabledPushTypes;
	NSDictionary* _supportedPushTypes;

}
-(id)_enabledPushTypes;
-(void)_setContentDownloadsEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)_supportedPushTypes;
-(id)_contentDownloadEnabled:(id)arg1 ;
-(id)_contentDownloadSpecifierForBundleID:(id)arg1 enabledPushTypes:(id)arg2 ;
-(id)_rebuildSpecifiers;
-(void)_getPushTypes;
-(void)_resetPushTypes;
-(void)dealloc;
-(id)init;
-(id)specifiers;
-(void)_reloadUI;
@end

