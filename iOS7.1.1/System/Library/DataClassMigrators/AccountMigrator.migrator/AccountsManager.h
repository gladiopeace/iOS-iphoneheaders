/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:26 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/DataClassMigrators/AccountMigrator.migrator/AccountMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableArray, NSArray;

@interface AccountsManager : NSObject {

	NSMutableDictionary* _topLevelAccountsByID;
	NSMutableArray* _orderedTopLevelAccounts;
	NSMutableDictionary* _childAccountsByID;
	NSMutableDictionary* _childAccountIDToParentAccountID;
	NSMutableDictionary* _originalAccountsByID;
	unsigned long long _dataVersion;
	NSArray* _runtimeFixers;

}
+(void)shouldMigrateOldMailAccounts:(bool*)arg1 oldDAAccounts:(bool*)arg2 newAccountSettings:(bool*)arg3 ;
+(id)createAndLockMigrationLock;
+(void)removeNewAccountSettingsToMigrateOldAccountInformation;
+(void)killDataAccessIfNecessary;
+(void)releaseMigrationLock:(id)arg1 ;
+(bool)_oldMailAccountsInformationFound;
+(bool)_oldDAAccountsInformationFound;
+(bool)accountSettingsNeedsToBeMigrated;
+(void)waitForMigrationToFinish;
+(id)fullPathToAccountSettingsPlist;
+(void)_setShouldSkipNotifications:(bool)arg1 ;
+(unsigned long long)currentVersion;
+(id)_notifierClassNamesForAccountType:(id)arg1 dataclass:(id)arg2 ;
+(void)accountWillChange:(id)arg1 forDataclass:(id)arg2 ;
+(void)accountDidChange:(id)arg1 forDataclass:(id)arg2 ;
+(void)_migrateAccountsIfNeeded;
+(id)displayNameForGroupOfAccountType:(id)arg1 forBeginningOfSentence:(bool)arg2 ;
-(void)setDataVersion:(unsigned long long)arg1 ;
-(id)initInsideOfMigration;
-(id)initWithAccounsInfoArray:(id)arg1 ;
-(unsigned long long)dataVersion;
-(void)dealloc;
-(unsigned long long)count;
-(id)init;
-(id)syncableAccountWithSyncIdentifier:(id)arg1 ;
-(void)replaceAccountsWithTypes:(id)arg1 withAccounts:(id)arg2 ;
-(id)accountsWithTypes:(id)arg1 ;
-(id)accountsWithTypes:(id)arg1 withLoader:(id)arg2 ;
-(id)fullAccountWithIdentifier:(id)arg1 loader:(id)arg2 ;
-(void)_loadChildrenFromAccount:(id)arg1 ;
-(void)_removeChildrenForAccountWithIdentifier:(id)arg1 ;
-(void)removeChildWithIdentifier:(id)arg1 fromAccount:(id)arg2 ;
-(void)addChild:(id)arg1 toAccount:(id)arg2 ;
-(id)mergeInMemoryProperties:(id)arg1 originalProperties:(id)arg2 onDiskProperties:(id)arg3 ;
-(void)_sendNotificationsForChangedAccounts;
-(void)_setOriginalAccountDictionaries;
-(id)_createRuntimeFixers;
-(void)_addNotificationToDictionary:(id)arg1 forChangeType:(int)arg2 originalProperties:(id)arg3 currentProperties:(id)arg4 ;
-(id)displayAccountWithSyncIdentifier:(id)arg1 ;
-(id)allBasicAccounts;
-(id)allBasicSyncableAccounts;
-(id)basicAccountsWithTypes:(id)arg1 ;
-(id)fullDeviceLocalAccount;
-(id)allMailAccounts;
-(void)insertAccount:(id)arg1 ;
-(void)replaceAccount:(id)arg1 withAccount:(id)arg2 ;
-(id)_initWithAccountsInfo:(id)arg1 ;
-(unsigned long long)countOfBasicAccountsWithTypes:(id)arg1 ;
-(void)updateAccount:(id)arg1 ;
-(void)saveAllAccounts;
-(void)deleteAccountWithIdentifier:(id)arg1 ;
-(id)accountWithIdentifier:(id)arg1 ;
-(void)deleteAccount:(id)arg1 ;
@end

