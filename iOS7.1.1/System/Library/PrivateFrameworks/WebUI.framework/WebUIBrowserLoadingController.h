/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:01 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol WebUIBrowserLoadingControllerDelegate;
@class NSURL, NSArray, NSString, NSError, WebDataSource, UIWebBrowserView;

@interface WebUIBrowserLoadingController : NSObject {

	NSURL* _backURL;
	NSURL* _forwardURL;
	NSArray* _fallbackURLs;
	bool _securePageHasInsecureContent;
	NSString* _lastSuccessfulURLString;
	bool _loadStartedDuringSimulatedClick;
	bool _loadEndedWithError;
	bool _loadStoppedFromAPI;
	NSError* _errorThatCausedLoadToEnd;
	WebDataSource* _dataSourceWithError;
	unsigned _pendingFrameLoadMessages;
	NSString* _userTypedAddress;
	bool _canGoBack;
	bool _canGoForward;
	bool _loading;
	bool _simulatingClick;
	float _estimatedProgress;
	<WebUIBrowserLoadingControllerDelegate>* _delegate;
	UIWebBrowserView* _browserView;
	NSString* _title;
	NSString* _URLString;
	NSURL* _URL;
	long long _loadingState;

}

@property (assign,nonatomic) <WebUIBrowserLoadingControllerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIWebBrowserView * browserView;                                  //@synthesize browserView=_browserView - In the implementation block
@property (nonatomic,readonly) bool canGoBack;                                                //@synthesize canGoBack=_canGoBack - In the implementation block
@property (nonatomic,readonly) bool canGoForward;                                             //@synthesize canGoForward=_canGoForward - In the implementation block
@property (getter=isSecure,nonatomic,readonly) bool secure; 
@property (getter=isLoading,nonatomic,readonly) bool loading;                                 //@synthesize loading=_loading - In the implementation block
@property (assign,nonatomic) long long loadingState;                                          //@synthesize loadingState=_loadingState - In the implementation block
@property (assign,nonatomic) float estimatedProgress;                                         //@synthesize estimatedProgress=_estimatedProgress - In the implementation block
@property (nonatomic,copy) NSString * title;                                                  //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * URLString;                                          //@synthesize URLString=_URLString - In the implementation block
@property (nonatomic,retain) NSURL * URL;                                                     //@synthesize URL=_URL - In the implementation block
@property (getter=isSimulatingClick,nonatomic,readonly) bool simulatingClick;                 //@synthesize simulatingClick=_simulatingClick - In the implementation block
-(void)setLoadingState:(long long)arg1 ;
-(long long)loadingState;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)setTitle:(id)arg1 ;
-(void)reload;
-(id)delegate;
-(id)title;
-(id)URL;
-(bool)isSecure;
-(void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2 ;
-(void)webView:(id)arg1 didFirstVisuallyNonEmptyLayoutInFrame:(id)arg2 ;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 forFrame:(id)arg3 ;
-(void)webView:(id)arg1 didChangeLocationWithinPageForFrame:(id)arg2 ;
-(void)webView:(id)arg1 didCommitLoadForFrame:(id)arg2 ;
-(bool)isLoading;
-(bool)canGoBack;
-(bool)canGoForward;
-(void)setURL:(id)arg1 ;
-(void)stopLoading;
-(void)goBack;
-(void)goForward;
-(void)webView:(id)arg1 didStartProvisionalLoadForFrame:(id)arg2 ;
-(void)webView:(id)arg1 didReceiveTitle:(id)arg2 forFrame:(id)arg3 ;
-(void)webView:(id)arg1 didClearWindowObject:(id)arg2 forFrame:(id)arg3 ;
-(void)webView:(id)arg1 didReceiveServerRedirectForProvisionalLoadForFrame:(id)arg2 ;
-(void)webView:(id)arg1 didFailProvisionalLoadWithError:(id)arg2 forFrame:(id)arg3 ;
-(void)loadUserTypedAddress:(id)arg1 ;
-(void)setBrowserView:(id)arg1 ;
-(float)estimatedProgress;
-(id)URLString;
-(void)webView:(id)arg1 didHandleOnloadEventsForFrame:(id)arg2 ;
-(void)webThreadWebView:(id)arg1 didLayout:(unsigned long long)arg2 ;
-(id)initWithDelegate:(id)arg1 ;
-(id)browserView;
-(void)_setBackURL:(id)arg1 ;
-(void)_setForwardURL:(id)arg1 ;
-(void)_attemptTransitionToLoadingState:(long long)arg1 ;
-(void)setEstimatedProgress:(float)arg1 ;
-(void)_setLoading:(bool)arg1 withError:(bool)arg2 ;
-(id)_dataSourceURL;
-(void)_performWebViewLoadSelector:(SEL)arg1 forceProgress:(bool)arg2 ;
-(bool)_URLMayStartLoad:(id)arg1 ;
-(void)_setLoading:(bool)arg1 withError:(bool)arg2 fromDelegate:(bool)arg3 fromFragmentLoad:(bool)arg4 ;
-(void)_setLoadingFromDelegate:(bool)arg1 withError:(id)arg2 dataSource:(id)arg3 ;
-(void)_setLoading:(bool)arg1 withError:(bool)arg2 fromDelegate:(bool)arg3 ;
-(void)_updateURLString;
-(id)_getDataSourceURL:(id)arg1 ;
-(void)_updateURL;
-(void)_updateBackForward;
-(void)_setLoading:(bool)arg1 withError:(bool)arg2 fromFragmentLoad:(bool)arg3 ;
-(void)_setUserTypedAddress:(id)arg1 ;
-(void)_setFallbackURLs:(id)arg1 ;
-(void)_loadRequest:(id)arg1 userDriven:(bool)arg2 ;
-(void)_tryMultipleURLs:(id)arg1 forWebClip:(id)arg2 ;
-(void)_mightLoadURL:(id)arg1 ;
-(void)_didNotLoadURL;
-(void)_progressChanged:(id)arg1 ;
-(void)_updateAfterHistoryChange;
-(void)_setSecurePageHasInsecureContent:(bool)arg1 ;
-(void)loadStartedDuringSimulatedClickForURL:(id)arg1 ;
-(void)didDrawTiles;
-(void)_forceStartLoading;
-(void)_forceStopLoadingFromDelegateWithError:(id)arg1 ;
-(void)loadRequest:(id)arg1 userDriven:(bool)arg2 ;
-(void)loadWebClip:(id)arg1 userDriven:(bool)arg2 ;
-(void)beginSimulatedClickForURL:(id)arg1 ;
-(void)finishSimulatedClick;
-(void)reportNetworkDataUsageOfRawBytesSent:(unsigned long long)arg1 rawBytesReceived:(unsigned long long)arg2 cellularBytesSent:(unsigned long long)arg3 cellularBytesReceived:(unsigned long long)arg4 ;
-(void)webView:(id)arg1 willPerformClientRedirectToURL:(id)arg2 delay:(double)arg3 fireDate:(id)arg4 forFrame:(id)arg5 ;
-(void)webView:(id)arg1 didCancelClientRedirectForFrame:(id)arg2 ;
-(void)webView:(id)arg1 didPushStateWithinPageForFrame:(id)arg2 ;
-(void)webView:(id)arg1 didReplaceStateWithinPageForFrame:(id)arg2 ;
-(void)webView:(id)arg1 didPopStateWithinPageForFrame:(id)arg2 ;
-(void)webView:(id)arg1 didRemoveFrameFromHierarchy:(id)arg2 ;
-(void)webViewDidDisplayInsecureContent:(id)arg1 ;
-(void)webView:(id)arg1 didRunInsecureContent:(id)arg2 ;
-(bool)isSimulatingClick;
@end

