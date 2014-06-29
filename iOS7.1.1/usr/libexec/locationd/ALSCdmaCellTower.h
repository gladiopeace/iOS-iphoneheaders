/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:33:46 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <locationd/locationd-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class ALSLocation;

@interface ALSCdmaCellTower : PBCodable {

	int _bandclass;
	int _bsid;
	int _channel;
	ALSLocation* _location;
	int _mcc;
	int _nid;
	int _pnoffset;
	int _sid;
	int _zoneid;
	SCD_Struct_AL18 _has;

}

@property (assign,nonatomic) BOOL hasMcc; 
@property (assign,nonatomic) int mcc;                             //@synthesize mcc=_mcc - In the implementation block
@property (assign,nonatomic) BOOL hasSid; 
@property (assign,nonatomic) int sid;                             //@synthesize sid=_sid - In the implementation block
@property (assign,nonatomic) BOOL hasNid; 
@property (assign,nonatomic) int nid;                             //@synthesize nid=_nid - In the implementation block
@property (assign,nonatomic) BOOL hasBsid; 
@property (assign,nonatomic) int bsid;                            //@synthesize bsid=_bsid - In the implementation block
@property (nonatomic,readonly) BOOL hasLocation; 
@property (nonatomic,retain) ALSLocation * location;              //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) BOOL hasZoneid; 
@property (assign,nonatomic) int zoneid;                          //@synthesize zoneid=_zoneid - In the implementation block
@property (assign,nonatomic) BOOL hasBandclass; 
@property (assign,nonatomic) int bandclass;                       //@synthesize bandclass=_bandclass - In the implementation block
@property (assign,nonatomic) BOOL hasChannel; 
@property (assign,nonatomic) int channel;                         //@synthesize channel=_channel - In the implementation block
@property (assign,nonatomic) BOOL hasPnoffset; 
@property (assign,nonatomic) int pnoffset;                        //@synthesize pnoffset=_pnoffset - In the implementation block
-(BOOL)hasSid;
-(int)sid;
-(BOOL)hasNid;
-(int)nid;
-(BOOL)hasMcc;
-(int)mcc;
-(BOOL)hasBsid;
-(int)bsid;
-(BOOL)hasZoneid;
-(int)zoneid;
-(BOOL)hasBandclass;
-(int)bandclass;
-(BOOL)hasPnoffset;
-(int)pnoffset;
-(void)setSid:(int)arg1 ;
-(void)setNid:(int)arg1 ;
-(void)setBsid:(int)arg1 ;
-(void)setZoneid:(int)arg1 ;
-(void)setBandclass:(int)arg1 ;
-(void)setPnoffset:(int)arg1 ;
-(void)setMcc:(int)arg1 ;
-(void)setHasMcc:(BOOL)arg1 ;
-(void)setHasZoneid:(BOOL)arg1 ;
-(void)setHasBandclass:(BOOL)arg1 ;
-(void)setHasPnoffset:(BOOL)arg1 ;
-(void)setHasSid:(BOOL)arg1 ;
-(void)setHasNid:(BOOL)arg1 ;
-(void)setHasBsid:(BOOL)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)location;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setChannel:(int)arg1 ;
-(int)channel;
-(BOOL)hasLocation;
-(void)setLocation:(id)arg1 ;
-(void)setHasChannel:(BOOL)arg1 ;
-(BOOL)hasChannel;
@end

