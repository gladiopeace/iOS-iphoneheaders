/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:05 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileCal/MobileCal-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/_UIBasicAnimationFactory.h>

@class NSDictionary, UIView, TodayCirclePulseBackground, UILabel, NSString, UIFont;

@interface TodayCirclePulseView : UIView <_UIBasicAnimationFactory> {

	NSDictionary* _attributes;
	UIView* _backgroundContainer;
	TodayCirclePulseBackground* _background;
	UILabel* _label;
	BOOL _circleShouldFillFrame;
	BOOL _dontApplyCenteringOffset;
	float _circleDiameter;
	float _textYOffset;
	float _textFrameWidthAdjustment;
	CGPoint _textOffsetFromCircle;

}

@property (nonatomic,copy) NSString * string; 
@property (nonatomic,retain) UIFont * font; 
@property (nonatomic,retain) NSDictionary * attributes; 
@property (assign,nonatomic) float circleDiameter;                        //@synthesize circleDiameter=_circleDiameter - In the implementation block
@property (assign,nonatomic) float textYOffset;                           //@synthesize textYOffset=_textYOffset - In the implementation block
@property (assign,nonatomic) CGPoint textOffsetFromCircle;                //@synthesize textOffsetFromCircle=_textOffsetFromCircle - In the implementation block
@property (assign,nonatomic) BOOL circleShouldFillFrame;                  //@synthesize circleShouldFillFrame=_circleShouldFillFrame - In the implementation block
@property (assign,nonatomic) BOOL dontApplyCenteringOffset;               //@synthesize dontApplyCenteringOffset=_dontApplyCenteringOffset - In the implementation block
@property (assign,nonatomic) float textFrameWidthAdjustment;              //@synthesize textFrameWidthAdjustment=_textFrameWidthAdjustment - In the implementation block
-(void)setCircleDiameter:(float)arg1 ;
-(void)setTextYOffset:(float)arg1 ;
-(void)setTextOffsetFromCircle:(CGPoint)arg1 ;
-(void)setTextFrameWidthAdjustment:(float)arg1 ;
-(void)pulse:(/*^block*/ id)arg1 ;
-(float)circleDiameter;
-(void)setCircleShouldFillFrame:(BOOL)arg1 ;
-(void)setDontApplyCenteringOffset:(BOOL)arg1 ;
-(void)_updateLabelAttributedString;
-(BOOL)dontApplyCenteringOffset;
-(float)textFrameWidthAdjustment;
-(BOOL)circleShouldFillFrame;
-(CGPoint)textOffsetFromCircle;
-(float)textYOffset;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2 ;
-(id)string;
-(void)setFont:(id)arg1 ;
-(id)font;
-(void)setString:(id)arg1 ;
-(id)attributes;
-(void).cxx_destruct;
-(void)setAttributes:(id)arg1 ;
-(void)_layoutSubviews;
@end

