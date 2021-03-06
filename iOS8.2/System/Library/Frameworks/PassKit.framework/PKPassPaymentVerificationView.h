/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:46 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKit/PKPassPaymentFooterContentView.h>
#import <PassKit/PKPaymentVerificationPresentationDelegate.h>

@class PKPassView, UILabel, UIButton, UIView, PKPaymentVerificationPresentationController;

@interface PKPassPaymentVerificationView : PKPassPaymentFooterContentView <PKPaymentVerificationPresentationDelegate> {

	PKPassView* _passView;
	UILabel* _titleLabel;
	UILabel* _bodyLabel;
	UIButton* _button;
	UIButton* _alternateButton;
	UIView* _bottomRule;
	PKPaymentVerificationPresentationController* _presenter;

}
-(void)didChangeVerificationPresentation;
-(void)presentVerificationViewController:(id)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(id)_bottomRule;
-(id)_alternateButton;
-(id)initWithPass:(id)arg1 passView:(id)arg2 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id)_button;
-(id)_titleLabel;
-(id)_bodyLabel;
@end

