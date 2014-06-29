/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:15 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Setup/Setup-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIWebViewDelegate.h>

@class UIToolbar, UIWebView, UIAlertView;

@interface iForgotView : UIView <UIWebViewDelegate> {

	UIToolbar* _toolbar;
	UIWebView* _webView;
	BOOL _loaded;
	BOOL _dismissed;
	BOOL _needLoadingIndicator;
	UIAlertView* _failedToConnectAlert;

}

@property (nonatomic,readonly) BOOL needLoadingIndicator;              //@synthesize needLoadingIndicator=_needLoadingIndicator - In the implementation block
-(BOOL)needLoadingIndicator;
-(void)_showiForgotFailure:(id)arg1 ;
-(void)_iForgotConnect:(id)arg1 ;
-(void)donePressed:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(void)load;
-(void)willDismiss;
@end

