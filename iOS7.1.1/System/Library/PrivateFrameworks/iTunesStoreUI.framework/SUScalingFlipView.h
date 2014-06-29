/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:09 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <UIKit/UIView.h>

@protocol SUScalingFlipViewDelegate;
@class UIView;

@interface SUScalingFlipView : UIView {

	UIView* _backView;
	<SUScalingFlipViewDelegate>* _delegate;
	long long _direction;
	double _duration;
	CGRect _fromFrame;
	UIView* _frontView;
	CGRect _toFrame;

}

@property (assign,nonatomic) <SUScalingFlipViewDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long direction;                                 //@synthesize direction=_direction - In the implementation block
@property (assign,nonatomic) double duration;                                     //@synthesize duration=_duration - In the implementation block
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(bool)arg2 ;
-(void)setDirection:(long long)arg1 ;
-(long long)direction;
-(id)_frontLayerAnimation;
-(id)_fixedAnimationForAnimation:(id)arg1 ;
-(id)_backLayerAnimation;
-(id)_inputColorAnimation;
-(id)_positionAnimation;
-(id)_transformAnimationWithStart:(CATransform3D)arg1 middle:(CATransform3D)arg2 end:(CATransform3D)arg3 ;
-(id)initWithFrontView:(id)arg1 backView:(id)arg2 ;
-(void)performFlip;
@end

