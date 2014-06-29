/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:36 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class UIColor;

@interface PKPassColorProfile : NSObject {

	double _backgroundLightness;
	double _foregroundLightness;
	double _labelLightness;
	PKPassColorProfile* _stripProfile;
	UIColor* _backgroundColor;
	UIColor* _foregroundColor;
	UIColor* _labelColor;
	UIColor* _highlightColor;
	double _overlayDarkeningAlpha;
	double _regularDarkeningAlpha;
	double _overlayLighteningAlpha;
	double _regularLighteningAlpha;

}

@property (nonatomic,readonly) UIColor * backgroundColor;                  //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,readonly) UIColor * foregroundColor;                  //@synthesize foregroundColor=_foregroundColor - In the implementation block
@property (nonatomic,readonly) UIColor * labelColor;                       //@synthesize labelColor=_labelColor - In the implementation block
@property (nonatomic,readonly) UIColor * highlightColor;                   //@synthesize highlightColor=_highlightColor - In the implementation block
@property (nonatomic,readonly) bool isLight; 
@property (nonatomic,readonly) double overlayDarkeningAlpha;               //@synthesize overlayDarkeningAlpha=_overlayDarkeningAlpha - In the implementation block
@property (nonatomic,readonly) double regularDarkeningAlpha;               //@synthesize regularDarkeningAlpha=_regularDarkeningAlpha - In the implementation block
@property (nonatomic,readonly) double overlayLighteningAlpha;              //@synthesize overlayLighteningAlpha=_overlayLighteningAlpha - In the implementation block
@property (nonatomic,readonly) double regularLighteningAlpha;              //@synthesize regularLighteningAlpha=_regularLighteningAlpha - In the implementation block
+(id)profileForDisplayProfile:(id)arg1 ;
-(id)labelImageForGlyph:(id)arg1 ;
-(bool)isLight;
-(id)foregroundAttributesForFont:(id)arg1 ;
-(id)labelAttributesForFont:(id)arg1 ;
-(id)foregroundImageForGlyph:(id)arg1 ;
-(id)labelColorOverStrip:(bool)arg1 ;
-(id)foregroundColorOverStrip:(bool)arg1 ;
-(id)_initWithBackgroundColor:(id)arg1 foregroundColor:(id)arg2 labelColor:(id)arg3 ;
-(id)_imageForGlyph:(id)arg1 color:(id)arg2 ;
-(void)_calculateColorsWithBackgroundColor:(id)arg1 foregroundColor:(id)arg2 labelColor:(id)arg3 ;
-(long long)_sizeForFont:(id)arg1 ;
-(long long)_sizeForGlyph:(id)arg1 ;
-(double)overlayDarkeningAlpha;
-(double)regularDarkeningAlpha;
-(double)overlayLighteningAlpha;
-(double)regularLighteningAlpha;
-(void)dealloc;
-(id)backgroundColor;
-(id)highlightColor;
-(id)foregroundColor;
-(id)labelColor;
@end

