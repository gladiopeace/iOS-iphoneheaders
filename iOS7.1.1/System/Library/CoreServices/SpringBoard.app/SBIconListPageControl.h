/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:57:47 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIPageControl.h>

@protocol SBIconListPageControlDelegate;
@class SBIconPageIndicatorImageSetResult, SBIconPageIndicatorImageSetCache;

@interface SBIconListPageControl : UIPageControl {

	<SBIconListPageControlDelegate>* _delegate;
	BOOL _hasSetLegibility;
	SBIconPageIndicatorImageSetResult* _pageIndicatorImageSets;
	SBIconPageIndicatorImageSetCache* _imageSetCache;

}

@property (assign,nonatomic) <SBIconListPageControlDelegate> * delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) SBIconPageIndicatorImageSetCache * imageSetCache;              //@synthesize imageSetCache=_imageSetCache - In the implementation block
-(id)_iconListIndicatorImage:(BOOL)arg1 ;
-(void)_setIndicatorImage:(id)arg1 toEnabled:(BOOL)arg2 ;
-(id)imageSetCache;
-(void)setImageSetCache:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(id)delegate;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(float)defaultHeight;
-(id)_indicatorViewEnabled:(BOOL)arg1 index:(int)arg2 ;
-(void)_transitionIndicator:(id)arg1 toEnabled:(BOOL)arg2 index:(int)arg3 ;
-(void)setLegibilitySettings:(id)arg1 ;
@end

