/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:34 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMAVCore/IMAVConferenceInterface.h>

@interface IMAVEmbeddedInterface : IMAVConferenceInterface
+(void)updateCriticalState;
-(void)startInterruptionForChat:(id)arg1 ;
-(void)chatStateUpdated;
-(void)_conferenceWillStart:(id)arg1 ;
-(void)_conferenceEnded:(id)arg1 ;
-(void)endInterruptionForChat:(id)arg1 ;
-(long long)_checkNetworkForChat:(id)arg1 requiresWifi:(bool)arg2 ;
-(long long)_runPingTestForChat:(id)arg1 ;
-(void)_setAudioSessionPropertiesForChat:(id)arg1 ;
-(id)_chatForAudioPropertiesIgnoringChat:(id)arg1 ;
@end

