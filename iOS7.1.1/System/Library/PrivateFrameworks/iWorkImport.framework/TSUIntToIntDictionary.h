/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:19 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSMutableCopying.h>

@interface TSUIntToIntDictionary : NSObject <NSCopying, NSMutableCopying> {

	CFDictionaryRef mDictionary;

}
-(CFDictionaryRef)p_cfDictionary;
-(long long)intForKey:(long long)arg1 ;
-(void)setInt:(long long)arg1 forKey:(long long)arg2 ;
-(bool)intIsPresentForKey:(long long)arg1 outValue:(long long*)arg2 ;
-(void)removeIntForKey:(long long)arg1 ;
-(void)removeAllInts;
-(void)applyFromIntToIntDictionary:(id)arg1 ;
-(id)arrayOfBoxedKeys;
-(bool)containsKey:(long long)arg1 ;
-(void)dealloc;
-(unsigned long long)count;
-(id)init;
-(id)description;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(id)allKeys;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)allValues;
-(id)keyEnumerator;
-(id)mutableCopyWithZone:(NSZone)arg1 ;
@end

