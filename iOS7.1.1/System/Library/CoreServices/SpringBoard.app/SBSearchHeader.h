/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:58:01 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>
#import <SpringBoard/SBSearchGestureObserver.h>

@protocol SBSearchHeaderDelegate;
@class SBWallpaperEffectView, UIView, UIButton, UITextField;

@interface SBSearchHeader : UIView <SBSearchGestureObserver> {

	SBWallpaperEffectView* _blurView;
	UIView* _container;
	UIButton* _cancelButton;
	UITextField* _searchField;
	<SBSearchHeaderDelegate>* _delegate;

}

@property (nonatomic,readonly) UITextField * searchField;                      //@synthesize searchField=_searchField - In the implementation block
@property (assign,nonatomic) <SBSearchHeaderDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)searchGesture:(id)arg1 changedPercentComplete:(float)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(id)delegate;
-(id)searchField;
-(void)_cancelButtonPressed;
@end

