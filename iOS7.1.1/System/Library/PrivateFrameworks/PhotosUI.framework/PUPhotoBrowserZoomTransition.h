/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:38 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUNavigationTransition.h>
#import <PhotosUI/PUTransitionViewAnimatorDelegate.h>

@protocol PUPhotoBrowserZoomTransitionDelegate;
@class UIImageView, PUPhotoPinchGestureRecognizer, PUTransitionViewAnimator;

@interface PUPhotoBrowserZoomTransition : PUNavigationTransition <PUTransitionViewAnimatorDelegate> {

	UIImageView* _impostorImageView;
	id _userInteractionDisabledToken;
	/*^block*/ id _individualAnimationCompletion;
	bool _useFallbackAnimation;
	bool _shouldEnd;
	bool _didFinish;
	<PUPhotoBrowserZoomTransitionDelegate>* _delegate;
	PUPhotoPinchGestureRecognizer* __photoPinchGestureRecognizer;
	PUTransitionViewAnimator* __transitionViewAnimator;

}

@property (assign,nonatomic,__weak) <PUPhotoBrowserZoomTransitionDelegate> * delegate;                                                          //@synthesize delegate=_delegate - In the implementation block
@property (setter=_setPhotoPinchGestureRecognizer:,nonatomic,retain) PUPhotoPinchGestureRecognizer * _photoPinchGestureRecognizer;              //@synthesize _photoPinchGestureRecognizer=__photoPinchGestureRecognizer - In the implementation block
@property (setter=_setTransitionViewAnimator:,nonatomic,retain) PUTransitionViewAnimator * _transitionViewAnimator;                             //@synthesize _transitionViewAnimator=__transitionViewAnimator - In the implementation block
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void).cxx_destruct;
-(void)updateInteractiveTransitionWithPhotoPinchGestureRecognizer:(id)arg1 ;
-(void)startInteractiveTransitionWithPhotoPinchGestureRecognizer:(id)arg1 ;
-(id)_photoPinchGestureRecognizer;
-(void)_setPhotoPinchGestureRecognizer:(id)arg1 ;
-(id)_transitionViewAnimator;
-(void)_setTransitionViewAnimator:(id)arg1 ;
-(void)transitionViewAnimatorDidUpdate:(id)arg1 ;
-(void)transitionViewAnimatorWillEnd:(id)arg1 withTargetTranslation:(inout CGPoint*)arg2 ;
-(void)transitionViewAnimatorDidEnd:(id)arg1 finished:(bool)arg2 ;
-(void)animatePushTransition;
-(void)animatePopTransition;
-(void)transitionWillStartOperation:(long long)arg1 animated:(bool)arg2 interactive:(bool)arg3 ;
-(void)transitionDidStartOperation:(long long)arg1 animated:(bool)arg2 interactive:(bool)arg3 ;
-(id)_thumbnailImageForPhoto:(id)arg1 ;
-(void)_endTransitionViewAnimatorForceCancel:(bool)arg1 ;
-(void)_animationTransitionForOperation:(long long)arg1 betweenViewController:(id)arg2 andPhotoBrowserController:(id)arg3 ;
-(void)_transitionWillBeginAnimationForOperation:(long long)arg1 ;
-(void)_transitionDidFinishAnimationForOperation:(long long)arg1 ;
-(id)_tokenForPhoto:(id)arg1 inContainer:(id)arg2 ;
-(bool)_getFrame:(CGRect*)arg1 contentMode:(long long*)arg2 forPhotoToken:(id)arg3 operation:(long long)arg4 ;
-(void)_setImageForImpostor:(id)arg1 photo:(id)arg2 photoToken:(id)arg3 fromDataProvider:(id)arg4 ;
-(id)_fullsizedImageForPhoto:(id)arg1 ;
-(void)_setSourceViewVisible:(bool)arg1 forPhotoToken:(id)arg2 ;
@end

