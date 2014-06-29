/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:01 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UITableView.h>
#import <UIKit/UITableViewDelegate.h>

@class NSMutableIndexSet, UIColor, NSMutableArray;

@interface UIPickerTableView : UITableView <UITableViewDelegate> {

	CGRect _selectionBarRect;
	long long _selectionBarRow;
	NSMutableIndexSet* _checkedRows;
	double _lastClickedOffset;
	long long _lastSelectedRow;
	bool _usesModernStyle;
	UIColor* _textColor;
	CGRect _visibleRect;
	NSMutableArray* _referencingCells;
	struct {
		unsigned allowsMultipleSelection : 1;
		unsigned scrollingDirection : 2;
		unsigned didSelectDisabled : 1;
		unsigned skipRowChangeNotifications : 1;
		unsigned scrollingForSelection : 1;
		unsigned pickerViewImplementsSelectionBarChanged : 2;
		unsigned cancellingAnimation : 1;
		unsigned updatingContentInset : 1;
	}  _pickerTableFlags;

}

@property (assign,nonatomic) CGRect selectionBarRect;                                                   //@synthesize selectionBarRect=_selectionBarRect - In the implementation block
@property (assign,nonatomic) long long selectionBarRow;                                                 //@synthesize selectionBarRow=_selectionBarRow - In the implementation block
@property (assign,nonatomic) long long lastSelectedRow;                                                 //@synthesize lastSelectedRow=_lastSelectedRow - In the implementation block
@property (setter=_setUsesModernStyle:,getter=_usesModernStyle) bool _usesModernStyle; 
@property (setter=_setTextColor:,getter=_textColor,nonatomic,retain) UIColor * _textColor; 
-(void)dealloc;
-(id)_pickerView;
-(void)setFrame:(CGRect)arg1 ;
-(void)_setTextColor:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 visibleRect:(CGRect)arg3 ;
-(void)layoutSubviews;
-(long long)selectionBarRow;
-(bool)_usesModernStyle;
-(void)setSelectionBarRect:(CGRect)arg1 ;
-(bool)selectRow:(long long)arg1 animated:(bool)arg2 notify:(bool)arg3 ;
-(bool)_scrollRowAtIndexPathToSelectionBar:(id)arg1 animated:(bool)arg2 ;
-(void)setBounds:(CGRect)arg1 ;
-(bool)isRowChecked:(long long)arg1 ;
-(id)_textColor;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(bool)scrollViewShouldScrollToTop:(id)arg1 ;
-(void)_setUsesModernStyle:(bool)arg1 ;
-(void)setContentOffset:(CGPoint)arg1 ;
-(bool)_beginTrackingWithEvent:(id)arg1 ;
-(void)_scrollViewAnimationEnded:(id)arg1 finished:(bool)arg2 ;
-(void)_updateContentInsets;
-(CGRect)_visibleBounds;
-(bool)_shouldWrapCells;
-(void)_rectChangedWithNewSize:(CGSize)arg1 oldSize:(CGSize)arg2 ;
-(id)_containerView;
-(id)_anyDateLabel;
-(void)_setSelectionBarRow:(long long)arg1 ;
-(CGPoint)contentOffsetForRowAtIndexPath:(id)arg1 ;
-(void)_notifyContentOffsetChange;
-(id)_checkedRows;
-(double)_yRangingFromZeroTo:(double)arg1 forUnitY:(double)arg2 ;
-(double)_viewYForUnitY:(double)arg1 ;
-(double)_rotationForCellCenterY:(double)arg1 ;
-(double)_distanceToCenterForY:(double)arg1 ;
-(double)_yForY:(double)arg1 ;
-(double)_unitYForViewY:(double)arg1 ;
-(double)_zForUnitY:(double)arg1 ;
-(void)_setContentOffset:(CGPoint)arg1 notify:(bool)arg2 ;
-(CATransform3D)_transformForCellAtY:(double)arg1 ;
-(void)_playClickIfNecessary;
-(CGRect)selectionBarRect;
-(bool)didSelectDisabled:(bool)arg1 ;
-(void)_scrollingFinished;
-(CGRect)_selectionBarRectForBounds:(CGRect)arg1 ;
-(double)_zCoordinateForYCoordinate:(double)arg1 ;
-(long long)lastSelectedRow;
-(void)setLastSelectedRow:(long long)arg1 ;
@end

