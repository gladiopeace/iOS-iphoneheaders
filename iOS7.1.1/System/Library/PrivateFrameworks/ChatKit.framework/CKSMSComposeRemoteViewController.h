/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:58 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UIRemoteViewController.h>
#import <ChatKit/CKSMSComposeRemoteViewControllerDelegate.h>

@protocol CKSMSComposeRemoteViewControllerDelegate;
@interface CKSMSComposeRemoteViewController : _UIRemoteViewController <CKSMSComposeRemoteViewControllerDelegate> {

	<CKSMSComposeRemoteViewControllerDelegate>* _delegate;

}

@property (assign,nonatomic) <CKSMSComposeRemoteViewControllerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)serviceViewControllerInterface;
+(id)exportedInterface;
+(id)requestViewControllerWithConnectionHandler:(/*^block*/ id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)smsComposeControllerDataInserted;
-(void)smsComposeControllerAppeared;
-(void)smsComposeControllerCancelled;
-(void)smsComposeControllerSendStartedWithText:(id)arg1 ;
@end

