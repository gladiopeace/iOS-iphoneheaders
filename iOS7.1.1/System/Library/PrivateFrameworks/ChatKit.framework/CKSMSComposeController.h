/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:58 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <ChatKit/CKSMSCompose.h>
#import <ChatKit/CKSMSComposeRemoteViewControllerDelegate.h>

@class _UIAsyncInvocation, UINavigationController, CKSMSComposeRemoteViewController, CKSMSComposeQueuingRemoteViewControllerProxy;

@interface CKSMSComposeController : UIViewController <CKSMSCompose, CKSMSComposeRemoteViewControllerDelegate> {

	id _delegate;
	int _entryViewInvisible;
	_UIAsyncInvocation* _cancellationInvocation;
	UINavigationController* _clientNavigationController;
	bool _safeToAdd;
	bool _didChangeStatusBarStyle;
	long long _savedStatusBarStyle;
	CKSMSComposeRemoteViewController* _remoteViewController;
	CKSMSComposeQueuingRemoteViewControllerProxy* _remoteViewControllerProxy;

}

@property (assign,nonatomic) id delegate;                                                                           //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) CKSMSComposeRemoteViewController * remoteViewController;                               //@synthesize remoteViewController=_remoteViewController - In the implementation block
@property (nonatomic,retain) CKSMSComposeQueuingRemoteViewControllerProxy * remoteViewControllerProxy;              //@synthesize remoteViewControllerProxy=_remoteViewControllerProxy - In the implementation block
+(bool)canSendPhotos:(int)arg1 videos:(int)arg2 audioClips:(int)arg3 ;
+(bool)acceptsMIMEType:(id)arg1 ;
+(double)maxTrimDurationForAudio;
+(double)maxTrimDurationForVideo;
-(id)initWithNavigationController:(id)arg1 ;
-(id)remoteViewControllerProxy;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(bool)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)viewWillAppear:(bool)arg1 ;
-(bool)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
-(void)viewDidAppear:(bool)arg1 ;
-(void)viewWillDisappear:(bool)arg1 ;
-(void)viewDidDisappear:(bool)arg1 ;
-(void)setRemoteViewController:(id)arg1 ;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(id)remoteViewController;
-(void)forceMMS;
-(void)setCanEditRecipients:(bool)arg1 ;
-(void)smsComposeControllerDataInserted;
-(bool)insertTextPart:(id)arg1 ;
-(void)setPendingAddresses:(id)arg1 ;
-(void)setTextEntryContentsVisible:(bool)arg1 ;
-(void)smsComposeControllerAppeared;
-(void)smsComposeControllerCancelled;
-(void)smsComposeControllerSendStartedWithText:(id)arg1 ;
-(void)setText:(id)arg1 addresses:(id)arg2 ;
-(void)setText:(id)arg1 subject:(id)arg2 addresses:(id)arg3 ;
-(void)setUICustomizationData:(id)arg1 ;
-(bool)insertAttachmentWithURL:(id)arg1 andDescription:(id)arg2 ;
-(bool)insertFilename:(id)arg1 MIMEType:(id)arg2 exportedFilename:(id)arg3 ;
-(void)forceCancelComposition;
-(void)setRemoteViewControllerProxy:(id)arg1 ;
-(void)_addRemoteVCIfNeeded;
-(void)disableCameraAttachments;
-(bool)insertFilename:(id)arg1 MIMEType:(id)arg2 exportedFilename:(id)arg3 options:(id)arg4 ;
-(bool)insertData:(id)arg1 MIMEType:(id)arg2 exportedFilename:(id)arg3 ;
@end

