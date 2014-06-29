/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:25 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@interface GEOTileLoader : NSObject

@property (nonatomic,readonly) int memoryHits; 
@property (nonatomic,readonly) int diskHits; 
@property (nonatomic,readonly) int networkHits; 
+(void)setMemoryCacheMinCapacity:(unsigned long long)arg1 ;
+(id)sharedLoader;
+(id)alloc;
+(id)allocWithZone:(NSZone)arg1 ;
+(void)useRemoteLoader;
+(void)setTrackUsage:(bool)arg1 ;
+(void)setMemoryCacheCountLimit:(unsigned long long)arg1 ;
+(id)diskCacheLocation;
+(id)singletonConfiguration;
+(void)setMemoryCacheTotalCostLimit:(unsigned long long)arg1 ;
+(id)modernLoader;
+(void)setDiskCacheLocation:(id)arg1 ;
+(void)useLocalLoader;
-(void)beginPreloadSessionOfSize:(unsigned long long)arg1 ;
-(void)endPreloadSession;
-(id)expireTilesWithType:(unsigned char)arg1 provider:(unsigned short)arg2 olderThan:(double)arg3 ;
-(void)cancelRequest:(id)arg1 ;
-(void)_loadTiles:(id)arg1 options:(unsigned long long)arg2 progress:(/*^block*/ id)arg3 finished:(/*^block*/ id)arg4 error:(/*^block*/ id)arg5 ;
-(void)closeDatabase;
-(void)openDatabase;
-(id)renderDataForKey:(GEOTileKey*)arg1 ;
-(id)renderDataForKey:(GEOTileKey*)arg1 asyncHandler:(/*^block*/ id)arg2 ;
-(void)loadTiles:(id)arg1 progress:(/*^block*/ id)arg2 finished:(/*^block*/ id)arg3 error:(/*^block*/ id)arg4 ;
-(void)loadTilesFromCacheAndNetwork:(id)arg1 progress:(/*^block*/ id)arg2 finished:(/*^block*/ id)arg3 error:(/*^block*/ id)arg4 ;
-(void)loadTilesFromCache:(id)arg1 progress:(/*^block*/ id)arg2 finished:(/*^block*/ id)arg3 error:(/*^block*/ id)arg4 ;
-(void)preloadTiles:(id)arg1 requireWiFi:(bool)arg2 progress:(/*^block*/ id)arg3 finished:(/*^block*/ id)arg4 error:(/*^block*/ id)arg5 ;
-(void)shrinkDiskCacheToSize:(unsigned long long)arg1 finished:(/*^block*/ id)arg2 ;
-(bool)reprioritizeKey:(const GEOTileKey*)arg1 forClient:(id)arg2 newPriority:(unsigned)arg3 ;
-(void)beginPreloadSessionOfSize:(unsigned long long)arg1 forClient:(id)arg2 ;
-(void)endPreloadSessionForClient:(id)arg1 ;
-(void)clearAllCaches;
-(int)memoryHits;
-(int)diskHits;
-(int)networkHits;
-(void)shrinkDiskCacheToSize:(unsigned long long)arg1 callbackQ:(id)arg2 finished:(/*^block*/ id)arg3 ;
-(void)setInternalDelegate:(id)arg1 ;
-(id)internalDelegate;
-(void)setInternalDelegateQ:(id)arg1 ;
-(id)internalDelegateQ;
-(id)cachedTileForKey:(const GEOTileKey*)arg1 ;
-(void)openForClient:(id)arg1 ;
-(void)closeForClient:(id)arg1 ;
-(void)setSortPoint:(const SCD_Struct_GE4*)arg1 ;
-(void)cancelAllForClient:(id)arg1 ;
-(void)registerTileDecoder:(id)arg1 ;
-(void)loadKey:(const GEOTileKey*)arg1 priority:(unsigned)arg2 forClient:(id)arg3 options:(unsigned long long)arg4 callbackQ:(id)arg5 beginNetwork:(/*^block*/ id)arg6 callback:(/*^block*/ id)arg7 ;
-(void)cancelKey:(const GEOTileKey*)arg1 forClient:(id)arg2 ;
-(void)reportCorruptTile:(const GEOTileKey*)arg1 ;
-(void)registerTileLoader:(Class)arg1 ;
-(void)expireTilesWithPredicate:(/*^block*/ id)arg1 ;
@end

