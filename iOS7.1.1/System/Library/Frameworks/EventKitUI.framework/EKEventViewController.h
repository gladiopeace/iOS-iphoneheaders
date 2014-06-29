/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:59 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <EventKitUI/EKEventTitleDetailItemDelegate.h>
#import <EventKitUI/EKUIEventStatusButtonsViewDelegate.h>

@protocol EKEventViewDelegate;
@class _UIAccessDeniedView, EKEventDetailItem, EKUIRecurrenceAlertController, EKUIEventStatusButtonsView, SingleToolbarItemContainerView, UITableView, NSArray, EKEvent;

@interface EKEventViewController : UIViewController <EKEventTitleDetailItemDelegate, EKUIEventStatusButtonsViewDelegate> {

	bool _ignoreDBChanges;
	long long _lastAuthorizationStatus;
	_UIAccessDeniedView* _accessDeniedView;
	EKEventDetailItem* _selectedEditItem;
	long long _disclosedTableSection;
	NSRange _disclosedTableRange;
	int _pendingStatus;
	id _editor;
	EKUIRecurrenceAlertController* _recurrenceAlertController;
	EKUIEventStatusButtonsView* _statusButtonsView;
	SingleToolbarItemContainerView* _statusButtonsContainerView;
	double _statusButtonsViewCachedFontSize;
	long long _lastOrientation;
	EKEventDetailItem* _currentEditItem;
	UITableView* _tableView;
	bool _didAppear;
	bool _autoPop;
	bool _allowsSubitems;
	bool _showsPreview;
	bool _forcePreview;
	bool _trustsStatus;
	bool _allowsInviteResponses;
	bool _showsAddToCalendar;
	bool _ICSPreview;
	bool _needsReload;
	bool _showsDoneButton;
	bool _showsOutOfDateMessage;
	bool _showsDelegatorMessage;
	bool _showsDelegateMessage;
	bool _dead;
	bool _tableIsBeingEdited;
	NSArray* _items;
	NSArray* _currentSections;
	int _scrollToSection;
	bool _allowsEditing;
	bool _showsTimeZone;
	bool _hideNavigationBar;
	bool _leaveNavBarHidden;
	int _editorShowTransition;
	int _editorHideTransition;
	<EKEventViewDelegate>* _delegate;
	EKEvent* _event;
	double _leftInset;
	double _rightInset;
	long long _interfaceOrientationStartingModalEditingSession;

}

@property (assign,nonatomic,__weak) <EKEventViewDelegate> * delegate;                                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) EKEvent * event;                                                        //@synthesize event=_event - In the implementation block
@property (assign,nonatomic) bool allowsEditing;                                                     //@synthesize allowsEditing=_allowsEditing - In the implementation block
@property (assign,nonatomic) bool allowsCalendarPreview; 
@property (assign,nonatomic) bool alwaysShowsCalendarPreview; 
@property (assign,nonatomic) int scrollToSection; 
@property (assign,getter=isICSPreview,nonatomic) bool ICSPreview;                                    //@synthesize ICSPreview=_ICSPreview - In the implementation block
@property (assign,nonatomic) bool showsAddToCalendar;                                                //@synthesize showsAddToCalendar=_showsAddToCalendar - In the implementation block
@property (assign,nonatomic) bool allowsSubitems;                                                    //@synthesize allowsSubitems=_allowsSubitems - In the implementation block
@property (assign,nonatomic) bool showsTimeZone;                                                     //@synthesize showsTimeZone=_showsTimeZone - In the implementation block
@property (assign,nonatomic) bool showsDoneButton;                                                   //@synthesize showsDoneButton=_showsDoneButton - In the implementation block
@property (assign,nonatomic) bool showsOutOfDateMessage;                                             //@synthesize showsOutOfDateMessage=_showsOutOfDateMessage - In the implementation block
@property (assign,nonatomic) bool showsDelegatorMessage;                                             //@synthesize showsDelegatorMessage=_showsDelegatorMessage - In the implementation block
@property (assign,nonatomic) bool showsDelegateMessage;                                              //@synthesize showsDelegateMessage=_showsDelegateMessage - In the implementation block
@property (assign,nonatomic) bool hideNavigationBar;                                                 //@synthesize hideNavigationBar=_hideNavigationBar - In the implementation block
@property (assign,nonatomic) bool leaveNavBarHidden;                                                 //@synthesize leaveNavBarHidden=_leaveNavBarHidden - In the implementation block
@property (assign,nonatomic) int editorShowTransition;                                               //@synthesize editorShowTransition=_editorShowTransition - In the implementation block
@property (assign,nonatomic) int editorHideTransition;                                               //@synthesize editorHideTransition=_editorHideTransition - In the implementation block
@property (assign,nonatomic) double topInset; 
@property (assign,nonatomic) double leftInset;                                                       //@synthesize leftInset=_leftInset - In the implementation block
@property (assign,nonatomic) double rightInset;                                                      //@synthesize rightInset=_rightInset - In the implementation block
@property (assign,nonatomic) long long interfaceOrientationStartingModalEditingSession;              //@synthesize interfaceOrientationStartingModalEditingSession=_interfaceOrientationStartingModalEditingSession - In the implementation block
+(void)setDefaultDatesForEvent:(id)arg1 ;
+(void)adjustLayoutForCell:(id)arg1 tableViewWidth:(double)arg2 numRowsInSection:(unsigned long long)arg3 cellRow:(unsigned long long)arg4 ;
-(id)accessDeniedView;
-(bool)allowContextProvider:(id)arg1 ;
-(id)getCurrentContext;
-(id)initWithEvent:(id)arg1 ;
-(void)eventStatusButtonsView:(id)arg1 didSelectButtonAtIndex:(unsigned long long)arg2 ;
-(double)eventStatusButtonsViewButtonFontSize:(id)arg1 ;
-(void)eventStatusButtonsView:(id)arg1 calculatedFontSizeToFit:(double)arg2 ;
-(void)setAllowsSubitems:(bool)arg1 ;
-(void)setShowsDoneButton:(bool)arg1 ;
-(void)setEditorShowTransition:(int)arg1 ;
-(void)setEditorHideTransition:(int)arg1 ;
-(void)_teardownTableView;
-(void)_updateResponseVisibility;
-(void)_updateResponse;
-(void)_updateNavBarAnimated:(bool)arg1 ;
-(void)_updateFooterIfNeeded;
-(void)_updateTableContentInsetForKeyboard:(id)arg1 ;
-(void)_updateTableContentForSizeCategoryChange:(id)arg1 ;
-(void)_localeChanged;
-(void)_storeChanged:(id)arg1 ;
-(void)_keyboardWasShown:(id)arg1 ;
-(void)_keyboardWasHidden:(id)arg1 ;
-(bool)leaveNavBarHidden;
-(void)_setNeedsReload;
-(bool)_shouldShowEditButton;
-(void)editEvent;
-(bool)_shouldDisplayDoneButton;
-(void)doneButtonPressed;
-(void)_reloadIfNeeded;
-(void)_setUpForEvent;
-(void)_configureItemsForStoreConstraintsGivenCalendar:(id)arg1 ;
-(void)_dismissEditor:(bool)arg1 deleted:(bool)arg2 ;
-(void)_pop;
-(void)_updateFrameForInsets;
-(void)completeWithAction:(int)arg1 ;
-(void)_refreshEventAndReload;
-(void)_setUpAttendeesWithAcceptedItem:(id)arg1 declinedItem:(id)arg2 maybeItem:(id)arg3 noReplyItem:(id)arg4 ;
-(void)_deleteClicked:(id)arg1 ;
-(bool)showsAddToCalendar;
-(bool)isICSPreview;
-(bool)showsOutOfDateMessage;
-(bool)showsDelegatorMessage;
-(bool)showsDelegateMessage;
-(void)_addToCalendarClicked:(id)arg1 ;
-(void)_prepareEventForEdit;
-(void)_presentDetachSheet;
-(bool)_performSave:(int)arg1 animated:(bool)arg2 ;
-(bool)showsTimeZone;
-(void)setShowsTimeZone:(bool)arg1 ;
-(void)setInterfaceOrientationStartingModalEditingSession:(long long)arg1 ;
-(int)editorShowTransition;
-(CGSize)_idealSize;
-(void)_saveStatus:(int)arg1 span:(int)arg2 ;
-(int)editorHideTransition;
-(long long)interfaceOrientationStartingModalEditingSession;
-(void)_performDelete;
-(void)_maybeButtonPressed:(id)arg1 ;
-(void)_declineButtonPressed:(id)arg1 ;
-(void)_acceptButtonPressed:(id)arg1 ;
-(id)_statusButtonsContainerView;
-(id)_statusButtonsView;
-(void)invokeInviteAction:(int)arg1 ;
-(bool)allowsSubitems;
-(unsigned long long)_sectionForDetailItem:(id)arg1 ;
-(bool)shouldShowEditButtonInline;
-(void)editButtonPressed;
-(bool)allowsCalendarPreview;
-(void)setAllowsCalendarPreview:(bool)arg1 ;
-(bool)alwaysShowsCalendarPreview;
-(void)setAlwaysShowsCalendarPreview:(bool)arg1 ;
-(void)setICSPreview:(bool)arg1 ;
-(void)setShowsAddToCalendar:(bool)arg1 ;
-(void)setShowsOutOfDateMessage:(bool)arg1 ;
-(void)setShowsDelegatorMessage:(bool)arg1 ;
-(void)setShowsDelegateMessage:(bool)arg1 ;
-(void)setScrollToSection:(int)arg1 ;
-(int)scrollToSection;
-(void)resumeEventEditing;
-(void)_presentValidationAlert:(id)arg1 ;
-(void)eventItemDidStartEditing:(id)arg1 ;
-(void)eventItemDidCommit:(id)arg1 ;
-(void)eventItemDidEndEditing:(id)arg1 ;
-(id)viewControllerForEventItem:(id)arg1 ;
-(void)eventEditViewController:(id)arg1 didCompleteWithAction:(int)arg2 ;
-(void)_segmentedControlHit:(id)arg1 ;
-(void)_responseChanged:(id)arg1 ;
-(void)_layoutStatusButtonsForInterfaceOrientation:(long long)arg1 ;
-(void)detailItem:(id)arg1 performActionsOnCellAtIndexPath:(id)arg2 actions:(/*^block*/ id)arg3 ;
-(void)detailItem:(id)arg1 wantsRowReload:(id)arg2 ;
-(void)detailItem:(id)arg1 wantsRowInsertions:(id)arg2 rowDeletions:(id)arg3 rowReloads:(id)arg4 ;
-(void)detailItem:(id)arg1 wantsIndexPathsScrolledToVisible:(id)arg2 ;
-(bool)showsDoneButton;
-(bool)hideNavigationBar;
-(void)setHideNavigationBar:(bool)arg1 ;
-(void)setLeaveNavBarHidden:(bool)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewWillLayoutSubviews;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(void)viewWillAppear:(bool)arg1 ;
-(CGSize)preferredContentSize;
-(void)viewDidLoad;
-(void)viewDidAppear:(bool)arg1 ;
-(void)viewWillDisappear:(bool)arg1 ;
-(void)viewDidDisappear:(bool)arg1 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(id)_items;
-(bool)allowsEditing;
-(void)setAllowsEditing:(bool)arg1 ;
-(id)tableView;
-(void)setEvent:(id)arg1 ;
-(id)event;
-(void).cxx_destruct;
-(double)topInset;
-(double)leftInset;
-(double)rightInset;
-(void)setLeftInset:(double)arg1 ;
-(void)setRightInset:(double)arg1 ;
-(void)setTopInset:(double)arg1 ;
@end

