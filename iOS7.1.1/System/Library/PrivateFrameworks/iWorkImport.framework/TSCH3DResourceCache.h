/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:29 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSCH3DProtectResourceDelegate.h>

@class TSCH3DDictionaryOfSet, NSMutableDictionary, NSCountedSet;

@interface TSCH3DResourceCache : NSObject <TSCH3DProtectResourceDelegate> {

	TSCH3DDictionaryOfSet* mResourceKeyedEntries;
	NSMutableDictionary* mHandles;
	NSCountedSet* mProtectedResources;
	NSMutableDictionary* mMemoryUsage;
	unsigned long long mMemoryUsedInBytes;
	unsigned long long mMemoryLimitInBytes;
	NSCountedSet* mUsageCounts;

}

@property (nonatomic,readonly) unsigned long long memoryUsedInBytes; 
@property (assign,nonatomic) unsigned long long memoryLimitInBytes; 
-(void)flushMemoryForResources:(id)arg1 ;
-(id)flushAllResourcesForContext:(id)arg1 ;
-(void)garbageCollectResources:(id)arg1 context:(id)arg2 ;
-(void)garbageCollectAllResourcesForContext:(id)arg1 ;
-(id)flushResources:(id)arg1 context:(id)arg2 ;
-(id)keyForKey:(id)arg1 ;
-(float)debug_totalMemoryUsageMB;
-(id)p_keysForResource:(id)arg1 ;
-(id)handleForKey:(id)arg1 ;
-(id)debug_string;
-(bool)isProtectedResource:(id)arg1 ;
-(void)p_flushHandleForKey:(id)arg1 context:(id)arg2 ;
-(void)p_removeHandleForKey:(id)arg1 ;
-(id)p_allResourceKeys;
-(id)p_flushResourceKeys:(id)arg1 context:(id)arg2 ;
-(id)p_keysForResources:(id)arg1 ;
-(id)p_unretainedResourcesFromResources:(id)arg1 ;
-(id)debug_stats;
-(id)debug_countedMemory;
-(id)debug_countedClasses;
-(id)debug_usageCounts;
-(id)debug_details;
-(void)protectResource:(id)arg1 ;
-(void)unprotectResource:(id)arg1 ;
-(bool)hasEnoughFreeMemoryOfBytes:(unsigned long long)arg1 ;
-(id)keyForLoader:(id)arg1 resource:(id)arg2 virtualScreen:(int)arg3 ;
-(void)setBytesUploaded:(unsigned long long)arg1 forKey:(id)arg2 ;
-(void)setHandle:(id)arg1 forKey:(id)arg2 ;
-(void)updateUsageCountForResourceSet:(id)arg1 fromPreviousResourceSet:(id)arg2 ;
-(unsigned long long)memoryUsedForResource:(id)arg1 ;
-(unsigned long long)memoryUsedInBytes;
-(unsigned long long)memoryLimitInBytes;
-(void)setMemoryLimitInBytes:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)init;
@end

