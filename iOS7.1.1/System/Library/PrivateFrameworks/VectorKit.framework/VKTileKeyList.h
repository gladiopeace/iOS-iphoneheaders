/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:44 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <CoreFoundation/NSFastEnumeration.h>
#import <CoreFoundation/NSCopying.h>

@class VKTileKeyMap;

@interface VKTileKeyList : NSObject <NSFastEnumeration, NSCopying> {

	void* _head;
	void* _tail;
	VKTileKeyMap* _map;
	unsigned long long _count;
	unsigned long long _maxCount;

}
-(bool)containsKey:(const VKTileKey*)arg1 ;
-(void)dealloc;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_VK54*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(unsigned long long)count;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(void)addKey:(const VKTileKey*)arg1 ;
-(VKTileKey*)firstKey;
-(void)sort:(/*^block*/ id)arg1 ;
-(bool)removeKey:(const VKTileKey*)arg1 ;
-(bool)isEqualToList:(id)arg1 ;
-(id)initWithMaxCapacity:(unsigned long long)arg1 ;
-(void)_addKeyToBack:(const VKTileKey*)arg1 ;
-(bool)addKey:(const VKTileKey*)arg1 lostKey:(VKTileKey*)arg2 ;
-(id)copyWithMaxCapacity:(unsigned long long)arg1 ;
-(unsigned long long)capacity;
-(id)listWithout:(id)arg1 ;
-(void)removeKeysMatchingPredicate:(/*^block*/ id)arg1 ;
@end

