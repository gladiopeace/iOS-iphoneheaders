/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:45 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSURLCache.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSMutableArray, NSObject;

@interface __NSCFMemoryURLCache : NSURLCache {

	id _internal;
	unsigned long long _memoryCapacity;
	unsigned long long _currentLength;
	NSMutableDictionary* _memoryStorage;
	NSMutableArray* _memoryStorageLRU;
	NSObject<OS_dispatch_queue>* _memoryQueue;

}
+(void)initialize;
-(id)initEmptyCache;
-(id)initMemoryCache;
-(unsigned long long)diskCapacity;
-(unsigned long long)currentMemoryUsage;
-(unsigned long long)currentDiskUsage;
-(id)cachedResponseForRequest:(id)arg1 ;
-(void)storeCachedResponse:(id)arg1 forRequest:(id)arg2 ;
-(void)setDiskCapacity:(unsigned long long)arg1 ;
-(void)removeCachedResponseForRequest:(id)arg1 ;
-(void)removeAllCachedResponses;
-(id)initWithMemoryCapacity:(unsigned long long)arg1 diskCapacity:(unsigned long long)arg2 diskPath:(id)arg3 ;
-(void)dealloc;
-(id)description;
-(unsigned long long)memoryCapacity;
-(void)setMemoryCapacity:(unsigned long long)arg1 ;
@end

