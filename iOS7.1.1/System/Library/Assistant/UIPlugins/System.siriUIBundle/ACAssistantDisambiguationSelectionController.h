/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:18 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Assistant/UIPlugins/System.siriUIBundle/System
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SiriUI/SiriUIAceObjectViewController.h>
#import <System/SiriUserUtteranceViewDelegate.h>

@class SiriUserUtteranceView, SAUIListItem;

@interface ACAssistantDisambiguationSelectionController : SiriUIAceObjectViewController <SiriUserUtteranceViewDelegate>

@property (nonatomic,retain) SiriUserUtteranceView * view; 
@property (nonatomic,retain) SAUIListItem * aceObject; 
-(bool)utteranceViewTextShouldPreventCorrection:(id)arg1 ;
-(void)utteranceViewTextWillBeginCorrecting:(id)arg1 ;
-(void)utteranceViewTextDidFinishCorrecting:(id)arg1 ;
-(void)utteranceViewTextDidChange:(id)arg1 ;
-(double)desiredHeightForWidth:(double)arg1 ;
-(void)loadView;
@end

