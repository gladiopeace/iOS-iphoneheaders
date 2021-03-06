/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:59:35 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MessageUI/MessageUI-Structs.h>
#import <MessageUI/MFComposeHeaderView.h>

@class UILabel, UIView;

@interface MFComposeFromView : MFComposeHeaderView {

	UILabel* _accountLabel;
	UIView* _background;
	char _accountHasUnsafeDomain;

}

@property (assign,nonatomic) char accountHasUnsafeDomain;              //@synthesize accountHasUnsafeDomain=_accountHasUnsafeDomain - In the implementation block
-(void)setAccountLabel:(id)arg1 ;
-(void)setLabelHighlighted:(char)arg1 ;
-(CGRect)accountLabelRect;
-(void)setAccountHasUnsafeDomain:(char)arg1 ;
-(id)_accountLabel;
-(void)_setBackgroundVisible:(char)arg1 animated:(char)arg2 ;
-(char)accountHasUnsafeDomain;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)tintColorDidChange;
@end

