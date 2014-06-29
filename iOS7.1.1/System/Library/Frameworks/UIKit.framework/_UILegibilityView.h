/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:03 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class _UILegibilitySettings, UIImage, UIImageView, CAFilter;

@interface _UILegibilityView : UIView {

	bool _hidesImage;
	_UILegibilitySettings* _settings;
	UIImage* _image;
	UIImage* _shadowImage;
	double _strength;
	UIImageView* _imageView;
	UIImageView* _shadowImageView;
	CAFilter* _imageColorFilter;
	CAFilter* _shadowImageColorFilter;
	long long _options;

}

@property (nonatomic,@dynamic,readonly) long long style; 
@property (nonatomic,retain) _UILegibilitySettings * settings;               //@synthesize settings=_settings - In the implementation block
@property (nonatomic,retain) UIImage * image;                                //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) UIImage * shadowImage;                          //@synthesize shadowImage=_shadowImage - In the implementation block
@property (assign,nonatomic) double strength;                                //@synthesize strength=_strength - In the implementation block
@property (assign,nonatomic) bool hidesImage;                                //@synthesize hidesImage=_hidesImage - In the implementation block
@property (nonatomic,readonly) bool usesColorFilters; 
@property (nonatomic,retain) UIImageView * imageView;                        //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIImageView * shadowImageView;                  //@synthesize shadowImageView=_shadowImageView - In the implementation block
@property (nonatomic,retain) CAFilter * imageColorFilter;                    //@synthesize imageColorFilter=_imageColorFilter - In the implementation block
@property (nonatomic,retain) CAFilter * shadowImageColorFilter;              //@synthesize shadowImageColorFilter=_shadowImageColorFilter - In the implementation block
@property (assign,nonatomic) long long options;                              //@synthesize options=_options - In the implementation block
-(void)dealloc;
-(void)setImage:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)image;
-(long long)style;
-(id)shadowImage;
-(void)setShadowImage:(id)arg1 ;
-(id)imageView;
-(id)initWithSettings:(id)arg1 strength:(double)arg2 image:(id)arg3 shadowImage:(id)arg4 ;
-(void)setImage:(id)arg1 shadowImage:(id)arg2 ;
-(void)setImageView:(id)arg1 ;
-(void)setSettings:(id)arg1 ;
-(id)settings;
-(void)setOptions:(long long)arg1 ;
-(long long)options;
-(id)initWithSettings:(id)arg1 strength:(double)arg2 image:(id)arg3 ;
-(id)initWithStyle:(long long)arg1 image:(id)arg2 ;
-(double)strength;
-(void)setStrength:(double)arg1 ;
-(id)initWithStyle:(long long)arg1 image:(id)arg2 shadowImage:(id)arg3 ;
-(id)initWithSettings:(id)arg1 strength:(double)arg2 image:(id)arg3 shadowImage:(id)arg4 options:(long long)arg5 ;
-(void)setSettings:(id)arg1 image:(id)arg2 shadowImage:(id)arg3 ;
-(id)shadowImageView;
-(void)setShadowImageView:(id)arg1 ;
-(bool)usesColorFilters;
-(id)imageColorFilter;
-(void)setImageColorFilter:(id)arg1 ;
-(id)drawingColor;
-(id)shadowImageColorFilter;
-(void)setShadowImageColorFilter:(id)arg1 ;
-(void)updateImage;
-(bool)usesSecondaryColor;
-(void)setHidesImage:(bool)arg1 ;
-(void)setStyle:(long long)arg1 image:(id)arg2 shadowImage:(id)arg3 ;
-(void)updateForChangedSettings:(id)arg1 ;
-(bool)hidesImage;
@end

