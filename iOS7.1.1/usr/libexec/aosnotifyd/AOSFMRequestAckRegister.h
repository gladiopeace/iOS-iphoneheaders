/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:32:28 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/aosnotifyd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <aosnotifyd/AOSFMRequest.h>

@class AOSFindBaseServiceProvider, NSDictionary, NSURL;

@interface AOSFMRequestAckRegister : AOSFMRequest {

	AOSFindBaseServiceProvider* _provider;
	NSDictionary* _registerCommand;
	NSURL* _ackURL;

}

@property (nonatomic,retain) AOSFindBaseServiceProvider * provider;              //@synthesize provider=_provider - In the implementation block
@property (nonatomic,retain) NSDictionary * registerCommand;                     //@synthesize registerCommand=_registerCommand - In the implementation block
@property (nonatomic,retain) NSURL * ackURL;                                     //@synthesize ackURL=_ackURL - In the implementation block
-(id)initWithProvider:(id)arg1 registerCommand:(id)arg2 ackURL:(id)arg3 ;
-(BOOL)canReplace:(id)arg1 ;
-(void)deinitializeRequest;
-(id)requestUrl;
-(void)setAckURL:(id)arg1 ;
-(id)ackURL;
-(void)setRegisterCommand:(id)arg1 ;
-(id)registerCommand;
-(void)setProvider:(id)arg1 ;
-(void).cxx_destruct;
-(id)requestBody;
-(id)provider;
@end

