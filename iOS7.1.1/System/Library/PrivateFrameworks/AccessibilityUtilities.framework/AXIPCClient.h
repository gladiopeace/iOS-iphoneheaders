/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:38 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
@class NSLock, NSString, NSMutableArray, AXAccessQueue;

@interface AXIPCClient : NSObject {

	CFMachPortRef _serverPort;
	NSLock* _serverPortLock;
	unsigned _assignedServerMachPort;
	/*^block*/ id _portDeathHandler;
	float _timeout;
	NSString* _clientIdentifier;
	CFRunLoopSourceRef _clientSource;
	unsigned long long _connectionAttempts;
	bool _connected;
	bool shouldRegisterCallbackSourceOnMainRunloop;
	unsigned clientCallbackPort;
	NSString* _serviceName;
	NSMutableArray* _postConnectionTasks;
	AXAccessQueue* _connectionQueue;
	CFRunLoopSourceRef clientCallbackSource;

}

@property (assign,getter=isConnected,nonatomic) bool connected;                           //@synthesize connected=_connected - In the implementation block
@property (nonatomic,copy) NSString * serviceName;                                        //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,readonly) unsigned serviceMachPort; 
@property (nonatomic,copy) id portDeathHandler;                                           //@synthesize portDeathHandler=_portDeathHandler - In the implementation block
@property (assign,nonatomic) float timeout;                                               //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,copy) NSString * clientIdentifier;                                   //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned clientCallbackPort; 
@property (nonatomic,readonly) CFRunLoopSourceRef clientCallbackSource; 
@property (assign,nonatomic) bool shouldRegisterCallbackSourceOnMainRunloop; 
@property (assign,nonatomic) CFMachPortRef serverPort;                                    //@synthesize serverPort=_serverPort - In the implementation block
@property (nonatomic,retain) NSMutableArray * postConnectionTasks;                        //@synthesize postConnectionTasks=_postConnectionTasks - In the implementation block
@property (nonatomic,retain) AXAccessQueue * connectionQueue;                             //@synthesize connectionQueue=_connectionQueue - In the implementation block
+(void)initialize;
+(id)allClients;
-(void)_serverDied;
-(bool)isConnected;
-(CFMachPortRef)serverPort;
-(id)serviceName;
-(void)setTimeout:(float)arg1 ;
-(float)timeout;
-(void)dealloc;
-(id)description;
-(void)_commonInit;
-(void)sendSimpleMessage:(id)arg1 ;
-(id)sendMessage:(id)arg1 withError:(id*)arg2 ;
-(void)setPortDeathHandler:(/*^block*/ id)arg1 ;
-(void)setShouldRegisterCallbackSourceOnMainRunloop:(bool)arg1 ;
-(bool)connectWithError:(id*)arg1 ;
-(unsigned)clientCallbackPort;
-(CFRunLoopSourceRef)clientCallbackSource;
-(bool)sendSimpleMessage:(id)arg1 withError:(id*)arg2 ;
-(bool)_handleErrorWithMessage:(id)arg1 outError:(id*)arg2 ;
-(void)setPostConnectionTasks:(id)arg1 ;
-(void)setConnectionQueue:(id)arg1 ;
-(void)_registerWithServer;
-(bool)shouldRegisterCallbackSourceOnMainRunloop;
-(bool)verifyConnectionExists;
-(void)setConnected:(bool)arg1 ;
-(bool)_verifyConnectionWithError:(id*)arg1 ;
-(/*^block*/ id)portDeathHandler;
-(id)postConnectionTasks;
-(void)_attemptToEstablishConnection;
-(id)initWithPort:(unsigned)arg1 ;
-(unsigned)serviceMachPort;
-(bool)disconnectWithError:(id*)arg1 ;
-(void)establishConnectionWithTimeout:(double)arg1 completion:(/*^block*/ id)arg2 ;
-(void)setServerPort:(CFMachPortRef)arg1 ;
-(id)connectionQueue;
-(void)setServiceName:(id)arg1 ;
-(id)initWithServiceName:(id)arg1 ;
-(id)clientIdentifier;
-(void)setClientIdentifier:(id)arg1 ;
@end

