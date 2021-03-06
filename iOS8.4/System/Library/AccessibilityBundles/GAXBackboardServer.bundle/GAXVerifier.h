/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:14:59 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/AccessibilityBundles/GAXBackboardServer.bundle/GAXBackboardServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol GAXVerifierDelegate;
#import <GAXBackboardServer/GAXBackboardServer-Structs.h>
@class NSMutableArray, GAXVerificationEventObject;

@interface GAXVerifier : NSObject {

	BOOL _isProcessingEventQueue;
	id<GAXVerifierDelegate> _delegate;
	unsigned long long _mostRecentOutcome;
	NSMutableArray* _verifyQueue;
	GAXVerificationEventObject* _currentVerificationEvent;

}

@property (assign,nonatomic) id<GAXVerifierDelegate> delegate;                                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL isVerifyingIntegrity; 
@property (assign,nonatomic) unsigned long long mostRecentOutcome;                               //@synthesize mostRecentOutcome=_mostRecentOutcome - In the implementation block
@property (nonatomic,retain) NSMutableArray * verifyQueue;                                       //@synthesize verifyQueue=_verifyQueue - In the implementation block
@property (nonatomic,retain) GAXVerificationEventObject * currentVerificationEvent;              //@synthesize currentVerificationEvent=_currentVerificationEvent - In the implementation block
-(GAXVerificationEventObject *)currentVerificationEvent;
-(id)displayStringForOutcome:(unsigned long long)arg1 ;
-(void)_beginProcessingEventsIfNeeded;
-(void)_processNextEventInQueue;
-(unsigned long long)_verifyWithEventObject:(id)arg1 ;
-(void)setCurrentVerificationEvent:(GAXVerificationEventObject *)arg1 ;
-(void)setVerifyQueue:(NSMutableArray *)arg1 ;
-(NSMutableArray *)verifyQueue;
-(void)verifyIntegrityWithEvent:(unsigned long long)arg1 afterDelay:(double)arg2 ;
-(void)_didFinishVerifyingCurrentEventWithOutcome:(unsigned long long)arg1 error:(id)arg2 ;
-(unsigned long long)_shouldAttemptLaunchOfSessionAppWithEvent:(unsigned long long)arg1 gaxState:(SCD_Struct_GA1)arg2 ;
-(BOOL)_shouldForceAppRelaunchWithVerifyEvent:(unsigned long long)arg1 ;
-(BOOL)_appWithIdentifierIsInstalledOnDevice:(id)arg1 ;
-(void)setMostRecentOutcome:(unsigned long long)arg1 ;
-(void)verifyIntegrityWithEvent:(unsigned long long)arg1 ;
-(void)didFinishAppLaunchAttemptWithConfiguration:(unsigned)arg1 errorMessage:(id)arg2 ;
-(unsigned long long)mostRecentOutcome;
-(BOOL)isOutcomeErroneous:(unsigned long long)arg1 ;
-(BOOL)isVerifyingIntegrity;
-(void)dealloc;
-(void)setDelegate:(id<GAXVerifierDelegate>)arg1 ;
-(id)init;
-(id<GAXVerifierDelegate>)delegate;
@end

