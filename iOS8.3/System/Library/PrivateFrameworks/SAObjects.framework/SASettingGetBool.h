/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:25:48 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SASettingGetValue.h>

@interface SASettingGetBool : SASettingGetValue
+(id)getBool;
+(id)getBoolWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)_ad_aceSettingsResponseCommandRepresentationForSiriResponse:(id)arg1 ;
-(int)_ad_settingType;
-(void)_ad_getSettingsRequestForHandler:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(char)requiresResponse;
@end

