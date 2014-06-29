/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:33 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UINavigationController.h>

@interface MFMailComposeViewController : UINavigationController {

	id _internal;
	/*^block*/ id _setupAnimationBlock;
	bool _didChangeStatusBarStyle;
	long long _savedStatusBarStyle;

}

@property (assign,nonatomic) <MFMailComposeViewControllerDelegate> * mailComposeDelegate; 
+(bool)hasAutosavedMessageWithIdentifier:(id)arg1 ;
+(bool)canSendMail;
+(bool)canSendMailSourceAccountManagement:(int)arg1 ;
+(void)removeAutosavedMessageWithIdentifier:(id)arg1 ;
+(unsigned long long)maximumAttachmentSize;
-(void)setCcRecipients:(id)arg1 ;
-(void)setBccRecipients:(id)arg1 ;
-(id)_internalViewController;
-(id)mailComposeDelegate;
-(id)_validEmailAddressesFromArray:(id)arg1 ;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(bool)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)viewWillAppear:(bool)arg1 ;
-(bool)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
-(void)viewDidAppear:(bool)arg1 ;
-(void)viewWillDisappear:(bool)arg1 ;
-(void)__viewControllerWillBePresented:(bool)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(void)setSubject:(id)arg1 ;
-(void)autosaveWithHandler:(/*^block*/ id)arg1 ;
-(void)setKeyboardVisible:(bool)arg1 ;
-(void)setMailComposeDelegate:(id)arg1 ;
-(void)recoverAutosavedMessageWithIdentifier:(id)arg1 ;
-(void)setSourceAccountManagement:(int)arg1 ;
-(void)setMessageBody:(id)arg1 isHTML:(bool)arg2 ;
-(void)addAttachmentData:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3 ;
-(void)requestFramesForAttachmentsWithIdentifiers:(id)arg1 resultHandler:(/*^block*/ id)arg2 ;
-(void)setContentVisible:(bool)arg1 ;
-(void)setAutorotationDelegate:(id)arg1 ;
-(void)addSetupAnimationBlock:(/*^block*/ id)arg1 ;
-(id)_addAttachmentData:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3 ;
-(void)finalizeCompositionValues;
-(void)setToRecipients:(id)arg1 ;
@end

