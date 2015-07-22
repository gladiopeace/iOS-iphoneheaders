/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:26 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKit/PassKit-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, UILabel, PKPaymentSetupPrivacyFooterView, UIActivityIndicatorView;

@interface PKPaymentSetupInfoView : UIView {

	UIImageView* _logo;
	UILabel* _bodyLabel;
	PKPaymentSetupPrivacyFooterView* _privacyFooter;
	long long _context;
	UIActivityIndicatorView* _activityIndicatorView;

}

@property (nonatomic,retain) PKPaymentSetupPrivacyFooterView * privacyFooter;              //@synthesize privacyFooter=_privacyFooter - In the implementation block
@property (assign,nonatomic) long long context;                                            //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * activityIndicatorView;              //@synthesize activityIndicatorView=_activityIndicatorView - In the implementation block
-(UIActivityIndicatorView *)activityIndicatorView;
-(void)setActivityIndicatorView:(UIActivityIndicatorView *)arg1 ;
-(BOOL)isBuddyiPad;
-(id)_bodyFont;
-(PKPaymentSetupPrivacyFooterView *)privacyFooter;
-(void)setPrivacyFooter:(PKPaymentSetupPrivacyFooterView *)arg1 ;
-(id)bodyLabel;
-(id)initWithFrame:(CGRect)arg1 context:(long long)arg2 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(long long)context;
-(void)setContext:(long long)arg1 ;
-(id)_titleFont;
-(id)logo;
@end
