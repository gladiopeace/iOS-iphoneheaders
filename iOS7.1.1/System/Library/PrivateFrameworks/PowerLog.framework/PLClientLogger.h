/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:39 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PowerLog.framework/PowerLog
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PowerLog/PLXPCConnectionClient.h>

@interface PLClientLogger : PLXPCConnectionClient
+(id)sharedInstance;
-(void)PLXPCinvalidationHandler;
-(bool)logEvent:(id)arg1 withContent:(id)arg2 withContentOrder:(id)arg3 forClientID:(short)arg4 ;
@end

