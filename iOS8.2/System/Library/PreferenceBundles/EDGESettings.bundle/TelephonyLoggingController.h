/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:18 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PreferenceBundles/EDGESettings.bundle/EDGESettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class NSString;

@interface TelephonyLoggingController : PSListController {

	NSString* _comments;

}
-(void)dealloc;
-(id)init;
-(void)configureRecommendedLogging:(id)arg1 ;
-(id)getComments:(id)arg1 ;
-(void)saveComments:(id)arg1 specifier:(id)arg2 ;
-(void)saveTelephonyLog:(id)arg1 ;
-(id)specifiers;
@end

