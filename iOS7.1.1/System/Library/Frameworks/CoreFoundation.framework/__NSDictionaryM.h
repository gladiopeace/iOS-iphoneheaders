/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:51 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSMutableDictionary.h>

@interface __NSDictionaryM : NSMutableDictionary {

	unsigned _used : 58;
	unsigned _kvo : 1;
	unsigned long long _size;
	unsigned long long _mutations;
	id* _objs;
	id* _keys;

}
+(id)__new:(const id*)arg1 :(const id*)arg2 :(unsigned long long)arg3 :(bool)arg4 :(bool)arg5 ;
+(id)allocWithZone:(NSZone)arg1 ;
+(void)initialize;
+(bool)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(void)setObservationInfo:(void*)arg1 ;
-(void)__setObject:(id)arg1 forKey:(id)arg2 ;
-(void)_mutate;
-(void)getObjects:(id*)arg1 andKeys:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)enumerateKeysAndObjectsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/ id)arg2 ;
-(void)dealloc;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS16*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(unsigned long long)count;
-(void)removeAllObjects;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)keyEnumerator;
-(id)mutableCopyWithZone:(NSZone)arg1 ;
-(void)finalize;
@end

