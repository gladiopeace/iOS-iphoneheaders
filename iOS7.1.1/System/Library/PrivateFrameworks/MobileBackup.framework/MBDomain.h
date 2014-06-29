/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:50 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSSet, NSDictionary;

@interface MBDomain : NSObject {

	bool _shouldDigest;
	NSString* _rootPath;
	NSString* _name;
	NSSet* _relativePathsToBackupAndRestore;
	NSSet* _relativePathsNotToBackup;
	NSSet* _relativePathsNotToBackupToDrive;
	NSSet* _relativePathsNotToBackupToService;
	NSSet* _relativePathsNotToCheckIfModifiedDuringBackup;
	NSSet* _relativePathsToRestoreOnly;
	NSSet* _relativePathsToRestoreOnlyFromService;
	NSSet* _relativePathsToRemoveOnRestore;
	NSSet* _relativePathsOfSystemFilesToAlwaysRestore;
	NSSet* _relativePathsOfSystemFilesToAlwaysRemoveOnRestore;
	NSSet* _relativePathsNotToRestore;
	NSSet* _relativePathsNotToMigrate;
	NSSet* _relativePathsNotToRestoreToIPods;
	NSSet* _relativePathsNotToBackupAndRestoreToAppleTVs;
	NSSet* _relativePathsToBackgroundRestore;
	NSSet* _relativePathsNotToRemoveIfNotRestored;
	NSDictionary* _relativePathAggregateDictionaryGroups;
	NSDictionary* _relativePathDomainRedirects;

}

@property (nonatomic,readonly) NSString * name;                                                      //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * rootPath;                                                  //@synthesize rootPath=_rootPath - In the implementation block
@property (nonatomic,readonly) NSString * bundleID; 
@property (nonatomic,readonly) NSSet * relativePathsToBackup; 
@property (nonatomic,retain) NSSet * relativePathsToBackupAndRestore;                                //@synthesize relativePathsToBackupAndRestore=_relativePathsToBackupAndRestore - In the implementation block
@property (nonatomic,retain) NSSet * relativePathsNotToBackup;                                       //@synthesize relativePathsNotToBackup=_relativePathsNotToBackup - In the implementation block
@property (nonatomic,retain) NSSet * relativePathsNotToBackupToDrive;                                //@synthesize relativePathsNotToBackupToDrive=_relativePathsNotToBackupToDrive - In the implementation block
@property (nonatomic,retain) NSSet * relativePathsNotToBackupToService;                              //@synthesize relativePathsNotToBackupToService=_relativePathsNotToBackupToService - In the implementation block
@property (nonatomic,retain) NSSet * relativePathsNotToCheckIfModifiedDuringBackup;                  //@synthesize relativePathsNotToCheckIfModifiedDuringBackup=_relativePathsNotToCheckIfModifiedDuringBackup - In the implementation block
@property (nonatomic,readonly) NSSet * relativePathsToRestore; 
@property (nonatomic,retain) NSSet * relativePathsToRestoreOnly;                                     //@synthesize relativePathsToRestoreOnly=_relativePathsToRestoreOnly - In the implementation block
@property (nonatomic,retain) NSSet * relativePathsToRestoreOnlyFromService;                          //@synthesize relativePathsToRestoreOnlyFromService=_relativePathsToRestoreOnlyFromService - In the implementation block
@property (nonatomic,retain) NSSet * relativePathsToRemoveOnRestore;                                 //@synthesize relativePathsToRemoveOnRestore=_relativePathsToRemoveOnRestore - In the implementation block
@property (nonatomic,retain) NSSet * relativePathsOfSystemFilesToAlwaysRestore;                      //@synthesize relativePathsOfSystemFilesToAlwaysRestore=_relativePathsOfSystemFilesToAlwaysRestore - In the implementation block
@property (nonatomic,retain) NSSet * relativePathsOfSystemFilesToAlwaysRemoveOnRestore;              //@synthesize relativePathsOfSystemFilesToAlwaysRemoveOnRestore=_relativePathsOfSystemFilesToAlwaysRemoveOnRestore - In the implementation block
@property (nonatomic,retain) NSSet * relativePathsNotToRestore;                                      //@synthesize relativePathsNotToRestore=_relativePathsNotToRestore - In the implementation block
@property (nonatomic,retain) NSSet * relativePathsNotToMigrate;                                      //@synthesize relativePathsNotToMigrate=_relativePathsNotToMigrate - In the implementation block
@property (nonatomic,retain) NSSet * relativePathsNotToRestoreToIPods;                               //@synthesize relativePathsNotToRestoreToIPods=_relativePathsNotToRestoreToIPods - In the implementation block
@property (nonatomic,retain) NSSet * relativePathsNotToBackupAndRestoreToAppleTVs;                   //@synthesize relativePathsNotToBackupAndRestoreToAppleTVs=_relativePathsNotToBackupAndRestoreToAppleTVs - In the implementation block
@property (nonatomic,retain) NSSet * relativePathsToBackgroundRestore;                               //@synthesize relativePathsToBackgroundRestore=_relativePathsToBackgroundRestore - In the implementation block
@property (nonatomic,retain) NSSet * relativePathsNotToRemoveIfNotRestored;                          //@synthesize relativePathsNotToRemoveIfNotRestored=_relativePathsNotToRemoveIfNotRestored - In the implementation block
@property (nonatomic,retain) NSDictionary * relativePathAggregateDictionaryGroups;                   //@synthesize relativePathAggregateDictionaryGroups=_relativePathAggregateDictionaryGroups - In the implementation block
@property (nonatomic,retain) NSDictionary * relativePathDomainRedirects;                             //@synthesize relativePathDomainRedirects=_relativePathDomainRedirects - In the implementation block
@property (assign,nonatomic) bool shouldDigest;                                                      //@synthesize shouldDigest=_shouldDigest - In the implementation block
@property (getter=isAppDomain,nonatomic,readonly) bool appDomain; 
@property (getter=isPlaceholderAppDomain,nonatomic,readonly) bool placeholderAppDomain; 
@property (getter=isUninstalledAppDomain,nonatomic,readonly) bool installedAppDomain; 
+(double)systemDomainsVersion;
+(double)systemDomainsMinSupportedVersion;
+(double)systemDomainsMaxSupportedVersion;
+(id)nameWithAppBundleID:(id)arg1 ;
+(id)_stringByRemovingCommentsFromValue:(id)arg1 forKey:(id)arg2 ;
+(double)_doubleFromStringValueForKey:(id)arg1 plist:(id)arg2 ;
+(void)_loadSystemDomains;
+(id)domainWithName:(id)arg1 rootPath:(id)arg2 ;
+(bool)_boolFromValue:(id)arg1 forKey:(id)arg2 ;
+(id)_setOfStringsFromValue:(id)arg1 forKey:(id)arg2 ;
+(id)_relativePathsByAddingSQLiteJournals:(id)arg1 ;
+(id)_dictionaryOfStringsToStringFromValue:(id)arg1 forKey:(id)arg2 ;
+(bool)isAppName:(id)arg1 ;
+(bool)isAppPlaceholderName:(id)arg1 ;
+(id)bundleIDWithName:(id)arg1 ;
+(id)systemDomains;
+(id)systemDomainsByName;
+(id)appDomainWithBundleID:(id)arg1 rootPath:(id)arg2 ;
+(id)appPlaceholderDomainWithBundleID:(id)arg1 rootPath:(id)arg2 ;
+(id)uninstalledAppDomainWithBundleID:(id)arg1 ;
-(id)bundleID;
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)name;
-(long long)compare:(id)arg1 ;
-(bool)isAppDomain;
-(id)initWithName:(id)arg1 plist:(id)arg2 ;
-(id)initWithName:(id)arg1 rootPath:(id)arg2 ;
-(bool)isEqualToDomain:(id)arg1 ;
-(id)relativePathsToBackup;
-(id)relativePathsToRestore;
-(bool)isPlaceholderAppDomain;
-(bool)isUninstalledAppDomain;
-(id)rootPath;
-(id)relativePathsToBackupAndRestore;
-(void)setRelativePathsToBackupAndRestore:(id)arg1 ;
-(id)relativePathsNotToBackup;
-(void)setRelativePathsNotToBackup:(id)arg1 ;
-(id)relativePathsNotToBackupToDrive;
-(void)setRelativePathsNotToBackupToDrive:(id)arg1 ;
-(id)relativePathsNotToBackupToService;
-(void)setRelativePathsNotToBackupToService:(id)arg1 ;
-(id)relativePathsNotToCheckIfModifiedDuringBackup;
-(void)setRelativePathsNotToCheckIfModifiedDuringBackup:(id)arg1 ;
-(id)relativePathsToRestoreOnly;
-(void)setRelativePathsToRestoreOnly:(id)arg1 ;
-(id)relativePathsToRestoreOnlyFromService;
-(void)setRelativePathsToRestoreOnlyFromService:(id)arg1 ;
-(id)relativePathsToRemoveOnRestore;
-(void)setRelativePathsToRemoveOnRestore:(id)arg1 ;
-(id)relativePathsOfSystemFilesToAlwaysRestore;
-(void)setRelativePathsOfSystemFilesToAlwaysRestore:(id)arg1 ;
-(id)relativePathsOfSystemFilesToAlwaysRemoveOnRestore;
-(void)setRelativePathsOfSystemFilesToAlwaysRemoveOnRestore:(id)arg1 ;
-(id)relativePathsNotToRestore;
-(void)setRelativePathsNotToRestore:(id)arg1 ;
-(id)relativePathsNotToMigrate;
-(void)setRelativePathsNotToMigrate:(id)arg1 ;
-(id)relativePathsNotToRestoreToIPods;
-(void)setRelativePathsNotToRestoreToIPods:(id)arg1 ;
-(id)relativePathsNotToBackupAndRestoreToAppleTVs;
-(void)setRelativePathsNotToBackupAndRestoreToAppleTVs:(id)arg1 ;
-(id)relativePathsToBackgroundRestore;
-(void)setRelativePathsToBackgroundRestore:(id)arg1 ;
-(id)relativePathsNotToRemoveIfNotRestored;
-(void)setRelativePathsNotToRemoveIfNotRestored:(id)arg1 ;
-(id)relativePathAggregateDictionaryGroups;
-(void)setRelativePathAggregateDictionaryGroups:(id)arg1 ;
-(id)relativePathDomainRedirects;
-(void)setRelativePathDomainRedirects:(id)arg1 ;
-(bool)shouldDigest;
-(void)setShouldDigest:(bool)arg1 ;
@end

