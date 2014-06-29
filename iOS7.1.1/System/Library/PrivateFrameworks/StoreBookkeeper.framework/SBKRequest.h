/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:19 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSURL, NSString, NSData, NSDictionary, ISDataProvider;

@interface SBKRequest : NSObject {

	bool _shouldAuthenticate;
	NSURL* _requestURL;
	NSString* _action;
	NSData* _bodyData;
	long long _bodyContentType;
	NSDictionary* _headers;
	NSDictionary* _arguments;
	long long _method;
	ISDataProvider* _responseDataProvider;
	bool _concurrent;
	bool _includeDeviceGUID;

}

@property (getter=isConcurrent,nonatomic,readonly) bool concurrent;              //@synthesize concurrent=_concurrent - In the implementation block
@property (assign,nonatomic) long long method;                                   //@synthesize method=_method - In the implementation block
@property (nonatomic,readonly) double timeoutInterval; 
@property (assign,nonatomic) bool shouldAuthenticate;                            //@synthesize shouldAuthenticate=_shouldAuthenticate - In the implementation block
@property (assign,nonatomic) bool includeDeviceGUID;                             //@synthesize includeDeviceGUID=_includeDeviceGUID - In the implementation block
@property (nonatomic,retain) NSData * bodyData;                                  //@synthesize bodyData=_bodyData - In the implementation block
@property (nonatomic,retain) ISDataProvider * responseDataProvider;              //@synthesize responseDataProvider=_responseDataProvider - In the implementation block
+(id)_methodStringForMethod:(long long)arg1 ;
+(long long)bodyContentEncodingType;
+(long long)bodyContentType;
+(id)_contentEncodingTypeStringForBodyContentEncodingType:(long long)arg1 ;
+(id)_contentTypeStringForBodyContentType:(long long)arg1 ;
+(id)requestWithRequestURL:(id)arg1 ;
-(bool)isConcurrent;
-(double)timeoutInterval;
-(void)setValue:(id)arg1 forArgument:(id)arg2 ;
-(id)bodyData;
-(id)description;
-(long long)method;
-(void).cxx_destruct;
-(void)setValue:(id)arg1 forHeaderField:(id)arg2 ;
-(id)descriptionWithoutHeaderFields;
-(id)canonicalResponseForResponse:(id)arg1 ;
-(id)_defaultHeaderFields;
-(bool)acceptsGzipEncoding;
-(void)setBodyData:(id)arg1 ;
-(bool)shouldAuthenticate;
-(void)setShouldAuthenticate:(bool)arg1 ;
-(id)newURLOperation;
-(id)copyRequestProperties;
-(id)responseDataProvider;
-(id)initWithRequestURL:(id)arg1 ;
-(bool)includeDeviceGUID;
-(void)setBodyDataWithPropertyList:(id)arg1 ;
-(void)setIncludeDeviceGUID:(bool)arg1 ;
-(void)setResponseDataProvider:(id)arg1 ;
-(void)setMethod:(long long)arg1 ;
@end

