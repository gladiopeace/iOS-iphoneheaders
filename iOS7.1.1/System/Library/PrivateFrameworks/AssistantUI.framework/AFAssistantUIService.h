/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:48 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol AFAssistantUIService <NSObject>
@optional
-(void)assistantConnectionRequestWillStart:(id)arg1;
-(void)assistantConnectionDismissAssistant:(id)arg1;
-(void)assistantConnectionRequestFinished:(id)arg1;
-(void)assistantConnection:(id)arg1 receivedCommand:(id)arg2;
-(void)assistantConnection:(id)arg1 requestFailedWithError:(id)arg2 requestClass:(id)arg3;
-(void)assistantConnection:(id)arg1 openURL:(id)arg2 completion:(/*^block*/ id)arg3;
-(void)assistantConnection:(id)arg1 shouldSpeak:(bool)arg2;
-(void)assistantConnection:(id)arg1 didChangeAudioSessionID:(unsigned)arg2;
@end

