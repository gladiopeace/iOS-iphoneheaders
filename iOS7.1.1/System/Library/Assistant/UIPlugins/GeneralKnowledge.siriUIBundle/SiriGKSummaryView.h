/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:12 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Assistant/UIPlugins/GeneralKnowledge.siriUIBundle/GeneralKnowledge
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeneralKnowledge/GeneralKnowledge-Structs.h>
#import <GeneralKnowledge/SiriGKView.h>

@class UITextView, UILabel, UIImageView, UIView;

@interface SiriGKSummaryView : SiriGKView {

	UITextView* _summaryTextView;
	UILabel* _captionLabel;
	UIImageView* _insetImageView;
	UIView* _placeholderView;

}
-(CGSize)_sizeThatFits:(CGSize)arg1 setFrames:(bool)arg2 ;
-(void)_configureWithImage:(id)arg1 ;
-(id)initWithText:(id)arg1 caption:(id)arg2 imageResource:(id)arg3 usingPersistentStore:(id)arg4 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void).cxx_destruct;
@end

