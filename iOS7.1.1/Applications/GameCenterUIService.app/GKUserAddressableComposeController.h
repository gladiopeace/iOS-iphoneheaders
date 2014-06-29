/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:58:59 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/GameCenterUIService.app/GameCenterUIService
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterUIService/GameCenterUIService-Structs.h>
#import <GameCenterUI/GKBaseComposeController.h>
#import <UIKit/UIPopoverControllerDelegate.h>
#import <UIKit/ABPeoplePickerNavigationControllerDelegate.h>
#import <GameCenterUIService/GKComposeSuggestedContactsControllerDelegate.h>
#import <AddressBookUI/ABSearchOperationDelegate.h>

@class NSString, GKComposeHeaderWithStaticRecipients, GKComposeAddressableHeaderField, UIResponder, ABPeoplePickerNavigationController, UIPopoverController, GKComposeSuggestedContactsController, NSMutableArray, NSMutableSet, ABSearchOperation, NSOrderedSet;

@interface GKUserAddressableComposeController : GKBaseComposeController <UIPopoverControllerDelegate, ABPeoplePickerNavigationControllerDelegate, GKComposeSuggestedContactsControllerDelegate, ABSearchOperationDelegate> {

	BOOL _editingAddresses;
	BOOL _showingSearchResults;
	void* _ABAddressBook;
	NSString* _defaultMessage;
	GKComposeHeaderWithStaticRecipients* _staticToField;
	GKComposeAddressableHeaderField* _editableToField;
	UIResponder* _savedFirstResponder;
	ABPeoplePickerNavigationController* _peoplePickerController;
	UIPopoverController* _composePopoverController;
	int _textEnteredGeneration;
	GKComposeSuggestedContactsController* _suggestedContactsController;
	NSMutableArray* _searchResultItems;
	NSMutableSet* _searchResultRecordIDs;
	ABSearchOperation* _searchOperation;
	NSString* _searchText;

}

@property (nonatomic,retain) NSOrderedSet * recipients; 
@property (nonatomic,retain) NSString * defaultMessage;                                                       //@synthesize defaultMessage=_defaultMessage - In the implementation block
@property (nonatomic,retain) GKComposeHeaderWithStaticRecipients * staticToField;                             //@synthesize staticToField=_staticToField - In the implementation block
@property (nonatomic,retain) GKComposeAddressableHeaderField * editableToField;                               //@synthesize editableToField=_editableToField - In the implementation block
@property (assign,getter=isEditingAddresses,nonatomic) BOOL editingAddresses;                                 //@synthesize editingAddresses=_editingAddresses - In the implementation block
@property (assign,nonatomic) UIResponder * savedFirstResponder;                                               //@synthesize savedFirstResponder=_savedFirstResponder - In the implementation block
@property (nonatomic,retain) ABPeoplePickerNavigationController * peoplePickerController;                     //@synthesize peoplePickerController=_peoplePickerController - In the implementation block
@property (nonatomic,retain) UIPopoverController * composePopoverController;                                  //@synthesize composePopoverController=_composePopoverController - In the implementation block
@property (assign,nonatomic) int textEnteredGeneration;                                                       //@synthesize textEnteredGeneration=_textEnteredGeneration - In the implementation block
@property (assign,nonatomic) BOOL showingSearchResults;                                                       //@synthesize showingSearchResults=_showingSearchResults - In the implementation block
@property (nonatomic,retain) GKComposeSuggestedContactsController * suggestedContactsController;              //@synthesize suggestedContactsController=_suggestedContactsController - In the implementation block
@property (nonatomic,retain) NSMutableArray * searchResultItems;                                              //@synthesize searchResultItems=_searchResultItems - In the implementation block
@property (nonatomic,retain) NSMutableSet * searchResultRecordIDs;                                            //@synthesize searchResultRecordIDs=_searchResultRecordIDs - In the implementation block
@property (nonatomic,readonly) void* ABAddressBook;                                                           //@synthesize ABAddressBook=_ABAddressBook - In the implementation block
@property (nonatomic,retain) ABSearchOperation * searchOperation;                                             //@synthesize searchOperation=_searchOperation - In the implementation block
@property (nonatomic,retain) NSString * searchText;                                                           //@synthesize searchText=_searchText - In the implementation block
-(void)didTouchStaticToField;
-(void)setStaticToField:(id)arg1 ;
-(void)setEditableToField:(id)arg1 ;
-(void)textEditingDidBeginInAddressField:(id)arg1 ;
-(void)textEditingDidBeginInMessageField:(id)arg1 ;
-(void)updateTextInStaticToField;
-(void)_hideSearchResults:(BOOL)arg1 ;
-(void)_startEditing;
-(void)_stopEditing;
-(void)setEditingAddresses:(BOOL)arg1 ;
-(void)updatePlaceholderText;
-(BOOL)isEditingAddresses;
-(id)editableToField;
-(CGPoint)contentOffsetToMakeRectVisible:(CGRect)arg1 ;
-(void)popSavedFirstResponder;
-(void)dismissPeoplePicker;
-(void)setSavedFirstResponder:(id)arg1 ;
-(void)addRecipient:(void*)arg1 property:(int)arg2 identifier:(int)arg3 address:(id)arg4 makingContentEntryViewActive:(BOOL)arg5 ;
-(BOOL)isLocalPlayerABRecord:(void*)arg1 ;
-(id)suggestedContactsController;
-(void)setSuggestedContactsController:(id)arg1 ;
-(void)setSearchResultItems:(id)arg1 ;
-(void)setComposePopoverController:(id)arg1 ;
-(int)textEnteredGeneration;
-(void)_searchWithText:(id)arg1 ;
-(void)setSearchResultRecordIDs:(id)arg1 ;
-(id)_predicateValueForProperty:(int)arg1 text:(id)arg2 ;
-(void)_showSearchResults:(BOOL)arg1 ;
-(id)composeRecipientsForMatch:(void*)arg1 ;
-(void)searchResultsController:(id)arg1 didSelectRecipient:(id)arg2 ;
-(void)addressFieldLayoutWillChange:(id)arg1 ;
-(BOOL)peoplePickerNavigationController:(id)arg1 shouldDismissAfterInsertEditorConfirmed:(BOOL)arg2 withPerson:(void*)arg3 ;
-(void)addContactButtonPressed:(id)arg1 ;
-(BOOL)peoplePickerNavigationController:(id)arg1 shouldAllowSelectingPerson:(void*)arg2 ;
-(void)preatomizationTextWasUpdated:(id)arg1 ;
-(id)staticToField;
-(id)savedFirstResponder;
-(id)composePopoverController;
-(void)setTextEnteredGeneration:(int)arg1 ;
-(BOOL)showingSearchResults;
-(void)setShowingSearchResults:(BOOL)arg1 ;
-(id)searchResultItems;
-(id)searchResultRecordIDs;
-(id)searchOperation;
-(void)setSearchOperation:(id)arg1 ;
-(BOOL)peoplePickerNavigationController:(id)arg1 shouldShowInsertEditorForPerson:(void*)arg2 insertProperty:(int*)arg3 copyInsertValue:(id*)arg4 copyInsertLabel:(id*)arg5 ;
-(void)searchOperation:(id)arg1 didFindMatches:(id)arg2 moreComing:(BOOL)arg3 ;
-(void*)ABAddressBook;
-(void)setDefaultMessage:(id)arg1 ;
-(id)defaultMessage;
-(void)dealloc;
-(id)init;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)searchText;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(void)popoverController:(id)arg1 willRepositionPopoverToRect:(inout CGRect*)arg2 inView:(inout id*)arg3 ;
-(void)peoplePickerNavigationControllerDidCancel:(id)arg1 ;
-(BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 ;
-(BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4 ;
-(void)updateNavigationButtons;
-(void)setSearchText:(id)arg1 ;
-(void)_updateShowingSearch;
-(void)setPeoplePickerController:(id)arg1 ;
-(id)peoplePickerController;
-(void)addRecipients:(id)arg1 ;
-(id)recipients;
-(void)setRecipients:(id)arg1 ;
@end

