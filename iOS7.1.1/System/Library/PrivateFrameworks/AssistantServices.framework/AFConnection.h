/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:48 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol AFAssistantUIService, AFSpeechDelegate;
@class NSXPCConnection, NSString, NSMutableDictionary;

@interface AFConnection : NSObject {

	NSXPCConnection* _connection;
	NSString* _outstandingRequestClass;
	bool _hasActiveRequest;
	NSMutableDictionary* _replyHandlerForAceId;
	unsigned _stateInSync : 1;
	unsigned _shouldSpeak : 1;
	unsigned _isCapturingSpeech : 1;
	unsigned _hasOutstandingRequest : 1;
	unsigned _audioSessionID;
	float _averagePower;
	float _peakPower;
	unsigned _clientStateIsInSync : 1;
	unsigned _voiceOverIsActive : 1;
	<AFAssistantUIService>* _delegate;
	<AFSpeechDelegate>* _speechDelegate;

}

@property (assign,nonatomic,__weak) <AFAssistantUIService> * delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) <AFSpeechDelegate> * speechDelegate;              //@synthesize speechDelegate=_speechDelegate - In the implementation block
@property (nonatomic,readonly) bool isRecording; 
+(bool)isAvailable;
+(void)initialize;
+(bool)assistantIsSupported;
+(void)stopMonitoringAvailability;
+(bool)userDataSyncNeeded;
+(bool)isReadyForLanguageCode:(id)arg1 ;
+(id)outputVoice;
+(void)beginMonitoringAvailability;
+(void)defrost;
+(bool)assistantIsSupportedForLanguageCode:(id)arg1 error:(id*)arg2 ;
+(id)currentLanguageCode;
-(id)_clientService;
-(id)_clientServiceWithErrorHandler:(/*^block*/ id)arg1 ;
-(void)_barrier;
-(void)_clearAssistantInfoForAccountWithIdentifier:(id)arg1 ;
-(void)startSpeechRequestWithSpeechFileAtURL:(id)arg1 isNarrowBand:(bool)arg2 ;
-(void)startSpeechRequestWithSpeechFileAtURL:(id)arg1 ;
-(void)cancelRequest;
-(bool)isRecording;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(void)_updateState;
-(void).cxx_destruct;
-(float)averagePower;
-(void)endSession;
-(id)_connection;
-(void)cancelSpeech;
-(void)stopSpeechWithOptions:(id)arg1 ;
-(void)preheat;
-(void)_updateClientState;
-(void)_requestWillBeginWithRequestClass:(id)arg1 isSpeechRequest:(bool)arg2 isBackgroundRequest:(bool)arg3 ;
-(void)_willStartRequestForSpeech:(bool)arg1 ;
-(void)_tellDelegateRequestWillStart;
-(void)_scheduleRequestTimeout;
-(void)_cancelRequestTimeout;
-(void)_tellDelegateShouldSpeakChanged:(bool)arg1 ;
-(void)_tellDelegateAudioSessionIDChanged:(unsigned)arg1 ;
-(void)_willCompleteRequest;
-(void)_willFailRequestWithError:(id)arg1 ;
-(void)_tellSpeechDelegateRecordingDidFail:(id)arg1 ;
-(void)_requestDidEnd;
-(void)_tellDelegateRequestFailed:(id)arg1 requestClass:(id)arg2 ;
-(void)_connectionInterrupted;
-(void)_invokeRequestTimeout;
-(void)_setShouldSpeak:(bool)arg1 ;
-(void)_setAudioSessionID:(unsigned)arg1 ;
-(void)_willCancelRequest;
-(void)_requestWillBeginWithRequestClass:(id)arg1 isSpeechRequest:(bool)arg2 ;
-(void)_checkAndSetIsCapturingSpeech:(bool)arg1 ;
-(void)_extendRequestTimeout;
-(void)prepareForPhoneCall;
-(void)_doCommand:(id)arg1 reply:(/*^block*/ id)arg2 ;
-(void)_speechRecordingDidUpdateAveragePower:(float)arg1 peakPower:(float)arg2 ;
-(void)_tellDelegateRequestFinished;
-(void)_tellSpeechDelegateRecordingWillBegin;
-(void)_tellSpeechDelegateRecordingDidBeginOnAVRecordRoute:(id)arg1 ;
-(void)_tellSpeechDelegateRecordingDidEnd;
-(void)_tellSpeechDelegateRecordingDidCancel;
-(void)_tellSpeechDelegateSpeechRecognized:(id)arg1 ;
-(void)_tellSpeechDelegateRecognitionDidFail:(id)arg1 ;
-(float)peakPower;
-(void)sendGenericAceCommand:(id)arg1 ;
-(id)speechDelegate;
-(void)setIsStark:(bool)arg1 ;
-(void)forceAudioSessionActive;
-(void)rollbackClearContext;
-(void)setOverriddenApplicationContext:(id)arg1 includeSmsInContext:(id)arg2 ;
-(void)sendReplyCommand:(id)arg1 ;
-(void)telephonyRequestCompleted;
-(void)setSpeechDelegate:(id)arg1 ;
-(void)setVoiceOverIsActive:(bool)arg1 ;
-(bool)shouldSpeak;
-(void)updateSpeechOptions:(id)arg1 ;
-(void)usefulUserResultWillPresent;
-(void)startSpeechRequestWithOptions:(id)arg1 ;
-(void)startSpeechPronunciationRequestWithOptions:(id)arg1 pronunciationContext:(id)arg2 ;
-(void)stopSpeech;
-(void)startDirectActionRequestWithString:(id)arg1 ;
-(void)startRequestWithText:(id)arg1 ;
-(void)startRequestWithCorrectedText:(id)arg1 forSpeechIdentifier:(id)arg2 ;
-(void)setAlertContextWithBulletins:(id)arg1 ;
-(void)setLockState:(bool)arg1 screenLocked:(bool)arg2 ;
-(void)sendGenericAceCommand:(id)arg1 conflictHandler:(/*^block*/ id)arg2 ;
-(void)clearContext;
-(void)rollbackRequest;
-(void)setApplicationContext;
-(unsigned)audioSessionID;
-(void)_clearConnection;
@end

