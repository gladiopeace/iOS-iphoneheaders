/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:04 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSFastEnumeration.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSCoding.h>

@interface NSPointerArray : NSObject <NSFastEnumeration, NSCopying, NSCoding>
+(id)pointerArrayWithStrongObjects;
+(id)pointerArrayWithWeakObjects;
+(id)strongObjectsPointerArray;
+(id)weakObjectsPointerArray;
+(id)pointerArrayWithOptions:(unsigned long long)arg1 ;
+(id)pointerArrayWithPointerFunctions:(id)arg1 ;
+(id)allocWithZone:(NSZone)arg1 ;
-(id)mutableArray;
-(id)allObjects;
-(id)initWithPointerFunctions:(id)arg1 ;
-(id)pointerFunctions;
-(void*)pointerAtIndex:(unsigned long long)arg1 ;
-(void)addPointer:(void*)arg1 ;
-(void)removePointerAtIndex:(unsigned long long)arg1 ;
-(void)insertPointer:(void*)arg1 atIndex:(unsigned long long)arg2 ;
-(void)replacePointerAtIndex:(unsigned long long)arg1 withPointer:(void*)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS5*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)count;
-(id)init;
-(id)copyWithZone:(NSZone)arg1 ;
-(void)setCount:(unsigned long long)arg1 ;
-(id)initWithOptions:(unsigned long long)arg1 ;
-(void)compact;
@end

