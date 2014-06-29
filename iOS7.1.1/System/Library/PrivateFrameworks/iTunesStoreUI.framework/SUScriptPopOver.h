/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:09 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class UIViewController, UIPopoverController, SUScriptViewController;

@interface SUScriptPopOver : SUScriptObject {

	bool _ignoreDismiss;

}

@property (readonly) UIViewController * activeViewController; 
@property (nonatomic,retain) UIPopoverController * nativePopoverController; 
@property (assign) long long backgroundStyle; 
@property (assign) double contentHeight; 
@property (assign) double contentWidth; 
@property (readonly) SUScriptViewController * presentingViewController; 
@property (retain) SUScriptViewController * viewController; 
@property (readonly) long long backgroundStyleBlack; 
@property (readonly) long long backgroundStyleClear; 
@property (readonly) long long backgroundStyleCream; 
@property (readonly) long long backgroundStyleDefault; 
@property (readonly) long long backgroundStyleShare; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(id)activeViewController;
-(void)dealloc;
-(id)init;
-(id)presentingViewController;
-(void)setViewController:(id)arg1 ;
-(id)viewController;
-(bool)isVisible;
-(double)contentWidth;
-(void)dismissAnimated:(id)arg1 ;
-(void)setBackgroundStyle:(long long)arg1 ;
-(long long)backgroundStyle;
-(id)attributeKeys;
-(id)scriptAttributeKeys;
-(id)_className;
-(void)tearDownUserInterface;
-(void)_overlayWillShowNotification:(id)arg1 ;
-(void)_viewControllerDidDismiss:(id)arg1 ;
-(void)_dismissAnimated:(bool)arg1 ;
-(bool)_shouldDisplayAsPopover;
-(id)_popOverController;
-(bool)_isViewControllerVisible;
-(void)_showAsModalViewController;
-(id)_nativeViewController;
-(void)_setNativeViewController:(id)arg1 ;
-(id)nativePopoverController;
-(void)setNativePopoverController:(id)arg1 ;
-(void)setContentWidth:(double)arg1 height:(double)arg2 animated:(bool)arg3 ;
-(bool)showFromElement:(id)arg1 ;
-(bool)showFromNavigationItem:(id)arg1 ;
-(double)contentHeight;
-(void)setContentHeight:(double)arg1 ;
-(void)setContentWidth:(double)arg1 ;
-(long long)backgroundStyleBlack;
-(long long)backgroundStyleClear;
-(long long)backgroundStyleCream;
-(long long)backgroundStyleDefault;
-(long long)backgroundStyleShare;
-(void)_setIgnoresDismiss:(bool)arg1 ;
@end

