/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 3:35:06 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/assistantd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ADCommandCenterSpeechDelegate <NSObject>
@required
-(void)adSpeechRecordingDidFail:(id)arg1;
-(void)adSpeechRecognitionDidFail:(id)arg1;
-(void)adSpeechRecordingDidEnd;
-(void)adSpeechRecognized:(id)arg1 usingSpeechModel:(id)arg2;
-(void)adSpeechRecordingWillBegin;
-(void)adSpeechRecordingDidBeginOnAVRecordRoute:(id)arg1;
-(void)adSpeechRecordingDidUpdateAveragePower:(float)arg1 peakPower:(float)arg2;
-(void)adSpeechRecordingDidCancel;
@end

