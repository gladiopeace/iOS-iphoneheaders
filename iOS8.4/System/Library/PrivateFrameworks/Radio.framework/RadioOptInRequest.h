/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:56 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Radio/RadioRequest.h>

@class SSURLConnectionRequest;

@interface RadioOptInRequest : RadioRequest {

	unsigned long long _accountIdentifier;
	SSURLConnectionRequest* _request;

}
-(void)cancel;
-(id)init;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)startWithOptInCompletionHandler:(/*^block*/id)arg1 ;
@end

