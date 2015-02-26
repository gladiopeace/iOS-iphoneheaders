/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:29:30 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol UIAlertControllerBackgroundView;
@class UIAlertController, UIView, UICollectionView, _UIAlertControllerCollectionViewFlowLayout, UILabel, _UIAlertControllerActionView, _UIAlertControllerShadowedScrollView, _UIKeyboardLayoutAlignmentView, UIAlertControllerVisualStyle, NSMutableArray, NSLayoutConstraint, NSString;

@interface _UIAlertControllerView : UIView <UICollectionViewDataSource, UIScrollViewDelegate> {

	UIAlertController* _alertController;
	UIView* _roundedCornersView;
	UICollectionView* _actionCollectionView;
	_UIAlertControllerCollectionViewFlowLayout* _flowLayout;
	UILabel* _titleLabel;
	UILabel* _messageLabel;
	UIView* _contentViewControllerContainerView;
	_UIAlertControllerActionView* _discreteCancelActionView;
	UIView*<UIAlertControllerBackgroundView> _backdropView;
	_UIAlertControllerShadowedScrollView* _contentScrollView;
	UIView* _contentScrollViewContentView;
	UIView* _contentView;
	UIView* _foregroundView;
	UIView* _dimmingView;
	_UIKeyboardLayoutAlignmentView* _keyboardLayoutAlignmentView;
	UIView* _keyboardLayoutAlignmentAvailableSpaceView;
	UIAlertControllerVisualStyle* _visualStyle;
	long long _layoutOrientation;
	BOOL _inPopover;
	BOOL _hasDimmingView;
	BOOL _showsCancelAction;
	BOOL _cancelActionIsDiscrete;
	BOOL _shouldHaveBackdropView;
	BOOL _alignsToKeyboard;
	NSMutableArray* _backdropViewConstraints;
	NSMutableArray* _dimmingViewConstraints;
	NSMutableArray* _dimmingViewForegroundViewTopConstraints;
	NSMutableArray* _dimmingViewForegroundViewBottomConstraints;
	NSMutableArray* _dimmingViewConstraintsForAlertStyle;
	NSMutableArray* _dimmingViewConstraintsForActionSheetStyle;
	NSMutableArray* _noDimmingViewConstraints;
	BOOL _hasCachedLargestActionDimension;
	CGSize _largestActionDimension;
	NSLayoutConstraint* _foregroundViewWidthConstraint;
	NSLayoutConstraint* _contentViewTopConstraint;
	NSLayoutConstraint* _contentViewBottomConstraint;
	NSLayoutConstraint* _titleLabelTopAlignmentConstraint;
	NSLayoutConstraint* _messageLabelTopAlignmentConstraint;
	NSLayoutConstraint* _contentViewControllerViewLeftConstraint;
	NSLayoutConstraint* _contentViewControllerViewRightConstraint;
	NSLayoutConstraint* _contentViewControllerViewTopConstraint;
	NSLayoutConstraint* _contentViewControllerViewBottomConstraint;
	NSLayoutConstraint* _contentScrollViewBottomConstraint;
	NSLayoutConstraint* _contentViewControllerContainerViewTopAlignmentConstraint;
	NSLayoutConstraint* _contentViewControllerContainerViewWidthConstraint;
	NSLayoutConstraint* _contentViewControllerContainerViewHeightConstraint;
	NSLayoutConstraint* _collectionViewTopAlignmentConstraint;
	NSLayoutConstraint* _centerXConstraint;
	NSLayoutConstraint* _centerYConstraint;
	NSLayoutConstraint* _widthConstraint;
	NSLayoutConstraint* _heightConstraint;
	NSLayoutConstraint* _collectionViewWidthConstraint;
	NSLayoutConstraint* _collectionViewHeightConstraint;
	NSLayoutConstraint* _discreteCancelActionViewTopConstraint;
	NSLayoutConstraint* _discreteCancelActionViewLeadingConstraint;
	NSLayoutConstraint* _discreteCancelActionViewWidthConstraint;
	NSLayoutConstraint* _discreteCancelActionViewHeightConstraint;
	NSLayoutConstraint* _backdropViewBottomConstraint;
	NSLayoutConstraint* _backdropViewRightConstraint;

}

@property (assign) UIAlertController * alertController; 
@property (readonly) UIView * _foregroundView;                                                                 //@synthesize foregroundView=_foregroundView - In the implementation block
@property (readonly) UIView * _dimmingView;                                                                    //@synthesize dimmingView=_dimmingView - In the implementation block
@property (readonly) _UIAlertControllerCollectionViewFlowLayout * _flowLayout;                                 //@synthesize flowLayout=_flowLayout - In the implementation block
@property (assign) long long layoutOrientation; 
@property (setter=_setVisualStyle:,nonatomic,retain) UIAlertControllerVisualStyle * _visualStyle; 
@property (assign) BOOL inPopover; 
@property (assign) BOOL hasDimmingView; 
@property (assign) BOOL showsCancelAction; 
@property (assign) BOOL cancelActionIsDiscrete; 
@property (assign) BOOL shouldHaveBackdropView; 
@property (assign) BOOL alignsToKeyboard; 
@property (retain) NSLayoutConstraint * foregroundViewWidthConstraint;                                         //@synthesize foregroundViewWidthConstraint=_foregroundViewWidthConstraint - In the implementation block
@property (retain) NSLayoutConstraint * contentViewTopConstraint;                                              //@synthesize contentViewTopConstraint=_contentViewTopConstraint - In the implementation block
@property (retain) NSLayoutConstraint * contentViewBottomConstraint;                                           //@synthesize contentViewBottomConstraint=_contentViewBottomConstraint - In the implementation block
@property (retain) NSLayoutConstraint * titleLabelTopAlignmentConstraint;                                      //@synthesize titleLabelTopAlignmentConstraint=_titleLabelTopAlignmentConstraint - In the implementation block
@property (retain) NSLayoutConstraint * messageLabelTopAlignmentConstraint;                                    //@synthesize messageLabelTopAlignmentConstraint=_messageLabelTopAlignmentConstraint - In the implementation block
@property (retain) NSLayoutConstraint * contentViewControllerViewLeftConstraint;                               //@synthesize contentViewControllerViewLeftConstraint=_contentViewControllerViewLeftConstraint - In the implementation block
@property (retain) NSLayoutConstraint * contentViewControllerViewRightConstraint;                              //@synthesize contentViewControllerViewRightConstraint=_contentViewControllerViewRightConstraint - In the implementation block
@property (retain) NSLayoutConstraint * contentViewControllerViewTopConstraint;                                //@synthesize contentViewControllerViewTopConstraint=_contentViewControllerViewTopConstraint - In the implementation block
@property (retain) NSLayoutConstraint * contentViewControllerViewBottomConstraint;                             //@synthesize contentViewControllerViewBottomConstraint=_contentViewControllerViewBottomConstraint - In the implementation block
@property (retain) NSLayoutConstraint * contentScrollViewBottomConstraint;                                     //@synthesize contentScrollViewBottomConstraint=_contentScrollViewBottomConstraint - In the implementation block
@property (retain) NSLayoutConstraint * contentViewControllerContainerViewTopAlignmentConstraint;              //@synthesize contentViewControllerContainerViewTopAlignmentConstraint=_contentViewControllerContainerViewTopAlignmentConstraint - In the implementation block
@property (retain) NSLayoutConstraint * contentViewControllerContainerViewWidthConstraint;                     //@synthesize contentViewControllerContainerViewWidthConstraint=_contentViewControllerContainerViewWidthConstraint - In the implementation block
@property (retain) NSLayoutConstraint * contentViewControllerContainerViewHeightConstraint;                    //@synthesize contentViewControllerContainerViewHeightConstraint=_contentViewControllerContainerViewHeightConstraint - In the implementation block
@property (retain) NSLayoutConstraint * collectionViewTopAlignmentConstraint;                                  //@synthesize collectionViewTopAlignmentConstraint=_collectionViewTopAlignmentConstraint - In the implementation block
@property (retain) NSLayoutConstraint * centerXConstraint;                                                     //@synthesize centerXConstraint=_centerXConstraint - In the implementation block
@property (retain) NSLayoutConstraint * centerYConstraint;                                                     //@synthesize centerYConstraint=_centerYConstraint - In the implementation block
@property (retain) NSLayoutConstraint * widthConstraint;                                                       //@synthesize widthConstraint=_widthConstraint - In the implementation block
@property (retain) NSLayoutConstraint * heightConstraint;                                                      //@synthesize heightConstraint=_heightConstraint - In the implementation block
@property (retain) NSLayoutConstraint * collectionViewWidthConstraint;                                         //@synthesize collectionViewWidthConstraint=_collectionViewWidthConstraint - In the implementation block
@property (retain) NSLayoutConstraint * collectionViewHeightConstraint;                                        //@synthesize collectionViewHeightConstraint=_collectionViewHeightConstraint - In the implementation block
@property (retain) NSLayoutConstraint * discreteCancelActionViewTopConstraint;                                 //@synthesize discreteCancelActionViewTopConstraint=_discreteCancelActionViewTopConstraint - In the implementation block
@property (retain) NSLayoutConstraint * discreteCancelActionViewLeadingConstraint;                             //@synthesize discreteCancelActionViewLeadingConstraint=_discreteCancelActionViewLeadingConstraint - In the implementation block
@property (retain) NSLayoutConstraint * discreteCancelActionViewWidthConstraint;                               //@synthesize discreteCancelActionViewWidthConstraint=_discreteCancelActionViewWidthConstraint - In the implementation block
@property (retain) NSLayoutConstraint * discreteCancelActionViewHeightConstraint;                              //@synthesize discreteCancelActionViewHeightConstraint=_discreteCancelActionViewHeightConstraint - In the implementation block
@property (retain) NSLayoutConstraint * backdropViewBottomConstraint;                                          //@synthesize backdropViewBottomConstraint=_backdropViewBottomConstraint - In the implementation block
@property (retain) NSLayoutConstraint * backdropViewRightConstraint;                                           //@synthesize backdropViewRightConstraint=_backdropViewRightConstraint - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(BOOL)_retroactivelyRequiresConstraintBasedLayout;
-(void)_UIAppearance_setAlignsToKeyboard:(BOOL)arg1 ;
-(void)_UIAppearance_setShouldHaveBackdropView:(BOOL)arg1 ;
-(void)_UIAppearance_setShowsCancelAction:(BOOL)arg1 ;
-(void)_UIAppearance_setHasDimmingView:(BOOL)arg1 ;
-(void)_UIAppearance_setInPopover:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(UIView *)_foregroundView;
-(id)actions;
-(id)title;
-(long long)tintAdjustmentMode;
-(void)setTintAdjustmentMode:(long long)arg1 ;
-(void)didMoveToSuperview;
-(void)willMoveToSuperview:(id)arg1 ;
-(void)_updateStyle;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)layoutOrientation;
-(void)setLayoutOrientation:(long long)arg1 ;
-(id)message;
-(id)contentViewController;
-(UIView *)_dimmingView;
-(double)_idealWidth;
-(NSLayoutConstraint *)widthConstraint;
-(NSLayoutConstraint *)heightConstraint;
-(BOOL)inPopover;
-(void)_actionsChanged;
-(void)_propertiesChanged;
-(void)setAlertController:(UIAlertController *)arg1 ;
-(_UIAlertControllerCollectionViewFlowLayout *)_flowLayout;
-(void)setHasDimmingView:(BOOL)arg1 ;
-(void)setShouldHaveBackdropView:(BOOL)arg1 ;
-(void)setAlignsToKeyboard:(BOOL)arg1 ;
-(void)_recomputeAlignedDescriptiveLabelTextWidth;
-(void)_setVisualStyle:(id)arg1 ;
-(void)setCancelActionIsDiscrete:(BOOL)arg1 ;
-(id)cancelAction;
-(UIAlertControllerVisualStyle *)_visualStyle;
-(void)_removeContentViewController;
-(void)_sizeOfContentViewControllerChanged;
-(void)setShowsCancelAction:(BOOL)arg1 ;
-(id)_attributedTitle;
-(id)_attributedMessage;
-(CGSize)_contentViewControllerSize;
-(UIAlertController *)alertController;
-(void)_contentSizeChanged;
-(void)setInPopover:(BOOL)arg1 ;
-(BOOL)_hasTitle;
-(BOOL)_hasMessage;
-(void)_updateCellStyle:(id)arg1 ;
-(void)_prepareViewsAndAddConstraints;
-(void)_prepareForegroundView;
-(void)_prepareContentView;
-(void)_prepareContentScrollView;
-(void)_prepareTitleLabel;
-(void)_prepareMesssageLabel;
-(void)_prepareContentViewControllerContainerView;
-(void)_prepareActionCollectionView;
-(void)_prepareCancelView;
-(void)_prepareDimmingView;
-(void)_prepareKeyboardLayoutAlignmentViews;
-(void)_applyViewConstraints;
-(void)_applyTitleConstraints;
-(void)_applyMessageConstraints;
-(void)_applyContentViewControllerContainerViewConstraints;
-(void)_applyCollectionViewConstraints;
-(void)_prepareDimmingViewConstraints;
-(void)_invalidateFlowLayout;
-(BOOL)_buttonsAreTopMost;
-(double)_labelHorizontalInsets;
-(CGSize)_sizeForLayoutWidthDetermination;
-(BOOL)_horizontalLayoutCanUseFullWidth;
-(double)_verticalLayoutWidth;
-(double)_availableWidthForHorizontalLayout:(BOOL)arg1 ;
-(BOOL)_wantsHorizontalActionSheet;
-(long long)_numberOfActionsForCollectionView;
-(double)_idealLayoutWidth;
-(BOOL)hasDiscreteHorizontalCancelAction;
-(CGSize)_minimumSizeForAllActions;
-(BOOL)_wantsHorizontalCollectionViewLayout;
-(CGSize)_itemSizeForHorizontalLayout:(BOOL)arg1 ;
-(BOOL)showsCancelAction;
-(BOOL)cancelActionIsDiscrete;
-(BOOL)_canLayOutActionsHorizontally;
-(NSLayoutConstraint *)foregroundViewWidthConstraint;
-(double)_layoutWidthForHorizontalLayout:(BOOL)arg1 ;
-(void)setForegroundViewWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(CGSize)_collectionViewSizeForHorizontalLayout:(BOOL)arg1 itemSize:(CGSize)arg2 ;
-(NSLayoutConstraint *)collectionViewWidthConstraint;
-(void)setCollectionViewWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)collectionViewHeightConstraint;
-(void)setCollectionViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(BOOL)_hasDiscreteCancelAction;
-(double)_marginBetweenContentAndDiscreteCancelAction;
-(id)_bottomMostViewToAlignDiscreteCancelActionViewTo;
-(NSLayoutConstraint *)discreteCancelActionViewTopConstraint;
-(void)setDiscreteCancelActionViewTopConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)discreteCancelActionViewLeadingConstraint;
-(void)setDiscreteCancelActionViewLeadingConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)discreteCancelActionViewWidthConstraint;
-(void)setDiscreteCancelActionViewWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)discreteCancelActionViewHeightConstraint;
-(void)setDiscreteCancelActionViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)_removeDiscreteCancelActionView;
-(BOOL)shouldHaveBackdropView;
-(NSLayoutConstraint *)backdropViewRightConstraint;
-(void)setBackdropViewRightConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)contentViewBottomConstraint;
-(void)setContentViewBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)titleLabelTopAlignmentConstraint;
-(void)setTitleLabelTopAlignmentConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)messageLabelTopAlignmentConstraint;
-(void)setMessageLabelTopAlignmentConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)contentViewControllerContainerViewTopAlignmentConstraint;
-(void)setContentViewControllerContainerViewTopAlignmentConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)contentScrollViewBottomConstraint;
-(void)setContentScrollViewBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)collectionViewTopAlignmentConstraint;
-(void)setCollectionViewTopAlignmentConstraint:(NSLayoutConstraint *)arg1 ;
-(void)updateDefaultAction;
-(NSLayoutConstraint *)backdropViewBottomConstraint;
-(void)setBackdropViewBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(BOOL)hasDimmingView;
-(NSLayoutConstraint *)contentViewTopConstraint;
-(void)setContentViewTopConstraint:(NSLayoutConstraint *)arg1 ;
-(void)_actionLayoutDirectionChanged;
-(BOOL)_shouldHaveCancelActionInCollectionView;
-(id)_actionsForCollectionView;
-(id)_orderedActionsForCollectionView;
-(id)defaultAction;
-(BOOL)_wantsHorizontalAlert;
-(BOOL)_actionLayoutIsVertical;
-(void)_updateLabelFontSizes;
-(void)_updateLabelTextColor;
-(void)_updateLabelMaximumLines;
-(void)_updateVisualAltitude;
-(void)_updateBackdrop;
-(void)_updateCornerRadius;
-(void)_updateInsets;
-(BOOL)_hasAttributedTitle;
-(BOOL)_hasAttributedMessage;
-(void)_prepareBackdropViewConstraints;
-(BOOL)_shouldTreatEmptyStringsAsNil;
-(void)_reevaluateSuperviewSizingConstraints;
-(void)_applyKeyboardAlignmentViewsConstraints;
-(void)setContentViewControllerViewLeftConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setContentViewControllerViewRightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setContentViewControllerViewTopConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setContentViewControllerViewBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)contentViewControllerContainerViewWidthConstraint;
-(void)setContentViewControllerContainerViewWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)contentViewControllerContainerViewHeightConstraint;
-(void)setContentViewControllerContainerViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)contentViewControllerViewLeftConstraint;
-(NSLayoutConstraint *)contentViewControllerViewRightConstraint;
-(NSLayoutConstraint *)contentViewControllerViewTopConstraint;
-(NSLayoutConstraint *)contentViewControllerViewBottomConstraint;
-(NSLayoutConstraint *)centerXConstraint;
-(NSLayoutConstraint *)centerYConstraint;
-(void)setCenterXConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setCenterYConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(BOOL)alignsToKeyboard;
@end
