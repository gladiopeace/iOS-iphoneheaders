/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:57 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MessageUI/MessageUI-Structs.h>
#import <UIKit/UIScrollView.h>

@class UIGestureRecognizer, NSMutableSet, UIView;

@interface MFComposeScrollView : UIScrollView {

	UIGestureRecognizer* _singleTapGestureRecognizer;
	NSMutableSet* _disabledSubviews;
	UIView* _tappedView;
	CGPoint _tapLocation;
	int _scrollBlocked;
	NSRange _selectedRange;
	BOOL _catchesSingleTap;
	BOOL _shouldScrollToFirstResponder;

}

@property (assign,nonatomic) BOOL catchesSingleTap; 
@property (assign,nonatomic) BOOL shouldScrollToFirstResponder;              //@synthesize shouldScrollToFirstResponder=_shouldScrollToFirstResponder - In the implementation block
@property (nonatomic,retain) UIView * tappedView;                            //@synthesize tappedView=_tappedView - In the implementation block
@property (assign,nonatomic) CGPoint tapLocation;                            //@synthesize tapLocation=_tapLocation - In the implementation block
-(void)setCatchesSingleTap:(BOOL)arg1 ;
-(void)beginBlockingScroll;
-(void)endBlockingScroll;
-(void)setShouldScrollToFirstResponder:(BOOL)arg1 ;
-(void)disableSubview:(id)arg1 ;
-(void)enableSubview:(id)arg1 ;
-(void)singleTap:(id)arg1 ;
-(void)setTappedView:(id)arg1 ;
-(void)setTapLocation:(CGPoint)arg1 ;
-(id)tappedView;
-(BOOL)catchesSingleTap;
-(void)performDelayedTap:(BOOL)arg1 ;
-(CGPoint)tapLocation;
-(BOOL)shouldScrollToFirstResponder;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)didAddSubview:(id)arg1 ;
-(void)willRemoveSubview:(id)arg1 ;
-(void)setContentOffset:(CGPoint)arg1 animated:(BOOL)arg2 ;
-(BOOL)_scrollsToMakeFirstResponderVisible;
@end

