/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:50 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UIWebViewDelegate.h>

@class UIWebView, UIToolbar;

@interface RemoteUIWebViewController : UIViewController <UIWebViewDelegate> {

	UIWebView* _webView;
	UIToolbar* _toolbar;
	id _delegate;
	bool _scalesPageToFit;

}

@property (nonatomic,readonly) UIToolbar * toolbar;              //@synthesize toolbar=_toolbar - In the implementation block
@property (nonatomic,readonly) UIWebView * webView;              //@synthesize webView=_webView - In the implementation block
@property (assign,nonatomic) bool scalesPageToFit;               //@synthesize scalesPageToFit=_scalesPageToFit - In the implementation block
-(void)donePressed:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)loadView;
-(id)toolbar;
-(id)webView;
-(bool)scalesPageToFit;
-(void)setScalesPageToFit:(bool)arg1 ;
-(void)loadURL:(id)arg1 ;
@end

