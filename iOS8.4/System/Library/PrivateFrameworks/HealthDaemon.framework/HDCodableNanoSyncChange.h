/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:49 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <HealthDaemon/NSCopying.h>
#import <HealthDaemon/HDSyncChange.h>
#import <HealthDaemon/HDNanoSyncDescription.h>

@class NSMutableArray, NSString;

@interface HDCodableNanoSyncChange : PBCodable <NSCopying, HDSyncChange, HDNanoSyncDescription> {

	long long _endAnchor;
	long long _startAnchor;
	NSMutableArray* _objectDatas;
	int _objectType;
	SCD_Struct_HD8 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL hasObjectType; 
@property (assign,nonatomic) int objectType;                            //@synthesize objectType=_objectType - In the implementation block
@property (assign,nonatomic) BOOL hasStartAnchor; 
@property (assign,nonatomic) long long startAnchor;                     //@synthesize startAnchor=_startAnchor - In the implementation block
@property (assign,nonatomic) BOOL hasEndAnchor; 
@property (assign,nonatomic) long long endAnchor;                       //@synthesize endAnchor=_endAnchor - In the implementation block
@property (nonatomic,retain) NSMutableArray * objectDatas;              //@synthesize objectDatas=_objectDatas - In the implementation block
+(id)changeWithNanoSyncEntityClass:(Class)arg1 ;
-(id)nanoSyncDescription;
-(Class)syncEntityClass;
-(id)decodedObjects;
-(void)setObjects:(id)arg1 syncAnchorRange:(HDSyncAnchorRange)arg2 ;
-(HDSyncAnchorRange)syncAnchorRange;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)addObjectData:(id)arg1 ;
-(unsigned long long)objectDatasCount;
-(void)clearObjectDatas;
-(id)objectDataAtIndex:(unsigned long long)arg1 ;
-(void)setObjectType:(int)arg1 ;
-(void)setHasObjectType:(BOOL)arg1 ;
-(BOOL)hasObjectType;
-(int)objectType;
-(NSMutableArray *)objectDatas;
-(void)setObjectDatas:(NSMutableArray *)arg1 ;
-(void)setStartAnchor:(long long)arg1 ;
-(void)setEndAnchor:(long long)arg1 ;
-(void)setHasStartAnchor:(BOOL)arg1 ;
-(BOOL)hasStartAnchor;
-(void)setHasEndAnchor:(BOOL)arg1 ;
-(BOOL)hasEndAnchor;
-(long long)startAnchor;
-(long long)endAnchor;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end
