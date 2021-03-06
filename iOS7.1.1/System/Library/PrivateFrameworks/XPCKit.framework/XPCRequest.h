/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:03 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/XPCKit.framework/XPCKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSObject;

@interface XPCRequest : NSObject {

	/*^block*/ id _handler;
	unsigned long long _sequence;
	NSObject<OS_xpc_object>* _message;
	NSObject<OS_xpc_object>* _reply;

}

@property (nonatomic,readonly) unsigned long long sequence;                    //@synthesize sequence=_sequence - In the implementation block
@property (nonatomic,readonly) NSObject<OS_xpc_object> * message;              //@synthesize message=_message - In the implementation block
@property (nonatomic,readonly) NSObject<OS_xpc_object> * reply;                //@synthesize reply=_reply - In the implementation block
-(unsigned long long)sequence;
-(id)message;
-(void).cxx_destruct;
-(id)reply;
-(void)sendReply;
-(id)initWithMessage:(id)arg1 sequence:(unsigned long long)arg2 connection:(id)arg3 ;
@end

