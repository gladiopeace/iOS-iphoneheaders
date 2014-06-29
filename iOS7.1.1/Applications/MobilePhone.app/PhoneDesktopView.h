/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:08 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobilePhone.app/MobilePhone
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobilePhone/MobilePhone-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, UIImage, _UIBackdropView, UITransitionView;

@interface PhoneDesktopView : UIView {

	UIImageView* _imageView;
	UIImage* _wallpaperImage;
	UIImage* _queuedImage;
	BOOL _animatingTransition;
	_UIBackdropView* _backdropView;
	UITransitionView* _wallpaperContainer;

}

@property (getter=isAnimatingTransition,readonly) BOOL animatingTransition;              //@synthesize animatingTransition=_animatingTransition - In the implementation block
@property (retain) _UIBackdropView * backdropView;                                       //@synthesize backdropView=_backdropView - In the implementation block
@property (retain) UITransitionView * wallpaperContainer;                                //@synthesize wallpaperContainer=_wallpaperContainer - In the implementation block
-(void)transitionToQueuedImage;
-(void)setWallpaperContainer:(id)arg1 ;
-(id)wallpaperContainer;
-(void)transitionToImage:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)isAnimatingTransition;
-(void)reallyTransitionToImage:(id)arg1 animated:(BOOL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(double)durationForTransition:(int)arg1 ;
-(void)transitionViewDidComplete:(id)arg1 fromView:(id)arg2 toView:(id)arg3 ;
-(id)initWithFrame:(CGRect)arg1 image:(id)arg2 ;
-(void)setBackdropView:(id)arg1 ;
-(id)backdropView;
@end

