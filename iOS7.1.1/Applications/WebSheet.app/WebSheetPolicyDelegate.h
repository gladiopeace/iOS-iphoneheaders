/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:18 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/WebSheet.app/WebSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebKit/WebDefaultPolicyDelegate.h>

@class UIWebView;

@interface WebSheetPolicyDelegate : WebDefaultPolicyDelegate {

	UIWebView* _webView;

}

@property (assign,nonatomic) UIWebView * webView;              //@synthesize webView=_webView - In the implementation block
-(id)webView;
-(void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5 ;
-(void)setWebView:(id)arg1 ;
-(id)initWithWebView:(id)arg1 ;
-(void)webView:(id)arg1 decidePolicyForMIMEType:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5 ;
-(void)webView:(id)arg1 decidePolicyForNewWindowAction:(id)arg2 request:(id)arg3 newFrameName:(id)arg4 decisionListener:(id)arg5 ;
@end

