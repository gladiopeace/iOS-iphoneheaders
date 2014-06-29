/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:36 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol TTSSpeechService <NSObject>
@required
-(oneway void)startSpeechRequest:(id)arg1;
-(oneway void)pauseSpeechRequestAtMark:(long long)arg1 reply:(/*^block*/ id)arg2;
-(oneway void)continueSpeechRequest;
-(oneway void)stopSpeechRequestAtMark:(long long)arg1 reply:(/*^block*/ id)arg2;
-(oneway void)getVoiceNamesForLanguage:(id)arg1 reply:(/*^block*/ id)arg2;
-(oneway void)getFootprintsForVoiceName:(id)arg1 languageCode:(id)arg2 reply:(/*^block*/ id)arg3;
-(oneway void)getSpeechIsActiveReply:(/*^block*/ id)arg1;
-(oneway void)getSpeechIsActiveForConnectionReply:(/*^block*/ id)arg1;
@end

