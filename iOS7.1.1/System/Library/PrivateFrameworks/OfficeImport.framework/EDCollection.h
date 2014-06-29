/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:06 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class NSMutableArray;

@interface EDCollection : NSObject <NSCopying> {

	NSMutableArray* mObjects;

}
+(id)collection;
+(id)collectionWithObject:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(id)init;
-(unsigned long long)addObject:(id)arg1 ;
-(void)removeAllObjects;
-(unsigned long long)indexOfObject:(id)arg1 ;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)removeObjectAtIndex:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone)arg1 ;
-(void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(id)initWithObject:(id)arg1 ;
-(unsigned long long)addOrEquivalentObject:(id)arg1 ;
-(bool)isEqualToCollection:(id)arg1 ;
@end

