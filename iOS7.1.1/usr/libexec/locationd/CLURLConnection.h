/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:34:06 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <locationd/locationd-Structs.h>
#import <Foundation/NSURLAuthenticationChallengeSender.h>

@class CLURLConnectionSession;

@interface CLURLConnection : NSObject <NSURLAuthenticationChallengeSender> {

	CFURLConnectionRef _cfConnection;
	id _delegate;
	CLURLConnectionSession* _connectionSession;
	CFURLAuthChallengeRef _challenge;
	/*^block*/ id _authCb;
	CFURLRef _url;

}
-(void)connectionDidReceiveAuthenticationChallenge:(CFURLAuthChallengeRef)arg1 authCompletionBlock:(/*^block*/ id)arg2 ;
-(void)dealloc;
-(void)cancel;
-(void)useCredential:(id)arg1 forAuthenticationChallenge:(id)arg2 ;
-(id)initWithCFRequest:(CFURLRequestRef)arg1 delegate:(id)arg2 usingSession:(id)arg3 ;
-(void)connectionDidReceiveResponse:(CFURLResponseRef)arg1 ;
-(void)connectionDidReceiveData:(id)arg1 ;
-(void)connectionDidFinishLoading;
-(void)connectionDidFailWithError:(id)arg1 ;
-(void)connectionDidTerminate;
-(void)continueWithoutCredentialForAuthenticationChallenge:(id)arg1 ;
-(void)cancelAuthenticationChallenge:(id)arg1 ;
-(void)performDefaultHandlingForAuthenticationChallenge:(id)arg1 ;
-(void)rejectProtectionSpaceAndContinueWithChallenge:(id)arg1 ;
@end

