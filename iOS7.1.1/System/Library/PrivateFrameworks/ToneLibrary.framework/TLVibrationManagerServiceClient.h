/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:37 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface TLVibrationManagerServiceClient : NSObject
+(void)sendMessage:(id)arg1 asynchronously:(bool)arg2 completionBlock:(/*^block*/ id)arg3 ;
+(void)_sendXPCMessage:(id)arg1 asynchronously:(bool)arg2 remainingAttempts:(unsigned long long)arg3 previousError:(id)arg4 completionBlock:(/*^block*/ id)arg5 ;
+(id)_sharedConnection;
@end
