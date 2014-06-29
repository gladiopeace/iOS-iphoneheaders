/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:57 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/CoreText.framework/CoreText
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreText/CoreText-Structs.h>
#import <CoreText/_CTGlyphStorage.h>

@interface _CTNativeGlyphStorage : _CTGlyphStorage {

	const long long* _attachCounts;
	unsigned long long _retainCount;
	GlyphStack* _stack;
	long long _capacity;
	void* _preallocatedStorage;

}
+(id)newWithCount:(long long)arg1 ;
-(void)setProps:(unsigned)arg1 atIndex:(long long)arg2 ;
-(void)setAttachmentCount:(long long)arg1 atIndex:(long long)arg2 ;
-(void)setStringIndex:(long long)arg1 atIndex:(long long)arg2 ;
-(long long)attachmentCountAtIndex:(long long)arg1 ;
-(void)popGlyphAtIndex:(long long)arg1 ;
-(void)pushGlyphAtIndex:(long long)arg1 ;
-(void)initGlyphStackWithCapacity:(long long)arg1 ;
-(void)puntStringIndicesInRange:(SCD_Struct_CT0)arg1 by:(long long)arg2 ;
-(id)initWithCount:(long long)arg1 ;
-(id)copyWithRange:(SCD_Struct_CT0)arg1 ;
-(void)setGlyph:(unsigned short)arg1 atIndex:(long long)arg2 ;
-(void)setAdvance:(CGSize)arg1 atIndex:(long long)arg2 ;
-(void)insertGlyphsAtRange:(SCD_Struct_CT0)arg1 ;
-(void)swapGlyphsAtIndex:(long long)arg1 withIndex:(long long)arg2 ;
-(void)moveGlyphsFromRange:(SCD_Struct_CT0)arg1 toIndex:(long long)arg2 ;
-(void)prepareWithCapacity:(long long)arg1 preallocated:(bool)arg2 ;
-(void)setCapacity:(long long)arg1 ;
-(const long long*)stringIndices;
-(oneway void)release;
-(id)retain;
-(void)dealloc;
-(unsigned long long)retainCount;
-(bool)_tryRetain;
-(bool)_isDeallocating;
-(void)finalize;
@end

