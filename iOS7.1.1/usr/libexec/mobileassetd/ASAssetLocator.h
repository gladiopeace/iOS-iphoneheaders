/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:34:28 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/mobileassetd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSURL;

@interface ASAssetLocator : NSObject {

	NSURL* _assetLocatorURL;

}

@property (nonatomic,copy) NSURL * assetLocatorURL;              //@synthesize assetLocatorURL=_assetLocatorURL - In the implementation block
+(id)assetLocator;
-(void)setAssetLocatorURL:(id)arg1 ;
-(id)localCacheServerURLForAssetURL:(id)arg1 error:(id*)arg2 ;
-(id)_retryAfterDate;
-(void)_setRetryAfterDate:(id)arg1 ;
-(bool)_shouldUseAssetLocator;
-(id)_ipAddress;
-(id)_sendHTTPRequest:(id)arg1 returningResponse:(id*)arg2 error:(id*)arg3 ;
-(void)localCacheServerURLForAssetURL:(id)arg1 completionHandler:(/*^block*/ id)arg2 ;
-(id)assetLocatorURL;
-(void)dealloc;
-(id)init;
@end

