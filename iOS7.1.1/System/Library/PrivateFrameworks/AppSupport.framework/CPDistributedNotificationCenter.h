/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:45 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AppSupport/AppSupport-Structs.h>
@class NSString, NSLock;

@interface CPDistributedNotificationCenter : NSObject {

	NSString* _centerName;
	NSLock* _lock;
	CFRunLoopSourceRef _receiveNotificationSource;
	bool _isServer;
	CFDictionaryRef _sendPorts;
	unsigned long long _startCount;

}
+(id)_serverPortToNotificationCenterMapDispatchQueue;
+(CFDictionaryRef)_serverPortToNotificationCenterMap;
+(void)setCenter:(id)arg1 forServerPort:(unsigned)arg2 ;
+(id)centerForServerPort:(unsigned)arg1 ;
+(id)centerNamed:(id)arg1 ;
-(bool)postNotificationName:(id)arg1 userInfo:(id)arg2 toBundleIdentifier:(id)arg3 ;
-(void)runServerOnCurrentThread;
-(void)dealloc;
-(void)runServer;
-(id)name;
-(id)_initWithServerName:(id)arg1 ;
-(void)_checkOutAndRemoveSource;
-(void)_checkIn;
-(void)startDeliveringNotificationsToRunLoop:(CFRunLoopRef)arg1 ;
-(void)_createReceiveSourceForRunLoop:(CFRunLoopRef)arg1 ;
-(void)deliverNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)_receivedCheckIn:(unsigned)arg1 auditToken:(SCD_Struct_CP4*)arg2 ;
-(void)_notificationServerWasRestarted;
-(void)postNotificationName:(id)arg1 ;
-(void)startDeliveringNotificationsToMainThread;
-(void)stopDeliveringNotifications;
-(void)postNotificationName:(id)arg1 userInfo:(id)arg2 ;
@end

