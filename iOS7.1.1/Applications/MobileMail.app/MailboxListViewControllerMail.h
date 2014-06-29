/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:06 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <MobileMail/MailboxListViewControllerBase.h>
#import <MobileMail/MailboxEditingControllerDelegate.h>

@protocol MailboxListViewControllerMailDelegate;
@class NSMutableSet, NSArray, MailboxContentViewController;

@interface MailboxListViewControllerMail : MailboxListViewControllerBase <MailboxEditingControllerDelegate> {

	unsigned _showsDisclosure : 1;
	unsigned _hideInbox : 1;
	NSMutableSet* _disabledMailboxes;
	NSMutableSet* _disabledMailboxTypes;
	NSArray* _defaultToolbarItems;
	NSArray* _editingToolbarItems;
	MailboxContentViewController* _mailboxContentViewController;
	double _lastCheckedOutbox;
	BOOL _queuedOutboxCheck;
	<MailboxListViewControllerMailDelegate>* _mlvcmDelegate;
	BOOL _viewIsVisible;
	BOOL _alignAccessories;
	BOOL _showRefreshControl;
	BOOL _isRefreshing;
	unsigned _selectedSourceType;

}

@property (assign,nonatomic) unsigned selectedSourceType;              //@synthesize selectedSourceType=_selectedSourceType - In the implementation block
@property (assign,nonatomic) BOOL isRefreshing; 
+(int)tableViewStyle;
-(void)setSelectedSourceType:(unsigned)arg1 ;
-(id)mailboxContentViewController;
-(id)topMailboxContentViewController;
-(void)clearAccount;
-(int)propagateChangeDownwards:(id)arg1 ;
-(unsigned)selectedSourceType;
-(void)pulledToRefresh:(id)arg1 ;
-(void)updateIsRefreshing;
-(void)statusBarProgressDidChange:(id)arg1 ;
-(void)messageStoreChanged:(id)arg1 ;
-(void)accountDisplayNameChanged:(id)arg1 ;
-(void)mailAccountsChanged:(id)arg1 ;
-(void)pendingMailboxesChanged:(id)arg1 ;
-(void)contentSizeCategoryChanged:(id)arg1 ;
-(void)showMailboxEditingControllerWithMailbox:(id)arg1 ;
-(void)disableMailboxTypes:(id)arg1 ;
-(void)enableMailboxTypes:(id)arg1 ;
-(void)_reloadIfOutboxChanged:(id)arg1 ;
-(void)_queueReloadIfOutboxChanged:(id)arg1 ;
-(void)newMailboxClicked:(id)arg1 ;
-(void)mailboxEditingControllerDidFinish:(id)arg1 ;
-(void)setMailboxListDelegate:(id)arg1 ;
-(CGRect)rectOfMailbox:(id)arg1 ;
-(id)cellForMailbox:(id)arg1 ;
-(void)setShowsDisclosure:(BOOL)arg1 ;
-(void)setShowsRefreshControl:(BOOL)arg1 ;
-(void)disableMailboxes:(id)arg1 ;
-(void)setHideInbox:(BOOL)arg1 ;
-(void)dealloc;
-(id)init;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)applicationWillSuspend;
-(BOOL)shouldAutorotate;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidUnload;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)_getRotationContentSettings:(SCD_Struct_Ma3*)arg1 ;
-(BOOL)isRefreshing;
-(void)shouldReloadMailboxesWithOutbox:(id)arg1 ;
-(BOOL)shouldHideInbox;
-(BOOL)shouldHideNotesForAccount:(id)arg1 ;
-(float)_defaultRowHeight;
-(void)viewWillReappear:(BOOL)arg1 ;
-(void)viewWillFirstAppear:(BOOL)arg1 ;
-(id)indexPathForSelection;
-(void)didSelectMailbox:(id)arg1 changed:(BOOL)arg2 animated:(BOOL)arg3 ;
-(id)mailboxForIndexPath:(id)arg1 ;
-(id)_ntsMailboxesForAccount:(id)arg1 ;
-(id)indexPathForMailbox:(id)arg1 ;
-(void)setIsRefreshing:(BOOL)arg1 ;
-(void)setAccount:(id)arg1 ;
-(void)updateTitle;
@end

