/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:46 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface AAActivationLockService : NSObject {

	unsigned long long _lastKnownState;
	bool _hasAttemptedToFetchState;
	bool _wantsToEnable;
	NSObject<OS_dispatch_queue>* _stateUpdateQueue;

}
+(id)sharedInstance;
-(id)init;
-(bool)isEnabled;
-(void)enable;
-(void).cxx_destruct;
-(void)_updateStateAndNotify:(bool)arg1 ;
-(bool)isChangingState;
-(void)disableWithWipeToken:(id)arg1 ;
-(void)setShouldEnable:(bool)arg1 ;
-(bool)shouldEnable;
@end

