/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:34:06 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <locationd/locationd-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CoreFoundation/NSCopying.h>

@interface CRCdmaCellNeighbor : PBCodable <NSCopying> {

	int _ecn0;
	int _pilotPhase;
	int _pnoffset;
	int _rscp;
	SCD_Struct_CR35 _has;

}

@property (assign,nonatomic) BOOL hasPnoffset; 
@property (assign,nonatomic) int pnoffset;                    //@synthesize pnoffset=_pnoffset - In the implementation block
@property (assign,nonatomic) BOOL hasPilotPhase; 
@property (assign,nonatomic) int pilotPhase;                  //@synthesize pilotPhase=_pilotPhase - In the implementation block
@property (assign,nonatomic) BOOL hasEcn0; 
@property (assign,nonatomic) int ecn0;                        //@synthesize ecn0=_ecn0 - In the implementation block
@property (assign,nonatomic) BOOL hasRscp; 
@property (assign,nonatomic) int rscp;                        //@synthesize rscp=_rscp - In the implementation block
-(BOOL)hasPnoffset;
-(int)pnoffset;
-(void)setPnoffset:(int)arg1 ;
-(void)setEcn0:(int)arg1 ;
-(void)setHasEcn0:(BOOL)arg1 ;
-(BOOL)hasEcn0;
-(void)setRscp:(int)arg1 ;
-(void)setHasRscp:(BOOL)arg1 ;
-(BOOL)hasRscp;
-(int)ecn0;
-(int)rscp;
-(void)setHasPnoffset:(BOOL)arg1 ;
-(void)setPilotPhase:(int)arg1 ;
-(void)setHasPilotPhase:(BOOL)arg1 ;
-(BOOL)hasPilotPhase;
-(int)pilotPhase;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

