/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:07:26 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MobileAccessoryUpdater.framework/Resources/fud
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSCoding.h>

@protocol OS_dispatch_queue, OS_xpc_object;
@class NSString, NSObject;

@interface ClientInfo : NSObject <NSCoding> {

	NSString* name;
	NSObject<OS_dispatch_queue>* eventQueue;
	NSObject<OS_xpc_object>* connection;
	BOOL didRequestReconnect;
	BOOL didSuspendEventQueue;
	BOOL isInternalClient;

}

@property (readonly) NSString * name; 
@property (readonly) NSObject<OS_xpc_object> * connection; 
@property (assign) BOOL didRequestReconnect; 
@property (assign) BOOL isInternalClient; 
-(id)initWithName:(id)arg1 connection:(id)arg2 ;
-(void)setIsInternalClient:(BOOL)arg1 ;
-(id)initWithName:(id)arg1 connection:(id)arg2 isInternalClient:(BOOL)arg3 ;
-(BOOL)isInternalClient;
-(void)setDidRequestReconnect:(BOOL)arg1 ;
-(BOOL)didRequestReconnect;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)name;
-(id)connection;
-(void)setConnection:(id)arg1 ;
-(BOOL)sendMessage:(id)arg1 ;
@end

