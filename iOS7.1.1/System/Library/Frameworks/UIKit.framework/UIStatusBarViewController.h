/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:58 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIViewController.h>

@class UIWindow, UIView, UIClassicStatusBarView;

@interface UIStatusBarViewController : UIViewController {

	bool _iPhoneWS;
	UIWindow* _window;
	UIView* _statusBar;
	UIClassicStatusBarView* _statusBarBackgroundView;
	bool _keyboardVisible;

}

@property (nonatomic,readonly) UIWindow * window;              //@synthesize window=_window - In the implementation block
+(double)statusBarOrientationAnimationDurationFrom:(long long)arg1 to:(long long)arg2 ;
-(void)dealloc;
-(id)window;
-(id)init;
-(void)setStatusBarStyle:(long long)arg1 animationParameters:(id)arg2 ;
-(void)setStatusBarHidden:(bool)arg1 animationParameters:(id)arg2 ;
-(void)setStatusBarOrientation:(long long)arg1 animationParameters:(id)arg2 ;
-(void)loadView;
-(bool)isClassicControlWindow:(id)arg1 ;
-(void)_updateStatusBarForRotationFromInterfaceOrientation:(long long)arg1 toInterfaceOrientation:(long long)arg2 style:(long long)arg3 hidden:(bool)arg4 slideUp:(bool)arg5 ;
-(void)_changeStatusBarOrientationFrom:(long long)arg1 toOrientation:(long long)arg2 ;
-(void)_prepareForZoom:(bool)arg1 ;
-(void)_zoom:(bool)arg1 animated:(bool)arg2 ;
-(void)_statusBarViewControllerKeyboardWillShow:(id)arg1 ;
-(void)_statusBarViewControllerKeyboardDidHide:(id)arg1 ;
-(void)_statusBarHideAnimationFinished:(id)arg1 finished:(bool)arg2 hidden:(id)arg3 ;
-(void)_updateStatusBarGeometryForRotationFromInterfaceOrientation:(long long)arg1 toInterfaceOrientation:(long long)arg2 hidden:(bool)arg3 slideUp:(bool)arg4 ;
-(void)_changeStatusBarOrientationFinished:(id)arg1 finished:(bool)arg2 context:(void*)arg3 ;
-(void)_finishStatusBarOrientationChange;
-(CGSize)_statusBarSizeForOrientation:(long long)arg1 ;
@end

