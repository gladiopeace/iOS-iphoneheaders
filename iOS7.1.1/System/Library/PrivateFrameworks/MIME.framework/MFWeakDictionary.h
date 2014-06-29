/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:39 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MIME/MIME-Structs.h>
#import <CoreFoundation/NSMutableDictionary.h>

@class NSLock, NSMutableDictionary;

@interface MFWeakDictionary : NSMutableDictionary {

	unsigned long long _gen;
	NSLock* _lock;
	NSMutableDictionary* _dictionary;

}
-(void)enumerateKeysAndObjectsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/ id)arg2 ;
-(void)dealloc;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_MF3*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(unsigned long long)count;
-(void)removeAllObjects;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(id)allKeys;
-(void)enumerateKeysAndObjectsUsingBlock:(/*^block*/ id)arg1 ;
-(id)allValues;
-(id)_copyDictionary;
@end

