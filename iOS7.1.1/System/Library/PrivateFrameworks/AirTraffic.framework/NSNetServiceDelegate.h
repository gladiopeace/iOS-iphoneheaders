/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:44 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol NSNetServiceDelegate <NSObject>
@optional
-(void)netService:(id)arg1 didNotPublish:(id)arg2;
-(void)netServiceWillPublish:(id)arg1;
-(void)netService:(id)arg1 didAcceptConnectionWithInputStream:(id)arg2 outputStream:(id)arg3;
-(void)netServiceDidStop:(id)arg1;
-(void)netServiceDidResolveAddress:(id)arg1;
-(void)netService:(id)arg1 didNotResolve:(id)arg2;
-(void)netServiceWillResolve:(id)arg1;
-(void)netService:(id)arg1 didUpdateTXTRecordData:(id)arg2;
-(void)netServiceDidPublish:(id)arg1;
@end

