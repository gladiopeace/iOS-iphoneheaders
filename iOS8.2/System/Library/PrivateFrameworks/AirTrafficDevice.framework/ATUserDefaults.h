/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:25 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSDictionary;

@interface ATUserDefaults : NSObject {

	NSMutableDictionary* _defaults;

}

@property (assign,nonatomic) char hasCompletedDataMigration; 
@property (nonatomic,retain) NSDictionary * diskUsageInfo; 
+(void)synchronize;
+(id)readOnlyDefaults;
-(id)init;
-(void)setHasCompletedDataMigration:(char)arg1 ;
-(char)hasCompletedDataMigration;
-(void)_updateDefaults;
-(id)allHosts;
-(NSDictionary *)diskUsageInfo;
-(void)updateHostInfo:(id)arg1 disabledAssetTypes:(id)arg2 ;
-(void)updateLastSyncWithHostLibrary:(id)arg1 ;
-(void)removeHost:(id)arg1 ;
-(id)hostInfoForIdentifier:(id)arg1 ;
-(void)setDiskUsageInfo:(NSDictionary *)arg1 ;
@end

