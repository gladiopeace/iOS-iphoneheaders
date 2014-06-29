/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:03 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol DATask <NSObject>
@optional
-(void)startModal;
-(void)requestCancelTaskWithReason:(int)arg1;
-(bool)shouldHoldPowerAssertion;
-(void)setTaskManager:(id)arg1;
-(bool)shouldForceNetworking;

@required
-(void)finishWithError:(id)arg1;
-(void)performTask;
-(void)cancelTaskWithReason:(int)arg1 underlyingError:(id)arg2;
@end

