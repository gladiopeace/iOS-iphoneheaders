/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:43 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileCoreServices/NSXPCListenerDelegate.h>

@class Protocol, NSXPCInterface, NSXPCListener, NSString, NSArray;

@interface SLServiceListener : NSObject <NSXPCListenerDelegate> {

	Class _sessionClass;
	Protocol* _serviceProtocol;
	NSXPCInterface* _clientInterface;
	NSXPCListener* _listener;
	NSString* _persistentStoreName;
	NSString* _managedObjectModelPath;
	NSArray* _allowedEntitlements;
	NSString* _serviceName;

}

@property (retain) NSString * serviceName;                         //@synthesize serviceName=_serviceName - In the implementation block
@property (retain) NSXPCInterface * clientInterface;               //@synthesize clientInterface=_clientInterface - In the implementation block
@property (retain) NSString * persistentStoreName;                 //@synthesize persistentStoreName=_persistentStoreName - In the implementation block
@property (retain) NSString * managedObjectModelPath;              //@synthesize managedObjectModelPath=_managedObjectModelPath - In the implementation block
-(id)serviceName;
-(bool)_verifyAuthorizationForConnection:(id)arg1 ;
-(id)initWithExportedSessionClass:(Class)arg1 serviceProtocol:(id)arg2 ;
-(void)restrictToClientsWithEntitlements:(id)arg1 ;
-(void)beginAcceptingConnections;
-(void)setPersistentStoreName:(id)arg1 ;
-(id)managedObjectModelPath;
-(void)setManagedObjectModelPath:(id)arg1 ;
-(void).cxx_destruct;
-(id)persistentStoreName;
-(bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)setServiceName:(id)arg1 ;
-(id)clientInterface;
-(void)setClientInterface:(id)arg1 ;
@end

