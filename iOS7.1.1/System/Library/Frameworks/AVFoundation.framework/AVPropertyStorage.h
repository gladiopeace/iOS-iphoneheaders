/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:34 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface AVPropertyStorage : NSObject {

	NSObject<OS_dispatch_queue>* _storageAccessWorkQueue;
	NSMutableDictionary* _propertyStorage;

}
-(void)willAccessKVOForKey:(id)arg1 ;
-(void)didAccessKVOForKey:(id)arg1 ;
-(bool)shouldUsePropertyStorageCacheForKey:(id)arg1 ;
-(id)objectForKey:(id)arg1 defaultObjectBlock:(/*^block*/ id)arg2 ;
-(void)dealloc;
-(id)init;
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)finalize;
@end
