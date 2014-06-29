/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:55 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <CoreFoundation/NSCoding.h>

@class UIView, UIResponder, UIWindow;

@interface UINavigationTransitionView : UIView <NSCoding> {

	id _delegate;
	UIView* _fromView;
	UIView* _toView;
	long long _transition;
	UIResponder* _firstResponderToRestore;
	UIWindow* _originalWindow;
	double _fromViewAlpha;
	unsigned _isTransitioning : 1;
	unsigned _popoverWillCleanUpNavigationTransition : 1;
	unsigned _usesRoundedCorners : 1;

}

@property (assign,nonatomic) id delegate;                                              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) UIView * fromView;                                                //@synthesize fromView=_fromView - In the implementation block
@property (assign,nonatomic) bool usesRoundedCorners; 
@property (readonly) bool isTransitioning; 
@property (assign,nonatomic) bool popoverWillCleanUpNavigationTransition; 
+(double)defaultDurationForTransition:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(bool)transition:(long long)arg1 fromView:(id)arg2 toView:(id)arg3 ;
-(bool)isTransitioning;
-(bool)_isTransitioningFromView:(id)arg1 ;
-(bool)transition:(long long)arg1 toView:(id)arg2 ;
-(id)fromView;
-(void)setUsesRoundedCorners:(bool)arg1 ;
-(bool)usesRoundedCorners;
-(void)_navigationTransitionDidStop;
-(void)_cleanupTransition;
-(void)_notifyDelegateTransitionDidStopWithContext:(id)arg1 ;
-(void)setPopoverWillCleanUpNavigationTransition:(bool)arg1 ;
-(bool)popoverWillCleanUpNavigationTransition;
-(void)_cleanupTransitionFromPopover;
@end

