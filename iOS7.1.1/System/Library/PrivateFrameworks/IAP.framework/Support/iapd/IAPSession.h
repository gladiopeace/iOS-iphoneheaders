/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 4:04:37 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/Support/iapd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iapd/iapd-Structs.h>
@class NSMutableDictionary, EAClient;

@interface IAPSession : NSObject {

	NSMutableDictionary* _accessory;
	EAClient* _client;
	unsigned _connectionID;
	unsigned char _protocolID;
	unsigned short _sessionID;
	int _listenSock;
	CFSocketRef _listenSockRef;
	CFRunLoopSourceRef _listenSockRls;
	int _sock;
	CFSocketRef _sockRef;
	CFRunLoopSourceRef _sockRls;
	BOOL _openPipeToAppAfterAccept;
	BOOL _openPipeFromAppAfterAccept;
	BOOL _isWirelessSession;

}

@property (nonatomic,readonly) EAClient * client;                     //@synthesize client=_client - In the implementation block
@property (nonatomic,readonly) unsigned connectionID;                 //@synthesize connectionID=_connectionID - In the implementation block
@property (nonatomic,readonly) unsigned short sessionID;              //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,readonly) unsigned char protocolID;              //@synthesize protocolID=_protocolID - In the implementation block
+(void)resetSessionIDCounter;
-(BOOL)openPipeFromApp;
-(BOOL)openPipeToApp;
-(unsigned char)protocolID;
-(void)_openPipeToApp;
-(void)_openPipeFromApp;
-(BOOL)closeDataPipes;
-(void)_registerListenSocket;
-(void)_acceptSocketCB:(CFSocketRef)arg1 acceptedSock:(int)arg2 ;
-(void)_readSocketCB:(CFSocketRef)arg1 ;
-(void)_writeSocketCB:(CFSocketRef)arg1 ;
-(id)initWithClient:(id)arg1 connectionID:(unsigned)arg2 protocolID:(unsigned char)arg3 sessionID:(unsigned short*)arg4 ;
-(unsigned)connectionID;
-(void)dealloc;
-(id)init;
-(id)description;
-(unsigned short)sessionID;
-(id)client;
@end

