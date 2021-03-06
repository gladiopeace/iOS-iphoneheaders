/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:57:04 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/geod
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSObject, NSDictionary, GEOPeer, NSString;

@interface GEOMessage : NSObject {

	NSObject*<OS_xpc_object> _xpcMessage;
	NSDictionary* _decodedMessage;
	GEOPeer* _peer;

}

@property (nonatomic,readonly) NSString * messageName; 
@property (nonatomic,readonly) id userInfo; 
@property (nonatomic,readonly) GEOPeer * peer;                      //@synthesize peer=_peer - In the implementation block
-(id)initWithXPCMessage:(id)arg1 peer:(id)arg2 ;
-(NSString *)messageName;
-(GEOPeer *)peer;
-(void)dealloc;
-(id)userInfo;
-(void)sendReply:(id)arg1 ;
-(void)finalize;
@end

