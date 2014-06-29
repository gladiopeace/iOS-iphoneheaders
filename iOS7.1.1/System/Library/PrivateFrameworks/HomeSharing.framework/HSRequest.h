/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:31 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <HomeSharing/HomeSharing-Structs.h>
@class NSString, NSData, NSDictionary, NSMutableArray;

@interface HSRequest : NSObject {

	NSString* _action;
	NSData* _bodyData;
	NSDictionary* _headers;
	NSDictionary* _arguments;
	CFHTTPMessageRef _message;
	long long _method;
	bool _excludeSessionIDFromURL;
	NSMutableArray* _cachedBodyDataBlocks;
	bool _concurrent;

}

@property (nonatomic,readonly) NSString * action;                                //@synthesize action=_action - In the implementation block
@property (getter=isConcurrent,nonatomic,readonly) bool concurrent;              //@synthesize concurrent=_concurrent - In the implementation block
@property (assign,nonatomic) long long method;                                   //@synthesize method=_method - In the implementation block
@property (nonatomic,readonly) double timeoutInterval; 
@property (nonatomic,copy) NSData * bodyData;                                    //@synthesize bodyData=_bodyData - In the implementation block
@property (assign,nonatomic) bool excludeSessionIDFromURL;                       //@synthesize excludeSessionIDFromURL=_excludeSessionIDFromURL - In the implementation block
+(id)request;
-(id)initWithAction:(id)arg1 ;
-(bool)isConcurrent;
-(double)timeoutInterval;
-(void)setValue:(id)arg1 forArgument:(id)arg2 ;
-(id)bodyData;
-(void)dealloc;
-(id)description;
-(id)action;
-(long long)method;
-(void)setValue:(id)arg1 forHeaderField:(id)arg2 ;
-(id)descriptionWithoutHeaderFields;
-(CFHTTPMessageRef)CFHTTPMessageForBaseURL:(id)arg1 sessionID:(unsigned)arg2 ;
-(id)canonicalResponseForResponse:(id)arg1 ;
-(id)_defaultHeaderFields;
-(id)_methodStringForMethod:(long long)arg1 ;
-(id)requestURLForBaseURL:(id)arg1 sessionID:(unsigned)arg2 ;
-(bool)acceptsGzipEncoding;
-(void)cacheBodyDataBlock:(id)arg1 ;
-(void)appendCachedBodyDataBlocksIntoData:(id)arg1 clearCache:(bool)arg2 ;
-(unsigned)cachedBodyDataBlocksLength;
-(bool)excludeSessionIDFromURL;
-(void)setExcludeSessionIDFromURL:(bool)arg1 ;
-(void)setBodyData:(id)arg1 ;
-(void)setMethod:(long long)arg1 ;
@end

