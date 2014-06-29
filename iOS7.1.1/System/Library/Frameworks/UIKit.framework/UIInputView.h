/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:06 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UIKBRenderConfig, _UIInputViewContent, UIImage, NSMutableDictionary, NSArray, CALayer, UIView;

@interface UIInputView : UIView {

	long long _style;
	UIKBRenderConfig* _renderConfig;
	bool _suppressBackgroundStyling;
	bool _disableSplitSupport;
	_UIInputViewContent* _leftContentView;
	_UIInputViewContent* _rightContentView;
	double _contentRatio;
	CGSize _leftContentSize;
	CGSize _rightContentSize;
	CGSize _defaultSize;
	double _gapWidth;
	double _leftOffset;
	bool _isTransitioning;
	double _transitionGap;
	double _transitionLeftOffset;
	double _transitionRatio;
	UIImage* _mergedImage;
	UIImage* _splitImage;
	NSMutableDictionary* _mergedSliceMap;
	NSMutableDictionary* _splitSliceMap;
	NSArray* _visibleLayers;
	CALayer* _transitionLayer;

}

@property (assign,nonatomic) bool _disableSplitSupport; 
@property (assign,nonatomic) bool _suppressBackgroundStyling; 
@property (nonatomic,readonly) long long inputViewStyle;                         //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) UIView * leftContentView;                         //@synthesize leftContentView=_leftContentView - In the implementation block
@property (nonatomic,readonly) UIView * rightContentView;                        //@synthesize rightContentView=_rightContentView - In the implementation block
@property (assign,nonatomic) double contentRatio;                                //@synthesize contentRatio=_contentRatio - In the implementation block
@property (assign,nonatomic) CGSize leftContentViewSize;                         //@synthesize leftContentSize=_leftContentSize - In the implementation block
@property (assign,nonatomic) CGSize rightContentViewSize;                        //@synthesize rightContentSize=_rightContentSize - In the implementation block
@property (nonatomic,retain) UIImage * _mergedImage;                             //@synthesize mergedImage=_mergedImage - In the implementation block
@property (nonatomic,retain) UIImage * _splitImage;                              //@synthesize splitImage=_splitImage - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * _mergedSliceMap;              //@synthesize mergedSliceMap=_mergedSliceMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * _splitSliceMap;               //@synthesize splitSliceMap=_splitSliceMap - In the implementation block
+(void)_setupAppearanceIfNecessary;
-(bool)_disableSplitSupport;
-(bool)_suppressBackgroundStyling;
-(void)set_disableSplitSupport:(bool)arg1 ;
-(void)set_suppressBackgroundStyling:(bool)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(bool)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setFrame:(CGRect)arg1 ;
-(bool)_isTransitioning;
-(id)tintColor;
-(void)_updateBackgroundColor;
-(void)_setRenderConfig:(id)arg1 ;
-(id)_inheritedRenderConfig;
-(int)_clipCornersOfView:(id)arg1 ;
-(void)_beginSplitTransitionIfNeeded:(double)arg1 gapWidth:(double)arg2 ;
-(void)_endSplitTransitionIfNeeded:(bool)arg1 ;
-(bool)_isSplit;
-(void)_updateClipCorners;
-(CGSize)leftContentViewSize;
-(CGSize)rightContentViewSize;
-(CGSize)_defaultSize;
-(bool)_supportsSplit;
-(void)_setLeftOffset:(double)arg1 gapWidth:(double)arg2 ;
-(void)didEndSplitTransition;
-(bool)_isToolbars;
-(void)_setProgress:(double)arg1 boundedBy:(double)arg2 ;
-(void)setContentRatio:(double)arg1 ;
-(id)leftContentView;
-(id)rightContentView;
-(void)_setNeedsContentSizeUpdate;
-(double)_additionalClipHeight;
-(id)_initWithFrame:(CGRect)arg1 inputViewStyle:(long long)arg2 useSplitViews:(bool)arg3 ;
-(long long)inputViewStyle;
-(double)contentRatio;
-(void)willBeginSplitTransition;
-(id)_splitBorderedBackgroundWithCorners:(unsigned long long)arg1 ;
-(id)_toolbarBorderedBackground;
-(id)initWithFrame:(CGRect)arg1 inputViewStyle:(long long)arg2 ;
-(void)setInputViewStyle:(long long)arg1 ;
-(void)layoutMergedSubviews;
-(void)layoutSplitSubviewsWithLeftContentSize:(CGSize)arg1 rightContentSize:(CGSize)arg2 ;
-(void)updateMergedSubviewConstraints;
-(void)updateSplitSubviewContraintsWithLeftContentSize:(CGSize)arg1 rightContentSize:(CGSize)arg2 ;
-(void)setLeftContentViewSize:(CGSize)arg1 ;
-(void)setRightContentViewSize:(CGSize)arg1 ;
-(id)_mergedImage;
-(void)set_mergedImage:(id)arg1 ;
-(id)_splitImage;
-(void)set_splitImage:(id)arg1 ;
-(id)_mergedSliceMap;
-(void)set_mergedSliceMap:(id)arg1 ;
-(id)_splitSliceMap;
-(void)set_splitSliceMap:(id)arg1 ;
@end

