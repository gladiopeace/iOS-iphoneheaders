/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:53 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OITSUCache.h>

@class OITSUReadWriteQueue;

@interface OITSUConcurrentCache : OITSUCache {

	OITSUReadWriteQueue* mReadWriteQueue;

}

@property (nonatomic,readonly) OITSUReadWriteQueue * readWriteQueue; 
-(id)objectsForKeys:(id)arg1 notFoundMarker:(id)arg2 ;
-(void)dealloc;
-(unsigned long long)count;
-(void)removeAllObjects;
-(void)removeObjectForKey:(id)arg1 ;
-(void)addEntriesFromDictionary:(id)arg1 ;
-(id)initWithName:(id)arg1 ;
-(void)unload;
-(BOOL)hasFlushableContent;
-(void)removeObjectForKey:(id)arg1 andWait:(BOOL)arg2 ;
-(OITSUReadWriteQueue *)readWriteQueue;
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
@end

