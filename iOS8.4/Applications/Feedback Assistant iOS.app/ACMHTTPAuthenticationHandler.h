/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:28 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Feedback Assistant iOS.app/Feedback Assistant iOS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Feedback Assistant iOS/ACMHTTPHandler.h>

@class ACMInitialToken, NSString, NSDate;

@interface ACMHTTPAuthenticationHandler : ACMHTTPHandler {

	ACMInitialToken* _token;
	NSString* _policyVersion;
	id _request;
	int _tryCounter;
	NSDate* _startInvocationDate;

}

@property (nonatomic,retain) ACMInitialToken * token;                   //@synthesize token=_token - In the implementation block
@property (nonatomic,retain) NSString * policyVersion;                  //@synthesize policyVersion=_policyVersion - In the implementation block
@property (nonatomic,retain) id request;                                //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) NSString * realm; 
@property (assign,nonatomic) int tryCounter;                            //@synthesize tryCounter=_tryCounter - In the implementation block
@property (nonatomic,retain) NSDate * startInvocationDate;              //@synthesize startInvocationDate=_startInvocationDate - In the implementation block
+(id)handlerWithRequest:(id)arg1 ;
+(id)handlerWithToken:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)request;
-(ACMInitialToken *)token;
-(void)setToken:(ACMInitialToken *)arg1 ;
-(id)requestBody;
-(void)setRequest:(id)arg1 ;
-(NSString *)realm;
-(void)setPolicyVersion:(NSString *)arg1 ;
-(void)launchMethodInvocation;
-(void)setTryCounter:(int)arg1 ;
-(void)setStartInvocationDate:(NSDate *)arg1 ;
-(NSString *)policyVersion;
-(void)didStopWithError:(id)arg1 ;
-(void)didReceiveResponse:(id)arg1 ;
-(int)tryCounter;
-(NSDate *)startInvocationDate;
-(char)isConnectionError:(id)arg1 ;
-(char)shouldRetryMethodInvocationAfterError:(id)arg1 ;
@end
