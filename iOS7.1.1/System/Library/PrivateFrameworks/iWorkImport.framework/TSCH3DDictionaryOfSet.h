/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:29 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <CoreFoundation/NSFastEnumeration.h>

@class NSMutableDictionary;

@interface TSCH3DDictionaryOfSet : NSObject <NSFastEnumeration> {

	NSMutableDictionary* mSets;

}
+(id)dictionaryWithMutableDictionaryClass:(Class)arg1 ;
+(id)dictionary;
-(id)initWithMutableDictionaryClass:(Class)arg1 ;
-(void)removeObject:(id)arg1 forKey:(id)arg2 ;
-(void)addObject:(id)arg1 forKey:(id)arg2 ;
-(void)dealloc;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_TS24*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(unsigned long long)count;
-(id)init;
-(id)description;
-(id)allKeys;
-(id)objectsForKey:(id)arg1 ;
@end

