/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:12 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <UIKit/UIView.h>

@class UIView;

@interface SUSplitView : UIView {

	UIView* _firstView;
	long long _layoutType;
	double _minimumPaneSize;
	UIView* _secondView;
	double _splitPosition;
	bool _vertical;

}

@property (nonatomic,retain) UIView * firstView;                           //@synthesize firstView=_firstView - In the implementation block
@property (assign,nonatomic) long long layoutType;                         //@synthesize layoutType=_layoutType - In the implementation block
@property (nonatomic,retain) UIView * secondView;                          //@synthesize secondView=_secondView - In the implementation block
@property (assign,nonatomic) double splitPosition;                         //@synthesize splitPosition=_splitPosition - In the implementation block
@property (assign,getter=isVertical,nonatomic) bool vertical;              //@synthesize vertical=_vertical - In the implementation block
@property (assign,nonatomic) double minimumPaneSize;                       //@synthesize minimumPaneSize=_minimumPaneSize - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(bool)isVertical;
-(void)setVertical:(bool)arg1 ;
-(long long)layoutType;
-(double)minimumPaneSize;
-(double)splitPosition;
-(void)setLayoutType:(long long)arg1 ;
-(void)setSplitPosition:(double)arg1 ;
-(void)setMinimumPaneSize:(double)arg1 ;
-(void)setFirstView:(id)arg1 ;
-(void)setSecondView:(id)arg1 ;
-(double)_minimumPaneSizeForLayout;
-(id)firstView;
-(id)secondView;
@end

