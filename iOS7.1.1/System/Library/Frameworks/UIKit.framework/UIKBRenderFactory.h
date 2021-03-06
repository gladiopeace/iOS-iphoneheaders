/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:10 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class UIKBRenderConfig, NSMutableArray, NSArray;

@interface UIKBRenderFactory : NSObject {

	UIKBRenderConfig* _renderConfig;
	NSMutableArray* _segmentTraits;
	double _rivenSizeFactor;
	bool _lightweightFactory;
	double _scale;
	bool _boldTextEnabled;

}

@property (assign,nonatomic) double scale;                                   //@synthesize scale=_scale - In the implementation block
@property (nonatomic,readonly) UIKBRenderConfig * renderConfig;              //@synthesize renderConfig=_renderConfig - In the implementation block
@property (nonatomic,readonly) NSArray * segmentTraits;                      //@synthesize segmentTraits=_segmentTraits - In the implementation block
@property (assign,nonatomic) double rivenSizeFactor;                         //@synthesize rivenSizeFactor=_rivenSizeFactor - In the implementation block
@property (assign,nonatomic) bool lightweightFactory;                        //@synthesize lightweightFactory=_lightweightFactory - In the implementation block
+(long long)_graphicsQuality;
+(bool)_enabled;
+(id)lightweightFactoryForVisualStyle:(SCD_Struct_UI30)arg1 renderConfig:(id)arg2 ;
+(id)cacheKeyForString:(id)arg1 withRenderFlags:(long long)arg2 renderConfig:(id)arg3 ;
+(id)factoryForVisualStyle:(SCD_Struct_UI30)arg1 renderConfig:(id)arg2 ;
+(id)segmentedControlColor:(bool)arg1 ;
+(Class)factoryClassForVisualStyle:(SCD_Struct_UI30)arg1 ;
-(double)passcodeEdgeWeight;
-(id)passcodeKeyEdgeColorName;
-(id)passcodeActiveControlKeyTraits;
-(void)modifyKeyTraitsForPasscode:(id)arg1 forKey:(id)arg2 onKeyplane:(id)arg3 ;
-(id)passcodeBackgroundTraitsForKeyplane:(id)arg1 ;
-(id)passcodeControlKeyTraits;
-(id)passcodeShiftedControlKeyTraits;
-(id)extraPasscodePaddleTraits;
-(void)dealloc;
-(double)scale;
-(void)setScale:(double)arg1 ;
-(id)renderConfig;
-(id)backgroundTraitsForKeyplane:(id)arg1 ;
-(id)defaultKeyBackgroundColorName;
-(id)controlKeyBackgroundColorName;
-(id)traitsHashStringForKey:(id)arg1 withGeometry:(id)arg2 controlOpacities:(bool)arg3 ;
-(id)_traitsForKey:(id)arg1 onKeyplane:(id)arg2 ;
-(id)lightKeycapsFontName;
-(void)_customizeTraits:(id)arg1 forPopupForKey:(id)arg2 withRenderConfig:(id)arg3 keycapsFontName:(id)arg4 ;
-(double)translucentGapWidth;
-(id)lightTextFontName;
-(id)lightPadKeycapsFontName;
-(void)modifyTraitsForDetachedInputSwitcher:(id)arg1 withKey:(id)arg2 ;
-(id)thinKeycapsFontName;
-(double)keyCornerRadius;
-(double)RivenFactor:(double)arg1 ;
-(id)traitsForKey:(id)arg1 onKeyplane:(id)arg2 ;
-(id)displayContentsForKey:(id)arg1 ;
-(void)removeAllLayoutSegments;
-(bool)useBlueThemingForKey:(id)arg1 ;
-(void)addLayoutSegment:(id)arg1 ;
-(id)multitapCompleteKeyImageName;
-(id)muttitapReverseKeyImageName;
-(void)setupLayoutSegments;
-(void)scaleTraits:(id)arg1 ;
-(id)shiftKeyImageName;
-(id)shiftOnKeyImageName;
-(id)shiftLockImageName;
-(id)initWithRenderConfig:(id)arg1 skipLayoutSegments:(bool)arg2 ;
-(void)setLightweightFactory:(bool)arg1 ;
-(void)lowQualityTraits:(id)arg1 ;
-(id)segmentTraits;
-(bool)lightweightFactory;
-(id)hashStringElement;
-(id)deleteKeyImageName;
-(double)skinnyKeyThreshold;
-(id)keyImageNameWithSkinnyVariation:(id)arg1 ;
-(id)deleteKeyXImageName;
-(id)globalEmojiKeyImageName;
-(id)globalKeyImageName;
-(id)dismissKeyImageName;
-(id)handwritingMoreKeyImageName;
-(id)dictationKeyImageName;
-(bool)shouldClearBaseDisplayStringForVariants;
-(id)defaultKeyShadowColorName;
-(id)controlKeyForegroundColorName;
-(id)controlKeyShadowColorName;
-(id)thinTextFontName;
-(double)rivenSizeFactor;
-(void)setRivenSizeFactor:(double)arg1 ;
@end

