/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:03 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WirelessProximity/XPCClientDelegate.h>

@protocol WPTapDelegate;
@class XPCClient;

@interface WPTap : NSObject <XPCClientDelegate> {

	<WPTapDelegate>* _delegate;
	XPCClient* _xpcClient;
	long long _state;

}

@property (readonly) long long state;              //@synthesize state=_state - In the implementation block
-(void)dealloc;
-(id)init;
-(id)description;
-(long long)state;
-(void).cxx_destruct;
-(void)messageArrived:(id)arg1 ;
-(void)connectionDied;
-(void)connectionInterrupted;
-(void)startWirelessTouchServer:(id)arg1 withUUID:(id)arg2 allowTransport:(unsigned char)arg3 ;
-(void)startWirelessTouchClient:(id)arg1 withUUID:(id)arg2 withTransport:(unsigned char)arg3 ;
-(void)stopWirelessTouchServer;
-(void)stopWirelessTouchClient;
@end

