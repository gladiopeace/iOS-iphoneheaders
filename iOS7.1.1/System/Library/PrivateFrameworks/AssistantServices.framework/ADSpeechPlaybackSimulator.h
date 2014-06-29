/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 3:35:06 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/assistantd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <assistantd/ADSpeechCapturing.h>

@protocol ADSpeechCapturingDelegate, OS_dispatch_source;
@class NSObject;

@interface ADSpeechPlaybackSimulator : NSObject <ADSpeechCapturing> {

	<ADSpeechCapturingDelegate>* _delegate;
	NSObject<OS_dispatch_source>* _playbackSource;

}
+(id)_speechLogDecodingError;
-(void)cancelSpeechCaptureSuppressingAlert:(BOOL)arg1 ;
-(void)setSpeechEvent:(int)arg1 deviceIdentifier:(id)arg2 ;
-(void)startPlaybackWithURL:(id)arg1 narrowBand:(BOOL)arg2 dictation:(BOOL)arg3 completion:(/*^block*/ id)arg4 ;
-(void)stopSpeechCaptureForEvent:(int)arg1 ;
-(void)setSpeechPacketDuration:(int)arg1 ;
-(void)setSpeechWasRecognized;
-(void)releaseAudioSession;
-(void)setDelegate:(id)arg1 ;
-(void).cxx_destruct;
-(void)setUseAutomaticEndpointing:(BOOL)arg1 ;
@end

