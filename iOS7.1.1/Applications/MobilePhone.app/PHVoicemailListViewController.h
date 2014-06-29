/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:09 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobilePhone.app/MobilePhone
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobilePhone/PhoneViewController.h>
#import <MobilePhone/PHVoicemailListMaskViewDelegate.h>
#import <MobilePhone/ABUnknownPersonViewControllerDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <MobilePhone/PHVoicemailCellDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_group;
@class PHVoicemailNavigationController, PHVoicemailListMaskView, UITableView, NSObject, NSArray, NSIndexPath, VMVoicemail, UIGestureRecognizer;

@interface PHVoicemailListViewController : PhoneViewController <PHVoicemailListMaskViewDelegate, ABUnknownPersonViewControllerDelegate, UIGestureRecognizerDelegate, PHVoicemailCellDelegate, UITableViewDataSource, UITableViewDelegate> {

	PHVoicemailNavigationController* _navigationController;
	PHVoicemailListMaskView* _maskView;
	UITableView* _tableView;
	NSObject<OS_dispatch_queue>* _queue;
	int _disableUserInteractionCountLock;
	int _disableUserInteractionCount;
	int _isReloadingTableViewLock;
	BOOL _isReloadingTableView;
	BOOL _shouldReloadTableView;
	NSObject<OS_dispatch_queue>* _initialSetupQueue;
	int _isSettingUpLock;
	BOOL _isSettingUp;
	BOOL _reloadAfterInitialSetup;
	NSObject<OS_dispatch_group>* _loadingGroup;
	NSArray* _voicemails;
	NSArray* _childListViewControllersWithContent;
	BOOL _visible;
	BOOL _showingUnavailableCell;
	NSIndexPath* _detailIndexPath;
	VMVoicemail* _selectedVoicemail;
	UIGestureRecognizer* _navBarGestureRecognizer;
	UIGestureRecognizer* _leftBarButtonItemGestureRecognizer;
	UIGestureRecognizer* _rightBarButtonItemGestureRecognizer;

}

@property (assign) PHVoicemailNavigationController * navigationController;                 //@synthesize navigationController=_navigationController - In the implementation block
@property (retain) NSArray * voicemails;                                                   //@synthesize voicemails=_voicemails - In the implementation block
@property (readonly) BOOL shouldBeShown; 
@property (assign) BOOL visible;                                                           //@synthesize visible=_visible - In the implementation block
@property (retain) NSIndexPath * detailIndexPath;                                          //@synthesize detailIndexPath=_detailIndexPath - In the implementation block
@property (retain) VMVoicemail * selectedVoicemail;                                        //@synthesize selectedVoicemail=_selectedVoicemail - In the implementation block
@property (assign) BOOL showingUnavailableCell;                                            //@synthesize showingUnavailableCell=_showingUnavailableCell - In the implementation block
@property (retain) NSArray * childListViewControllersWithContent;                          //@synthesize childListViewControllersWithContent=_childListViewControllersWithContent - In the implementation block
@property (retain) UIGestureRecognizer * navBarGestureRecognizer;                          //@synthesize navBarGestureRecognizer=_navBarGestureRecognizer - In the implementation block
@property (retain) UIGestureRecognizer * leftBarButtonItemGestureRecognizer;               //@synthesize leftBarButtonItemGestureRecognizer=_leftBarButtonItemGestureRecognizer - In the implementation block
@property (retain) UIGestureRecognizer * rightBarButtonItemGestureRecognizer;              //@synthesize rightBarButtonItemGestureRecognizer=_rightBarButtonItemGestureRecognizer - In the implementation block
-(void)_handleContentSizeDidChange:(id)arg1 ;
-(void)closeVoicemail;
-(id)voicemails;
-(id)_fetchCurrentVoicemails;
-(void)setVoicemails:(id)arg1 ;
-(id)_fetchCurrentChildListViewControllersWithContent;
-(void)setChildListViewControllersWithContent:(id)arg1 ;
-(void)setShowingUnavailableCell:(BOOL)arg1 ;
-(void)_handleVoicemailListChanged:(id)arg1 ;
-(void)_handleBackgroundNotification:(id)arg1 ;
-(void)_voicemailUnavailableCellHeightChanged:(id)arg1 ;
-(int)_firstVoicemailOffset;
-(id)_indexPathForItem:(id)arg1 inList:(id)arg2 offset:(int)arg3 ;
-(id)detailIndexPath;
-(void)setDetailIndexPath:(id)arg1 ;
-(void)setSelectedVoicemail:(id)arg1 ;
-(void)_reloadTableViewIfNecessary;
-(BOOL)showingUnavailableCell;
-(BOOL)shouldBeShown;
-(void)_handleSignificantTimeChange:(id)arg1 ;
-(id)childListViewControllersWithContent;
-(void)_updateUIForMaskViewChange;
-(void)maskViewWasTappedOutsideOfShownCell:(id)arg1 ;
-(id)selectedVoicemail;
-(void)_popOffIfNeeded;
-(void)_disableInteraction;
-(id)_indexPathsForItems:(id)arg1 inList:(id)arg2 offset:(int)arg3 ;
-(void)_enableInteraction;
-(void)_performEfficientTableViewReloadWithVoicemails:(id)arg1 childListControllersWithContent:(id)arg2 showingUnavailableCell:(BOOL)arg3 ;
-(void)_forceCompleteTableViewReloadWithVoicemails:(id)arg1 childListControllersWithContent:(id)arg2 showingUnavailableCell:(BOOL)arg3 ;
-(id)navBarGestureRecognizer;
-(void)_handleNavBarTap:(id)arg1 ;
-(void)setNavBarGestureRecognizer:(id)arg1 ;
-(id)leftBarButtonItemGestureRecognizer;
-(void)setLeftBarButtonItemGestureRecognizer:(id)arg1 ;
-(id)rightBarButtonItemGestureRecognizer;
-(void)setRightBarButtonItemGestureRecognizer:(id)arg1 ;
-(void)playVoicemail:(id)arg1 ;
-(id)initWithNavigationController:(id)arg1 ;
-(void)unknownPersonViewController:(id)arg1 didResolveToPerson:(void*)arg2 ;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)navigationController;
-(void)loadView;
-(void)setVisible:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)contentScrollView;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)table;
-(BOOL)visible;
-(void)_updateTitle;
-(void)setNavigationController:(id)arg1 ;
@end

