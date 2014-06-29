/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:52 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface UIRemoteApplication : NSObject {

	NSString* _machServiceName;
	unsigned _port;

}
-(void)dealloc;
-(id)initWithMachServiceName:(id)arg1 ;
-(void)updatePort;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(void)hideTopMostMiniAlert;
-(void)showTopMostMiniAlertWithSynchronizationPort:(unsigned)arg1 ;
-(void)statusBarWillChangeOrientation:(long long)arg1 duration:(float)arg2 ;
-(void)simpleRemoteActionDidOccur:(long long)arg1 ;
-(void)sheetWithRemoteViewIdentifierDidDismiss:(id)arg1 ;
-(void)remoteNotificationRegistrationSucceededWithDeviceToken:(id)arg1 ;
-(void)remoteNotificationRegistrationFailedWithErrorDomain:(id)arg1 code:(long long)arg2 localizedDescription:(id)arg3 ;
-(void)remoteNotificationMessageDelivered;
-(void)localNotificationMessageDelivered:(id)arg1 ;
-(void)localNotificationDidSnooze:(id)arg1 ;
-(void)backgroundContinuationEnabledDidChange:(bool)arg1 ;
-(void)wakeTimerFired;
-(void)didTakeScreenshot;
@end

