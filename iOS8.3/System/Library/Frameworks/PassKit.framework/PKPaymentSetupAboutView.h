/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:04:54 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UILabel, UIScrollView, UIButton;

@interface PKPaymentSetupAboutView : UIView {

	UILabel* _aboutTextLabel;
	UIScrollView* _scrollView;
	UIButton* _actionButton;

}
-(id)initWithBodyText:(id)arg1 ;
-(id)initWithBodyText:(id)arg1 detailButtonText:(id)arg2 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setButtonAction:(SEL)arg1 ;
@end

