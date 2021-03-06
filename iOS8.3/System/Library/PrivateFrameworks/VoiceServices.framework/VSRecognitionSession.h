/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:07:58 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol VSRecognitionSessionDelegate;
#import <VoiceServices/VoiceServices-Structs.h>
@class NSString, VSKeepAlive, VSRecognitionAction, NSArray, VSSpeechSynthesizer;

@interface VSRecognitionSession : NSObject {

	NSString* _modelIdentifier;
	VSKeepAlive* _keepAlive;
	id<VSRecognitionSessionDelegate> _delegate;
	VSRecognitionAction* _currentAction;
	NSArray* _topLevelKeywords;
	id _handlingThread;
	VSSpeechSynthesizer* _synthesizer;
	NSString* _languageID;
	NSString* _debugDumpPath;
	NSString* _audioInputPath;
	double _levelInterval;
	unsigned _keywordPhase;
	struct {
		unsigned delegateWillBegin : 1;
		unsigned delegateBegin : 1;
		unsigned delegateOpenURL : 1;
		unsigned delegateFinishedSpeaking : 1;
		unsigned delegateComplete : 1;
		unsigned debugDumpEnabled : 1;
		unsigned preferredEngine : 2;
		unsigned performHandlerActions : 1;
		unsigned allowSensitiveActions : 1;
		unsigned bluetoothAllowed : 1;
		unsigned resetNextAction : 1;
		unsigned isSpeaking : 1;
		unsigned actionBegan : 1;
		unsigned actionBeginning : 1;
		unsigned actionBeginDeferred : 1;
		unsigned invalid : 1;
		unsigned observeKeywordChange : 1;
	}  _sessionFlags;

}
-(float)inputLevel;
-(id)cancel;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(void)_init;
-(char)isValid;
-(id)reset;
-(char)isFinished;
-(void)_setAction:(id)arg1 ;
-(void)speechSynthesizer:(id)arg1 didFinishSpeaking:(char)arg2 withError:(id)arg3 ;
-(char)isBusy;
-(void)_notifyDelegateActionStarted;
-(id)_currentRecognizeAction;
-(id)initWithModelIdentifier:(id)arg1 ;
-(id)cancelMaintainingKeepAlive:(char)arg1 ;
-(id)spokenFeedbackString;
-(id)spokenFeedbackAttributedString;
-(CFDictionaryRef)_createKeywordIndex;
-(id)_createPhaseSortedKeywordsFromArray:(id)arg1 ;
-(id)_topLevelKeywords;
-(void)_keywordIndexChanged;
-(id)_beginSpeakingAttributedString:(id)arg1 ;
-(id)beginSpeakingString:(id)arg1 ;
-(id)_beginSpeakingString:(id)arg1 attributedString:(id)arg2 ;
-(void)_notifyDelegateFinishedSpeakingWithError:(id)arg1 ;
-(id)beginNextAction;
-(char)isRecognizing;
-(char)isActivelyRecognizing;
-(char)hasDeferredAction;
-(char)nextActionWillTerminateSession;
-(char)nextActionWillRecognize;
-(void)setSensitiveActionsEnabled:(char)arg1 ;
-(char)sensitiveActionsEnabled;
-(char)setBluetoothInputAllowed:(char)arg1 ;
-(void)_actionCompleted:(id)arg1 nextAction:(id)arg2 error:(id)arg3 ;
-(char)_actionStarted:(id)arg1 ;
-(id)_notifyDelegateOpenURL:(id)arg1 ;
-(id)_recognitionResultHandlingThread;
-(void)recognitionResultHandlingThread:(id)arg1 didHandleResults:(id)arg2 nextAction:(id)arg3 ;
-(id)displayResultString;
-(id)displayStatusString;
-(void)setInputLevelUpdateInterval:(double)arg1 ;
-(float)inputLevelDB;
-(void)setKeywordPhase:(unsigned)arg1 ;
-(id)keywordAtIndex:(int)arg1 ;
-(int)keywordCount;
-(id)_keywordsForModelIdentifier:(id)arg1 ;
-(id)beginSpeakingFeedbackString;
-(char)setDebugDumpEnabled:(char)arg1 ;
-(id)debugDumpPath;
-(char)setNextRecognitionAudioInputPath:(id)arg1 ;
-(char)setNextRecognitionRequiresReset:(char)arg1 ;
-(char)setPreferredEngine:(int)arg1 ;
-(void)setPerformRecognitionHandlerActions:(char)arg1 ;
@end

