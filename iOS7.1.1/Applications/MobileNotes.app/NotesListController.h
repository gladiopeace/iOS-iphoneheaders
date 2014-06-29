/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:08 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileNotes/MobileNotes-Structs.h>
#import <MobileNotes/ResumableViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <MobileNotes/NotesListAuthority.h>
#import <UIKit/UISearchDisplayDelegate.h>
#import <MobileNotes/NSFetchedResultsControllerDelegate.h>
#import <UIKit/UIPopoverControllerDelegate.h>
#import <UIKit/UIPageViewControllerDataSource.h>

@class NotesBackgroundView, NotesListTableView, UIBarButtonItem, UILabel, UIView, UISearchDisplayController, NSString, NSArray, NSMutableArray, NotesTextureBackgroundView, NSFetchedResultsController, NoteCollectionObject, NSManagedObjectID, NSURL, NoteObject;

@interface NotesListController : ResumableViewController <UITableViewDataSource, UITableViewDelegate, UIActionSheetDelegate, NotesListAuthority, UISearchDisplayDelegate, NSFetchedResultsControllerDelegate, UIPopoverControllerDelegate, UIPageViewControllerDataSource> {

	NotesBackgroundView* _backgroundView;
	NotesListTableView* _table;
	UIBarButtonItem* _addButton;
	UIBarButtonItem* _cancelButton;
	UILabel* _titleView;
	UIView* _titleViewContainer;
	UISearchDisplayController* _searchController;
	float _yOffset;
	NSString* _searching;
	NSArray* _searchTokens;
	void* _searchContext;
	NSMutableArray* _searchItems;
	NSMutableArray* _tempSearchItems;
	NotesTextureBackgroundView* _searchTableTopFadingView;
	NSFetchedResultsController* _listFRC;
	BOOL _fetchResultContentChangeRequiresTableReload;
	unsigned _ignoringTableReloads;
	NoteCollectionObject* _collection;
	NSManagedObjectID* _collectionID;
	NSString* _placeholderNoteTitle;
	NSURL* _previousSelectedNoteID;
	BOOL _ignoreKeyboardNotifications;
	NSMutableArray* _animationQueue;
	BOOL _isAnimating;
	int _delayedDirection;
	NoteObject* _delayedNote;
	NoteObject* _editingNote;
	BOOL _ignoreNextNotesChangedNotification;

}

@property (retain) NSURL * previousSelectedNoteID;              //@synthesize previousSelectedNoteID=_previousSelectedNoteID - In the implementation block
-(id)noteAtIndex:(unsigned)arg1 ;
-(void)displayNote:(id)arg1 ;
-(void)notesChangedExternally:(id)arg1 ;
-(void)resumeAfterSuspend;
-(void)removePlaceholderNote;
-(id)initWithArchivedConfiguration:(id)arg1 ;
-(id)storeForDisplayController;
-(void)updateSearchAfterResumeForNote:(id)arg1 ;
-(void)setSelectedNote:(id)arg1 ;
-(id)noteWithId:(id)arg1 ;
-(void)queryForNewItem;
-(void)refreshDatesAndTimes;
-(id)archivedConfiguration;
-(void)setPreviousSelectedNoteID:(id)arg1 ;
-(void)_resetSearchWithString:(id)arg1 ;
-(void)notesDidChange:(id)arg1 ;
-(void)notesAddedToIndex:(id)arg1 ;
-(void)systemFontSizeChanged:(id)arg1 ;
-(void)_cancelAllCallbacks;
-(void)_delayedSearchRelease;
-(id)selectedNote;
-(void)reloadSearchResults;
-(void)performSearch;
-(void)performSearchStartedWhileIndexing:(id)arg1 ;
-(void)reloadSearchResultsAfterIndexing;
-(void)updateSelectionView;
-(id)_itemArrayForTable:(id)arg1 ;
-(id)noteDisplayNavigationController;
-(unsigned)indexOfNote:(id)arg1 inList:(id)arg2 ;
-(void)directionButtonClicked:(int)arg1 forNote:(id)arg2 ;
-(void)displayObjectAtIndex:(unsigned)arg1 fromList:(id)arg2 animated:(BOOL)arg3 ;
-(void)delayedDirectionButtonClicked;
-(void)handleKeyboardHide:(id)arg1 ;
-(void)handleKeyboardShow:(id)arg1 ;
-(void)addPlaceholderNote;
-(void)_createNewNote;
-(void)endEditingOnController:(id)arg1 ;
-(void)_ignoreDatabaseChanges:(BOOL)arg1 ;
-(void)_resetSearchWithString:(id)arg1 requestedByIndexer:(BOOL)arg2 ;
-(void)reloadSearchResultsFromIndexer:(BOOL)arg1 ;
-(void)reloadTables;
-(id)previousSelectedNoteID;
-(void)modifyPlaceholderNote:(id)arg1 ;
-(void)noteModified:(id)arg1 newTitle:(id)arg2 ;
-(void)shouldEnableLeftButton:(BOOL*)arg1 rightButton:(BOOL*)arg2 forNote:(id)arg3 ;
-(UIEdgeInsets)_contentInsets;
-(void)removeSearchResult:(id)arg1 ;
-(void)willShowInPopover;
-(void)restoreSearch;
-(void)noteContentChanged:(id)arg1 ;
-(void)noteEditingStateChanged;
-(void)applyArchivedConfiguration:(id)arg1 ;
-(BOOL)isSearching;
-(id)collection;
-(void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned)arg4 newIndexPath:(id)arg5 ;
-(void)controllerDidChangeContent:(id)arg1 ;
-(void)controllerWillChangeContent:(id)arg1 ;
-(unsigned)countOfItems;
-(void)addButtonClicked:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)prepareForDefaultImageSnapshotForScreen:(id)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3 ;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(float)tableViewSpacingForExtraSeparators:(id)arg1 ;
-(void)loadView;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)contentScrollView;
-(void)accessibilityLargeTextDidChange;
-(void)viewDidLoad;
-(void)viewDidUnload;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(int)arg1 ;
-(id)table;
-(void)searchDisplayController:(id)arg1 willShowSearchResultsTableView:(id)arg2 ;
-(void)searchDisplayController:(id)arg1 didShowSearchResultsTableView:(id)arg2 ;
-(void)searchDisplayController:(id)arg1 willHideSearchResultsTableView:(id)arg2 ;
-(void)searchDisplayController:(id)arg1 didHideSearchResultsTableView:(id)arg2 ;
-(void)searchDisplayControllerDidEndSearch:(id)arg1 ;
-(void)searchDisplayControllerWillBeginSearch:(id)arg1 ;
-(void)searchDisplayControllerWillEndSearch:(id)arg1 ;
-(BOOL)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2 ;
-(Class)_resultsTableViewClass;
-(void)searchDisplayController:(id)arg1 didLoadSearchResultsTableView:(id)arg2 ;
-(BOOL)popoverControllerShouldDismissPopover:(id)arg1 ;
-(void)windowWillRotate:(id)arg1 ;
-(void).cxx_destruct;
-(id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2 ;
-(id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2 ;
-(id)currentList;
-(void)setup;
-(void)cancelButtonClicked:(id)arg1 ;
-(void)setCollection:(id)arg1 ;
-(void)performSetup;
-(void)prepareForSuspend;
@end

