/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 3:35:06 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/assistantd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ADSpeechManagerDelegate
@required
-(void)speechManager:(id)arg1 preheatWithRecordingInfo:(id)arg2;
-(void)speechManager:(id)arg1 willStartRecordingAtTimestamp:(double)arg2;
-(void)speechManager:(id)arg1 didStartWithRecordingInfo:(id)arg2;
-(void)speechManager:(id)arg1 capturedPackets:(id)arg2 totalCount:(int)arg3;
-(void)speechManager:(id)arg1 updatedAveragePower:(float)arg2 peakPower:(float)arg3;
-(void)speechManager:(id)arg1 finishedWithTotalPackets:(int)arg2 endpointMode:(int)arg3;
-(void)speechManagerDidCancel:(id)arg1;
-(void)speechManager:(id)arg1 didFailWithError:(id)arg2;
@end

