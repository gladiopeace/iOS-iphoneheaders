/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:26:55 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol XPCClientDelegate <NSObject>
@optional
-(void)messageNotSent:(id)arg1;

@required
-(void)connectionInterrupted;
-(void)messageArrived:(id)arg1;
-(void)connectionDied;

@end
