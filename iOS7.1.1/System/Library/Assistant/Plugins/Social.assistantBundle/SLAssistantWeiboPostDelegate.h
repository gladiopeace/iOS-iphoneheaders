/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:08 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Assistant/Plugins/Social.assistantBundle/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Social/SLAssistantPostDelegate.h>

@class NSString, NSBundle;

@interface SLAssistantWeiboPostDelegate : NSObject <SLAssistantPostDelegate>

@property (readonly) NSString * accountTypeIdentifier; 
@property (retain) NSString * lastAccountIdentifier; 
@property (readonly) NSBundle * locationPermissionBundle; 
-(void)setLastAccountIdentifier:(id)arg1 ;
-(id)lastAccountIdentifier;
-(id)extractErrorDetailsFromResponseData:(id)arg1 urlResponse:(id)arg2 ;
-(id)locationPermissionBundle;
-(bool)responseDataIndicatesDuplicatePost:(id)arg1 urlResponse:(id)arg2 ;
-(void)playPostSound;
-(id)requestForPostWithStatus:(id)arg1 latitude:(id)arg2 longitude:(id)arg3 ;
-(void)verifyCredentialsForAccount:(id)arg1 completion:(/*^block*/ id)arg2 ;
-(void)verifyGeotagSettingsForAccount:(id)arg1 defaultSetting:(bool)arg2 completion:(/*^block*/ id)arg3 ;
-(id)accountTypeIdentifier;
@end

