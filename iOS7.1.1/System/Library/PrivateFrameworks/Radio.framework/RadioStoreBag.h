/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:46 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDictionary, NSString, SSVPlatformContext, NSNumber, NSURL;

@interface RadioStoreBag : NSObject {

	NSDictionary* _mescalRequestWhitelist;
	NSDictionary* _mescalResponseWhitelist;
	NSString* _mescalSetupCertURLString;
	NSString* _mescalSetupURLString;
	SSVPlatformContext* _platformContext;
	NSNumber* _shouldSendKBSyncDataValue;
	NSString* _srdnldURLString;
	NSDictionary* _tiltDictionary;

}

@property (nonatomic,readonly) NSURL * baseURL; 
@property (nonatomic,readonly) NSString * platformLookupURLString; 
@property (nonatomic,readonly) NSDictionary * radioConfigurationDictionary;              //@synthesize tiltDictionary=_tiltDictionary - In the implementation block
@property (nonatomic,readonly) bool shouldSendKBSyncData; 
@property (nonatomic,readonly) NSString * streamingDownloadURLString;                    //@synthesize srdnldURLString=_srdnldURLString - In the implementation block
@property (nonatomic,readonly) NSString * mescalCertificateURLString;                    //@synthesize mescalSetupCertURLString=_mescalSetupCertURLString - In the implementation block
@property (nonatomic,readonly) NSString * mescalSetupURLString;                          //@synthesize mescalSetupURLString=_mescalSetupURLString - In the implementation block
-(id)radioConfigurationDictionary;
-(id)baseURL;
-(void).cxx_destruct;
-(bool)shouldSendKBSyncData;
-(id)_initWithURLBagDictionary:(id)arg1 ;
-(id)platformLookupURLString;
-(bool)shouldMescalSignRequestWithURL:(id)arg1 ;
-(bool)shouldMescalVerifyResponseFromURL:(id)arg1 ;
-(id)_initWithCacheRepresentation:(id)arg1 ;
-(id)_cacheRepresentation;
-(id)_platformContext;
-(id)mescalCertificateURLString;
-(id)mescalSetupURLString;
-(id)streamingDownloadURLString;
@end

