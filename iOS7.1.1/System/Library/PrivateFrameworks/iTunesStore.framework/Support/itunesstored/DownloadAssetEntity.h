/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 5:50:54 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreServices/SSSQLiteEntity.h>

@class NSArray;

@interface DownloadAssetEntity : SSSQLiteEntity

@property (nonatomic,readonly) NSArray * sinfs; 
+(id)newDownloadKeyCookieWithValue:(id)arg1 URL:(id)arg2 ;
+(id)copyDatabaseDictionaryWithRequestProperties:(id)arg1 ;
+(void)initialize;
+(id)databaseTable;
+(id)disambiguatedSQLForProperty:(id)arg1 ;
+(id)databasePropertyToSetClientProperty:(id)arg1 ;
+(id)databasePropertyToGetClientProperty:(id)arg1 ;
+(Class)memoryEntityClass;
-(id)copyStoreDownloadKeyCookie;
-(id)copyURLRequestProperties;
-(id)sinfs;
-(BOOL)deleteFromDatabase;
@end

