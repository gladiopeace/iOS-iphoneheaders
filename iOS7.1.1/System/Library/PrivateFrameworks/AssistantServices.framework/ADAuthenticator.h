/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 3:35:06 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/assistantd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <assistantd/assistantd-Structs.h>
@class NSObject, NSData;

@interface ADAuthenticator : NSObject {

	int _state;
	NSObject<OS_dispatch_queue>* _queue;
	NACContextOpaque_Ref _nacContext;
	NSData* _requestData;
	NSData* _sessionInfo;
	double _duration;

}

@property (setter=_setRequestData:,nonatomic,retain) NSData * _requestData;              //@synthesize requestData=_requestData - In the implementation block
@property (setter=_setSessionInfo:,nonatomic,retain) NSData * _sessionInfo;              //@synthesize sessionInfo=_sessionInfo - In the implementation block
+(BOOL)authenticationAvailable;
-(id)_sessionInfo;
-(id)initWithTargetQueue:(id)arg1 ;
-(void)setSessionInfo:(id)arg1 duration:(double)arg2 ;
-(id)signedDataForData:(id)arg1 ;
-(double)sessionInfoDuration;
-(void)prepareWithCertificateData:(id)arg1 completion:(/*^block*/ id)arg2 ;
-(void)_setNACContext:(NACContextOpaque_Ref)arg1 ;
-(void)_setRequestData:(id)arg1 ;
-(void)_getSessionRequestForCertificate:(id)arg1 completion:(/*^block*/ id)arg2 ;
-(id)_requestData;
-(long)_signData:(id)arg1 withSessionInfo:(id)arg2 signedData:(id*)arg3 ;
-(id)requestData;
-(void)dealloc;
-(int)state;
-(void)reset;
-(void).cxx_destruct;
-(void)_setSessionInfo:(id)arg1 ;
@end

