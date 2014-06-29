/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:40 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSMutableDictionary;

@interface _UICache : NSObject {

	NSObject<OS_dispatch_queue>* _cacheQueue;
	NSMutableDictionary* _cache;
	NSObject<OS_dispatch_source>* _memoryWarningsSource;
	bool _clearsCacheOnLowMemoryWarnings;
	bool _clearsCacheOnApplicationBackground;
	id _noteObserver;

}

@property (assign,nonatomic) bool clearsCacheOnLowMemoryWarnings; 
@property (assign,nonatomic) bool clearsCacheOnApplicationBackground; 
-(void)dealloc;
-(id)init;
-(void)removeAllObjects;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)setClearsCacheOnApplicationBackground:(bool)arg1 ;
-(void)setClearsCacheOnLowMemoryWarnings:(bool)arg1 ;
-(bool)clearsCacheOnLowMemoryWarnings;
-(bool)clearsCacheOnApplicationBackground;
@end

