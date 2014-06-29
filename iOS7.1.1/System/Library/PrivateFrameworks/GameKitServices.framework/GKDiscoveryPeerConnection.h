/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:23 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameKitServices/GameKitServices-Structs.h>
#import <GameKitServices/GKSimpleTimerDelegate.h>

@protocol OS_dispatch_queue;
@class NSString, GKAsyncSocket, NSMutableData, NSMutableArray, NSObject, GKSimpleTimer;

@interface GKDiscoveryPeerConnection : NSObject <GKSimpleTimerDelegate> {

	NSString* _remoteServiceName;
	NSString* _localServiceName;
	id _peer;
	bool _connected;
	GKAsyncSocket* _connectionSocket;
	NSMutableData* _dataReceived;
	unsigned _currentSequenceNumber;
	NSMutableData* _dataToSendHoldingQueue;
	NSMutableArray* _receivedDataHoldingQueue;
	NSMutableArray* _messageReceiptHandlerList;
	NSMutableArray* _messageReceiptHandlerHoldingQueue;
	/*^block*/ id _receiveDataHandler;
	/*^block*/ id _connectedHandler;
	NSObject<OS_dispatch_queue>* _syncQueue;
	NSObject<OS_dispatch_queue>* _targetQueue;
	GKSimpleTimer* _heartbeatTimer;
	GKSimpleTimer* _heartbeatTimeoutTimer;
	GKSimpleTimer* _timeoutTimer;
	double _connectionTimeoutInSeconds;
	double _heartbeatIntervalInSeconds;

}

@property (nonatomic,copy) NSString * remoteServiceName;                             //@synthesize remoteServiceName=_remoteServiceName - In the implementation block
@property (nonatomic,copy) id receiveDataHandler;                                    //@synthesize receiveDataHandler=_receiveDataHandler - In the implementation block
@property (nonatomic,copy) id connectedHandler;                                      //@synthesize connectedHandler=_connectedHandler - In the implementation block
@property (assign,nonatomic) NSObject<OS_dispatch_queue> * syncQueue;                //@synthesize syncQueue=_syncQueue - In the implementation block
@property (assign,nonatomic) NSObject<OS_dispatch_queue> * targetQueue;              //@synthesize targetQueue=_targetQueue - In the implementation block
@property (nonatomic,copy) NSString * localServiceName;                              //@synthesize localServiceName=_localServiceName - In the implementation block
+(unsigned long long)receiveDataLimit;
+(unsigned long long)sendDataLimit;
+(void)checkConstants;
-(id)syncQueue;
-(void)dealloc;
-(void)invalidate;
-(void)setReceiveDataHandler:(/*^block*/ id)arg1 ;
-(void)sendData:(id)arg1 withCompletionHandler:(/*^block*/ id)arg2 ;
-(void)setConnectedHandler:(/*^block*/ id)arg1 ;
-(void)timeout:(id)arg1 ;
-(/*^block*/ id)receiveDataHandler;
-(id)localServiceName;
-(id)initWithLocalServiceName:(id)arg1 ;
-(void)connectToSockAddr:(const sockaddr*)arg1 port:(unsigned short)arg2 ;
-(void)attachSocketDescriptor:(int)arg1 ;
-(id)targetQueue;
-(/*^block*/ id)connectedHandler;
-(void)setSyncQueue:(id)arg1 ;
-(void)setLocalServiceName:(id)arg1 ;
-(void)syncSendHello;
-(void)syncReceivedData:(id)arg1 error:(id)arg2 ;
-(void)syncConnected:(id)arg1 ;
-(bool)syncSetupNewSocket;
-(id)remoteServiceName;
-(void)syncCloseConnectionNow;
-(void)syncSendMessage:(int)arg1 data:(id)arg2 withCompletionHandler:(/*^block*/ id)arg3 ;
-(void)setRemoteServiceName:(id)arg1 ;
-(void)syncSendMessageReceipt:(int)arg1 sequenceNumber:(unsigned)arg2 ;
-(bool)shouldDecideAboutConnection;
-(void)syncSendAccept;
-(void)syncAcceptedConnection;
-(void)syncProcessMessage:(int)arg1 data:(id)arg2 sequenceNumber:(unsigned)arg3 ;
-(void)setTargetQueue:(id)arg1 ;
@end

