/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:34:29 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <sharingd/sharingd-Structs.h>
#import <sharingd/SDBonjourPublisherDelegate.h>
#import <sharingd/WPAWDLDelegate.h>

@protocol OS_dispatch_queue, SDWormholeServerDelegate;
@class WPAWDL, NSMutableSet, NSNumber, NSTimer, NSObject, SDStatusMonitor, NSString, SDBonjourPublisher, NSMutableDictionary;

@interface SDWormholeServer : NSObject <SDBonjourPublisherDelegate, WPAWDLDelegate> {

	BOOL _screenOn;
	WPAWDL* _proximity;
	NSMutableSet* _discoveredHashes;
	NSNumber* _portNumber;
	NSTimer* _disableTimer;
	NSObject<OS_dispatch_queue>* _queue;
	SecIdentityRef _identity;
	CFHTTPServerRef _server;
	double _startTime;
	SDStatusMonitor* _monitor;
	NSString* _discoverableMode;
	SDBonjourPublisher* _publisher;
	NSMutableDictionary* _properties;
	CFDictionaryRef _connections;
	BOOL _contactsOnly;
	<SDWormholeServerDelegate>* _delegate;

}

@property (assign) BOOL contactsOnly;                                  //@synthesize contactsOnly=_contactsOnly - In the implementation block
@property (__weak) <SDWormholeServerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)addObservers;
-(void)removeObservers;
-(void)appleIDChanged:(id)arg1 ;
-(void)consoleUserChanged:(id)arg1 ;
-(BOOL)contactsOnly;
-(void)setContactsOnly:(BOOL)arg1 ;
-(void)bonjourPublisher:(id)arg1 propertiesDidChange:(id)arg2 ;
-(void)systemWillSleep:(id)arg1 ;
-(void)notifyClient:(long)arg1 withResults:(id)arg2 ;
-(void)handleTerminalCallBack;
-(void)didReceiveError:(CFErrorRef)arg1 ;
-(void)timeoutFired:(id)arg1 ;
-(void)invalidateTimer;
-(void)startHTTPServer:(unsigned short)arg1 ;
-(void)startProximityScanner;
-(void)publishedInfoChanged:(id)arg1 ;
-(void)updateServerState;
-(BOOL)discoverableByContactsOnly;
-(BOOL)discoverableByEveryone;
-(BOOL)evaluateHash:(id)arg1 ;
-(void)stopProximityScanner;
-(void)stopProximityScannerAndStartServer;
-(void)lockStateChange:(id)arg1 ;
-(void)screenStateChange:(id)arg1 ;
-(void)discoverableModeChanged:(id)arg1 ;
-(void)airDropUnpublished:(id)arg1 ;
-(void)wirelessChanged:(id)arg1 ;
-(void)setDiffieHellmanParams:(id)arg1 ;
-(id)sslSettings;
-(void)didOpenConnection:(CFHTTPServerConnectionRef)arg1 ;
-(void)didCloseConnection:(CFHTTPServerConnectionRef)arg1 ;
-(void)systemHasPoweredOn:(id)arg1 ;
-(void)startServer;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(void)start;
-(void)startTimer;
-(void).cxx_destruct;
-(void)stop;
-(BOOL)isDiscoverable;
-(void)addressBookChanged:(id)arg1 ;
-(BOOL)awdl:(id)arg1 foundDevice:(id)arg2 ;
-(void)awdlDidUpdateState:(id)arg1 ;
@end

