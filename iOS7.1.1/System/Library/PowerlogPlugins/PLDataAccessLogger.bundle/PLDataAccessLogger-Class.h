/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:14 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PowerlogPlugins/PLDataAccessLogger.bundle/PLDataAccessLogger
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PowerlogLoggerSupport/PLLogger.h>

@interface PLDataAccessLogger : PLLogger {

	int _mailAccountChangeNotifyToken;

}
-(id)humanReadableDAKey:(id)arg1 ;
-(void)logDataWaitingToBeSynced;
-(void)logForAccountsChanged;
-(void)logMailAccounts;
-(void)_addConnectionDataToString:(id)arg1 forUUID:(id)arg2 ;
-(void)logDataReceived;
-(void)logPingSent;
-(void)dealloc;
-(id)init;
-(void)log;
@end

