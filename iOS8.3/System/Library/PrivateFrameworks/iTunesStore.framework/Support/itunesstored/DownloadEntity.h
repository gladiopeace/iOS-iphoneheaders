/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:36:21 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreServices/SSSQLiteEntity.h>

@class NSArray, NSString;

@interface DownloadEntity : SSSQLiteEntity

@property (nonatomic,readonly) NSArray * allAssetCookies; 
@property (nonatomic,readonly) NSString * downloadKind; 
@property (nonatomic,readonly) unsigned long long itemIdentifier; 
@property (nonatomic,readonly) NSString * ITunesSafeGUID; 
+(id)copyValueDictionaryWithMetadata:(id)arg1 ;
+(void)initialize;
+(id)foreignDatabaseTableForProperty:(id)arg1 ;
+(id)databaseTable;
+(id)disambiguatedSQLForProperty:(id)arg1 ;
+(id)databasePropertyToSetClientProperty:(id)arg1 ;
+(id)joinClauseForProperty:(id)arg1 ;
+(id)databasePropertyToGetClientProperty:(id)arg1 ;
+(id)foreignDatabaseTablesToDelete;
+(id)foreignKeyColumnForTable:(id)arg1 ;
+(id)foreignDatabaseColumnForProperty:(id)arg1 ;
+(Class)memoryEntityClass;
-(id)finishWithFinalPhase:(id)arg1 ;
-(void)deleteScratchDirectory;
-(id)setAssetsUsingDownload:(id)arg1 ;
-(id)copyDownloadingIPodLibraryItem;
-(NSString *)ITunesSafeGUID;
-(id)anyAssetForAssetType:(id)arg1 ;
-(id)copyStoreDownloadMetadata;
-(NSArray *)allAssetCookies;
-(void)_applyPhase:(id)arg1 toUpdateWithStoreItemIdentifier:(long long)arg2 changeset:(id)arg3 ;
-(int)addPersistentDownloadsWithClientID:(id)arg1 kind:(id)arg2 ;
-(void)_resetAssetProperty:(id)arg1 ;
-(id)_databaseAssetForAsset:(id)arg1 ;
-(id)copyAdditionalMetadataForStoreDownload:(id)arg1 ;
-(id)copyAssetsWithAssetType:(id)arg1 ;
-(id)rentalInformation;
-(void)resetAssetLocalPaths;
-(void)resetAssetURLs;
-(unsigned long long)itemIdentifier;
-(char)deleteFromDatabase;
-(NSString *)downloadKind;
@end

