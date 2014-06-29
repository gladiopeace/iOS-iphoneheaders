/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:26 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKit/UIView.h>

@class NSString, AVCaptureVideoPreviewLayer, UIView, PLEffectsFullsizeView, PLEffectsGridView, PLEffectsGridLabelsView;

@interface PLVideoPreviewView : UIView {

	NSString* _videoGravity;
	bool _disableLayoutForPreviewView;
	bool _disableLayoutForEffectsFullsizeView;
	bool _disableLayoutForEffectsGridViews;
	bool _square;
	AVCaptureVideoPreviewLayer* _previewLayer;
	long long _orientation;
	UIView* _previewLayerView;
	PLEffectsFullsizeView* _effectsFullsizeView;
	PLEffectsGridView* _effectsGridView;
	PLEffectsGridLabelsView* _effectsGridLabelsView;
	UIView* _fadeOutView;

}

@property (nonatomic,retain) AVCaptureVideoPreviewLayer * previewLayer;                                                           //@synthesize previewLayer=_previewLayer - In the implementation block
@property (assign,nonatomic) long long orientation;                                                                               //@synthesize orientation=_orientation - In the implementation block
@property (nonatomic,readonly) UIView * previewLayerView;                                                                         //@synthesize previewLayerView=_previewLayerView - In the implementation block
@property (nonatomic,readonly) PLEffectsFullsizeView * effectsFullsizeView;                                                       //@synthesize effectsFullsizeView=_effectsFullsizeView - In the implementation block
@property (nonatomic,readonly) PLEffectsGridView * effectsGridView;                                                               //@synthesize effectsGridView=_effectsGridView - In the implementation block
@property (nonatomic,readonly) PLEffectsGridLabelsView * effectsGridLabelsView;                                                   //@synthesize effectsGridLabelsView=_effectsGridLabelsView - In the implementation block
@property (nonatomic,readonly) UIView * fadeOutView;                                                                              //@synthesize fadeOutView=_fadeOutView - In the implementation block
@property (nonatomic,copy) NSString * videoGravity; 
@property (assign,getter=isDisabledLayoutForPreviewView,nonatomic) bool disableLayoutForPreviewView;                              //@synthesize disableLayoutForPreviewView=_disableLayoutForPreviewView - In the implementation block
@property (assign,getter=isDisabledLayoutForEffectsFullsizeView,nonatomic) bool disableLayoutForEffectsFullsizeView;              //@synthesize disableLayoutForEffectsFullsizeView=_disableLayoutForEffectsFullsizeView - In the implementation block
@property (assign,getter=isDisabledLayoutForEffectsGridViews,nonatomic) bool disableLayoutForEffectsGridViews;                    //@synthesize disableLayoutForEffectsGridViews=_disableLayoutForEffectsGridViews - In the implementation block
@property (assign,getter=isSquare,nonatomic) bool square;                                                                         //@synthesize square=_square - In the implementation block
-(CGRect)rectForCaptureDeviceFaceRect:(CGRect)arg1 ;
-(id)videoGravity;
-(void)setVideoGravity:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setOrientation:(long long)arg1 animated:(bool)arg2 ;
-(long long)orientation;
-(void)setOrientation:(long long)arg1 ;
-(id)previewLayer;
-(void)setSquare:(bool)arg1 animated:(bool)arg2 ;
-(void)setSquare:(bool)arg1 ;
-(void)setPreviewLayer:(id)arg1 ;
-(id)effectsGridView;
-(bool)isSquare;
-(CGRect)_frameForSubviewsAccountForSquare:(bool)arg1 ;
-(void)_updateGravityForLayers;
-(bool)isDisabledLayoutForPreviewView;
-(bool)isDisabledLayoutForEffectsFullsizeView;
-(bool)isDisabledLayoutForEffectsGridViews;
-(void)setDisableLayoutForEffectsFullsizeView:(bool)arg1 ;
-(void)setDisableLayoutForEffectsGridViews:(bool)arg1 ;
-(void)createEffectsFullsizeView;
-(void)destroyEffectsFullsizeViewRemoveFromSuperview:(bool)arg1 ;
-(void)createEffectsGridViews;
-(void)destroyEffectsGridViewsRemoveFromSuperview:(bool)arg1 ;
-(CGRect)frameForView:(id)arg1 ;
-(CGRect)convertRect:(CGRect)arg1 toSublayer:(id)arg2 ;
-(id)previewLayerView;
-(id)effectsFullsizeView;
-(id)effectsGridLabelsView;
-(id)fadeOutView;
-(void)setDisableLayoutForPreviewView:(bool)arg1 ;
@end

