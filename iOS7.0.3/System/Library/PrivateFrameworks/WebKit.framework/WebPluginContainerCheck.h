/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:58:32 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
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
	BOOL _done;
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
-(BOOL)_isForbiddenFileLoad;
-(void)_askPolicyDelegate;
@end

