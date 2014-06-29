/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:20 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterUI/GKChallengeEventHandlerUIDelegate.h>

@protocol GKChallengeEventHandlerUIDelegate <NSObject>
@optional
-(void)showReceivedBannerForIssuingPlayer:(id)arg1 challenge:(id)arg2 handler:(/*^block*/ id)arg3;
-(void)showRemotelyCompletedBannerForReceivingPlayer:(id)arg1 challenge:(id)arg2 handler:(/*^block*/ id)arg3;
-(void)showLocallyCompletedBannerForIssuingPlayer:(id)arg1 challenge:(id)arg2 handler:(/*^block*/ id)arg3;
@end


@interface GKChallengeEventHandlerUIDelegate : NSObject <GKChallengeEventHandlerUIDelegate>
-(void)showReceivedBannerForIssuingPlayer:(id)arg1 challenge:(id)arg2 handler:(/*^block*/ id)arg3 ;
-(void)showRemotelyCompletedBannerForReceivingPlayer:(id)arg1 challenge:(id)arg2 handler:(/*^block*/ id)arg3 ;
-(void)showLocallyCompletedBannerForIssuingPlayer:(id)arg1 challenge:(id)arg2 handler:(/*^block*/ id)arg3 ;
@end

