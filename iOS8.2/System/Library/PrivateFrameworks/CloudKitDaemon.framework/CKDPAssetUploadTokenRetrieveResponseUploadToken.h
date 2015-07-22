/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:43 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CloudKitDaemon/NSCopying.h>

@class CKDPAsset, NSString;

@interface CKDPAssetUploadTokenRetrieveResponseUploadToken : PBCodable <NSCopying> {

	CKDPAsset* _asset;
	NSString* _token;

}

@property (nonatomic,readonly) char hasToken; 
@property (nonatomic,retain) NSString * token;               //@synthesize token=_token - In the implementation block
@property (nonatomic,readonly) char hasAsset; 
@property (nonatomic,retain) CKDPAsset * asset;              //@synthesize asset=_asset - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(CKDPAsset *)asset;
-(void)setAsset:(CKDPAsset *)arg1 ;
-(NSString *)token;
-(void)setToken:(NSString *)arg1 ;
-(char)hasToken;
-(char)hasAsset;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end
