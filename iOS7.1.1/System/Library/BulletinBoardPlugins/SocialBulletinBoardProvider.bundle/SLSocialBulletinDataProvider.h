/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:20 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/BulletinBoardPlugins/SocialBulletinBoardProvider.bundle/SocialBulletinBoardProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BulletinBoard/BBDataProvider.h>

@class NSMutableSet, NSSet, NSBundle;

@interface SLSocialBulletinDataProvider : NSObject <BBDataProvider> {

	NSMutableSet* _bulletins;
	unsigned long long _bulletinCounter;
	NSSet* _uploadServices;
	NSBundle* _socialBundle;

}
-(void)_removeNotifications;
-(id)_uploadServices;
-(id)_supportedNotifications;
-(id)_uploadServiceForNotificationName:(id)arg1 ;
-(id)_notificationMessageMap;
-(void)_addBulletinWithTitle:(id)arg1 message:(id)arg2 forUploadService:(id)arg3 ;
-(id)_socialBundle;
-(void)_configureSectionSubtypeParameters:(id)arg1 forUploadService:(id)arg2 ;
-(void)handleNotification:(id)arg1 ;
-(void)_createBulletinsForUploadInfoDicts:(id)arg1 uploadService:(id)arg2 ;
-(void)_registerForNotifications;
-(void)dealloc;
-(id)init;
-(void).cxx_destruct;
-(id)sectionIdentifier;
-(id)sectionParameters;
-(id)sectionDisplayName;
-(void)dataProviderDidLoad;
-(id)defaultSectionInfo;
-(id)sectionIconData;
-(id)sortDescriptors;
@end

