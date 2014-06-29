/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:09 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobilePhone.app/MobilePhone
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobilePhone/MobilePhone-Structs.h>
#import <UIKit/UIView.h>

@class SixSquareButton;

@interface SixSquareView : UIView {

	SixSquareButton* _buttons[6];
	id _delegate;
	BOOL _onlyShowsFourButtons;

}

@property (assign,nonatomic) BOOL onlyShowsFourButtons;              //@synthesize onlyShowsFourButtons=_onlyShowsFourButtons - In the implementation block
-(void)setTitle:(id)arg1 image:(id)arg2 selectedImage:(id)arg3 forPosition:(int)arg4 ;
-(id)buttonAtPosition:(int)arg1 ;
-(void)setAllButtonsEnabled:(BOOL)arg1 ;
-(void)prepareForFadeIn;
-(void)fadeInButtons;
-(void)_buttonHeldDown:(id)arg1 ;
-(void)_cancelButtonDown:(id)arg1 ;
-(void)_buttonHeldDownShort:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)removeFromSuperview;
-(CGSize)intrinsicContentSize;
-(void)_buttonDown:(id)arg1 ;
-(void)_buttonClicked:(id)arg1 ;
-(CGSize)totalSize;
-(BOOL)onlyShowsFourButtons;
-(void)setOnlyShowsFourButtons:(BOOL)arg1 ;
@end

