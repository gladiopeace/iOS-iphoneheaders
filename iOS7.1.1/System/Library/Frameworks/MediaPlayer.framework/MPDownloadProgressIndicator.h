/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:29 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <UIKit/UIButton.h>

@class CADisplayLink, UIImageView;

@interface MPDownloadProgressIndicator : UIButton {

	float _animatedStartValue;
	float _animatedValue;
	bool _animating;
	bool _canCancel;
	double _animationEndTime;
	double _animationStartTime;
	CADisplayLink* _displayLink;
	UIImageView* _centerImageView;
	bool _mpExternalHidden;
	bool _mpInternalHidden;
	long long _style;
	float _value;

}

@property (nonatomic,readonly) long long style;              //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) float value;                    //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) bool canCancel;                 //@synthesize canCancel=_canCancel - In the implementation block
+(CGSize)_sizeForStyle:(long long)arg1 ;
+(id)_stopImageForStyle:(long long)arg1 ;
+(bool)_isStyleModernShimmer:(long long)arg1 ;
+(void)_drawModernGradientInRect:(CGRect)arg1 ;
+(id)_baseImageForStyle:(long long)arg1 ;
+(id)_fillImageForStyle:(long long)arg1 ;
+(id)_nonstopImageForStyle:(long long)arg1 ;
-(CGRect)_baseFrameForSize:(CGSize)arg1 inBounds:(CGRect)arg2 ;
-(CGRect)_fillFrameForSize:(CGSize)arg1 inBounds:(CGRect)arg2 ;
-(CGRect)_centerImageViewFrame:(CGRect)arg1 inBounds:(CGRect)arg2 forStyle:(long long)arg3 ;
-(void)updateFromObserver:(id)arg1 animated:(bool)arg2 ;
-(void)_setInternalHidden:(bool)arg1 ;
-(bool)canCancel;
-(void)setCanCancel:(bool)arg1 ;
-(void)updateFromObserver:(id)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setHidden:(bool)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setValue:(float)arg1 ;
-(long long)style;
-(float)value;
-(id)initWithStyle:(long long)arg1 ;
-(void)setValue:(float)arg1 animated:(bool)arg2 ;
-(void)_animateValueOnDisplayLink:(id)arg1 ;
-(void).cxx_destruct;
@end

