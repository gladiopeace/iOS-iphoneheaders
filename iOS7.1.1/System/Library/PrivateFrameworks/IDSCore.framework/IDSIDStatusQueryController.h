/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:34 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/IDSCore.framework/IDSCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class IMTimer, NSRecursiveLock, NSMutableDictionary, NSDate;

@interface IDSIDStatusQueryController : NSObject {

	IMTimer* _purgeTimer;
	NSRecursiveLock* _lock;
	NSMutableDictionary* _idStatusCache;
	NSMutableDictionary* _completionBlocks;
	NSDate* _startQueryDate;
	/*^block*/ id _purgeCancelBlock;
	/*^block*/ id _purgeEnqueueBlock;
	bool _loaded;
	int _numQueriesThisHour;

}
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(void)_setPurgeTimer;
-(void)_loadIfNeeded;
-(void)_updateCacheWithStatusUpdates:(id)arg1 fromURI:(id)arg2 fromService:(id)arg3 success:(bool)arg4 error:(id)arg5 ;
-(void)_sendIDStatusChanges:(id)arg1 forService:(id)arg2 URI:(id)arg3 success:(bool)arg4 error:(id)arg5 ;
-(unsigned)cachedIDStatusForID:(id)arg1 fromURI:(id)arg2 fromService:(id)arg3 ;
-(unsigned)_IDStatusForURI:(id)arg1 fromURI:(id)arg2 fromService:(id)arg3 ;
-(id)_lookupDateForURI:(id)arg1 fromURI:(id)arg2 fromService:(id)arg3 ;
-(id)_cachedResultsForURIs:(id)arg1 fromURI:(id)arg2 fromService:(id)arg3 ;
-(void)_lookupIDStatusForURIs:(id)arg1 fromIdentity:(id)arg2 fromURI:(id)arg3 fromService:(id)arg4 completionBlock:(/*^block*/ id)arg5 ;
-(void)requestIDStatusForIDs:(id)arg1 fromIdentity:(id)arg2 fromURI:(id)arg3 fromService:(id)arg4 completionBlock:(/*^block*/ id)arg5 ;
-(void)_saveCache;
-(void)_loadCache;
-(void)requestIDStatusForID:(id)arg1 fromIdentity:(id)arg2 fromURI:(id)arg3 fromService:(id)arg4 completionBlock:(/*^block*/ id)arg5 ;
-(id)currentCache;
-(id)currentCacheForService:(id)arg1 ;
-(void)addCompletionBlock:(/*^block*/ id)arg1 forUniqueIdentifier:(id)arg2 ;
-(void)removeCompletionBlockForUniqueIdentifier:(id)arg1 ;
-(void)_flush;
-(void)clearCache;
@end

