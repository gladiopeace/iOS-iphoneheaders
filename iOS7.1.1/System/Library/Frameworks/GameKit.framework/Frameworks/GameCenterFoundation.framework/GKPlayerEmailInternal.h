/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:15 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class NSString;

@interface GKPlayerEmailInternal : GKInternalRepresentation {

	NSString* _address;
	NSString* _addressSHA1;
	NSString* _addressPrefix;
	bool _verified;

}

@property (nonatomic,retain) NSString * address;                    //@synthesize address=_address - In the implementation block
@property (nonatomic,retain) NSString * addressSHA1;                //@synthesize addressSHA1=_addressSHA1 - In the implementation block
@property (nonatomic,retain) NSString * addressPrefix;              //@synthesize addressPrefix=_addressPrefix - In the implementation block
@property (assign,nonatomic) bool verified;                         //@synthesize verified=_verified - In the implementation block
+(id)secureCodedPropertyKeys;
-(void)setAddress:(id)arg1 ;
-(id)addressSHA1;
-(void)setAddressSHA1:(id)arg1 ;
-(id)addressPrefix;
-(void)setAddressPrefix:(id)arg1 ;
-(bool)verified;
-(void)setVerified:(bool)arg1 ;
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)address;
@end

