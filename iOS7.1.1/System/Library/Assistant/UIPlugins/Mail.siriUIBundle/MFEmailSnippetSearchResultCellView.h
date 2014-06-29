/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:12 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Assistant/UIPlugins/Mail.siriUIBundle/Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Mail/Mail-Structs.h>
#import <SiriUI/SiriUIContentCollectionViewCell.h>
#import <Mail/MFEmailSnippetCollectionCellView.h>

@class UILabel, UIDateLabel, UIView, UIImageView;

@interface MFEmailSnippetSearchResultCellView : SiriUIContentCollectionViewCell <MFEmailSnippetCollectionCellView> {

	UILabel* _addressLabel;
	UILabel* _subjectLabel;
	UILabel* _bodyLabel;
	UIDateLabel* _dateLabel;
	UIView* _statusIconView;
	UIImageView* _chevronView;
	unsigned long long _mask;

}
+(bool)requiresConstraintBasedLayout;
+(id)reuseIdentifier;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)updateConstraints;
-(void)setEmail:(id)arg1 ;
@end

