/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:37 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <PassKit/PKCaptureDelegate.h>
#import <ManagedConfiguration/NSURLConnectionDataDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol PKCodeAcquisitionDelegate;
@class UINavigationBar, PKCaptureSession, PKReticleView, NSURLConnection, NSMutableData, UILabel, UIProgressView, NSSet;

@interface PKCodeAcquisitionViewController : UIViewController <PKCaptureDelegate, NSURLConnectionDataDelegate, UIGestureRecognizerDelegate> {

	UINavigationBar* _navBar;
	PKCaptureSession* _captureSession;
	PKReticleView* _reticleView;
	NSURLConnection* _downloadConnection;
	NSMutableData* _downloadData;
	long long _downloadExpectedContentSize;
	UILabel* _captionLabel;
	UIProgressView* _downloadProgressView;
	UILabel* _errorLabel;
	UILabel* _helpLabel;
	NSSet* _supportedBarcodeTypes;
	<PKCodeAcquisitionDelegate>* _delegate;

}

@property (assign,nonatomic) <PKCodeAcquisitionDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)captureOutput:(id)arg1 didOutputMetadataObjects:(id)arg2 fromConnection:(id)arg3 ;
-(void)captureSession:(id)arg1 isRunning:(bool)arg2 ;
-(void)_cleanupDownload;
-(void)_setCaptureUIState:(int)arg1 animated:(bool)arg2 ;
-(void)_restartCaptureSession;
-(void)_handleFoundCode:(id)arg1 ;
-(void)_handleDownloadFailureWithReason:(id)arg1 ;
-(void)_handleDownloadedPass:(id)arg1 ;
-(void)_handleDownloadFailureWithReason:(id)arg1 errorToDisplay:(id)arg2 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(bool)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(bool)arg1 ;
-(void)viewWillDisappear:(bool)arg1 ;
-(void)viewDidDisappear:(bool)arg1 ;
-(void)cancel;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)_handleSingleTap:(id)arg1 ;
@end

