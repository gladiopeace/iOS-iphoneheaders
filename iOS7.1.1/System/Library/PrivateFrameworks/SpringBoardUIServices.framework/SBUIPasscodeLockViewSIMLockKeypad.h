/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:17 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoardUIServices/SBUIPasscodeLockViewLongNumericKeypad.h>

@class UILabel, UIView, NSString;

@interface SBUIPasscodeLockViewSIMLockKeypad : SBUIPasscodeLockViewLongNumericKeypad {

	UILabel* _statusSubtitleView;
	UIView* _entryFieldFiller;
	double _targetEntryFieldFillerAlpha;
	bool _isShowingStatus;
	UIView* _statusSpringView;
	UIView* _statusSpringViewParent;

}

@property (nonatomic,@dynamic,copy) NSString * statusTitle; 
@property (nonatomic,@dynamic,copy) NSString * statusSubtitle; 
-(void)dealloc;
-(id)init;
-(void)layoutSubviews;
-(void)setBackgroundAlpha:(double)arg1 ;
-(void)setCustomBackgroundColor:(id)arg1 ;
-(void)resetForFailedPasscode;
-(id)statusTitle;
-(void)setStatusTitle:(id)arg1 ;
-(id)statusSubtitle;
-(void)setStatusSubtitle:(id)arg1 ;
-(void)_setHasInput:(bool)arg1 ;
-(void)_layoutStatusView;
-(bool)_showsPromptLabelOnEntryField;
-(id)_statusSubtitleFont;
-(void)forceShowStatus:(bool)arg1 ;
-(void)_setText:(id)arg1 onLabel:(id)arg2 ;
-(bool)_needsToHideTextFieldForStatus;
-(void)_shakeStatus;
-(void)_sizeLabel:(id)arg1 ;
-(double)_expectedYOffsetBetweenTitleAndSubtitleViews;
-(double)_subtitleBaselineYOffsetFromTopOfNumberPad;
-(double)_subtitleBaselineYOffsetFromTopOfEntryField;
-(double)_expectedDistanceBetweenTitleAndSubtitleBaselines;
-(double)_distanceToFirstLineBaseline:(id)arg1 ;
-(double)_distanceFromLastLineBaselineToTextFieldBoundsHeight:(id)arg1 ;
@end

