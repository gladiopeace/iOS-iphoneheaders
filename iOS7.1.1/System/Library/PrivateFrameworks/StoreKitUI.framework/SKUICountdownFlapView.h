/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:21 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIImageView.h>

@class UIView, UIImageView, UIColor, UILabel, NSString;

@interface SKUICountdownFlapView : UIImageView {

	UIView* _backgroundViewBot;
	UIView* _backgroundViewTop;
	UIImageView* _backgroundViewTransitionBot;
	UIImageView* _backgroundViewTransitionTop;
	double _factor;
	UIColor* _flapTopColor;
	UIColor* _flapBottomColor;
	UILabel* _labelBot;
	UILabel* _labelTop;
	UILabel* _labelTransitionBot;
	UILabel* _labelTransitionTop;
	long long _position;
	NSString* _string;
	UIColor* _textColor;

}

@property (nonatomic,readonly) long long position;                     //@synthesize position=_position - In the implementation block
@property (nonatomic,readonly) UIColor * flapTopColor;                 //@synthesize flapTopColor=_flapTopColor - In the implementation block
@property (nonatomic,readonly) UIColor * flapBottomColor;              //@synthesize flapBottomColor=_flapBottomColor - In the implementation block
@property (nonatomic,retain) NSString * string;                        //@synthesize string=_string - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                      //@synthesize textColor=_textColor - In the implementation block
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)string;
-(void)setTextColor:(id)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(bool)arg2 ;
-(long long)position;
-(id)textColor;
-(void)setString:(id)arg1 ;
-(void).cxx_destruct;
-(id)flapTopColor;
-(id)flapBottomColor;
-(id)initWithPosition:(long long)arg1 flapTopColor:(id)arg2 flapBottomColor:(id)arg3 ;
-(id)_newBackgroundImageForTop:(int)arg1 ;
-(CATransform3D)_transformForAngle:(double)arg1 isTop:(bool)arg2 ;
-(id)_newLabel;
@end

