/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:17 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Assistant/UIPlugins/System.siriUIBundle/System
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SiriUI/SiriUIAceObjectViewController.h>

@class ACAssistantConfirmView, SAUIConfirmationView;

@interface ACAssistantConfirmationViewController : SiriUIAceObjectViewController {

	bool _hasSentCommands;

}

@property (nonatomic,retain) ACAssistantConfirmView * view; 
@property (nonatomic,retain) SAUIConfirmationView * aceObject; 
-(bool)triggerConfirmation;
-(void)_cancelButtonHit:(id)arg1 ;
-(void)_confirmButtonHit:(id)arg1 ;
-(bool)triggerDenial;
-(bool)_sendCommands:(id)arg1 ;
-(double)desiredHeightForWidth:(double)arg1 ;
-(void)loadView;
-(void)viewDidLoad;
-(bool)removedAfterDialogProgresses;
@end

