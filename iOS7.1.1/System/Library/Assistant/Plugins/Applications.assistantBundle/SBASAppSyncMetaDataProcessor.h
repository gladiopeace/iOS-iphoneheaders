/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:03 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Assistant/Plugins/Applications.assistantBundle/Applications
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSArray, NSMutableDictionary, NSCondition;

@interface SBASAppSyncMetaDataProcessor : NSObject {

	NSObject<OS_dispatch_queue>* _queue;
	NSArray* _metaData;
	unsigned long long _lastChangeOffset;
	NSMutableDictionary* _appInfoCache;
	unsigned long long _appInfoCacheStart;
	unsigned long long _appInfoCacheEnd;
	NSCondition* _appInfoCacheCheck;

}
-(void)_queue_updateCache;
-(void)processNextChange:(id)arg1 afterAnchor:(id)arg2 ;
-(id)initWithSource:(id)arg1 ;
-(void)dealloc;
@end

