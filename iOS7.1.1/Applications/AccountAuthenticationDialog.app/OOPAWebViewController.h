/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:58:54 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/AccountAuthenticationDialog.app/AccountAuthenticationDialog
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AccountAuthenticationDialog/AccountAuthenticationDialog-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UIWebViewDelegate.h>
#import <UIKit/UIWebViewPrivateDelegate.h>
#import <AccountAuthenticationDialog/NSURLConnectionDataDelegate.h>

@protocol OOPAWebViewControllerDelegate;
@class UIWebView, UIBarButtonItem, NSMutableURLRequest, NSURL, NSString;

@interface OOPAWebViewController : UIViewController <UIWebViewDelegate, UIWebViewPrivateDelegate, NSURLConnectionDataDelegate> {

	UIWebView* _webView;
	BOOL _hasAlreadyAppeared;
	UIBarButtonItem* _backButton;
	UIBarButtonItem* _forwardButton;
	NSMutableURLRequest* _urlRequest;
	CFURLStorageSessionRef _storageSession;
	<OOPAWebViewControllerDelegate>* _delegate;
	NSURL* _authURL;
	NSString* _navBarTitle;

}

@property (assign,nonatomic,__weak) <OOPAWebViewControllerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSURL * authURL;                                                  //@synthesize authURL=_authURL - In the implementation block
@property (nonatomic,copy) NSString * navBarTitle;                                           //@synthesize navBarTitle=_navBarTitle - In the implementation block
-(id)navBarTitle;
-(void)_loadWebView;
-(void)_backButtonTapped:(id)arg1 ;
-(void)_forwardButtonTapped:(id)arg1 ;
-(void)_updateNavigationButtons;
-(id)authURL;
-(void)_updateNavigationPromptWithActiveURL:(id)arg1 ;
-(CFURLStorageSessionRef)_privateStorageSession;
-(void)setNavBarTitle:(id)arg1 ;
-(void)setAuthURL:(id)arg1 ;
-(id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3 ;
-(void)webViewDidStartLoad:(id)arg1 ;
-(id)uiWebView:(id)arg1 resource:(id)arg2 willSendRequest:(id)arg3 redirectResponse:(id)arg4 fromDataSource:(id)arg5 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void).cxx_destruct;
-(void)_cancelButtonTapped:(id)arg1 ;
-(BOOL)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 ;
@end

