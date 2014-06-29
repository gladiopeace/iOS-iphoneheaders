/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:58 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class UIWindow, UIView, UIStatusBarViewController, UIZoomViewController;

@interface UIClassicController : NSObject {

	UIWindow* _window;
	UIView* _chromeView;
	UIStatusBarViewController* _statusBarViewController;
	UIZoomViewController* _zoomViewController;
	bool _hidesClassicChrome;
	bool _hidesStatusBarFiller;

}
+(id)sharedClassicController;
-(void)dealloc;
-(void)_initializeStatusBarOrientation;
-(void)setStatusBarStyle:(long long)arg1 animationParameters:(id)arg2 ;
-(void)setStatusBarHidden:(bool)arg1 animationParameters:(id)arg2 ;
-(void)setStatusBarOrientation:(long long)arg1 animationParameters:(id)arg2 ;
-(id)_window;
-(void)_setupWindow;
-(bool)isClassicControlWindow:(id)arg1 ;
-(void)setZoomed:(bool)arg1 animated:(bool)arg2 ;
-(bool)_supportsZoom;
-(bool)_shouldHideStatusBar;
-(bool)isZoomed;
-(void)setZoomed:(bool)arg1 ;
-(void)_classicChangeStatusBarOrientation:(id)arg1 ;
-(void)_classicChangeStatusBarOrientationFinished:(id)arg1 finished:(bool)arg2 context:(id)arg3 ;
-(bool)drawsStatusBarFiller;
-(void)setDrawsStatusBarFiller:(bool)arg1 ;
@end

