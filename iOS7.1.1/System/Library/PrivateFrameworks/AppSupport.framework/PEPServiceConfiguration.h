/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:45 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface PEPServiceConfiguration : NSObject {

	NSString* _cacheFilePath;
	bool _shouldDownloadNetworkConfigFile;
	double _cachedFileLastModifyDate;

}
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(void)_postNotification;
-(bool)registerNetworkDefaultsForAppIDs:(id)arg1 forceUpdate:(bool)arg2 ;
-(void)_updateDefaults:(id)arg1 ;
-(bool)registerNetworkDefaultsForAppID:(id)arg1 ;
@end

