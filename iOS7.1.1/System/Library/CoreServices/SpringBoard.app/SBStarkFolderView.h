/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:57:47 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBFolderView.h>

@class UIButton, SBStarkIconLayoutOverrideStrategy;

@interface SBStarkFolderView : SBFolderView {

	BOOL _buttonUXEnabled;
	UIButton* _scrollLeftButton;
	UIButton* _scrollRightButton;
	CGSize _scrollButtonSize;
	SBStarkIconLayoutOverrideStrategy* _iconLayoutOverrideStrategy;
	UIEdgeInsets _listViewInsets;

}

@property (nonatomic,retain) SBStarkIconLayoutOverrideStrategy * iconLayoutOverrideStrategy; 
-(id)initWithFolder:(id)arg1 orientation:(int)arg2 viewMap:(id)arg3 ;
-(void)_scrollButtonPressed:(id)arg1 ;
-(float)_offsetToCenterPageControlInSpaceForPageControl;
-(void)_updateScrollButtonStatesForIndex:(int)arg1 ;
-(void)resetIconListViews;
-(void)_evaluateScrollingForListViewsIfNecessary;
-(void)updateIconListViews;
-(void)_updateIconListFrames;
-(void)_updatePageControlToIndex:(int)arg1 ;
-(void)setInteractionAffordances:(unsigned)arg1 ;
-(id)iconLayoutOverrideStrategy;
-(void)setIconLayoutOverrideStrategy:(id)arg1 ;
-(id)_newPageControl;
-(void)dealloc;
-(void)_layoutSubviews;
@end

