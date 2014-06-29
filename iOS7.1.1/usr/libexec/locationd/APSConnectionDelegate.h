/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:34:06 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol APSConnectionDelegate <NSObject>
@optional
-(void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;
-(void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
-(void)connection:(id)arg1 didReceiveMessageForTopic:(id)arg2 userInfo:(id)arg3;
-(void)connection:(id)arg1 didSendOutgoingMessage:(id)arg2;
-(void)connection:(id)arg1 didFailToSendOutgoingMessage:(id)arg2 error:(id)arg3;
-(void)connection:(id)arg1 didChangeConnectedStatus:(BOOL)arg2;
-(void)connectionDidReconnect:(id)arg1;

@required
-(void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
@end

