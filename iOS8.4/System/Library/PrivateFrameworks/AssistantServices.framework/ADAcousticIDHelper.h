/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:20:48 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/assistantd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol ADAcousticIDHelperDelegate;
@class SAAIStartSession, NSMutableSet, SAAISearchCompleted;

@interface ADAcousticIDHelper : NSObject {

	id<ADAcousticIDHelperDelegate> _delegate;
	SAAIStartSession* _currentSession;
	NSMutableSet* _outstandingSearches;
	SAAISearchCompleted* _completed;
	BOOL _sessionIsComplete;
	double _minumumFingerprintDuration;

}

@property (assign,nonatomic,__weak) id<ADAcousticIDHelperDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(BOOL)sessionIsComplete;
-(id)cancelSessionCommand;
-(void)failCurrentSession;
-(BOOL)hasRelatedCommandForRefId:(id)arg1 ;
-(void)handleCommandFailed:(id)arg1 ;
-(void)handleSearchCompleted:(id)arg1 ;
-(void)handleRetrySearch:(id)arg1 ;
-(BOOL)shouldSendFingerprintForDuration:(double)arg1 ;
-(id)searchCommandForFingerprintData:(id)arg1 withDuration:(double)arg2 ;
-(void)startNewAcousticIDSessionWithRequestId:(id)arg1 refId:(id)arg2 ;
-(void)_clearOutstandingSearchIds;
-(void)_addOutstandingSearchId:(id)arg1 ;
-(void)_removeOutstandingSearchForRefId:(id)arg1 ;
-(void)setDelegate:(id<ADAcousticIDHelperDelegate>)arg1 ;
-(id<ADAcousticIDHelperDelegate>)delegate;
-(void)reset;
-(id)currentSession;
@end

