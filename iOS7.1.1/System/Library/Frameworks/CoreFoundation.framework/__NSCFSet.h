/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:51 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSMutableSet.h>

@interface __NSCFSet : NSMutableSet {

	unsigned char _cfinfo[4];
	unsigned _rc;
	unsigned _bits[4];
	void* _callbacks;
	id* _values;

}
+(bool)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(void)getObjects:(id*)arg1 ;
-(unsigned long long)_trueCount;
-(oneway void)release;
-(id)retain;
-(void)removeObject:(id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS16*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(unsigned long long)count;
-(void)addObject:(id)arg1 ;
-(void)removeAllObjects;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)retainCount;
-(id)copyWithZone:(NSZone)arg1 ;
-(Class)classForCoder;
-(id)objectEnumerator;
-(bool)_tryRetain;
-(bool)_isDeallocating;
-(id)member:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone)arg1 ;
-(void)finalize;
@end

