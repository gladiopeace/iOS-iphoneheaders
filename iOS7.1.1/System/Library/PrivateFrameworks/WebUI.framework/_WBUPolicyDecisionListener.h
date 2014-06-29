/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:01 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebUI/WebPolicyDecisionListener.h>

@protocol WebPolicyDecisionListener;
@class WebFrame, NSDictionary;

@interface _WBUPolicyDecisionListener : NSObject <WebPolicyDecisionListener> {

	WebFrame* _frame;
	int _navigationType;
	NSDictionary* _formMetadata;
	<WebPolicyDecisionListener>* _originalListener;

}
-(void)download;
-(void)dealloc;
-(void)ignore;
-(void)use;
-(id)initWithFrame:(id)arg1 navigationType:(int)arg2 formMetadata:(id)arg3 originalListener:(id)arg4 ;
@end

