/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:52 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSDRep, NSMutableDictionary, NSString;

@interface TSDMagicMoveMatchObject : NSObject {

	TSDRep* _rep;
	int _zOrder;
	NSMutableDictionary* _attributes;
	NSString* _stringValue;
	NSString* _name;
	CGPoint _position;
	NSRange _stringRange;

}

@property (nonatomic,retain) TSDRep * rep;                                  //@synthesize rep=_rep - In the implementation block
@property (assign,nonatomic) CGPoint position;                              //@synthesize position=_position - In the implementation block
@property (assign,nonatomic) int zOrder;                                    //@synthesize zOrder=_zOrder - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * attributes;              //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,retain) NSString * stringValue;                        //@synthesize stringValue=_stringValue - In the implementation block
@property (assign,nonatomic) NSRange stringRange;                           //@synthesize stringRange=_stringRange - In the implementation block
@property (nonatomic,retain) NSString * name;                               //@synthesize name=_name - In the implementation block
+(id)matchObjectWithTextRep:(id)arg1 position:(CGPoint)arg2 stringValue:(id)arg3 stringRange:(NSRange)arg4 ;
+(id)matchObjectWithRep:(id)arg1 position:(CGPoint)arg2 ;
-(id)rep;
-(void)setRep:(id)arg1 ;
-(id)initWithRep:(id)arg1 position:(CGPoint)arg2 stringValue:(id)arg3 stringRange:(NSRange)arg4 ;
-(BOOL)conflictsWithMatchObject:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(void)setPosition:(CGPoint)arg1 ;
-(void)setName:(id)arg1 ;
-(CGPoint)position;
-(id)name;
-(id)stringValue;
-(void)setStringValue:(id)arg1 ;
-(id)attributes;
-(void)setAttributes:(id)arg1 ;
-(int)zOrder;
-(void)setZOrder:(int)arg1 ;
-(NSRange)stringRange;
-(void)setStringRange:(NSRange)arg1 ;
@end

