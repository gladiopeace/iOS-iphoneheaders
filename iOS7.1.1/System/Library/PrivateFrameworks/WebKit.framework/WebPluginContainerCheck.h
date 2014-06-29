/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:00 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol WebPluginContainerCheckController;
@class NSURLRequest, NSString, WebPolicyDecisionListener;

@interface WebPluginContainerCheck : NSObject {

	NSURLRequest* _request;
	NSString* _target;
	<WebPluginContainerCheckController>* _controller;
	id _resultObject;
	SEL _resultSelector;
	id _contextInfo;
	bool _done;
	WebPolicyDecisionListener* _listener;

}
+(id)checkWithRequest:(id)arg1 target:(id)arg2 resultObject:(id)arg3 selector:(SEL)arg4 controller:(id)arg5 contextInfo:(id)arg6 ;
-(void)dealloc;
-(void)cancel;
-(void)start;
-(id)contextInfo;
-(void)finalize;
-(id)initWithRequest:(id)arg1 target:(id)arg2 resultObject:(id)arg3 selector:(SEL)arg4 controller:(id)arg5 contextInfo:(id)arg6 ;
-(void)_continueWithPolicy:(int)arg1 ;
-(id)_actionInformationWithURL:(id)arg1 ;
-(bool)_isForbiddenFileLoad;
-(void)_askPolicyDelegate;
@end

