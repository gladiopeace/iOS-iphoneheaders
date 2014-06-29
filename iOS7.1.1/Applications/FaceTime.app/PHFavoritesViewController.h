/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:58:57 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/FaceTime.app/FaceTime
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FaceTime/FaceTime-Structs.h>
#import <FaceTime/PhoneViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <FaceTime/ABUnknownPersonViewControllerDelegate.h>
#import <FaceTime/ABPeoplePickerNavigationControllerPrivateMemberCellDelegate.h>
#import <UIKit/UIActionSheetDelegate.h>

@class UITableView, _UIContentUnavailableView, ABPeoplePickerNavigationController, ABFavoritesEntry, UIActionSheet, NSDictionary;

@interface PHFavoritesViewController : PhoneViewController <UITableViewDataSource, UITableViewDelegate, ABUnknownPersonViewControllerDelegate, ABPeoplePickerNavigationControllerPrivateMemberCellDelegate, UIActionSheetDelegate> {

	UITableView* _table;
	_UIContentUnavailableView* _noContentView;
	ABPeoplePickerNavigationController* _peoplePickerController;
	ABFavoritesEntry* _selectedABFavoritesEntry;
	UIActionSheet* _disambiguationSheet;
	NSDictionary* _disambiguationSheetContext;
	unsigned _suspended : 1;
	unsigned _ignoreFavoritesDidChangeNotification : 1;
	unsigned _postponeTableReloadFromFavoritesChange : 1;
	unsigned _needsTableReloadFromFavoritesChange : 1;

}

@property (readonly) UITableView * table; 
@property (readonly) _UIContentUnavailableView * noContentView; 
+(int)tabBarSystemItem;
+(id)tabBarIconName;
+(int)tabViewType;
+(BOOL)requiresNavigationControllerContainer;
-(void)_handleContentSizeCategoryDidChange:(id)arg1 ;
-(void)_handleFavoritesShowsContactPhotosChanged:(id)arg1 ;
-(void)savePreferences;
-(BOOL)shouldSnapshot;
-(void)_addButtonClicked:(id)arg1 ;
-(BOOL)showsNoContentView;
-(id)noContentView;
-(void)_favoritesManagerSignificantChangeNotification:(id)arg1 ;
-(void)_updateNavButtons;
-(id)possibleFavoriteTypesForProperty:(int)arg1 ;
-(void)_addEntryFromPeoplePickerForPerson:(void*)arg1 property:(int)arg2 identifier:(int)arg3 animateView:(id)arg4 favoritesEntryType:(int)arg5 ;
-(void)dismissPeoplePicker;
-(BOOL)usesPersonBasedFavorites;
-(id)buttonTitlesForPossibleFavoriteTypes:(id)arg1 ;
-(void)_addEntryFromPeoplePickerForPerson:(void*)arg1 property:(int)arg2 identifier:(int)arg3 animateView:(id)arg4 ;
-(int)absoluteIndexOfFilteredIndex:(int)arg1 ;
-(void)showCardViewerForPerson:(void*)arg1 withTitle:(id)arg2 animate:(BOOL)arg3 ;
-(void)accessoryButtonTapped:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)peoplePickerNavigationController:(id)arg1 shouldAllowSelectingPersonWithRecordID:(int)arg2 ;
-(BOOL)peoplePickerNavigationController:(id)arg1 shouldShowInsertEditorForPerson:(void*)arg2 insertProperty:(int*)arg3 copyInsertValue:(id*)arg4 copyInsertLabel:(id*)arg5 ;
-(void)peoplePickerNavigationController:(id)arg1 insertEditorDidConfirm:(BOOL)arg2 forPerson:(void*)arg3 ;
-(BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 withLinkedPeople:(CFArrayRef)arg3 memberCell:(id)arg4 ;
-(BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4 withMemberCell:(id)arg5 ;
-(void)unknownPersonViewController:(id)arg1 didResolveToPerson:(void*)arg2 ;
-(void)dealloc;
-(id)init;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(void)didReceiveMemoryWarning;
-(void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)unloadView;
-(int)selectedIndex;
-(id)table;
-(void)_updateContentView;
-(void)peoplePickerNavigationControllerDidCancel:(id)arg1 ;
-(BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 ;
-(BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4 ;
-(void)deleteButtonPressedForIndexPath:(id)arg1 ;
-(void)restoreState;
@end

