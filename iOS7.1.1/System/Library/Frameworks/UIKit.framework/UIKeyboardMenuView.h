/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:04 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UIDimmingViewDelegate.h>

@class UIInputSwitcherTableView, UIInputSwitcherShadowView, UIInputSwitcherSelectionExtraView, NSTimer, UIDimmingView, UIKBTree, UIKeyboardLayoutStar;

@interface UIKeyboardMenuView : UIView <UITableViewDataSource, UITableViewDelegate, UIDimmingViewDelegate> {

	UIInputSwitcherTableView* m_table;
	UIInputSwitcherShadowView* m_shadowView;
	UIInputSwitcherSelectionExtraView* m_selExtraView;
	CGRect m_referenceRect;
	double m_pointerOffset;
	bool m_scrollable;
	bool m_startAutoscroll;
	bool m_scrolling;
	bool m_shouldFade;
	CGPoint m_point;
	double m_scrollStartTime;
	int m_scrollDirection;
	NSTimer* m_scrollTimer;
	int m_visibleRows;
	int m_firstVisibleRow;
	int m_mode;
	UIDimmingView* m_dimmingView;
	bool _usesStraightLeftEdge;
	bool _usesDarkTheme;
	UIKBTree* _referenceKey;
	UIKeyboardLayoutStar* _layout;

}

@property (assign,nonatomic) int mode; 
@property (readonly) bool usesTable; 
@property (assign,nonatomic) bool usesStraightLeftEdge;                  //@synthesize usesStraightLeftEdge=_usesStraightLeftEdge - In the implementation block
@property (assign,nonatomic) bool usesDarkTheme;                         //@synthesize usesDarkTheme=_usesDarkTheme - In the implementation block
@property (assign,nonatomic) UIKBTree * referenceKey;                    //@synthesize referenceKey=_referenceKey - In the implementation block
@property (assign,nonatomic) UIKeyboardLayoutStar * layout;              //@synthesize layout=_layout - In the implementation block
+(id)viewThatContainsBaseKey;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setNeedsDisplay;
-(void)setFrame:(CGRect)arg1 ;
-(void)removeFromSuperview;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 willDeselectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)applicationWillSuspend:(id)arg1 ;
-(void)show;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(id)font;
-(id)layout;
-(id)table;
-(void)setMode:(int)arg1 ;
-(int)mode;
-(void)setRenderConfig:(id)arg1 ;
-(void)setLayout:(id)arg1 ;
-(void)hide;
-(bool)isVisible;
-(long long)numberOfItems;
-(void)dimmingViewWasTapped:(id)arg1 ;
-(void)showAsPopupForKey:(id)arg1 inLayout:(id)arg2 ;
-(void)fadeWithDelay:(double)arg1 ;
-(void)fade;
-(void)updateSelectionWithPoint:(CGPoint)arg1 ;
-(void)selectItemAtPoint:(CGPoint)arg1 ;
-(void)stopAnyAutoscrolling;
-(void)autoscrollTimerFired:(id)arg1 ;
-(void)showAsHUD;
-(id)dimmingView;
-(bool)usesStraightLeftEdge;
-(bool)usesDarkTheme;
-(id)maskForShadowViewBlurredBackground;
-(bool)usesTable;
-(bool)usesShadowView;
-(CGSize)preferredSize;
-(void)setUsesStraightLeftEdge:(bool)arg1 ;
-(void)setupShadowViewWithSize:(CGSize)arg1 ;
-(bool)usesDimmingView;
-(long long)defaultSelectedIndex;
-(void)highlightRow:(int)arg1 ;
-(void)insertSelExtraView;
-(void)performShowAnimation;
-(int)_internationalKeyRoundedCornerInLayout:(id)arg1 ;
-(void)setReferenceKey:(id)arg1 ;
-(void)setKeyboardDimmed:(bool)arg1 ;
-(id)referenceKey;
-(void)fadeAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3 ;
-(void)_delayedFade;
-(void)setNeedsDisplayForCell:(id)arg1 ;
-(void)setNeedsDisplayForTopBottomCells;
-(void)endScrolling:(id)arg1 ;
-(void)didSelectItemAtIndex:(int)arg1 ;
-(int)indexForIndexPath:(id)arg1 ;
-(id)titleForItemAtIndex:(int)arg1 ;
-(id)subtitleForItemAtIndex:(int)arg1 ;
-(id)subtitleFont;
-(void)setHighlightForRowAtIndexPath:(id)arg1 highlight:(bool)arg2 ;
-(void)setUsesDarkTheme:(bool)arg1 ;
-(bool)centerPopUpOverKey;
-(double)minYOfLastTableCellForSelectionExtraView;
-(CGRect)popupRect;
@end

