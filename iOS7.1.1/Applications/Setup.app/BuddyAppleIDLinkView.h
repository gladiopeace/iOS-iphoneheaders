/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:15 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Setup/Setup-Structs.h>
#import <UIKit/UIView.h>

@class UIButton;

@interface BuddyAppleIDLinkView : UIView {

	UIButton* _linkButton;
	float _buttonTopPadding;

}

@property (nonatomic,readonly) UIButton * linkButton;              //@synthesize linkButton=_linkButton - In the implementation block
@property (assign,nonatomic) float buttonTopPadding;               //@synthesize buttonTopPadding=_buttonTopPadding - In the implementation block
-(void)setButtonTopPadding:(float)arg1 ;
-(float)buttonTopPadding;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)linkButton;
@end

