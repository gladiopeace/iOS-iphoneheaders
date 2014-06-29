/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:56 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UIAlertViewDelegate.h>
#import <UIKit/ABPeoplePickerNavigationControllerDelegate.h>
#import <ChatKit/CKTranscriptCollectionViewControllerDelegate.h>
#import <ChatKit/CKRecipientSelectionControllerDelegate.h>
#import <ChatKit/CKTranscriptHeaderControllerDelegate.h>
#import <ChatKit/CKMessageEntryViewDelegate.h>
#import <ChatKit/CKTrimControllerDelegate.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <UIKit/UIModalViewDelegate.h>
#import <EventKitUI/ABPersonViewControllerDelegate.h>
#import <EventKitUI/ABUnknownPersonViewControllerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <AddressBookUI/AFContextProvider.h>
#import <UIKit/UIKeyInput.h>
#import <ChatKit/QLPreviewControllerDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol CKTranscriptComposeDelegate;
@class CKConversation, UINavigationItem, CKTranscriptStatusController, UIBarButtonItem, CKGradientReferenceView, CKMessageEntryView, CKTranscriptTypingIndicatorCell, NSMutableArray, NSArray, NSString, CKComposition, CKMessageEncodingInfo, CKAudioTrimViewController, CKVideoTrimController, UITapGestureRecognizer, UIWindow, UIAlertView, UIToolbar, NSNotification, UIImagePickerController, CKQLPreviewController, CKTranscriptCollectionViewController, CKRecipientSelectionController, CKTranscriptHeaderController, CKScheduledUpdater, UIView, NSNumber;

@interface CKTranscriptController : UIViewController <UIAlertViewDelegate, ABPeoplePickerNavigationControllerDelegate, CKTranscriptCollectionViewControllerDelegate, CKRecipientSelectionControllerDelegate, CKTranscriptHeaderControllerDelegate, CKMessageEntryViewDelegate, CKTrimControllerDelegate, UIActionSheetDelegate, UIModalViewDelegate, ABPersonViewControllerDelegate, ABUnknownPersonViewControllerDelegate, UINavigationControllerDelegate, AFContextProvider, UIKeyInput, QLPreviewControllerDelegate, UIGestureRecognizerDelegate> {

	CKConversation* _conversation;
	UINavigationItem* _navItem;
	CKTranscriptStatusController* _statusBar;
	UIBarButtonItem* _actionItem;
	UIBarButtonItem* _clearAllItem;
	CKGradientReferenceView* _backPlacard;
	CKMessageEntryView* _entryView;
	<CKTranscriptComposeDelegate>* _composeDelegate;
	CKTranscriptTypingIndicatorCell* _typingIndicatorForSendAnimation;
	/*^block*/ id _scrollBlock;
	NSMutableArray* _presetMessageParts;
	NSArray* _newCompositionAddresses;
	NSString* _serviceAvailabilityKey;
	CKComposition* _newComposition;
	CKMessageEncodingInfo* _textMessageEncodingInfo;
	CKAudioTrimViewController* _audioTrimController;
	CKVideoTrimController* _videoTrimController;
	long long _storedStatusBarStyle;
	int _setupState;
	bool _dimmed;
	UITapGestureRecognizer* _loggingTapGestureRecognizer;
	/*^block*/ id _alertViewHandler;
	UIWindow* _autorotateDisabledWindow;
	UIAlertView* _trimAlert;
	unsigned _locked : 1;
	unsigned _visible : 1;
	unsigned _viewNeedsSetup : 1;
	unsigned _newRecipient : 1;
	unsigned _sending : 1;
	unsigned _transitioningToTranscript : 1;
	unsigned _entryViewCanAcceptFocus : 1;
	unsigned _isAnimatingMessageSend : 1;
	unsigned _entryViewWasActiveBeforeEdit : 1;
	unsigned _entryViewWasActiveBeforePushingViewController : 1;
	unsigned _entryViewWasActiveBeforeNewComposeThrow : 1;
	unsigned _entryViewWasActiveBeforeSwitchingConversations : 1;
	unsigned _recipientSelectionViewWasActiveBeforeFirstResponderChange : 1;
	unsigned _automaticKeyboardWasDisabled : 1;
	unsigned _togglingEditing : 1;
	unsigned _keyboardUndocked : 1;
	unsigned _suspendScrollDueToMediaViewing : 1;
	unsigned _triedToResetEntryViewSizeWhileNotInAWindow : 1;
	unsigned _triedToResetOverlayViewSizeWhileNotInAWindow : 1;
	unsigned _preparingForResume : 1;
	unsigned _appeared : 1;
	unsigned _appearing : 1;
	unsigned _settingConversation : 1;
	unsigned _needsTransitionToFullTranscript : 1;
	unsigned _transcriptNeedsUpdate;
	unsigned _storedStatusBarIsHidden : 1;
	UIToolbar* _actionsToolbar;
	bool _canSafelyDismissImagePicker;
	UIEdgeInsets _transcriptAreaInsets;
	double _transcriptTableBottomOffset;
	CGRect _keyboardScreenFrame;
	CGRect _keyboardScreenFrameWithoutAccessoryView;
	NSNotification* _keyboardNotification;
	bool _showingKeyboard;
	bool _hidingKeyboard;
	bool _keyboardInteractionCancelled;
	long long _pendingInterfaceOrientation;
	bool _inRotation;
	bool _willRotateView;
	bool _shouldAdjustTranscriptOffsetForRotation;
	bool _didCancel;
	NSString* _initialSystemKeyboardID;
	UIImagePickerController* _mediaController;
	CKQLPreviewController* _previewController;
	bool _safeToMarkAsRead;
	bool _hasPrepopulatedRecipients;
	CKTranscriptCollectionViewController* _collectionViewController;
	CKRecipientSelectionController* _recipientSelectionController;
	CKTranscriptHeaderController* _transcriptHeaderViewController;
	CKScheduledUpdater* _typingUpdater;
	UIView* _throwAnimationEnforcementView;
	UIView* _throwAnimationSnapshotView;
	NSMutableArray* _throwBalloonViews;
	NSMutableArray* _throwIntermediateFrames;
	NSMutableArray* _throwEndFrames;

}

@property (assign,nonatomic) <CKTranscriptComposeDelegate> * composeDelegate;                              //@synthesize composeDelegate=_composeDelegate - In the implementation block
@property (assign,nonatomic) NSNumber * canSafelyDismissImagePicker; 
@property (nonatomic,retain) NSMutableArray * presetMessageParts;                                          //@synthesize presetMessageParts=_presetMessageParts - In the implementation block
@property (assign,getter=isDimmed,nonatomic) bool dimmed;                                                  //@synthesize dimmed=_dimmed - In the implementation block
@property (nonatomic,copy) id scrollBlock;                                                                 //@synthesize scrollBlock=_scrollBlock - In the implementation block
@property (nonatomic,retain) CKMessageEntryView * entryView;                                               //@synthesize entryView=_entryView - In the implementation block
@property (nonatomic,retain) CKTranscriptCollectionViewController * collectionViewController;              //@synthesize collectionViewController=_collectionViewController - In the implementation block
@property (nonatomic,copy) id alertHandler;                                                                //@synthesize alertViewHandler=_alertViewHandler - In the implementation block
@property (nonatomic,copy) NSArray * newCompositionAddresses;                                              //@synthesize newCompositionAddresses=_newCompositionAddresses - In the implementation block
@property (assign,nonatomic) bool safeToMarkAsRead;                                                        //@synthesize safeToMarkAsRead=_safeToMarkAsRead - In the implementation block
@property (assign,nonatomic) bool hasPrepopulatedRecipients;                                               //@synthesize hasPrepopulatedRecipients=_hasPrepopulatedRecipients - In the implementation block
@property (nonatomic,readonly) CKRecipientSelectionController * recipientSelectionController;              //@synthesize recipientSelectionController=_recipientSelectionController - In the implementation block
@property (nonatomic,retain) CKTranscriptHeaderController * transcriptHeaderViewController;                //@synthesize transcriptHeaderViewController=_transcriptHeaderViewController - In the implementation block
@property (nonatomic,retain) CKScheduledUpdater * typingUpdater;                                           //@synthesize typingUpdater=_typingUpdater - In the implementation block
@property (nonatomic,retain) UIView * throwAnimationEnforcementView;                                       //@synthesize throwAnimationEnforcementView=_throwAnimationEnforcementView - In the implementation block
@property (nonatomic,retain) UIView * throwAnimationSnapshotView;                                          //@synthesize throwAnimationSnapshotView=_throwAnimationSnapshotView - In the implementation block
@property (nonatomic,retain) NSMutableArray * throwBalloonViews;                                           //@synthesize throwBalloonViews=_throwBalloonViews - In the implementation block
@property (nonatomic,retain) NSMutableArray * throwIntermediateFrames;                                     //@synthesize throwIntermediateFrames=_throwIntermediateFrames - In the implementation block
@property (nonatomic,retain) NSMutableArray * throwEndFrames;                                              //@synthesize throwEndFrames=_throwEndFrames - In the implementation block
@property (assign,nonatomic) long long autocapitalizationType; 
@property (assign,nonatomic) long long autocorrectionType; 
@property (assign,nonatomic) long long spellCheckingType; 
@property (assign,nonatomic) long long keyboardType; 
@property (assign,nonatomic) long long keyboardAppearance; 
@property (assign,nonatomic) long long returnKeyType; 
@property (assign,nonatomic) bool enablesReturnKeyAutomatically; 
@property (assign,getter=isSecureTextEntry,nonatomic) bool secureTextEntry; 
+(void)_sendDidStartSavingMediaNotification;
+(void)_sendDidFinishSavingVideoNotificationWithPath:(id)arg1 error:(id)arg2 context:(void*)arg3 ;
+(void)_sendDidFinishSavingImageNotificationWithImage:(id)arg1 error:(id)arg2 context:(void*)arg3 ;
+(id)readerScrollPositionCache;
-(id)textInputContextIdentifier;
-(void)_keyboardDidChangeFrame:(id)arg1 ;
-(void)_keyboardWillShowOrHide:(id)arg1 ;
-(CGRect)_keyboardScreenFrame:(CGRect)arg1 withoutAccessoryViewOfHeight:(double)arg2 orientation:(long long)arg3 ;
-(bool)_keyboardIsUndocked;
-(void)_keyboardDidShowOrHide:(id)arg1 ;
-(void)_keyboardLayoutDidChange:(id)arg1 ;
-(CGRect)_keyboardFrameForKeyboardScreenFrame:(CGRect)arg1 ;
-(bool)_keyboardIsOnScreen;
-(bool)_keyboardScreenFrameIsOnScreen:(CGRect)arg1 ;
-(double)_distanceFromBottomOfScreenToTopEdgeOfKeyboardScreenFrame:(CGRect)arg1 orientation:(long long)arg2 ;
-(double)_heightOfKeyboard;
-(double)_distanceFromBottomOfScreenToTopEdgeOfKeyboard;
-(CGRect)_keyboardFrame;
-(double)_heightOfKeyboardScreenFrame:(CGRect)arg1 orientation:(long long)arg2 ;
-(double)_heightOfKeyboardScreenFrame:(CGRect)arg1 ;
-(void)entryDebugSliderChange:(id)arg1 ;
-(void)entryDebugClear;
-(void)_entryDebugShowEntryHUD;
-(void)imagePickerControllerDidCancel:(id)arg1 ;
-(void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2 ;
-(CGRect)previewController:(id)arg1 frameForPreviewItem:(id)arg2 inSourceView:(id*)arg3 ;
-(void)previewControllerWillDismiss:(id)arg1 ;
-(void)previewControllerDidDismiss:(id)arg1 ;
-(id)previewController:(id)arg1 transitionImageForPreviewItem:(id)arg2 contentRect:(CGRect*)arg3 ;
-(void)_showPhotoPickerWithSourceType:(long long)arg1 ;
-(void)_showMediaSourceSelectionSheet;
-(void)hideMediaPickerAnimated:(bool)arg1 ;
-(void)updateQLPreviewControllerIfVisible;
-(bool)_shouldAllowCameraAttachments;
-(id)_supportedMediaTypesForPhotoPicker;
-(void)showViewerForMediaObject:(id)arg1 ;
-(void)showReaderForPart:(id)arg1 ;
-(void)_setupMediaEntry;
-(bool)previewController:(id)arg1 shouldOpenURL:(id)arg2 forPreviewItem:(id)arg3 ;
-(void)addMedia:(id)arg1 ;
-(void)_userDidCaptureImage;
-(void)_userDidCancelCapturingImage;
-(void)showMediaPicker:(id)arg1 animated:(bool)arg2 ;
-(void)video:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void*)arg3 ;
-(void)_addPart:(id)arg1 ;
-(id)previewItemsForMediaObject:(id)arg1 currentItemIndex:(long long*)arg2 containsRestoring:(bool*)arg3 ;
-(void)dismissPresentedViewController:(id)arg1 ;
-(void)_showVCalViewerForMediaObject:(id)arg1 ;
-(void)_showMapViewerForMediaObject:(id)arg1 ;
-(void)_showVCardViewerForMediaObject:(id)arg1 ;
-(void)_showPassbookCardViewForMediaObject:(id)arg1 ;
-(bool)_displayPreviewItemForMediaObject:(id)arg1 ;
-(void)_hideCurrentPreviewItemForPreviewController:(id)arg1 ;
-(void)_showCurrentPreviewItemForPreviewController:(id)arg1 ;
-(void)readerViewControllerWillDismiss:(id)arg1 ;
-(void)previewController:(id)arg1 willTransitionToState:(long long)arg2 ;
-(void)previewController:(id)arg1 didTransitionToState:(long long)arg2 ;
-(void)addPassesViewControllerDidFinish:(id)arg1 ;
-(bool)personViewController:(id)arg1 shouldPerformDefaultActionForPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4 ;
-(bool)peoplePickerNavigationController:(id)arg1 shouldShowInsertEditorForPerson:(void*)arg2 insertProperty:(int*)arg3 copyInsertValue:(id*)arg4 copyInsertLabel:(id*)arg5 ;
-(void)peoplePickerNavigationController:(id)arg1 insertEditorDidConfirm:(bool)arg2 forPerson:(void*)arg3 ;
-(id)initWithNavigationController:(id)arg1 ;
-(void)unknownPersonViewController:(id)arg1 didResolveToPerson:(void*)arg2 ;
-(bool)unknownPersonViewController:(id)arg1 shouldPresentMessageCompositionWithVCard:(id)arg2 filename:(id)arg3 ;
-(bool)personViewController:(id)arg1 shouldPresentMessageCompositionWithVCard:(id)arg2 filename:(id)arg3 ;
-(bool)allowContextProvider:(id)arg1 ;
-(id)getCurrentContext;
-(void)send:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)navigationItem;
-(void)didReceiveMemoryWarning;
-(bool)becomeFirstResponder;
-(bool)shouldAutorotate;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)significantTimeChange;
-(bool)isEditable;
-(bool)wantsFullScreenLayout;
-(bool)canBecomeFirstResponder;
-(void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(bool)arg2 ;
-(void)setEditing:(bool)arg1 animated:(bool)arg2 ;
-(void)loadView;
-(bool)hasText;
-(void)insertText:(id)arg1 ;
-(void)deleteBackward;
-(bool)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)viewWillAppear:(bool)arg1 ;
-(bool)_canReloadView;
-(void)viewWillUnload;
-(void)viewDidAppear:(bool)arg1 ;
-(void)viewWillDisappear:(bool)arg1 ;
-(void)viewDidDisappear:(bool)arg1 ;
-(void)dismissViewControllerWithTransition:(int)arg1 completion:(/*^block*/ id)arg2 ;
-(id)rotatingFooterView;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(id)inputAccessoryView;
-(id)collectionViewController;
-(void)setCollectionViewController:(id)arg1 ;
-(void)peoplePickerNavigationControllerDidCancel:(id)arg1 ;
-(bool)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 ;
-(bool)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4 ;
-(id)_alertView:(id)arg1 externalButtonTitleForMainScreenButtonTitle:(id)arg2 atIndex:(long long)arg3 ;
-(void)updateNavigationButtons;
-(void)setAlertHandler:(/*^block*/ id)arg1 ;
-(id)conversation;
-(void)recipientSelectionController:(id)arg1 textDidChange:(id)arg2 ;
-(void)recipientSelectionControllerReturnPressed:(id)arg1 ;
-(void)recipientSelectionControllerDidChangeSize:(id)arg1 ;
-(void)showPopoverWithContentViewController:(id)arg1 withPresenter:(/*^block*/ id)arg2 withHandler:(/*^block*/ id)arg3 ;
-(void)recipientSelectionControllerRequestDismissKeyboard:(id)arg1 ;
-(id)proposedRecipients;
-(void)recipientSelectionController:(id)arg1 didSelectConversation:(id)arg2 ;
-(void)recipientSelectionControllerSearchListDidShowOrHide:(id)arg1 ;
-(UIEdgeInsets)recipientSelectionControllerRequestNavigationBarInsets:(id)arg1 ;
-(void)parentControllerDidResume:(bool)arg1 animating:(bool)arg2 ;
-(void)messageEntryViewSendButtonHitWhileDisabled:(id)arg1 ;
-(bool)getContainerWidth:(double*)arg1 offset:(double*)arg2 ;
-(void)setComposition:(id)arg1 ;
-(void)messageEntryViewDidChange:(id)arg1 ;
-(bool)messageEntryViewShouldBeginEditing:(id)arg1 ;
-(void)messageEntryViewDidBeginEditing:(id)arg1 ;
-(bool)messageEntryView:(id)arg1 shouldInsertMediaObjects:(id)arg2 ;
-(void)messageEntryViewSendButtonHit:(id)arg1 ;
-(void)_markMessagesAsReadIfNecessary;
-(void)setSafeToMarkAsRead:(bool)arg1 ;
-(void)updateTyping;
-(void)setTypingUpdater:(id)arg1 ;
-(void)registerForSharedNotifications;
-(void)registerForNotifications;
-(void)_cancelMessageSendAnimation;
-(id)transcriptHeaderViewController;
-(void)setScrollBlock:(/*^block*/ id)arg1 ;
-(void)_removeRecipientSelectionView;
-(void)reloadEntryViewIfNeeded;
-(void)_updateBackPlacardSubviews;
-(id)_statusBar;
-(void)_resetTranscriptInsetsAnimated:(bool)arg1 ;
-(void)_refreshViewForNewRecipientIfNeeded;
-(id)recipientSelectionController;
-(void)_refreshViewForCurrentConversationIfNeeded;
-(void)refreshTranscriptIfNeededWithAnimation:(bool)arg1 ;
-(void)_setupTranscriptHeaderView;
-(void)_resetEntryViewSize;
-(void)_requeryIDStatuses;
-(void)viewDidAppearDeferredSetup;
-(void)_saveDraftState;
-(void)_teardownTranscriptHeaderView;
-(void)setTranscriptHeaderViewController:(id)arg1 ;
-(void)performResumeDeferredSetup;
-(double)_heightOfTopTranscriptArea;
-(double)_accessoryViewHeight;
-(void)_adjustCustomTitleViewFrame:(long long)arg1 ;
-(void)_refreshStatusBar;
-(id)entryView;
-(bool)safeToMarkAsRead;
-(void)_entryViewWillRotate:(id)arg1 ;
-(void)_receivedConversationPreferredServiceChangedNotification:(id)arg1 ;
-(void)_preferredServiceChangedNotification:(id)arg1 ;
-(void)_conversationDidChangeNotification:(id)arg1 ;
-(void)_localeDidChange:(id)arg1 ;
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
-(void)_transferFinished:(id)arg1 ;
-(void)_changedStatusBarFrame:(id)arg1 ;
-(void)_receivedMessageErrorNotification:(id)arg1 ;
-(void)_transferRestored:(id)arg1 ;
-(void)_faceTimeAvailabilityChange:(id)arg1 ;
-(void)_handleAddressBookChangedNotification:(id)arg1 ;
-(void)_chatUnreadCountDidChange:(id)arg1 ;
-(void)_screenUnlocked:(id)arg1 ;
-(void)refreshTranscriptWithAnimation:(bool)arg1 ;
-(void)_updateTranscriptHeaderView;
-(id)canSafelyDismissImagePicker;
-(void)_performResume:(bool)arg1 ;
-(void)setConversation:(id)arg1 ;
-(bool)_messageIsForCurrentConversation:(id)arg1 ;
-(void)updateEntryView;
-(CGPoint)bestVisibleOffsetForBubbleAtIndex:(long long)arg1 ;
-(void)_setupViewForConversation;
-(void)_setConversation:(id)arg1 ;
-(id)composeDelegate;
-(void)clearComposition;
-(bool)isSendingMessage;
-(void)clearCurrentMessageThread;
-(void)actionButtonClicked:(id)arg1 ;
-(id)clearAllItem;
-(bool)_isGroupMessage;
-(id)_actionsToolbar;
-(void)_updateActionsToolbarItems;
-(void)_beginTransitioningToTranscript;
-(void)_endTransitioningToTranscript;
-(id)throwAnimationSnapshotView;
-(void)setThrowAnimationSnapshotView:(id)arg1 ;
-(void)_cleanupThrowData;
-(void)setThrowBalloonViews:(id)arg1 ;
-(void)setThrowIntermediateFrames:(id)arg1 ;
-(void)setThrowEndFrames:(id)arg1 ;
-(id)throwIntermediateFrames;
-(id)throwBalloonViews;
-(bool)_makeContentEntryViewActive;
-(void)_setupTranscriptTableHeader;
-(id)throwEndFrames;
-(void)_setEntryViewSize:(CGSize)arg1 animate:(bool)arg2 animationLength:(float)arg3 ;
-(void)_finishSendAnimation;
-(void)transitionFromNewMessageToConversation;
-(void)_actuallyClearCurrentMessageThread;
-(bool)_shouldUseExistingConversations;
-(bool)shouldDismissAfterSend;
-(void)_startCreatingNewMessageForSending:(id)arg1 ;
-(void)_highlightMessage:(id)arg1 ;
-(void)startSendAnimationForMessage:(id)arg1 ;
-(double)maxTrimDurationForMediaObject:(id)arg1 ;
-(id)nextMediaObjectToTrim;
-(void)presentTrimControllerForMediaObject:(id)arg1 ;
-(id)typingUpdater;
-(bool)isNewRecipient;
-(bool)_resizeMessageEntryView:(id)arg1 animate:(bool)arg2 ;
-(CGSize)_idealSizeForEntryView;
-(void)setupScrollingForKeyboardInteraction;
-(void)setMessageParts:(id)arg1 ;
-(void)setNewCompositionAddresses:(id)arg1 ;
-(id)newCompositionAddresses;
-(void)setHasPrepopulatedRecipients:(bool)arg1 ;
-(void)_setupRecipientSelectionView;
-(void)_setupNewComposition;
-(CGRect)gradientFrame;
-(bool)sharedShouldPresentMessageCompositionWithVCard:(id)arg1 filename:(id)arg2 ;
-(void)_displayABPersonViewController:(id)arg1 ;
-(void)_requestCallTypeForEntity:(id)arg1 withAddresses:(id)arg2 withLabels:(id)arg3 faceTimeAudioEnabled:(bool)arg4 ;
-(void)transcriptHeaderController:(id)arg1 startFacetimeCommunicationForEntity:(id)arg2 audioOnly:(bool)arg3 ;
-(void)_startCallWithAddress:(id)arg1 entity:(id)arg2 ;
-(void)dismissPeoplePicker:(id)arg1 ;
-(UIEdgeInsets)navigationBarInsets;
-(void)_updateActionsToolbarItemsForRotation:(long long)arg1 ;
-(void)_deleteSelectedMessages:(id)arg1 ;
-(void)_forwardSelectedMessages:(id)arg1 ;
-(id)_fieldForFocus;
-(void)_makeRecipientEntryViewActive;
-(bool)photoButtonEnabled;
-(void)setEntryView:(id)arg1 ;
-(void)_hideTranscriptHeaderForInteraction;
-(bool)hasPrepopulatedRecipients;
-(double)_heightOfSpaceAboveKeyboard:(CGRect)arg1 undocked:(bool)arg2 ;
-(id)_overlayView;
-(double)_bottomInset;
-(/*^block*/ id)alertHandler;
-(void)transcriptCollectionViewController:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)transcriptCollectionViewController:(id)arg1 didDeselectItemAtIndexPath:(id)arg2 ;
-(void)transcriptCollectionViewController:(id)arg1 balloonViewTappedForItemWithIndexPath:(id)arg2 ;
-(void)transcriptCollectionViewController:(id)arg1 moreButtonTappedForRowAtIndexPath:(id)arg2 ;
-(void)transcriptCollectionViewControllerWillInset:(id)arg1 targetContentInset:(inout UIEdgeInsets*)arg2 ;
-(void)transcriptCollectionViewControllerDidInset:(id)arg1 ;
-(void)transcriptCollectionViewControllerWantsRefreshStatusBar:(id)arg1 ;
-(void)transcriptHeaderController:(id)arg1 showContactCardForEntity:(id)arg2 fromView:(id)arg3 fromRect:(CGRect)arg4 ;
-(void)transcriptHeaderController:(id)arg1 startCommunicationForEntity:(id)arg2 ;
-(void)transcriptHeaderController:(id)arg1 startEmailCommunicationWithEntity:(id)arg2 ;
-(void)transcriptHeaderControllerWillShowOrHide:(id)arg1 ;
-(void)transcriptHeaderControllerHeaderIsAnimatingShowOrHide:(id)arg1 ;
-(void)trimControllerDidCancel:(id)arg1 ;
-(void)trimController:(id)arg1 didFinishTrimmingMediaObject:(id)arg2 withReplacementMediaObject:(id)arg3 ;
-(void)_applicationBecameActive:(id)arg1 ;
-(void)parentControllerDidBecomeActive;
-(void)_screenLocked:(id)arg1 ;
-(void)prepareForResume;
-(void)_receivedMessageSentNotification:(id)arg1 ;
-(void)scrollBubbleIndexToVisible:(int)arg1 ;
-(void)addPresetMessagePart:(id)arg1 ;
-(void)clearButtonClicked:(id)arg1 ;
-(CGPoint)_transcriptScrollToBottomOffsetWithHeightDelta:(double)arg1 ;
-(void)scrollToMessage:(id)arg1 highlight:(bool)arg2 ;
-(bool)_resizeMessageEntryViewWithAnimate:(bool)arg1 ;
-(id)unatomizedRecipientText;
-(void)setNewComposition:(id)arg1 addresses:(id)arg2 ;
-(void)setupForNewRecipient;
-(id)_abPersonViewControllerForPerson:(void*)arg1 property:(int)arg2 withIdentifier:(int)arg3 ;
-(void*)_newPersonWithValue:(CFStringRef)arg1 forMultiValueProperty:(int)arg2 ;
-(void)showAddToExistingContactViewForEntity:(id)arg1 ;
-(void)_setEntryViewVisible:(bool)arg1 ;
-(void)transcriptStatusBar:(id)arg1 setTitle:(id)arg2 animated:(bool)arg3 ;
-(void)transcriptStatusBar:(id)arg1 showNavBarProgressBar:(id)arg2 ;
-(void)transcriptStatusBar:(id)arg1 updateNavBarProgressBar:(id)arg2 withProgress:(double)arg3 ;
-(bool)_isVisible;
-(void)_setVisible:(bool)arg1 ;
-(void)_makeFieldForFocusActive;
-(void)showKeyboardForReply;
-(void)setCanSafelyDismissImagePicker:(id)arg1 ;
-(void)setComposeDelegate:(id)arg1 ;
-(id)presetMessageParts;
-(void)setPresetMessageParts:(id)arg1 ;
-(/*^block*/ id)scrollBlock;
-(id)throwAnimationEnforcementView;
-(void)setThrowAnimationEnforcementView:(id)arg1 ;
-(void)sendMessage:(id)arg1 ;
-(void)systemApplicationWillEnterForeground;
-(void)cancelButtonClicked:(id)arg1 ;
-(void)setDimmed:(bool)arg1 ;
-(bool)isDimmed;
-(id)composition;
-(void)updateTitle;
-(id)recipients;
-(void)prepareForSuspend;
@end

