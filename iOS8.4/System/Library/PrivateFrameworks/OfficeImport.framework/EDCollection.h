/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:15 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/NSCopying.h>

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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)removeObjectAtIndex:(unsigned long long)arg1 ;
-(id)initWithObject:(id)arg1 ;
-(unsigned long long)addOrEquivalentObject:(id)arg1 ;
-(BOOL)isEqualToCollection:(id)arg1 ;
@end
