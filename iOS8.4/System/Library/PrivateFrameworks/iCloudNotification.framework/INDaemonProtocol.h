/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:26:59 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iCloudNotification.framework/ind
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol INDaemonProtocol <NSObject>
@required
-(void)registerAccountWithID:(id)arg1 foriCloudNotificationsWithReason:(unsigned long long)arg2 completion:(/*^block*/id)arg3;
-(void)unregisterAccountWithID:(id)arg1 fromiCloudNotificationsWithCompletion:(/*^block*/id)arg2;
-(void)clearAllRegistrationDigestsWithCompletion:(/*^block*/id)arg1;
-(void)diagnosticReportWithCompletion:(/*^block*/id)arg1;

@end

