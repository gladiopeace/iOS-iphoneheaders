/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:05:32 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <CloudKitDaemon/NSCopying.h>

@class NSData;

@interface CKDPMescalSignatureRequest : PBRequest <NSCopying> {

	NSData* _mescalData;

}

@property (nonatomic,readonly) char hasMescalData; 
@property (nonatomic,retain) NSData * mescalData;               //@synthesize mescalData=_mescalData - In the implementation block
+(id)options;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(NSData *)mescalData;
-(void)setMescalData:(NSData *)arg1 ;
-(char)hasMescalData;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

