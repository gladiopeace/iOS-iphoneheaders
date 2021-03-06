/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:36 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MessageUI/MessageUI-Structs.h>
#import <UIKit/UITransitionView.h>
#import <MessageUI/MFComposeHeaderViewDelegate.h>
#import <UIKit/UITextContentViewDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <MessageUI/MFMailComposeContactsSearchControllerDelegate.h>
#import <MessageUI/MFComposeBodyFieldDelegate.h>
#import <MessageUI/MFDragContext.h>

@protocol MFMailPopoverManagerDelegate, MFMailComposeViewDelegate, MFComposeRecipientTextViewDelegate, MFMailComposeToFieldDelegate;
@class UIView, MFComposeBodyField, MFComposeScrollView, MFComposeTextContentView, MFMailComposeRecipientView, MFComposeSubjectView, MFComposeFromView, MFComposeMultiView, MFComposeImageSizeView, UIPickerView, MFFromAddressViewController, UIResponder, NSInvocation, MFMailComposeContactsSearchController, MFSearchResultsViewController, NSArray, UITableView, NSString;

@interface MFMailComposeView : UITransitionView <MFComposeHeaderViewDelegate, UITextContentViewDelegate, UIScrollViewDelegate, UITableViewDelegate, UITableViewDataSource, MFMailComposeContactsSearchControllerDelegate, MFComposeBodyFieldDelegate, MFDragContext> {

	id<MFMailPopoverManagerDelegate> _popoverOwner;
	id<MFMailComposeViewDelegate> _mailComposeViewDelegate;
	id<MFComposeRecipientTextViewDelegate> _composeRecipientViewDelegate;
	UIView* _headerView;
	UIView* _contentView;
	UIView* _shadowView;
	MFComposeBodyField* _bodyField;
	MFComposeScrollView* _bodyScroller;
	MFComposeTextContentView* _textView;
	MFMailComposeRecipientView* _toField;
	MFMailComposeRecipientView* _ccField;
	MFMailComposeRecipientView* _bccField;
	MFMailComposeRecipientView* _lastChangedRecipientView;
	MFMailComposeRecipientView* _activeRecipientView;
	MFComposeSubjectView* _subjectField;
	MFComposeFromView* _fromField;
	MFComposeMultiView* _multiField;
	MFComposeImageSizeView* _imageSizeField;
	UIPickerView* _fromAddressPickerView;
	MFFromAddressViewController* _fromAddressViewController;
	UIView* _fromAddressPickerBackgroundView;
	UIResponder* _firstResponderBeforeSheet;
	UIResponder* _pinningResponder;
	NSInvocation* _delayedPopoverInvocation;
	MFMailComposeContactsSearchController* _searchController;
	MFSearchResultsViewController* _searchViewController;
	NSArray* _searchResults;
	UITableView* _searchResultsTable;
	double _offsetBeforeSearch;
	double _keyboardIntersection;
	unsigned long long _options;
	CGSize _currentContentSize;
	unsigned long long _notifyingBodyField;
	unsigned _isChangingRecipients : 1;
	unsigned _isLoading : 1;
	unsigned _isShowingPeoplePicker : 1;
	unsigned _isRotating : 1;
	unsigned _isClosing : 1;
	unsigned _isShowingFromAddressPickerWheel : 1;
	unsigned _isForEditing : 1;
	unsigned _isAnimationDisabled : 1;
	unsigned _shouldShowOptionalHeaders : 1;
	unsigned _isDraggingRecipients : 1;
	unsigned _hasAppeared : 1;
	id<MFMailComposeToFieldDelegate> _toFieldDelegate;

}

@property (assign,nonatomic) id<MFMailComposeViewDelegate> composeViewDelegate;                            //@synthesize mailComposeViewDelegate=_mailComposeViewDelegate - In the implementation block
@property (assign,nonatomic) id<MFComposeRecipientTextViewDelegate> composeRecipientDelegate;              //@synthesize composeRecipientViewDelegate=_composeRecipientViewDelegate - In the implementation block
@property (assign,nonatomic) id<MFMailPopoverManagerDelegate> popoverOwner;                                //@synthesize popoverOwner=_popoverOwner - In the implementation block
@property (assign,nonatomic) id<MFMailComposeToFieldDelegate> toFieldDelegate;                             //@synthesize toFieldDelegate=_toFieldDelegate - In the implementation block
@property (assign,nonatomic) BOOL isForEditing; 
@property (assign,getter=isAnimationDisabled,nonatomic) BOOL animationDisabled; 
@property (assign,getter=isChangingRecipients,nonatomic) BOOL changingRecipients; 
@property (assign,getter=isShowingPeoplePicker,nonatomic) BOOL showingPeoplePicker; 
@property (assign,getter=isLoading,nonatomic) BOOL loading; 
@property (getter=isSearching,nonatomic,readonly) BOOL searching; 
@property (nonatomic,readonly) MFMailComposeRecipientView * toField;                                       //@synthesize toField=_toField - In the implementation block
@property (nonatomic,readonly) MFMailComposeRecipientView * ccField;                                       //@synthesize ccField=_ccField - In the implementation block
@property (nonatomic,readonly) MFMailComposeRecipientView * bccField;                                      //@synthesize bccField=_bccField - In the implementation block
@property (nonatomic,readonly) MFComposeSubjectView * subjectField;                                        //@synthesize subjectField=_subjectField - In the implementation block
@property (nonatomic,readonly) MFComposeFromView * fromField;                                              //@synthesize fromField=_fromField - In the implementation block
@property (nonatomic,readonly) MFComposeImageSizeView * imageSizeField;                                    //@synthesize imageSizeField=_imageSizeField - In the implementation block
@property (nonatomic,readonly) MFComposeMultiView * multiField;                                            //@synthesize multiField=_multiField - In the implementation block
@property (nonatomic,readonly) MFComposeBodyField * bodyField;                                             //@synthesize bodyField=_bodyField - In the implementation block
@property (nonatomic,readonly) MFComposeScrollView * bodyScroller;                                         //@synthesize bodyScroller=_bodyScroller - In the implementation block
@property (nonatomic,readonly) MFComposeTextContentView * bodyTextView;                                    //@synthesize textView=_textView - In the implementation block
@property (nonatomic,readonly) MFSearchResultsViewController * searchViewController;                       //@synthesize searchViewController=_searchViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isSearching;
-(id<MFMailComposeViewDelegate>)composeViewDelegate;
-(void)_setupField:(id*)arg1 withLabel:(id)arg2 navTitle:(id)arg3 frame:(CGRect)arg4 ;
-(void)menuDidHide;
-(void)automaticKeyboardFinishedAppearing:(id)arg1 ;
-(void)automaticKeyboardFinishedDisappearing:(id)arg1 ;
-(void)setToFieldDelegate:(id<MFMailComposeToFieldDelegate>)arg1 ;
-(void)_cancelAnimations;
-(BOOL)isFromAddressPickerVisible;
-(void)setFromAddressPickerVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_multiFieldClicked;
-(double)_heightForBottomView;
-(void)_adjustScrollerContentSize;
-(void)_layoutComposeHeaderViewsWithChangingHeader:(id)arg1 toSize:(CGSize)arg2 withPinFrame:(out CGRect*)arg3 ;
-(BOOL)isSearchResultsPopoverVisible;
-(id)_searchResultsTable;
-(void)_cancelDelayedPopover;
-(void)_presentDelayedPopover;
-(void)_layoutSubviews:(BOOL)arg1 changingView:(id)arg2 toSize:(CGSize)arg3 searchResultsWereDismissed:(BOOL)arg4 ;
-(void)_layoutFromFieldWithChangingView:(id)arg1 toSize:(CGSize)arg2 fieldFrame:(CGRect)arg3 ;
-(void)_layoutMultiFieldWithChangingView:(id)arg1 toSize:(CGSize)arg2 fieldFrame:(CGRect)arg3 ;
-(void)_layoutSubviewsWithActiveRecipientView:(BOOL)arg1 changingView:(id)arg2 toSize:(CGSize)arg3 ;
-(BOOL)isChangingRecipients;
-(void)_setupBodyFieldWithHeaderFrame:(CGRect)arg1 enclosingFrame:(CGRect)arg2 changingView:(id)arg3 frameToPin:(CGRect)arg4 wasSearching:(BOOL)arg5 ;
-(void)_layoutSubviews:(BOOL)arg1 changingView:(id)arg2 toSize:(CGSize)arg3 ;
-(MFComposeSubjectView *)subjectField;
-(void)clearSearchForRecipientView:(id)arg1 reflow:(BOOL)arg2 clear:(BOOL)arg3 ;
-(void)_updateOptionalHeaderVisibilityForceVisible:(BOOL)arg1 ;
-(MFComposeScrollView *)bodyScroller;
-(CGRect)_frameForFromAddressPicker;
-(void)_adjustScrollerForBottomView;
-(void)_finishUpRotationToInterfaceOrientation:(long long)arg1 ;
-(void)_adjustHeaderFieldsPreferredContentSize;
-(id)_focusedRecipientView;
-(void)restoreFirstResponderWithKeyboardPinning:(BOOL)arg1 ;
-(void)setKeyboardVisible:(BOOL)arg1 animate:(BOOL)arg2 ;
-(void)saveFirstResponderWithKeyboardPinning:(BOOL)arg1 ;
-(void)setFromAddressPickerVisible:(BOOL)arg1 ;
-(void)_updateKeyboardIntersection:(CGRect)arg1 ;
-(void)selectSearchResultsRecipientAtIndexPath:(id)arg1 ;
-(BOOL)presentSearchResults:(id)arg1 ;
-(void)setChangingRecipients:(BOOL)arg1 ;
-(id)sendingAddressForComposeContactsSearchController:(id)arg1 ;
-(void)composeContactsSearchController:(id)arg1 didSortResults:(id)arg2 ;
-(void)composeContactsSearchController:(id)arg1 finishedWithResults:(BOOL)arg2 ;
-(void)composeContactsSearchController:(id)arg1 didFindCorecipients:(id)arg2 ;
-(void)composeBodyFieldFrameChanged:(id)arg1 ;
-(void)composeBodyFieldDidDraw:(id)arg1 ;
-(void)composeBodyFieldDidFirstVisuallyNonEmptyLayout:(id)arg1 ;
-(void)dragBeganInWindow:(id)arg1 ;
-(void)dragEnded;
-(id)dragWindow;
-(id)dragScrollView;
-(void)setComposeViewDelegate:(id<MFMailComposeViewDelegate>)arg1 ;
-(void)setComposeRecipientDelegate:(id<MFComposeRecipientTextViewDelegate>)arg1 ;
-(void)resetContentSize;
-(void)toggleImageSizeFieldIfNecessary;
-(void)setRecipientFieldsEditable:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)searchResultsPopoverWasDismissed;
-(BOOL)isForEditing;
-(void)setIsForEditing:(BOOL)arg1 ;
-(void)setAnimationDisabled:(BOOL)arg1 ;
-(BOOL)isAnimationDisabled;
-(void)setShowingPeoplePicker:(BOOL)arg1 ;
-(BOOL)isShowingPeoplePicker;
-(void)cancelDelayedPopover;
-(void)fromAddressPickerPopoverWasDismissed;
-(void)fromAddressPickerNeedsToBeRefreshed;
-(void)saveFirstResponder;
-(void)restoreFirstResponder;
-(void)focusFirstResponderAfterRecipientView:(id)arg1 ;
-(void)scrollToTopAnimated:(BOOL)arg1 ;
-(void)layoutForChangedComposeRecipientView:(id)arg1 size:(CGSize)arg2 ;
-(void)viewDidBecomeFirstResponder:(id)arg1 ;
-(void)updateOptionalHeaderVisibility;
-(void)selectNextSearchResult;
-(void)selectPreviousSearchResult;
-(BOOL)chooseSelectedSearchResult;
-(BOOL)presentSearchResults;
-(void)dismissSearchResults;
-(void)beginSearchForText:(id)arg1 recipientView:(id)arg2 ;
-(void)invalidateSearchResultRecipient:(id)arg1 ;
-(void)findCorecipientsWithRecipientView:(id)arg1 ;
-(void)didAppear;
-(void)willDisappear;
-(id<MFComposeRecipientTextViewDelegate>)composeRecipientDelegate;
-(id<MFMailPopoverManagerDelegate>)popoverOwner;
-(void)setPopoverOwner:(id<MFMailPopoverManagerDelegate>)arg1 ;
-(id<MFMailComposeToFieldDelegate>)toFieldDelegate;
-(MFMailComposeRecipientView *)ccField;
-(MFMailComposeRecipientView *)bccField;
-(MFComposeFromView *)fromField;
-(MFComposeImageSizeView *)imageSizeField;
-(MFComposeMultiView *)multiField;
-(MFComposeBodyField *)bodyField;
-(MFSearchResultsViewController *)searchViewController;
-(void)composeHeaderViewClicked:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 options:(unsigned long long)arg2 ;
-(void)setAutoresizingMask:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(void)removeFromSuperview;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)_collectKeyViews:(id)arg1 ;
-(void)setScrollsToTop:(BOOL)arg1 ;
-(BOOL)endEditing:(BOOL)arg1 ;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(void)_layoutSubviews:(BOOL)arg1 ;
-(BOOL)isLoading;
-(id)bottomView;
-(BOOL)textContentView:(id)arg1 shouldScrollForPendingContentSize:(CGSize)arg2 ;
-(BOOL)textContentView:(id)arg1 shouldChangeSizeForContentSize:(CGSize)arg2 ;
-(void)textContentView:(id)arg1 didChangeSize:(CGSize)arg2 ;
-(MFComposeTextContentView *)bodyTextView;
-(MFMailComposeRecipientView *)toField;
-(void)parentWillClose;
-(void)parentDidClose;
-(BOOL)isKeyboardVisible;
-(void)setLoading:(BOOL)arg1 ;
-(void)cancelSearch;
@end

