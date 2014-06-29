/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:05 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSMutableDictionary;

@interface DescriptionBuilder : NSObject {

	BOOL _sortedByKey;
	NSString* _superclassDescription;
	NSString* _keyDelimiter;
	NSMutableDictionary* _descriptionUnderConstruction;

}

@property (assign,nonatomic) BOOL sortedByKey;                                                //@synthesize sortedByKey=_sortedByKey - In the implementation block
@property (nonatomic,copy) NSString * superclassDescription;                                  //@synthesize superclassDescription=_superclassDescription - In the implementation block
@property (nonatomic,copy) NSString * keyDelimiter;                                           //@synthesize keyDelimiter=_keyDelimiter - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * descriptionUnderConstruction;              //@synthesize descriptionUnderConstruction=_descriptionUnderConstruction - In the implementation block
-(id)initWithSuperclassDescription:(id)arg1 ;
-(void)setKey:(id)arg1 withObject:(id)arg2 ;
-(void)setKey:(id)arg1 withBoolean:(BOOL)arg2 ;
-(id)descriptionUnderConstruction;
-(BOOL)sortedByKey;
-(id)keyDelimiter;
-(id)superclassDescription;
-(void)setKey:(id)arg1 withCharArray:(const char*)arg2 ;
-(void)setKey:(id)arg1 withUnsignedInt:(unsigned)arg2 ;
-(void)setKey:(id)arg1 withInt:(int)arg2 ;
-(void)setKey:(id)arg1 withDouble:(double)arg2 ;
-(void)setKey:(id)arg1 withArray:(id)arg2 ;
-(void)setKey:(id)arg1 withDate:(id)arg2 ;
-(void)setKey:(id)arg1 withDictionary:(id)arg2 ;
-(void)setKey:(id)arg1 withEnumNumericalValue:(int)arg2 andStringValue:(id)arg3 ;
-(void)setKey:(id)arg1 withSet:(id)arg2 ;
-(void)setKey:(id)arg1 withString:(id)arg2 ;
-(void)setKey:(id)arg1 withChar:(BOOL)arg2 ;
-(void)setKey:(id)arg1 withFloat:(float)arg2 ;
-(void)setKey:(id)arg1 withInteger:(int)arg2 ;
-(void)setKey:(id)arg1 withLong:(long)arg2 ;
-(void)setKey:(id)arg1 withLongLong:(long long)arg2 ;
-(void)setKey:(id)arg1 withShort:(short)arg2 ;
-(void)setKey:(id)arg1 withUnsignedChar:(unsigned char)arg2 ;
-(void)setKey:(id)arg1 withUnsignedInteger:(unsigned)arg2 ;
-(void)setKey:(id)arg1 withUnsignedLong:(unsigned long)arg2 ;
-(void)setKey:(id)arg1 withUnsignedLongLong:(unsigned long long)arg2 ;
-(void)setKey:(id)arg1 withUnsignedShort:(unsigned short)arg2 ;
-(void)setKey:(id)arg1 withClass:(Class)arg2 ;
-(void)setKey:(id)arg1 withMachPort:(unsigned)arg2 ;
-(void)setKey:(id)arg1 withPointerAddress:(const void*)arg2 ;
-(void)setKey:(id)arg1 withProcessID:(int)arg2 ;
-(void)setKey:(id)arg1 withSelector:(SEL)arg2 ;
-(void)setKey:(id)arg1 withSize:(unsigned long)arg2 ;
-(void)setKey:(id)arg1 withTimeInterval:(double)arg2 ;
-(void)setSortedByKey:(BOOL)arg1 ;
-(void)setSuperclassDescription:(id)arg1 ;
-(void)setKeyDelimiter:(id)arg1 ;
-(void)setDescriptionUnderConstruction:(id)arg1 ;
-(id)init;
-(id)description;
-(void).cxx_destruct;
-(id)build;
@end

