/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:48 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UIButton, UIView, NSInvocation, NSArray;

@interface _UIStaticScrollBar : UIView {

	UIButton* _upButton;
	UIButton* _downButton;
	UIView* _dividerLine;
	NSInvocation* _invocation;
	NSArray* _buttonConstraints;
	bool _shouldInsetButtons;

}

@property (assign,nonatomic) bool shouldInsetButtons;              //@synthesize shouldInsetButtons=_shouldInsetButtons - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)buttonTapped:(id)arg1 ;
-(void)_updateButtonConstraints;
-(bool)shouldInsetButtons;
-(void)setTarget:(id)arg1 forAction:(SEL)arg2 ;
-(void)setShouldInsetButtons:(bool)arg1 ;
-(CGRect)centeringBounds;
@end

