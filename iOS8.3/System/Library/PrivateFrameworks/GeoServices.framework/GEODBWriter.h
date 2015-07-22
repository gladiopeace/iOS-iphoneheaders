/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:51:53 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <GeoServices/GeoServices-Structs.h>
@class NSString, NSMutableArray, NSMutableSet, NSLock, NSObject;

@interface GEODBWriter : NSObject {

	NSString* _path;
	sqlite3Ref _db;
	sqlite3_stmtRef _versionQuery;
	sqlite3_stmtRef _versionInsert;
	sqlite3_stmtRef _editionQuery;
	sqlite3_stmtRef _editionDelete;
	sqlite3_stmtRef _editionInvalidate;
	sqlite3_stmtRef _editionUpdate;
	sqlite3_stmtRef _editionInvalidateAll;
	sqlite3_stmtRef _tileInsert;
	sqlite3_stmtRef _tileDelete;
	sqlite3_stmtRef _tileSize;
	sqlite3_stmtRef _sizeQuery;
	long long _lastRowID;
	unsigned long long _databaseSize;
	unsigned long long _maxDatabaseSize;
	char _closed;
	char _defunct;
	NSMutableArray* _writeList;
	NSMutableSet* _uncommitedWriteSet;
	unsigned _pendingWriteBytes;
	NSLock* _writeListLock;
	NSObject*<OS_dispatch_queue> _writeQueue;
	void* _editionMap;
	long long _evictionRowsThreshold;
	SCD_Struct_GE52* _expirationRecords;
	unsigned _expirationRecordCount;
	char _preloading;
	double _lastCheckedGeneralExpiration;
	unsigned _tileCacheMinimumWriteCount;
	unsigned _tileCacheMinimumWriteBytes;
	unsigned _tileCacheMaximumWriteCount;
	unsigned _tileCacheMaximumWriteBytes;

}

@property (nonatomic,readonly) NSString * path;                               //@synthesize path=_path - In the implementation block
@property (assign) char closed; 
@property (nonatomic,readonly) unsigned long long databaseSize;               //@synthesize databaseSize=_databaseSize - In the implementation block
@property (assign,nonatomic) unsigned long long maxDatabaseSize;              //@synthesize maxDatabaseSize=_maxDatabaseSize - In the implementation block
-(void)dealloc;
-(NSString *)path;
-(void)_updateSize;
-(id)initWithPath:(id)arg1 ;
-(char)closed;
-(void)endPreloadSession;
-(void)_closeDB;
-(void)setClosed:(char)arg1 ;
-(void)setExpirationRecords:(SCD_Struct_GE52*)arg1 count:(unsigned)arg2 ;
-(void)_openIfNecessary;
-(void)addData:(id)arg1 forKey:(GEOTileKey*)arg2 edition:(unsigned)arg3 set:(unsigned)arg4 provider:(unsigned)arg5 etag:(id)arg6 ;
-(void)deleteData:(const GEOTileKey*)arg1 ;
-(char)prepareSingleStatement:(sqlite3_stmt*)arg1 forSql:(id)arg2 ;
-(void)_deviceLocked;
-(void)_editionUpdate:(id)arg1 ;
-(void)_openDBForceRecreate:(char)arg1 ;
-(void)_performWrites:(char)arg1 ;
-(void)_updateEdition:(unsigned)arg1 forTileset:(unsigned)arg2 provider:(unsigned)arg3 invalidateOnly:(char)arg4 ;
-(void)_createTables;
-(void)_prepareStatements;
-(void)_writeVersion;
-(char)_readEditions;
-(void)_evict;
-(unsigned long long)_dbFileSize;
-(void)_assertDatabaseSize;
-(unsigned long long)_freeableDiskSpace;
-(void)_shrinkToUnderSize:(unsigned long long)arg1 vacuum:(char)arg2 ;
-(char)_tileSetExpires:(unsigned)arg1 ;
-(void)_deleteKey:(GEOTileKey)arg1 ;
-(void)_dropWritesOnFloor:(id)arg1 ;
-(void)_writeEntry:(id)arg1 ;
-(void)flushPendingWrites;
-(void)_printDBStatus:(const char*)arg1 ;
-(void)calculateFreeableSizeWithHandler:(/*^block*/id)arg1 onQueue:(id)arg2 ;
-(void)shrinkToSize:(unsigned long long)arg1 finished:(/*^block*/id)arg2 ;
-(void)shrinkToSize:(unsigned long long)arg1 finished:(/*^block*/id)arg2 onQueue:(id)arg3 ;
-(id)pendingWriteForKey:(GEOTileKey*)arg1 ;
-(void)pendingWritesForKeys:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)beginPreloadSessionOfSize:(unsigned long long)arg1 ;
-(unsigned long long)databaseSize;
-(unsigned long long)maxDatabaseSize;
-(void)setMaxDatabaseSize:(unsigned long long)arg1 ;
-(void)_localeChanged:(id)arg1 ;
@end
