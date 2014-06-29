/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:28 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/DataClassMigrators/MobileSafari.migrator/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DataMigration/DataClassMigrator.h>

@interface MobileSafariDataMigrator : DataClassMigrator
-(void)_removeObsoleteDirectories;
-(void)_migrateAutofillContactInfo;
-(void)_clearReadingListFetcherPendingChanges;
-(void)_removeAutocompleteOffBypassSettings;
-(bool)_symlinkCookieStorage;
-(bool)_migrateSearchSettings;
-(void)_migrateLibraryFilesIntoContainer;
-(void)_removeBookmarksPanelStatePreferences;
-(bool)_migrateAutofillPasswordAndPreferences;
-(bool)_migrateAuthenticationCredentials;
-(void)_updateCloudTabsEnabledDefaultFromAccounts;
-(id)dataClassName;
-(bool)performMigration;
@end

