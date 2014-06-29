/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:56 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKit/UIViewController.h>
#import <MessageUI/MFGroupDetailViewControllerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <EventKitUI/MFComposeRecipientViewDelegate.h>
#import <ChatKit/CKRecipientSearchListControllerDelegate.h>

@protocol CKRecipientSelectionControllerDelegate;
@class CKComposeRecipientView, _UINavigationControllerPalette, CKRecipientSearchListController, ABPeoplePickerNavigationController, UIScrollView, CKScheduledUpdater, MFComposeRecipient;

@interface CKRecipientSelectionController : UIViewController <MFGroupDetailViewControllerDelegate, UINavigationControllerDelegate, MFComposeRecipientViewDelegate, CKRecipientSearchListControllerDelegate> {

	double _keyboardHeightWithAccessoryView;
	bool _peoplePickerHidden;
	bool _editable;
	bool _preventAtomization;
	<CKRecipientSelectionControllerDelegate>* _delegate;
	CKComposeRecipientView* _toField;
	_UINavigationControllerPalette* _toFieldPalette;
	CKRecipientSearchListController* _searchListController;
	ABPeoplePickerNavigationController* _peoplePickerController;
	UIScrollView* _toFieldScrollingView;
	CKScheduledUpdater* _backfillUpdater;
	MFComposeRecipient* _recentContactForPresentedABCard;

}

@property (assign,nonatomic) <CKRecipientSelectionControllerDelegate> * delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isSearchResultsHidden,nonatomic) bool searchResultsHidden; 
@property (assign,getter=isPeoplePickerHidden,nonatomic) bool peoplePickerHidden;                      //@synthesize peoplePickerHidden=_peoplePickerHidden - In the implementation block
@property (assign,getter=isEditable,nonatomic) bool editable;                                          //@synthesize editable=_editable - In the implementation block
@property (nonatomic,retain) CKComposeRecipientView * toField;                                         //@synthesize toField=_toField - In the implementation block
@property (nonatomic,retain) _UINavigationControllerPalette * toFieldPalette;                          //@synthesize toFieldPalette=_toFieldPalette - In the implementation block
@property (nonatomic,retain) CKRecipientSearchListController * searchListController;                   //@synthesize searchListController=_searchListController - In the implementation block
@property (nonatomic,retain) ABPeoplePickerNavigationController * peoplePickerController;              //@synthesize peoplePickerController=_peoplePickerController - In the implementation block
@property (nonatomic,readonly) UIScrollView * toFieldScrollingView;                                    //@synthesize toFieldScrollingView=_toFieldScrollingView - In the implementation block
@property (nonatomic,retain) CKScheduledUpdater * backfillUpdater;                                     //@synthesize backfillUpdater=_backfillUpdater - In the implementation block
@property (nonatomic,retain) MFComposeRecipient * recentContactForPresentedABCard;                     //@synthesize recentContactForPresentedABCard=_recentContactForPresentedABCard - In the implementation block
@property (assign,nonatomic) bool preventAtomization;                                                  //@synthesize preventAtomization=_preventAtomization - In the implementation block
-(id)toField;
-(void)setToField:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(bool)isEditable;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(void)viewWillAppear:(bool)arg1 ;
-(void)viewDidLoad;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)viewDidDisappear:(bool)arg1 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(bool)arg3 ;
-(void)setEditable:(bool)arg1 ;
-(void)_setupSearchField;
-(void)reset;
-(void)searchListController:(id)arg1 didSelectRecipient:(id)arg2 ;
-(void)searchListController:(id)arg1 accessoryPickedForRecipient:(id)arg2 ;
-(void)searchListControllerDidScroll:(id)arg1 ;
-(bool)isSearchResultsHidden;
-(void)searchListControllerDidFinishSearch:(id)arg1 ;
-(void)invalidateOutstandingIDStatusRequests;
-(id)searchListController;
-(id)backfillUpdater;
-(id)toFieldScrollingView;
-(void)_setAddressBookProperties:(id)arg1 ;
-(void)_updateBackfillForNewRecipients;
-(void)setBackfillUpdater:(id)arg1 ;
-(void)setPeoplePickerHidden:(bool)arg1 ;
-(void)_handleRecipientViewChanged:(id)arg1 ;
-(void)_keyboardWillShowOrHide:(id)arg1 ;
-(void)setupToFieldPalette;
-(id)toFieldPalette;
-(void)setToFieldPalette:(id)arg1 ;
-(void)_resetSearchResultsInsets;
-(void)_adjustToFieldPositionIfNecessary;
-(void)_updateSearchResultsTable;
-(void)_updateShowingSearch;
-(void)_updateRecipientViewLayouts;
-(void)setPeoplePickerController:(id)arg1 ;
-(id)peoplePickerController;
-(void)_showDetailsForRecipient:(id)arg1 canDelete:(bool)arg2 ;
-(bool)preventAtomization;
-(void)_showDetailsForGroup:(id)arg1 ;
-(void)setPreventAtomization:(bool)arg1 ;
-(void)setRecentContactForPresentedABCard:(id)arg1 ;
-(void)_removeRecent;
-(void)setSearchResultsHidden:(bool)arg1 ;
-(bool)isPeoplePickerHidden;
-(void)_showSearchField;
-(void)_hideSearchField;
-(id)proposedRecipients;
-(id)_navigationControllerForSearchResults;
-(id)recentContactForPresentedABCard;
-(UIEdgeInsets)_navigationBarInsets;
-(bool)_isToFieldPushedUp;
-(void)groupDetailViewController:(id)arg1 didTapComposeRecipient:(id)arg2 ;
-(void)groupDetailViewController:(id)arg1 didAskToRemoveGroup:(id)arg2 ;
-(void)groupDetailViewControllerDidCancel:(id)arg1 ;
-(void)parentControllerDidResume:(bool)arg1 animating:(bool)arg2 ;
-(void)setSearchListController:(id)arg1 ;
-(id)recipients;
-(id)composeRecipientView:(id)arg1 composeRecipientForAddress:(id)arg2 ;
-(void)composeRecipientView:(id)arg1 didFinishEnteringAddress:(id)arg2 ;
-(void)composeRecipientView:(id)arg1 didChangeSize:(CGSize)arg2 ;
-(void)composeRecipientView:(id)arg1 textDidChange:(id)arg2 ;
-(void)recipientViewDidBecomeFirstResponder:(id)arg1 ;
-(void)recipientViewDidResignFirstResponder:(id)arg1 ;
-(bool)recipientViewShouldIgnoreFirstResponderChanges:(id)arg1 ;
-(void)composeRecipientViewRequestAddRecipient:(id)arg1 ;
-(void)composeRecipientViewDidFinishPickingRecipient:(id)arg1 ;
-(void)composeRecipientView:(id)arg1 showPersonCardForAtom:(id)arg2 ;
-(id)composeRecipientView:(id)arg1 composeRecipientForRecord:(void*)arg2 property:(int)arg3 identifier:(int)arg4 ;
-(void)composeRecipientViewReturnPressed:(id)arg1 ;
@end

