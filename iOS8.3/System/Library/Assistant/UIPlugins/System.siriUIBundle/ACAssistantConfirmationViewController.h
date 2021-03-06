/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:08:41 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Assistant/UIPlugins/System.siriUIBundle/System
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SiriUI/SiriUIAceObjectViewController.h>

@class ACAssistantConfirmView, SAUIConfirmationView;

@interface ACAssistantConfirmationViewController : SiriUIAceObjectViewController {

	char _hasSentCommands;

}

@property (nonatomic,retain) ACAssistantConfirmView * view; 
@property (nonatomic,retain) SAUIConfirmationView * aceObject; 
-(char)_sendCommands:(id)arg1 ;
-(char)triggerDenial;
-(void)_cancelButtonHit:(id)arg1 ;
-(void)_confirmButtonHit:(id)arg1 ;
-(char)triggerConfirmation;
-(float)desiredHeightForWidth:(float)arg1 ;
-(void)loadView;
-(void)viewDidLoad;
-(char)removedAfterDialogProgresses;
@end

