/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:34:50 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/sbin/BTLEServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSObject;

@interface BTLEXpcServer : NSObject {

	NSObject<OS_xpc_object>* _server;

}
+(id)instance;
-(void)handleConnection:(id)arg1 ;
-(id)init;
-(void)handleEvent:(id)arg1 ;
-(void)start;
@end

