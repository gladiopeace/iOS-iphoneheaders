/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:13 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Assistant/UIPlugins/Microblog.siriUIBundle/Microblog
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Microblog/Microblog-Structs.h>
#import <UIKit/UIView.h>

@class SAMicroblogMicroblogSearchResultPost, UILabel, UIImageView, ACTwitterRetweetsView;

@interface ACTwitterSearchTweetListItemView : UIView {

	SAMicroblogMicroblogSearchResultPost* _twitterPost;
	UILabel* _fullNameLabel;
	UILabel* _screenNameLabel;
	UIImageView* _profileImageView;
	UILabel* _tweetLabel;
	UILabel* _dateLabel;
	ACTwitterRetweetsView* _retweetsView;

}
+(id)_absoluteCreationDateFormatter;
-(id)_tweetLabelAttributes;
-(id)_dateLabelAttributes;
-(double)_topLineBaseline;
-(id)_screenNameLabelAttributes;
-(id)_tweetLabelEmphasisedAttributes;
-(id)initWithTwitterPost:(id)arg1 ;
-(id)_contentTextForPost:(id)arg1 ;
-(id)_tweetLabelHyperlinkAttributes;
-(id)_fullNameLabelAttributes;
-(void)_enumerateMatchingRangesForString:(id)arg1 inString:(id)arg2 usingBlock:(/*^block*/ id)arg3 ;
-(CGSize)_calculateSizeForWidth:(double)arg1 setFrames:(bool)arg2 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(double)_bottomPadding;
-(void).cxx_destruct;
@end

