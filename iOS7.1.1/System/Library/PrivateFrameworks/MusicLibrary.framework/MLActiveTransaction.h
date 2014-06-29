/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:54 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore;
@class ML3DatabaseConnection, NSObject, NSUUID, NSXPCConnection;

@interface MLActiveTransaction : NSObject {

	ML3DatabaseConnection* _connection;
	NSObject<OS_dispatch_semaphore>* _connectionSemaphore;
	bool _terminable;
	bool _inUseByOperation;
	bool _startedByOperation;
	bool _connectionInUse;
	NSUUID* _identifier;
	NSXPCConnection* _xpcConnection;
	double _lastUsedTime;

}

@property (nonatomic,retain) NSUUID * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSXPCConnection * xpcConnection;              //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (assign,nonatomic) double lastUsedTime;                          //@synthesize lastUsedTime=_lastUsedTime - In the implementation block
@property (assign,nonatomic) bool terminable;                              //@synthesize terminable=_terminable - In the implementation block
@property (assign,nonatomic) bool inUseByOperation;                        //@synthesize inUseByOperation=_inUseByOperation - In the implementation block
@property (assign,nonatomic) bool startedByOperation;                      //@synthesize startedByOperation=_startedByOperation - In the implementation block
@property (nonatomic,readonly) bool connectionInUse;                       //@synthesize connectionInUse=_connectionInUse - In the implementation block
-(id)init;
-(id)description;
-(id)identifier;
-(void)setIdentifier:(id)arg1 ;
-(void).cxx_destruct;
-(void)setTerminable:(bool)arg1 ;
-(void)useConnectionWithBlock:(/*^block*/ id)arg1 ;
-(void)setStartedByOperation:(bool)arg1 ;
-(void)updateLastUsed;
-(void)setInUseByOperation:(bool)arg1 ;
-(id)xpcConnection;
-(id)initWithConnection:(id)arg1 identifier:(id)arg2 xpcConnection:(id)arg3 ;
-(id)relinquishConnection:(bool)arg1 ;
-(double)lastUsedTime;
-(bool)connectionInUse;
-(bool)inUseByOperation;
-(bool)terminable;
-(id)checkoutTransactionConnection;
-(void)checkInTransactionConnection:(id)arg1 ;
-(void)setXpcConnection:(id)arg1 ;
-(void)setLastUsedTime:(double)arg1 ;
-(bool)startedByOperation;
@end

