/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:19:48 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UITableViewAccessibility_super.h>

@interface UITableViewAccessibility : UITableViewAccessibility_super
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(void)_initializeSafeCategory;
+(id)_accessibilityTargetClassName;
+(id)_installSafeCategoryValidationMethod;
+(id)_initializeSafeCategoryFromValidationManager;
-(id)_accessibilityInternalData;
-(void)_accessibilityClearChildren;
-(void)_setAccessibilitySearchTableViewHidden;
-(id)_accessibilityFooterElement;
-(bool)_accessibilityShouldVerifyTableViewCellsAreVisibleByHitTesting;
-(void)_axPostLayoutChange;
-(bool)_axSearchForSearchResultsView:(id)arg1 ;
-(id)_axAttemptStoryboard:(id)arg1 viewType:(int)arg2 ;
-(void)setReusableCellsEnabled:(bool)arg1 ;
-(void)_setAccessibilitySearchTableViewVisible;
-(bool)_accessibilityIsSearchTableVisible;
-(id)_accessibilitySearchResultsTableView;
-(bool)_accessibilityShouldDisableCellReuse;
-(id)_axAttemptCreationOfViewType:(int)arg1 identifier:(id)arg2 ;
-(void)_accessibilityInitializeInternalData;
-(bool)_accessibilitySearchTableViewVisible;
-(bool)_accessibilitySearchControllerDimmingViewVisible;
-(id)accessibilityTableViewSectionElementAtSection:(long long)arg1 isHeader:(bool)arg2 ;
-(id)_accessibilityFuzzyHitTest:(CGPoint*)arg1 withEvent:(id)arg2 ;
-(id)_accessibilityTableViewCellElementForIndexPath:(id)arg1 ;
-(id)_accessibilityUIScrollViewScrollStatus;
-(id)_accessibilityVisibleHeaderSections;
-(void)_setAccessibilitySearchControllerDimmingViewHidden;
-(id)accessibilityTableViewCellAccessibilityElementForTableViewCell:(id)arg1 ;
-(void)_setAccessibilitySearchControllerDimmingViewVisible;
-(void)accessibilityFindMockParentForTableViewCell:(id)arg1 ;
-(id)accessibilityCellForRowAtIndexPath:(id)arg1 ;
-(void)dealloc;
-(void)reloadData;
-(id)dequeueReusableCellWithIdentifier:(id)arg1 ;
-(id)description;
-(void)_handleDeviceOrientationChange:(id)arg1 ;
-(id)accessibilityLabel;
-(void)setEditing:(bool)arg1 animated:(bool)arg2 ;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
-(void)setTableHeaderViewShouldAutoHide:(bool)arg1 ;
-(id)indexPathsForRowsInRect:(CGRect)arg1 ;
-(void)_reorderPositionChangedForCell:(id)arg1 ;
-(void)_endReorderingForCell:(id)arg1 wasCancelled:(bool)arg2 animated:(bool)arg3 ;
-(id)dequeueReusableHeaderFooterViewWithIdentifier:(id)arg1 ;
-(void)setCountString:(id)arg1 ;
-(void)insertSections:(id)arg1 withRowAnimation:(long long)arg2 ;
-(void)deleteSections:(id)arg1 withRowAnimation:(long long)arg2 ;
-(void)reloadSections:(id)arg1 withRowAnimation:(long long)arg2 ;
-(void)insertRowsAtIndexPaths:(id)arg1 withRowAnimation:(long long)arg2 ;
-(void)deleteRowsAtIndexPaths:(id)arg1 withRowAnimation:(long long)arg2 ;
-(void)reloadRowsAtIndexPaths:(id)arg1 withRowAnimation:(long long)arg2 ;
-(id)dequeueReusableCellWithIdentifier:(id)arg1 forIndexPath:(id)arg2 ;
-(CGRect)accessibilityFrame;
-(unsigned long long)accessibilityTraits;
-(bool)isAccessibilityElement;
-(bool)accessibilityElementsHidden;
-(bool)shouldGroupAccessibilityChildren;
-(long long)accessibilityElementCount;
-(id)accessibilityElementAtIndex:(long long)arg1 ;
-(long long)indexOfAccessibilityElement:(id)arg1 ;
-(id)_accessibilitySupplementaryFooterViews;
-(id)_accessibilitySupplementaryHeaderViews;
-(id)_accessibilityHitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)_accessibilityScrollStatus;
-(id)accessibilityTableViewCellElementAtGlobalRow:(long long)arg1 ;
-(id)_accessibilitySubviews;
-(id)_accessibilityUserTestingVisibleCells;
-(id)_accessibilityUserTestingVisibleSections;
-(bool)_accessibilityIsScannerElement;
-(id)_accessibilityHeaderElement;
-(bool)accessibilityScrollLeftPageSupported;
-(bool)accessibilityScrollRightPageSupported;
-(id)_accessibilityScannerGroupElements;
-(bool)_accessibilityIsScannerGroup;
-(id)accessibilityElementForRow:(long long)arg1 andColumn:(long long)arg2 ;
@end

