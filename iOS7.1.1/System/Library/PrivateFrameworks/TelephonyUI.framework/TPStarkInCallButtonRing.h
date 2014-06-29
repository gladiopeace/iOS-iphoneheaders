/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:33 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TelephonyUI/TelephonyUI-Structs.h>
#import <UIKit/UIView.h>

@class UIColor;

@interface TPStarkInCallButtonRing : UIView {

	bool _selected;
	bool _highlighted;
	bool _toggledOn;
	UIColor* _fillColor;

}

@property (nonatomic,retain) UIColor * fillColor;              //@synthesize fillColor=_fillColor - In the implementation block
@property (assign,nonatomic) bool selected;                    //@synthesize selected=_selected - In the implementation block
@property (assign,nonatomic) bool highlighted;                 //@synthesize highlighted=_highlighted - In the implementation block
@property (assign,nonatomic) bool toggledOn;                   //@synthesize toggledOn=_toggledOn - In the implementation block
-(void)drawRect:(CGRect)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setHighlighted:(bool)arg1 ;
-(void)setSelected:(bool)arg1 ;
-(void)setFillColor:(id)arg1 ;
-(id)fillColor;
-(bool)highlighted;
-(bool)selected;
-(bool)toggledOn;
-(void)setToggledOn:(bool)arg1 ;
@end

