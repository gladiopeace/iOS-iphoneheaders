/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 4:04:37 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/Support/iap2d
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, iAP2Connection;

@interface iAP2MsgSiri : NSObject {

	bool _lastKnownAvailability;
	bool _isNetworkReachable;
	bool _isWifiEnabled;
	bool _isSiriEnabled;
	bool _siriStatusNotificationStarted;
	NSObject<OS_dispatch_queue>* _siriObserverQ;
	iAP2Connection* _connection;

}

@property (nonatomic,readonly) iAP2Connection * connection;                   //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic) bool siriStatusNotificationStarted; 
-(void)shuttingDown;
-(void)_sendSiriStatusNotification;
-(void)_wifiEnabledDidChange:(id)arg1 ;
-(void)_assistantPreferenceDidChange:(id)arg1 ;
-(bool)siriStatusNotificationStarted;
-(void)setSiriStatusNotificationStarted:(bool)arg1 ;
-(void)dealloc;
-(id)description;
-(id)connection;
-(id)initWithConnection:(id)arg1 ;
-(void)_networkReachabilityDidChange:(id)arg1 ;
@end

