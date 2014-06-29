/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:12 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Assistant/UIPlugins/GeneralKnowledge.siriUIBundle/GeneralKnowledge
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeneralKnowledge/GeneralKnowledge-Structs.h>
#import <GeneralKnowledge/SiriGKView.h>

@class UILabel, SAGKLinkedAnswer;

@interface SiriGKWebLinkView : SiriGKView {

	UILabel* _titleLabel;
	UILabel* _urlLabel;
	UILabel* _descriptionLabel;
	SAGKLinkedAnswer* _answer;

}
-(id)initWithLinkedAnswer:(id)arg1 safariBackURL:(id)arg2 ;
-(double)_baselineOffset;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void).cxx_destruct;
@end

