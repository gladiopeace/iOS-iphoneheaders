/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:58 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/XPCKit.framework/XPCKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol NSCoding;
@class NSData, XPCRequest;

@interface XPCNSRequest : NSObject {

	id<NSCoding> _message;
	NSData* _data;
	XPCRequest* _request;

}

@property (nonatomic,retain,readonly) XPCRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,retain,readonly) id<NSCoding> message;              //@synthesize message=_message - In the implementation block
@property (nonatomic,retain,readonly) NSData * data;                     //@synthesize data=_data - In the implementation block
-(NSData *)data;
-(id<NSCoding>)message;
-(XPCRequest *)request;
-(void)sendReply:(id)arg1 ;
-(id)initWithXPCRequest:(id)arg1 ;
@end

