/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:49 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AssistantUI/AssistantUI-Structs.h>
#import <AssistantUI/AFUIQueueDelegate.h>
#import <AssistantUI/AFUISpeechSynthesisElementDelegate.h>
#import <AssistantUI/VSSpeechSynthesizerDelegate.h>
#import <AssistantUI/AFUISpeechSynthesis.h>

@protocol AFUISpeechSynthesis <NSObject>
@required
-(void)invalidate;
-(void)cancel;
-(void)enqueueText:(id)arg1 isPhonetic:(bool)arg2 provisionally:(bool)arg3 preparationIdentifier:(id)arg4 completion:(/*^block*/ id)arg5 animationIdentifier:(id)arg6;
-(void)enqueueText:(id)arg1 completion:(/*^block*/ id)arg2;
-(void)skipCurrentSynthesis;
@end


@protocol AFUISpeechSynthesisDelegate;
@class AFVoiceInfo, VSSpeechSynthesizer, AFUIQueue, NSMutableArray;

@interface AFUISpeechSynthesis : NSObject <AFUIQueueDelegate, AFUISpeechSynthesisElementDelegate, VSSpeechSynthesizerDelegate, AFUISpeechSynthesis> {

	AFVoiceInfo* _outputVoice;
	<AFUISpeechSynthesisDelegate>* _delegate;
	<AFUISpeechSynthesisDelegate>* _localDelegate;
	VSSpeechSynthesizer* _synthesizer;
	AFUIQueue* _elementQueue;
	NSMutableArray* _activeElements;

}

@property (nonatomic,retain) <AFUISpeechSynthesisDelegate> * delegate;                              //@synthesize delegate=_delegate - In the implementation block
@property (getter=_synthesizer,nonatomic,readonly) VSSpeechSynthesizer * synthesizer;               //@synthesize synthesizer=_synthesizer - In the implementation block
@property (getter=_elementQueue,nonatomic,readonly) AFUIQueue * elementQueue;                       //@synthesize elementQueue=_elementQueue - In the implementation block
@property (getter=_activeElements,nonatomic,readonly) NSMutableArray * activeElements;              //@synthesize activeElements=_activeElements - In the implementation block
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(void)invalidate;
-(void)cancel;
-(void).cxx_destruct;
-(void)speechSynthesisElementSynthesisEligibilityDidChange:(id)arg1 ;
-(void)queue:(id)arg1 didEnqueueObjects:(id)arg2 ;
-(void)enqueueText:(id)arg1 isPhonetic:(bool)arg2 provisionally:(bool)arg3 preparationIdentifier:(id)arg4 completion:(/*^block*/ id)arg5 animationIdentifier:(id)arg6 ;
-(void)enqueueText:(id)arg1 completion:(/*^block*/ id)arg2 ;
-(void)skipCurrentSynthesis;
-(void)setOutputVoice:(id)arg1 ;
-(id)_synthesizer;
-(id)_activeElements;
-(id)_elementQueue;
-(void)_cancelByCancellingActiveElementsOnly:(bool)arg1 ;
-(void)_processElementQueue;
-(bool)isSynthesisQueueEmpty;
-(void)_processProvisionalElements;
-(void)setAudioSessionID:(unsigned)arg1 ;
-(void)speechSynthesizer:(id)arg1 didStartSpeakingRequest:(id)arg2 ;
-(void)speechSynthesizer:(id)arg1 didFinishSpeakingRequest:(id)arg2 successfully:(bool)arg3 withError:(id)arg4 ;
-(bool)isSpeaking;
@end

