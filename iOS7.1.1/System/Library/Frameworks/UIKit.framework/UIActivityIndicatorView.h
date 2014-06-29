/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:54 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <CoreFoundation/NSCoding.h>

@class UIColor, NSArray, NSString, UIImageView;

@interface UIActivityIndicatorView : UIView <NSCoding> {

	double _duration;
	bool _animating;
	long long _activityIndicatorViewStyle;
	long long _actualActivityIndicatorViewStyle;
	bool _hidesWhenStopped;
	bool _hasShadow;
	bool _clockWise;
	bool _spinning;
	bool _useArtwork;
	bool _useOutlineShadow;
	double _width;
	UIColor* _color;
	long long _spokeCount;
	UIColor* _shadowColor;
	double _innerRadius;
	long long _spokeFrameRatio;
	NSArray* _spokeImages;
	double _spinningDuration;
	NSString* _artBackupKeyString;
	UIImageView* _internalView;
	CGSize _shadowOffset;

}

@property (assign,nonatomic) long long activityIndicatorViewStyle;              //@synthesize activityIndicatorViewStyle=_activityIndicatorViewStyle - In the implementation block
@property (assign,nonatomic) bool hidesWhenStopped;                             //@synthesize hidesWhenStopped=_hidesWhenStopped - In the implementation block
@property (nonatomic,retain) UIColor * color;                                   //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) CGSize shadowOffset;                               //@synthesize shadowOffset=_shadowOffset - In the implementation block
@property (nonatomic,retain) UIColor * shadowColor;                             //@synthesize shadowColor=_shadowColor - In the implementation block
@property (nonatomic,readonly) UIImageView * internalView;                      //@synthesize internalView=_internalView - In the implementation block
@property (assign,nonatomic) double width;                                      //@synthesize width=_width - In the implementation block
@property (assign) bool hasShadow;                                              //@synthesize hasShadow=_hasShadow - In the implementation block
@property (assign,nonatomic) long long spokeCount;                              //@synthesize spokeCount=_spokeCount - In the implementation block
@property (assign,nonatomic) double innerRadius;                                //@synthesize innerRadius=_innerRadius - In the implementation block
@property (assign,nonatomic) long long spokeFrameRatio;                         //@synthesize spokeFrameRatio=_spokeFrameRatio - In the implementation block
@property (readonly) NSArray * spokeImages;                                     //@synthesize spokeImages=_spokeImages - In the implementation block
@property (assign,nonatomic) bool clockWise;                                    //@synthesize clockWise=_clockWise - In the implementation block
@property (assign) bool spinning;                                               //@synthesize spinning=_spinning - In the implementation block
@property (assign,nonatomic) double spinningDuration;                           //@synthesize spinningDuration=_spinningDuration - In the implementation block
@property (assign,nonatomic) bool useArtwork;                                   //@synthesize useArtwork=_useArtwork - In the implementation block
@property (nonatomic,readonly) NSString * artBackupKeyString;                   //@synthesize artBackupKeyString=_artBackupKeyString - In the implementation block
@property (assign,nonatomic) bool useOutlineShadow;                             //@synthesize useOutlineShadow=_useOutlineShadow - In the implementation block
+(CGSize)size;
+(CGSize)defaultSizeForStyle:(long long)arg1 ;
+(bool)_isModernStyle:(long long)arg1 ;
+(id)_loadResourcesForStyle:(long long)arg1 ;
-(bool)isElementAccessibilityExposedToInterfaceBuilder;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(CGSize)_intrinsicSizeWithinSize:(CGSize)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(bool)_contentHuggingDefault_isUsuallyFixedHeight;
-(bool)_contentHuggingDefault_isUsuallyFixedWidth;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setStyle:(long long)arg1 ;
-(void)setAnimationDuration:(double)arg1 ;
-(void)setShadowColor:(id)arg1 ;
-(void)setShadowOffset:(CGSize)arg1 ;
-(void)_commonInit;
-(void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2 ;
-(void)_removeAllAnimations:(bool)arg1 ;
-(CGSize)shadowOffset;
-(id)shadowColor;
-(void)setHighlighted:(bool)arg1 ;
-(bool)isHighlighted;
-(double)width;
-(void)stopAnimation;
-(bool)isAnimating;
-(void)stopAnimating;
-(void)startAnimating;
-(void)setAnimating:(bool)arg1 ;
-(long long)activityIndicatorViewStyle;
-(void)setActivityIndicatorViewStyle:(long long)arg1 ;
-(void)startAnimation;
-(id)color;
-(void)setColor:(id)arg1 ;
-(void)setWidth:(double)arg1 ;
-(void)_tearDownAnimation;
-(void)_setUpAnimation;
-(void)setHidesWhenStopped:(bool)arg1 ;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(void)_feedTheGear;
-(id)_defaulColorForStyle:(long long)arg1 ;
-(id)_layoutInfosForStyle:(long long)arg1 ;
-(bool)hidesWhenStopped;
-(bool)_canCustomize;
-(long long)spokeCount;
-(long long)spokeFrameRatio;
-(double)_spokeWidthForGearWidth:(double)arg1 ;
-(double)_spokeLengthForGearWidth:(double)arg1 ;
-(double)_widthForGearWidth:(double)arg1 ;
-(double)_alphaValueForStep:(long long)arg1 ;
-(bool)_isModern;
-(id)_artBackupKey;
-(id)_imageForStep:(long long)arg1 ;
-(bool)_shouldGoToCustomStyle;
-(long long)_customStyleForStyle:(long long)arg1 ;
-(bool)_shouldGoBackToBaseStyle;
-(bool)_hasCustomColor;
-(id)_generateModernImagesForImages:(id)arg1 ;
-(bool)_isArtWorkBased;
-(id)_generateImages;
-(void)_updateInternalViewFrameWithBounds:(CGRect)arg1 ;
-(bool)_canCustomizeStyle:(long long)arg1 ;
-(id)initWithActivityIndicatorStyle:(long long)arg1 ;
-(void)setUseOutlineShadow:(bool)arg1 ;
-(void)setSpokeCount:(long long)arg1 ;
-(void)setInnerRadius:(double)arg1 ;
-(void)setSpokeFrameRatio:(long long)arg1 ;
-(void)setClockWise:(bool)arg1 ;
-(void)setSpinningDuration:(double)arg1 ;
-(id)artBackupKey;
-(id)_styleNameForStyle:(long long)arg1 ;
-(void)generateImages;
-(bool)hasShadow;
-(void)setHasShadow:(bool)arg1 ;
-(double)innerRadius;
-(id)spokeImages;
-(bool)clockWise;
-(bool)spinning;
-(void)setSpinning:(bool)arg1 ;
-(double)spinningDuration;
-(bool)useArtwork;
-(void)setUseArtwork:(bool)arg1 ;
-(id)artBackupKeyString;
-(id)internalView;
-(bool)useOutlineShadow;
@end

