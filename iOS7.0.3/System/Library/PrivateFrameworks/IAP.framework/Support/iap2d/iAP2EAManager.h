/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:07:08 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/Support/iap2d
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <iap2d/iap2d-Structs.h>
@class NSLock, NSMutableDictionary;

@interface iAP2EAManager : NSObject {

	NSLock* _connectedAccessoriesLock;
	bool _bLocationDeviceEnabled;
	NSMutableDictionary* _clients;
	NSLock* _clientLock;

}

@property (nonatomic,readonly) NSLock * connectedAccessoriesLock;              //@synthesize connectedAccessoriesLock=_connectedAccessoriesLock - In the implementation block
+(void)removeConnectionFromAlertList:(id)arg1 ;
+(id)newPlistForAccessory:(id)arg1 ;
+(unsigned)generateClientID;
+(id)stringForClientID:(unsigned)arg1 ;
+(void)_updatePlistWithAccessoryProtocolsInternal:(id)arg1 ;
+(id)sharedManager;
-(void)updateTimeSyncInfo:(unsigned)arg1 withNewOffset:(id)arg2 ;
-(void)detachAccessory:(id)arg1 ;
-(void)setLocationDeviceEnabled:(bool)arg1 forClientID:(unsigned)arg2 ;
-(void)locationDeviceSetFilter:(id)arg1 ;
-(unsigned)addClientWithCapabilities:(unsigned)arg1 auditToken:(SCD_Struct_iA12)arg2 currentClientID:(unsigned)arg3 andBundleId:(id)arg4 ;
-(BOOL)accessoryForConnection:(id)arg1 ;
-(BOOL)openSessionForClientID:(unsigned)arg1 connection:(id)arg2 protocolID:(unsigned char)arg3 sessionID:(unsigned short*)arg4 ;
-(id)sessionForAccessoryWithConnection:(id)arg1 andSessionID:(unsigned short)arg2 ;
-(BOOL)closeSessionForConnection:(id)arg1 sessionID:(unsigned short)arg2 notifyApp:(BOOL)arg3 ;
-(void)notifyOfAccessoryConnectionEvent:(bool)arg1 ;
-(BOOL)sessionsOpenForDisplayIdentifer:(const char*)arg1 ;
-(void)attachAccessory:(id)arg1 ;
-(void)updateAccessory:(id)arg1 ;
-(bool)isLocationDeviceEnabled;
-(void)locationDeviceNMEAAvailable;
-(id)connectedAccessoriesLock;
-(id)_EADirectProtocolArrayForDeviceID:(unsigned long long)arg1 ;
-(void)_unregisteredClientAssertionTimerFired:(id)arg1 ;
-(void)_shouldPostNoAppAlert:(id)arg1 ;
-(void)_takeClientAssertionsForAccessoryConnection;
-(void)_notifyiapdOfAccessoryConnectionEvent:(bool)arg1 ;
-(void)updateValueFromIap:(id)arg1 forPort:(id)arg2 andPortProperty:(id)arg3 forAccessory:(unsigned)arg4 updateApp:(bool)arg5 ;
-(void)_takeClientAssertionsForAccessoryDisconnection;
-(BOOL)_isProtocolContainedInWhitelist:(id)arg1 ;
-(id)connectionIDObjectForConnectionID:(unsigned)arg1 ;
-(void)removeClientWithID:(unsigned)arg1 ;
-(void)updateValueFromIap:(id)arg1 forPort:(id)arg2 andPortProperty:(id)arg3 forAccessory:(unsigned)arg4 ;
-(void)updateValueFromApp:(id)arg1 ;
-(id)valueForProperty:(id)arg1 forAccessoryConnection:(id)arg2 ;
-(void)updateVehicleStatus:(unsigned)arg1 withNewStatus:(id)arg2 ;
-(void)updatePlistWithProtocolsForConnection:(id)arg1 ;
-(id)connectedAccessories;
-(void)dealloc;
-(id)init;
-(void)reset;
-(void)_applicationStateChanged:(id)arg1 ;
@end

