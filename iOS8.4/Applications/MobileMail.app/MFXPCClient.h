/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:50 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class MFWeakReferenceHolder, NSXPCConnection;

@interface MFXPCClient : NSObject {

	MFWeakReferenceHolder* _connectionHolder;
	/*^block*/id _invalidationHandler;
	/*^block*/id _interruptionHandler;

}

@property (nonatomic,__weak,readonly) NSXPCConnection * connection; 
@property (nonatomic,copy) id invalidationHandler;                               //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,copy) id interruptionHandler;                               //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
-(id)interruptionHandler;
-(id)invalidationHandler;
-(void)dealloc;
-(id)description;
-(NSXPCConnection *)connection;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)setInterruptionHandler:(id)arg1 ;
-(char)hasEntitlement:(id)arg1 ;
-(id)initWithConnection:(id)arg1 ;
@end

