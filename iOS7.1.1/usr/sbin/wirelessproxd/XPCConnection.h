/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:34:50 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/sbin/wirelessproxd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSObject, NSData;

@interface XPCConnection : NSObject {

	NSObject<OS_xpc_object>* connection;
	int pid;
	id context;
	NSData* tokenData;

}

@property (assign) NSObject<OS_xpc_object> * connection; 
@property (assign) int pid; 
@property (nonatomic,retain) id context; 
@property (nonatomic,retain) NSData * tokenData; 
-(void)dealloc;
-(id)init;
-(id)description;
-(id)context;
-(void)setContext:(id)arg1 ;
-(id)connection;
-(void)setConnection:(id)arg1 ;
-(void)setTokenData:(id)arg1 ;
-(int)pid;
-(void)setPid:(int)arg1 ;
-(id)tokenData;
@end

