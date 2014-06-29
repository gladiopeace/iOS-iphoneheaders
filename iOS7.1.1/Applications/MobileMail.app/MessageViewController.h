/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:06 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <UIKit/UIViewController.h>
#import <MobileMail/MessageMegaMallObserver.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <MobileMail/ABPersonViewControllerPrivateDelegate.h>
#import <DataDetectorsUI/ABUnknownPersonViewControllerDelegate.h>
#import <MobileMail/DelayedScrollerDelegate.h>
#import <MobileMail/TransferMailboxPickerDelegate.h>
#import <MobileMail/MFMessageViewingContextDelegate.h>
#import <MessageUI/MFPassthroughViewProvider.h>
#import <MessageUI/MFMailPopoverManagerDelegate.h>
#import <EventKitUI/EKEventViewDelegate.h>
#import <UIKit/UIDocumentInteractionControllerDelegate.h>
#import <AddressBookUI/AFContextProvider.h>
#import <MobileMail/CertInfoTrustSummaryControllerDelegate.h>
#import <MobileMail/MFAttachmentHandlingDelegate.h>
#import <MobileMail/MFMessageContentDisplayDelegate.h>
#import <MobileMail/MFArrowControlsViewDelegate.h>

@class MFMessageViewingContext, MailAccount, MessageMegaMall, MessageResponseContext, MessageContentAreaLayer, ComposeNavigationController, CertInfoTrustSummaryController, UIView, UIButton, UIBarButtonItem, LongPressableButtonItem, BarLabelItem, MFArrowControlsView, NSSet, ABPersonViewController, ABUnknownPersonViewController, MFModernAddressAtom, MFVIPSender, NSMutableDictionary, NSMutableSet, UIKeyCommand, MFSecureMIMEPersonHeaderView, NSUndoManager;

@interface MessageViewController : UIViewController <MessageMegaMallObserver, UIActionSheetDelegate, ABPersonViewControllerPrivateDelegate, ABUnknownPersonViewControllerDelegate, DelayedScrollerDelegate, TransferMailboxPickerDelegate, MFMessageViewingContextDelegate, MFPassthroughViewProvider, MFMailPopoverManagerDelegate, EKEventViewDelegate, UIDocumentInteractionControllerDelegate, AFContextProvider, CertInfoTrustSummaryControllerDelegate, MFAttachmentHandlingDelegate, MFMessageContentDisplayDelegate, MFArrowControlsViewDelegate> {

	MFMessageViewingContext* _viewingContext;
	MFMessageViewingContext* _selectedViewingContext;
	MailAccount* _account;
	MessageMegaMall* _mall;
	MessageResponseContext* _messageResponseContext;
	MessageContentAreaLayer* _storedMessageLayer;
	ComposeNavigationController* _composeViewController;
	CertInfoTrustSummaryController* _trustSummaryController;
	UIView* _messageLayerContainerView;
	UIView* _composeViewContainerView;
	UIButton* _mailboxButton;
	UIBarButtonItem* _mailboxButtonItem;
	UIBarButtonItem* _transferButtonItem;
	LongPressableButtonItem* _deleteButtonItem;
	UIBarButtonItem* _replyButtonItem;
	UIBarButtonItem* _arrowsButtonItem;
	BarLabelItem* _titleButtonItem;
	UIBarButtonItem* _markButtonItem;
	LongPressableButtonItem* _composeButtonItem;
	int _lastInterfaceOrientation;
	MFArrowControlsView* _arrowControlsView;
	int _lastChangeDirection;
	UIView* _suspensionPlaceholderView;
	UIView* _viewForTrashAnimation;
	NSSet* _trashedMessages;
	unsigned _deleteOrArchiveTrashedMessages;
	ABPersonViewController* _personViewController;
	ABUnknownPersonViewController* _unknownPersonViewController;
	MFModernAddressAtom* _atomPresentingPersonView;
	MFVIPSender* _currentVIP;
	NSMutableDictionary* _navigationControllersCache;
	SCD_Union_Me13 _controller;
	int _displayStyle;
	unsigned _allowDelete : 1;
	unsigned _searching : 1;
	unsigned _useMessageLayerBuffer : 1;
	unsigned _showingAlternateMessageLayer : 1;
	unsigned _crossFadeNextLayer : 1;
	unsigned _blockingNetworkFetching : 1;
	unsigned _blockingInteractionEvents : 1;
	unsigned _isDeleting : 1;
	unsigned _isAboutToAnimateTrashedMessage : 1;
	unsigned _isTrashingMessage : 1;
	unsigned _shouldPopOnDeletion : 1;
	unsigned _dontMarkMessageAsRead : 1;
	unsigned _willBecomeVisible : 1;
	unsigned _shouldShowProgressOnVisible : 1;
	unsigned _needsMessageRedisplayOnAppear : 1;
	unsigned _isShowingMailboxPicker : 1;
	unsigned _isShowingArchiveButton : 1;
	unsigned _needsToSuspendView : 1;
	unsigned _preparedForTransferOfMessages : 1;
	unsigned _isAnimatingRotation : 1;
	unsigned _deleteButtonArchives : 1;
	unsigned _landscapeThreadNavigationEnabled : 1;
	unsigned _isShowingThreadNavigation : 1;
	unsigned _isInThread : 1;
	unsigned _isInCombinedInbox : 1;
	unsigned _viewDidWillAppear : 1;
	unsigned _contentAreaNeedsRefold : 1;
	NSMutableSet* _controllerTemporaryFiles;
	UIKeyCommand* _replyKeyCommand;
	UIKeyCommand* _replyAllKeyCommand;
	UIKeyCommand* _forwardKeyCommand;
	unsigned _nextMessageLayerState;
	MFSecureMIMEPersonHeaderView* _existingSecureMIMEPersonHeaderView;
	unsigned _sourceType;

}

@property (nonatomic,retain) MessageMegaMall * mall;                                                   //@synthesize mall=_mall - In the implementation block
@property (assign,nonatomic) BOOL allowDelete; 
@property (assign,nonatomic) BOOL searching; 
@property (getter=isDisplayingDraft,nonatomic,readonly) BOOL displayingDraft; 
@property (getter=isInCombinedInbox,nonatomic,readonly) BOOL inCombinedInbox; 
@property (assign,getter=isInThread,nonatomic) BOOL inThread; 
@property (assign,nonatomic) unsigned sourceType;                                                      //@synthesize sourceType=_sourceType - In the implementation block
@property (nonatomic,readonly) UIBarButtonItem * mailboxButtonItem;                                    //@synthesize mailboxButtonItem=_mailboxButtonItem - In the implementation block
@property (nonatomic,readonly) UIBarButtonItem * deleteButtonItem;                                     //@synthesize deleteButtonItem=_deleteButtonItem - In the implementation block
@property (@dynamic,readonly) NSUndoManager * undoManager; 
@property (nonatomic,retain) MFMessageViewingContext * selectedViewingContext;                         //@synthesize selectedViewingContext=_selectedViewingContext - In the implementation block
@property (nonatomic,retain) MailAccount * account;                                                    //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) ABPersonViewController * personViewController;                            //@synthesize personViewController=_personViewController - In the implementation block
@property (nonatomic,retain) ABUnknownPersonViewController * unknownPersonViewController;              //@synthesize unknownPersonViewController=_unknownPersonViewController - In the implementation block
@property (nonatomic,retain) MFModernAddressAtom * atomPresentingPersonView;                           //@synthesize atomPresentingPersonView=_atomPresentingPersonView - In the implementation block
@property (nonatomic,retain) MFVIPSender * currentVIP;                                                 //@synthesize currentVIP=_currentVIP - In the implementation block
@property (nonatomic,retain) CertInfoTrustSummaryController * trustSummaryController;                  //@synthesize trustSummaryController=_trustSummaryController - In the implementation block
+(DDScannerRef)subjectScanner;
+(id)sharedController;
-(id)mailboxContentViewController;
-(void)setMessageViewingContext:(id)arg1 options:(unsigned)arg2 ;
-(id)messageContentAreaLayer;
-(void)suspendViewAfterDelay;
-(void)resumeView;
-(id)messageViewingContext;
-(id)mall;
-(void)setLandscapeThreadNavigationEnabled:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)deleteButtonLongPressed:(id)arg1 ;
-(void)transferButtonClicked:(id)arg1 ;
-(id)deleteButtonItem;
-(void)deleteShortcutInvoked:(id)arg1 ;
-(void)transferMessages:(id)arg1 toMailbox:(id)arg2 ;
-(void)_updateViewingContextToMessage:(id)arg1 ;
-(void)setMall:(id)arg1 ;
-(void)setAllowDelete:(BOOL)arg1 ;
-(void)setInThread:(BOOL)arg1 ;
-(void)megaMallMessageCountChanged:(id)arg1 ;
-(void)megaMallMessageAtIndexChanged:(id)arg1 ;
-(void)megaMallStartFetch:(id)arg1 ;
-(void)megaMallFinishedFetch:(id)arg1 ;
-(void)megaMallCurrentMessageRemoved:(id)arg1 ;
-(void)megaMallDidLoadMessages:(id)arg1 ;
-(void)megaMallGrowingMailboxesChanged:(id)arg1 ;
-(void)megaMallDidFinishSearch:(id)arg1 ;
-(void)transferMailboxPickerController:(id)arg1 didSelectMailbox:(id)arg2 withMessages:(id)arg3 ;
-(void)transferMailboxPickerControllerDidFinish:(id)arg1 animated:(BOOL)arg2 ;
-(void)transferMailboxPickerController:(id)arg1 animateMessageToThumbnailFrame:(CGRect)arg2 inView:(id)arg3 completion:(/*^block*/ id)arg4 ;
-(id)transferMailboxPickerController:(id)arg1 viewForMessage:(id)arg2 ;
-(UIEdgeInsets)_contentInsetAdjustment;
-(void)showSelectedAttachment:(id)arg1 ;
-(void)showMenuForSelectedAttachment:(id)arg1 ;
-(BOOL)canSaveAllAttachmentsInContext:(int)arg1 ;
-(id)localizedTitleForSaveAllAttachmentsAction;
-(void)saveAllAttachments;
-(BOOL)presentViewController:(id)arg1 fromRect:(CGRect)arg2 inView:(id)arg3 ;
-(void)_accountsDidChange:(id)arg1 ;
-(void)showCardForRecipientAtom:(id)arg1 ;
-(void)showCardForSenderAtom:(id)arg1 ;
-(BOOL)isInCombinedInbox;
-(void)mailboxButtonClicked:(id)arg1 ;
-(void)displayMessage:(id)arg1 immediately:(BOOL)arg2 ;
-(id)initWithDisplayStyle:(int)arg1 ;
-(void)updateTitleAndNavigationArrows;
-(void)_composeViewDidShow:(id)arg1 ;
-(void)_relayoutHeaderView;
-(void)messagesWereResurrectedNotification:(id)arg1 ;
-(void)_preferredContentSizeDidChange:(id)arg1 ;
-(void)_accessibilityButtonShapesWereEnabled:(id)arg1 ;
-(void)_clearController;
-(void)updateToolbarButtonsAnimated:(BOOL)arg1 ;
-(void)_meetingInformationInvalidNote:(id)arg1 ;
-(void)_suspendView;
-(void)updateMailboxInfo;
-(BOOL)isDisplayingDraft;
-(void)_updateArrowsWithOrientation:(int)arg1 ;
-(void)_updateToolbarButtonsForInterfaceOrientation:(int)arg1 animated:(BOOL)arg2 ;
-(void)_URLificationDidTimeout;
-(void)messageContentAreaLayerDidDraw:(id)arg1 ;
-(void)dataDetectorsDidFinishURLification:(id)arg1 ;
-(void)_flushMessageLayerBuffer;
-(void)_commitTrashAnimation;
-(void)_messageDisplayDidFinish;
-(void)_prepareMessageLayerBuffer;
-(void)_displayMessageWithViewingContext:(id)arg1 options:(unsigned)arg2 ;
-(void)hideModalViewController:(id)arg1 ;
-(void)_purgeMessageLayer;
-(BOOL)_isSharedController;
-(id)topMessageViewController;
-(id)_createDocumentInteractionControllerForAttachment:(id)arg1 withData:(id)arg2 ;
-(id)_newPersonViewControllerForPerson:(void*)arg1 emailIdentifier:(int)arg2 ;
-(void)_setupHeaderForContactCardViewController:(id)arg1 ;
-(void)showModalViewController:(id)arg1 fromView:(id)arg2 allowsEdit:(BOOL)arg3 ;
-(void)_addVIPButtonToController:(id)arg1 ;
-(void)setAtomPresentingPersonView:(id)arg1 ;
-(void)setCurrentVIP:(id)arg1 ;
-(void)_showContactCardForAddressAtom:(id)arg1 sender:(BOOL)arg2 ;
-(id)atomPresentingPersonView;
-(BOOL)_shouldShowContactHeaderForCurrentMessageViewingContext;
-(void)_configureSecureMIMEPersonHeaderView:(id)arg1 withButtonFactory:(id)arg2 ;
-(void)_removeTrustException:(id)arg1 ;
-(void)_addTrustException:(id)arg1 ;
-(void)_showCertificate:(id)arg1 ;
-(void)_trustDidChange;
-(id)currentVIP;
-(void)_removeVIP:(id)arg1 ;
-(void)_addVIP:(id)arg1 ;
-(void)setTrustSummaryController:(id)arg1 ;
-(void)_updateTrustSummaryControllerAnimated:(BOOL)arg1 ;
-(id)trustSummaryController;
-(void)_reallyRemoveSavedEncryptionCertificate;
-(void)_reallySaveEncryptionCertificate;
-(void)_updateMailboxButtonWithTitle:(id)arg1 ;
-(void)_updateToolbarButtonsForInterfaceOrientation:(int)arg1 animated:(BOOL)arg2 force:(BOOL)arg3 ;
-(void)replyButtonClicked:(id)arg1 ;
-(void)markButtonClicked:(id)arg1 ;
-(id)_arrowControlsView;
-(id)_separatorWithWidth:(float)arg1 ;
-(void)_setupMailboxButtonItemWithTitle:(id)arg1 ;
-(BOOL)allowDelete;
-(id)_selectedMessages;
-(void)deleteButtonAction:(id)arg1 showChoices:(BOOL)arg2 ;
-(void)beginReallyDeletingVisibleMessage;
-(BOOL)showActionSheetWithButtons:(id)arg1 title:(id)arg2 redIndex:(int)arg3 fromBarButtonItem:(id)arg4 ;
-(void)setSelectedViewingContext:(id)arg1 ;
-(id)selectedViewingContext;
-(void)_removeStringsFromArray:(id)arg1 thatCaseInsensitiveMatchStringsInArray:(id)arg2 ;
-(void)_handleReplyWithContext:(id)arg1 ;
-(id)actionSheetWithButtons:(id)arg1 title:(id)arg2 redIndex:(int)arg3 ;
-(BOOL)showActionSheet:(id)arg1 fromBarButtonItem:(id)arg2 ;
-(void)saveHTMLString:(id)arg1 ;
-(void)_markMessage:(id)arg1 asJunk:(BOOL)arg2 ;
-(void)_popIfNecessaryAnimated:(BOOL)arg1 ;
-(void)markMessageAsUnflagged:(id)arg1 ;
-(void)markMessageAsFlagged:(id)arg1 ;
-(void)markMessageAsUnread:(id)arg1 ;
-(void)_beginIgnoringInteractionEventsForMessageRemovalAnimation;
-(void)_endIgnoringInteractionEventsForMessageRemovalAnimation;
-(void)_shrinkMessageToToolbarButton:(id)arg1 completion:(/*^block*/ id)arg2 ;
-(void)_reallyDeleteVisibleMessage;
-(UIEdgeInsets)_insetsForMessageSnapshot;
-(void)_prepareTrashAnimation;
-(id)_snapshotOfCurrentMessageContentAreaLayer:(BOOL)arg1 ;
-(void)_trashAnimationNextMessageTransitionDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3 ;
-(void)_startTrashAnimationWithDuration:(double)arg1 ;
-(void)_trashAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3 ;
-(void)_selectNextMessageWithDirection:(int)arg1 ;
-(void)replyShortcutInvoked:(id)arg1 ;
-(void)downloadAndSaveAllAttachments;
-(void)_getNumberOfImages:(unsigned*)arg1 videos:(unsigned*)arg2 undownloaded:(unsigned*)arg3 ;
-(void)setContentAreaNeedsRefold;
-(void)_animateView:(id)arg1 toCenterPoint:(CGPoint)arg2 size:(CGSize)arg3 otherAnimations:(/*^block*/ id)arg4 completion:(/*^block*/ id)arg5 ;
-(void)_fontSizeDidChange:(id)arg1 ;
-(id)saPersonAttributesFromEmails:(id)arg1 addressBook:(void*)arg2 ;
-(void)arrowControlsView:(id)arg1 didTapButtonWithDirection:(int)arg2 ;
-(void)_addControllerTemporaryFile:(id)arg1 ;
-(id)composeView;
-(void)transferCancelButtonClicked:(id)arg1 ;
-(void)presentViewControllerFromSelectedAttachment:(id)arg1 ;
-(BOOL)showActionSheetFromSelectedAttachment:(id)arg1 ;
-(BOOL)isInThread;
-(id)mailboxButtonItem;
-(BOOL)personViewController:(id)arg1 shouldPerformDefaultActionForPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4 ;
-(void)unknownPersonViewController:(id)arg1 didResolveToPerson:(void*)arg2 ;
-(void)deleteButtonClicked:(id)arg1 ;
-(void)personViewController:(id)arg1 willSetEditing:(BOOL)arg2 animated:(BOOL)arg3 ;
-(BOOL)allowContextProvider:(id)arg1 ;
-(id)getCurrentContext;
-(BOOL)unknownPersonViewController:(id)arg1 shouldPerformDefaultActionForPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4 ;
-(void)eventViewController:(id)arg1 didCompleteWithAction:(int)arg2 ;
-(void)_suspend;
-(void)_applicationSuspended:(id)arg1 ;
-(id)personViewController;
-(id)unknownPersonViewController;
-(void)setPersonViewController:(id)arg1 ;
-(void)setUnknownPersonViewController:(id)arg1 ;
-(void)_updatePersonCard;
-(void)popoverControllerDidDismissPopover:(id)arg1 isUserAction:(BOOL)arg2 ;
-(BOOL)usePadDisplayStyle;
-(void)messageViewingContextContentLoadWillBegin:(id)arg1 ;
-(void)messageViewingContextContentLoadCompleted:(id)arg1 ;
-(void)messageViewingContextFullMessageLoadFailed:(id)arg1 ;
-(void)messageViewingContext:(id)arg1 attachmentLoadCompleted:(id)arg2 withData:(id)arg3 ;
-(id)webLayerControlledByScroller:(id)arg1 ;
-(CGSize)minimumSizeOfWebLayerControlledByScroller:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setTitle:(id)arg1 ;
-(void)applicationWillSuspend;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(id)undoManager;
-(void)didReceiveMemoryWarning;
-(void)applicationDidResume;
-(BOOL)shouldAutorotate;
-(void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)actionSheet:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(id)keyCommands;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(BOOL)canBecomeFirstResponder;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)accessibilityLargeTextDidChange;
-(void)viewDidUnload;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)unloadViewIfReloadable;
-(void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(int)arg1 ;
-(unsigned)sourceType;
-(void)setSourceType:(unsigned)arg1 ;
-(id)passthroughViews;
-(id)_hostingViewController;
-(id)documentInteractionControllerTransitionImageForPreview:(id)arg1 contentRect:(CGRect*)arg2 ;
-(id)documentInteractionControllerViewControllerForPreview:(id)arg1 ;
-(CGRect)documentInteractionControllerRectForPreview:(id)arg1 ;
-(id)documentInteractionControllerViewForPreview:(id)arg1 ;
-(id)documentInteractionControllerURLOfDirectoryForUnzippedDocument:(id)arg1 ;
-(id)excludedActivityTypesForDocumentInteractionController:(id)arg1 ;
-(BOOL)shouldBlockRemoteImagesInPreviewForDocumentInteractionController:(id)arg1 ;
-(id)additionalActivitiesForDocumentInteractionController:(id)arg1 ;
-(void)setSearching:(BOOL)arg1 ;
-(BOOL)searching;
-(void)trustSummaryControllerDidFinish:(id)arg1 ;
-(void)trustSummaryControllerPerformAction:(id)arg1 ;
-(void)markMessageAsRead:(id)arg1 ;
-(id)currentMessage;
-(void)unreadCountChanged:(id)arg1 ;
-(id)account;
-(void)setAccount:(id)arg1 ;
@end

