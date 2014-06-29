/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:49 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UIRemoteViewController.h>
#import <VoiceMemos/RCUIClientCurrentRecordingViewController.h>

@protocol RCCurrentRecordingViewControllerDelegate;
@interface RCCurrentRecordingRemoteViewController : _UIRemoteViewController <RCUIClientCurrentRecordingViewController> {

	<RCCurrentRecordingViewControllerDelegate>* _delegate;

}

@property (assign,nonatomic,__weak) <RCCurrentRecordingViewControllerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)serviceViewControllerInterface;
+(id)exportedInterface;
+(bool)shouldPropagateAppearanceCustomizations;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)viewDidLoad;
-(void).cxx_destruct;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)currentRecordingDidEnd;
@end

