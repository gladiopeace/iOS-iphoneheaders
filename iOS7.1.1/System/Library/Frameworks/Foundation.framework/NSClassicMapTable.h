/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:06 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSMapTable.h>

@interface NSClassicMapTable : NSMapTable {

	SCD_Struct_NS42* _keyCallBacks;
	SCD_Struct_NS43* _valueCallBacks;
	CFBasicHashRef _ht;

}
-(void)removeAllItems;
-(void)setItem:(const void*)arg1 forKnownAbsentKey:(const void*)arg2 ;
-(void*)existingItemForSetItem:(const void*)arg1 forAbsentKey:(const void*)arg2 ;
-(bool)mapMember:(const void*)arg1 originalKey:(const void*)arg2 value:(const void*)arg3 ;
-(unsigned long long)getKeys:(const void*)arg1 values:(const void*)arg2 ;
-(void)dealloc;
-(unsigned long long)count;
-(id)init;
-(id)copy;
-(bool)isEqual:(id)arg1 ;
-(id)description;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)allKeys;
-(id)allValues;
@end
