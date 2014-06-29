/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:29 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/DataClassMigrators/SocialDataMigrator.migrator/SocialDataMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DataMigration/DataClassMigrator.h>

@interface SLDataMigrator : DataClassMigrator
-(id)_socialDirectory;
-(id)_oldTwitterFolderPath;
-(id)_tencentWeiboDatabaseFileName;
-(id)_oldTwitterImagesFolderPath;
-(id)_tencentWeiboDatabasePath;
-(id)_twitterDatabaseFileName;
-(id)_newTwitterImagesFolderPath;
-(void)_migrateTencentWeiboData;
-(id)_oldWeiboFolderPath;
-(void)_migrateWeiboData;
-(bool)_needsFileProtectionUpgradeForProfileImagesAtPath:(id)arg1 service:(id)arg2 ;
-(void)_createSocialDataDirectoryIfNecessary;
-(void)_removeAncillarySocialDatabaseFilesWithPrefix:(id)arg1 service:(id)arg2 ;
-(id)_oldWeiboDatabasePath;
-(id)_oldWeiboImagesFolderPath;
-(id)_tencentWeiboImagesFolderPath;
-(id)_weiboDatabaseFileName;
-(void)_migrateTwitterData;
-(id)_newWeiboImagesFolderPath;
-(id)_newWeiboDatabasePath;
-(id)_newTwitterDatabasePath;
-(id)_oldTwitterDatabasePath;
-(id)dataClassName;
-(bool)performMigration;
-(float)estimatedDuration;
-(float)migrationProgress;
@end

