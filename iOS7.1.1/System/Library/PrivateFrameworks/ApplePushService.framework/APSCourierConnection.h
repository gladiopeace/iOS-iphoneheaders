/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 3:34:43 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/ApplePushService.framework/apsd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <apsd/apsd-Structs.h>
#import <apsd/APSTCPStreamDelegate.h>
#import <apsd/PCConnectionManagerDelegate.h>

@protocol APSCourierConnectionDelegate;
@class NSString, APSTCPStream, PCConnectionManager, NSMutableDictionary, NSTimer;

@interface APSCourierConnection : NSObject <APSTCPStreamDelegate, PCConnectionManagerDelegate> {

	NSString* _domain;
	APSTCPStream* _streams[2];
	PCConnectionManager* _connectionManagers[2];
	NSMutableDictionary* _contexts[2];
	NSTimer* _keepAliveTimers[2];
	void** _keepAlivePowerAssertions[2];
	NSTimer* _connectionEstablishTimers[2];
	void** _connectionEstablishPowerAssertions[2];
	BOOL _isDualChannelAllowed;
	<APSCourierConnectionDelegate>* _delegate;
	int _lastAttemptedInterface;

}

@property (nonatomic,readonly) int preferredInterface; 
@property (nonatomic,readonly) int connectingInterface; 
@property (nonatomic,readonly) int nextConnectionAttemptInterface; 
@property (nonatomic,readonly) int lastAttemptedInterface; 
@property (nonatomic,readonly) BOOL isConnected; 
@property (nonatomic,readonly) BOOL hasOpenConnection; 
@property (nonatomic,readonly) unsigned countConnectedInterfaces; 
@property (assign,nonatomic) <APSCourierConnectionDelegate> * delegate; 
@property (nonatomic,readonly) NSString * tcpInfoDescription; 
@property (nonatomic,readonly) NSString * ifname; 
@property (assign,nonatomic) BOOL isDualChannelAllowed; 
@property (nonatomic,readonly) double minimumKeepAliveInterval; 
-(id)initWithEnvironment:(id)arg1 ;
-(unsigned)countConnectedInterfaces;
-(int)preferredInterface;
-(void)writeDataInBackground:(id)arg1 onInterface:(int)arg2 ;
-(BOOL)hasOpenConnection;
-(BOOL)hasKeepAliveResponseTimerOnInterface:(int)arg1 ;
-(BOOL)isConnectedOnInterface:(int)arg1 ;
-(BOOL)hasOpenConnectionOnInterface:(int)arg1 ;
-(BOOL)hasConnectionEstablishTimerOnInterface:(int)arg1 ;
-(id)ifname;
-(double)currentKeepAliveIntervalOnInterface:(int)arg1 ;
-(void)stopManagers;
-(void)resumeManagerWithAction:(int)arg1 onInterface:(int)arg2 ;
-(int)connectingInterface;
-(int)nextConnectionAttemptInterface;
-(void)stopManagerOnInterface:(int)arg1 ;
-(int)lastAttemptedInterface;
-(void)connectToEnvironment:(id)arg1 onInterface:(int)arg2 withIdentity:(SecIdentityRef)arg3 useAlternatePort:(BOOL)arg4 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 onInterface:(int)arg3 ;
-(void)closeStreamForInterface:(int)arg1 ;
-(BOOL)setIsConnected:(BOOL)arg1 onInterface:(int)arg2 ;
-(void)setIsDualChannelAllowed:(BOOL)arg1 ;
-(id)serverHostnameForInterface:(int)arg1 ;
-(id)serverIPAddressForInterface:(int)arg1 ;
-(BOOL)shouldClientScheduleReconnectDueToFailureOnInterface:(int)arg1 ;
-(id)objectForKey:(id)arg1 onInterface:(int)arg2 ;
-(void)updateConnectionManagerKeepAliveIntervalOnInterface:(int)arg1 ;
-(id)tcpInfoDescription;
-(unsigned)countOfGrowthActionsOnInterface:(int)arg1 ;
-(BOOL)hasConnectionEstablishTimer;
-(void)startConnectionEstablishTimerOnInterface:(int)arg1 ;
-(void)clearConnectionEstablishTimerOnInterface:(int)arg1 ;
-(void)startKeepAliveResponseTimerOnInterface:(int)arg1 ;
-(void)clearKeepAliveResponseTimerOnInterface:(int)arg1 ;
-(void)tcpStream:(id)arg1 receivedServerBag:(id)arg2 ;
-(void)tcpStream:(id)arg1 errorOccured:(id)arg2 ;
-(void)tcpStream:(id)arg1 hasDeterminedServerHostname:(id)arg2 ;
-(void)tcpStreamHasConnected:(id)arg1 ;
-(void)tcpStreamEndEncountered:(id)arg1 ;
-(unsigned)tcpStream:(id)arg1 dataReceived:(id)arg2 ;
-(void)writeDataInBackground:(id)arg1 ;
-(void)stopAndResetManagerOnInterface:(int)arg1 ;
-(void)_updateConnectionManagerKeepAliveIntervalWWAN;
-(void)_updateConnectionManagerKeepAliveIntervalNonCellular;
-(void)__updateConnectionManagerKeepAliveIntervalWWAN;
-(void)__updateConnectionManagerKeepAliveIntervalNonCellular;
-(void)_connectionEstablishTimerFired:(id)arg1 ;
-(void)_keepAliveResponseTimerFired:(id)arg1 ;
-(id)_currentStream;
-(BOOL)isDualChannelAllowed;
-(void)_handleDualModeChange;
-(int)_interfaceForConnectionManager:(id)arg1 ;
-(int)_interfaceForStream:(id)arg1 ;
-(BOOL)isConnected;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)connectionManager:(id)arg1 handleEvent:(int)arg2 ;
-(double)minimumKeepAliveInterval;
@end

