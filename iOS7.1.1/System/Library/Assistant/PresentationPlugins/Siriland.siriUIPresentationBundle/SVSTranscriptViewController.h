/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:09 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Assistant/PresentationPlugins/Siriland.siriUIPresentationBundle/Siriland
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Siriland/Siriland-Structs.h>
#import <UIKit/UIViewController.h>
#import <AssistantUI/AFUIQueueDelegate.h>
#import <Siriland/SiriUISnippetViewControllerDelegate.h>
#import <Siriland/SiriUISnippetViewControllerDelegatePrivate.h>
#import <Siriland/SiriUIAceObjectViewControllerDelegate.h>
#import <Siriland/SiriUIAceObjectViewControllerDelegatePrivate.h>
#import <Siriland/SVSSuggestionsViewControllerDelegate.h>
#import <Siriland/SVSTranscriptDataSource.h>
#import <Siriland/SVSTranscriptDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>

@protocol SVSTranscriptViewControllerDataSource, SVSTranscriptViewControllerDelegate, SiriUIViewController;
@class SVSSuggestionsViewController, SVSTranscriptFlowLayout, SVSTranscript, SVSTranscriptAnimationQueue, SiriUITranscriptItem, NSMutableSet, UIViewController, UITapGestureRecognizer, NSUUID, SVSTranscriptView;

@interface SVSTranscriptViewController : UIViewController <AFUIQueueDelegate, SiriUISnippetViewControllerDelegate, SiriUISnippetViewControllerDelegatePrivate, SiriUIAceObjectViewControllerDelegate, SiriUIAceObjectViewControllerDelegatePrivate, SVSSuggestionsViewControllerDelegate, SVSTranscriptDataSource, SVSTranscriptDelegate, UICollectionViewDataSource, UICollectionViewDelegate> {

	long long _updateAnimationCount;
	bool _viewIsInViewHierarchy;
	bool _didLoadConversationList;
	bool _showsTranscriptEndWhenVisible;
	<SVSTranscriptViewControllerDataSource>* _dataSource;
	<SVSTranscriptViewControllerDelegate>* _delegate;
	SVSSuggestionsViewController* _suggestionsViewController;
	SVSTranscriptFlowLayout* _layout;
	SVSTranscript* _transcript;
	SVSTranscriptAnimationQueue* _animationQueue;
	SVSTranscriptAnimationQueue* _pinAnimationQueue;
	double _lastAnimationTime;
	double _lastPinAnimationTime;
	double _currentPinMinimumDuration;
	SiriUITranscriptItem* _currentPin;
	NSMutableSet* _identifiersOfItemsWithPendingActions;
	UIViewController<SiriUIViewController>* _editingViewController;
	UITapGestureRecognizer* _editingEndGestureRecognizer;
	double _pinDistance;
	double _gridHeight;
	double _lastTranscriptDragStartTime;

}

@property (nonatomic,readonly) NSUUID * identifierOfLastDisplayedItem; 
@property (nonatomic,readonly) bool transcriptStartIsVisible; 
@property (nonatomic,readonly) bool transcriptEndIsVisible; 
@property (nonatomic,readonly) bool transcriptIsAnimating; 
@property (assign,nonatomic,__weak) <SVSTranscriptViewControllerDataSource> * dataSource;                                                                                   //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) <SVSTranscriptViewControllerDelegate> * delegate;                                                                                       //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) SVSTranscriptView * view; 
@property (assign,setter=_setViewIsInViewHierarchy:,getter=_viewIsInViewHierarchy,nonatomic) bool viewIsInViewHierarchy;                                                    //@synthesize viewIsInViewHierarchy=_viewIsInViewHierarchy - In the implementation block
@property (getter=_suggestionsViewController,nonatomic,readonly) SVSSuggestionsViewController * suggestionsViewController;                                                  //@synthesize suggestionsViewController=_suggestionsViewController - In the implementation block
@property (getter=_layout,nonatomic,readonly) SVSTranscriptFlowLayout * layout;                                                                                             //@synthesize layout=_layout - In the implementation block
@property (getter=_transcript,nonatomic,readonly) SVSTranscript * transcript;                                                                                               //@synthesize transcript=_transcript - In the implementation block
@property (assign,setter=_setDidLoadConversationList:,getter=_didLoadConversationList,nonatomic) bool didLoadConversationList;                                              //@synthesize didLoadConversationList=_didLoadConversationList - In the implementation block
@property (getter=_animationQueue,nonatomic,readonly) SVSTranscriptAnimationQueue * animationQueue;                                                                         //@synthesize animationQueue=_animationQueue - In the implementation block
@property (getter=_pinAnimationQueue,nonatomic,readonly) SVSTranscriptAnimationQueue * pinAnimationQueue;                                                                   //@synthesize pinAnimationQueue=_pinAnimationQueue - In the implementation block
@property (assign,setter=_setLastAnimationTime:,getter=_lastAnimationTime,nonatomic) double lastAnimationTime;                                                              //@synthesize lastAnimationTime=_lastAnimationTime - In the implementation block
@property (assign,setter=_setLastPinAnimationTime:,getter=_lastPinAnimationTime,nonatomic) double lastPinAnimationTime;                                                     //@synthesize lastPinAnimationTime=_lastPinAnimationTime - In the implementation block
@property (assign,setter=_setCurrentPinMinimumDuration:,getter=_currentPinMinimumDuration,nonatomic) double currentPinMinimumDuration;                                      //@synthesize currentPinMinimumDuration=_currentPinMinimumDuration - In the implementation block
@property (setter=_setCurrentPin:,getter=_currentPin,nonatomic,retain) SiriUITranscriptItem * currentPin;                                                                   //@synthesize currentPin=_currentPin - In the implementation block
@property (getter=_identifiersOfItemsWithPendingActions,nonatomic,readonly) NSMutableSet * identifiersOfItemsWithPendingActions;                                            //@synthesize identifiersOfItemsWithPendingActions=_identifiersOfItemsWithPendingActions - In the implementation block
@property (setter=_setEditingViewController:,getter=_editingViewController,nonatomic,retain) UIViewController<SiriUIViewController> * editingViewController;                //@synthesize editingViewController=_editingViewController - In the implementation block
@property (setter=_setEditingEndGestureRecognizer:,getter=_editingEndGestureRecognizer,nonatomic,retain) UITapGestureRecognizer * editingEndGestureRecognizer;              //@synthesize editingEndGestureRecognizer=_editingEndGestureRecognizer - In the implementation block
@property (assign,setter=_setShowsTranscriptEndWhenVisible:,getter=_showsTranscriptEndWhenVisible,nonatomic) bool showsTranscriptEndWhenVisible;                            //@synthesize showsTranscriptEndWhenVisible=_showsTranscriptEndWhenVisible - In the implementation block
@property (getter=_pinDistance,nonatomic,readonly) double pinDistance;                                                                                                      //@synthesize pinDistance=_pinDistance - In the implementation block
@property (getter=_gridHeight,nonatomic,readonly) double gridHeight;                                                                                                        //@synthesize gridHeight=_gridHeight - In the implementation block
@property (assign,setter=_setLastTranscriptDragStartTime:,getter=_lastTranscriptDragStartTime,nonatomic) double lastTranscriptDragStartTime;                                //@synthesize lastTranscriptDragStartTime=_lastTranscriptDragStartTime - In the implementation block
-(id)svscvc_itemIdentifier;
-(void)svscvc_setItemIdentifier:(id)arg1 ;
-(id)_transcript;
-(id)identifierOfLastDisplayedItem;
-(double)_contentHeight;
-(id)_animationQueue;
-(id)_indexPathForItemAtIndex:(long long)arg1 ;
-(void)_updateGridAndPinHeight;
-(id)_suggestionsViewController;
-(Class)aceControllerCellClass;
-(void)_registerReusableView:(Class)arg1 ;
-(Class)snippetControllerCellClass;
-(void)_updateStatusBarRelatedAttributesAndUpdateContentInset:(bool)arg1 ;
-(bool)_didLoadConversationList;
-(void)_setDidLoadConversationList:(bool)arg1 ;
-(double)_bottomBarInset;
-(id)_currentPin;
-(void)_setCurrentPin:(id)arg1 ;
-(void)statusBarFrameDidChange;
-(void)siriDidTransitionFromState:(long long)arg1 event:(long long)arg2 ;
-(void)updateSuggestedUtterances:(id)arg1 forLanguage:(id)arg2 ;
-(id)_snippetViewControllerIfExistsAtItemIndex:(long long)arg1 ;
-(bool)_showsTranscriptEndWhenVisible;
-(void)_setShowsTranscriptEndWhenVisible:(bool)arg1 ;
-(void)_setViewIsInViewHierarchy:(bool)arg1 ;
-(id)_conversationItemList;
-(void)_showSuggestionsIfNecessary;
-(void)_appendExtraSpaceToContentInsets;
-(void)_updateNavigationBarFrame;
-(void)_updateViewTopMarginHeight;
-(void)_updateViewContentInset;
-(bool)_viewIsInViewHierarchy;
-(id)_pinAnimationQueue;
-(id)_identifiersOfItemsWithPendingActions;
-(double)_nextPinAnimationTime;
-(void)_scheduleNextPinAnimationAfterDelay:(double)arg1 ;
-(void)siriViewController:(id)arg1 openURL:(id)arg2 completion:(/*^block*/ id)arg3 ;
-(id)_domainObjectStore;
-(void)_pinTranscriptToCurrentPin;
-(void)_setupEditingForViewController:(id)arg1 ;
-(void)_teardownEditingViewController:(id)arg1 ;
-(id)_transcriptItemForSiriViewController:(id)arg1 ;
-(void)_removeConversationItemWithIdentifier:(id)arg1 ;
-(void)siriViewControllerHeightDidChange:(id)arg1 pinTopOfSnippet:(bool)arg2 ;
-(double)_expectedWidthForItemIndex:(unsigned long long)arg1 ;
-(UIEdgeInsets)_edgeInsetsForItemIndex:(unsigned long long)arg1 ;
-(CGRect)_frameForItemAtIndex:(unsigned long long)arg1 ;
-(double)_pinDistanceFromTop;
-(void)_speakText:(id)arg1 isPhonetic:(bool)arg2 completion:(/*^block*/ id)arg3 ;
-(id)_conversationItemAtIndex:(long long)arg1 ;
-(id)_dialogPhaseForItemAtIndex:(long long)arg1 ;
-(void)_removeConversationItemsWithIdentifiers:(id)arg1 ;
-(id)_invalidIndexesToRemoveBeforeIndex:(long long)arg1 ;
-(id)_indexPathsForItemsAtIndexes:(id)arg1 ;
-(void)_processAnimationQueue;
-(void)_updateBottomKeylineForScrollView:(id)arg1 ;
-(id)_aceViewControllerIfExistsForTranscriptItem:(id)arg1 ;
-(id)_snippetViewControllerIfExistsForTranscriptItem:(id)arg1 ;
-(void)animateTranscriptWithUpdates:(/*^block*/ id)arg1 ;
-(id)_aceViewControllerIfExistsAtItemIndex:(long long)arg1 ;
-(id)_controllerForItemIndex:(long long)arg1 ;
-(double)_heightForHeaderAtItemIndex:(long long)arg1 ;
-(double)_heightForFooterAtItemIndex:(long long)arg1 ;
-(void)_setLastTranscriptDragStartTime:(double)arg1 ;
-(bool)_itemIndexIsInset:(unsigned long long)arg1 ;
-(id)_indexPathForFirstResponder;
-(void)_tappedOutsideEditingView:(id)arg1 ;
-(void)_setEditingEndGestureRecognizer:(id)arg1 ;
-(void)_setEditingViewController:(id)arg1 ;
-(UIEdgeInsets)_requiredExtraSpaceToPinTranscriptItem:(id)arg1 ;
-(double)_nextAnimationTime;
-(void)_scheduleNextAnimationAfterDelay:(double)arg1 ;
-(double)_lastAnimationTime;
-(double)_lastPinAnimationTime;
-(double)_currentPinMinimumDuration;
-(void)_setLastAnimationTime:(double)arg1 ;
-(void)_performNextAnimation;
-(void)_processPinAnimationQueue;
-(double)_lastTranscriptDragStartTime;
-(void)_setLastPinAnimationTime:(double)arg1 ;
-(void)_setCurrentPinMinimumDuration:(double)arg1 ;
-(void)_performNextPinAnimation;
-(bool)_shouldConditionallyPinToTranscriptItem:(id)arg1 ;
-(id)_aceCommandIdentifierForItemAtIndex:(long long)arg1 ;
-(void)_animateSnippetTossInCell:(id)arg1 withCompletionBlock:(/*^block*/ id)arg2 ;
-(void)_animateSnippetCancellation:(id)arg1 ;
-(void)_animateSnippetConfirmation:(id)arg1 ;
-(id)_tossAnimationForCell;
-(CGRect)statusBarFrameForSuggestionsViewController:(id)arg1 ;
-(void)suggestionsViewDidShowSuggestions:(id)arg1 ;
-(double)_pinDistance;
-(bool)transcriptStartIsVisible;
-(void)reloadItemsAtIndexes:(id)arg1 ;
-(void)showTranscriptEnd;
-(bool)transcriptIsAnimating;
-(bool)transcriptEndIsVisible;
-(void)pinItemWithIdentifier:(id)arg1 ;
-(void)insertItemsAtIndexes:(id)arg1 ;
-(void)transcript:(id)arg1 didReplaceTranscriptItemsAtIndexes:(id)arg2 replacedTranscriptItems:(id)arg3 ;
-(bool)transcript:(id)arg1 itemAtIndexIsVirgin:(long long)arg2 ;
-(long long)numberOfItemsInTranscript:(id)arg1 ;
-(void)transcript:(id)arg1 didRemoveTranscriptItems:(id)arg2 atIndexes:(id)arg3 ;
-(id)transcript:(id)arg1 dialogPhaseForItemAtIndex:(long long)arg2 ;
-(void)transcript:(id)arg1 presentationStateDidChangeForItemsAtIndexPaths:(id)arg2 ;
-(void)transcript:(id)arg1 didInsertTranscriptItemsAtIndexes:(id)arg2 ;
-(id)viewControllerDelegateForTranscript:(id)arg1 ;
-(long long)transcript:(id)arg1 presentationStateForItemAtIndex:(long long)arg2 ;
-(id)transcript:(id)arg1 identifierOfItemAtIndex:(long long)arg2 ;
-(id)transcript:(id)arg1 aceObjectForItemAtIndex:(long long)arg2 ;
-(void)removeItemsWithIdentifiers:(id)arg1 atIndexes:(id)arg2 ;
-(void)presentationStateDidChangeForItemsAtIndexes:(id)arg1 ;
-(void)siriDidFinishActionsForConversationItemWithIdentifier:(id)arg1 ;
-(double)_gridHeight;
-(id)siriViewController:(id)arg1 disambiguationItemForListItem:(id)arg2 disambiguationKey:(id)arg3 ;
-(void)siriViewController:(id)arg1 addSelectionResponse:(id)arg2 ;
-(id)_editingEndGestureRecognizer;
-(bool)siriViewControllerShouldPreventUserInteraction:(id)arg1 ;
-(void)siriViewControllerWillBeginEditing:(id)arg1 ;
-(void)siriViewControllerDidEndEditing:(id)arg1 ;
-(void)removeSiriViewController:(id)arg1 ;
-(bool)siriViewController:(id)arg1 openPunchOut:(id)arg2 ;
-(id)siriViewControllerEffectiveBundleForCoreLocation:(id)arg1 ;
-(bool)siriViewController:(id)arg1 openURL:(id)arg2 ;
-(void)siriSnippetViewController:(id)arg1 setStatusViewHidden:(bool)arg2 ;
-(void)siriSnippetViewController:(id)arg1 setStatusBarHidden:(bool)arg2 ;
-(void)siriViewController:(id)arg1 speakText:(id)arg2 completion:(/*^block*/ id)arg3 ;
-(void)cancelSpeakingForSiriViewController:(id)arg1 ;
-(id)transcript:(id)arg1 aceCommandIdentifierForItemAtIndex:(long long)arg2 ;
-(id)siriViewController:(id)arg1 domainObjectForIdentifier:(id)arg2 ;
-(void)siriViewController:(id)arg1 setDomainObject:(id)arg2 forIdentifier:(id)arg3 ;
-(void)_runSirilandTransitionTestWithIterations:(int)arg1 ;
-(void)siriViewController:(id)arg1 startCorrectedSpeechRequestWithText:(id)arg2 correctionIdentifier:(id)arg3 ;
-(void)siriSnippetViewController:(id)arg1 pushSirilandSnippets:(id)arg2 ;
-(void)siriViewControllerHeightDidChange:(id)arg1 ;
-(CGSize)siriViewControllerVisibleContentArea:(id)arg1 ;
-(UIEdgeInsets)siriViewControllerDisplayInsetsForVisibleSpace:(id)arg1 ;
-(void)siriViewController:(id)arg1 setContentOffset:(double)arg2 ;
-(double)siriSnippetViewControllerExpectedWidth:(id)arg1 ;
-(void)siriViewController:(id)arg1 sendGenericAceCommands:(id)arg2 ;
-(void)siriSnippetViewControllerWillBecomeFirstResponder:(id)arg1 ;
-(void)siriSnippetViewControllerViewDidLoad:(id)arg1 ;
-(id)persistentStoreForSiriViewController:(id)arg1 ;
-(id)_editingViewController;
-(bool)_isNavigationBarHidden;
-(id)_navigationBar;
-(id)requestContext;
-(void)dealloc;
-(void)setDataSource:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)reloadData;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(id)dataSource;
-(id)delegate;
-(void)invalidate;
-(bool)_isRootViewController;
-(void)viewDidLayoutSubviews;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(void)loadView;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)viewWillAppear:(bool)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(bool)arg1 ;
-(void)viewWillDisappear:(bool)arg1 ;
-(void)viewDidDisappear:(bool)arg1 ;
-(void)_keyboardWillHide:(id)arg1 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(void)_setNavigationControllerContentInsetAdjustment:(UIEdgeInsets)arg1 ;
-(double)_navigationControllerContentOffsetAdjustment;
-(double)_topBarHeight;
-(CGPoint)_contentOffset;
-(id)_layout;
-(void)_keyboardDidShow:(id)arg1 ;
-(id)_collectionView;
-(void).cxx_destruct;
-(void)queue:(id)arg1 didEnqueueObjects:(id)arg2 ;
-(void)siriWillActivateFromSource:(long long)arg1 ;
-(CGRect)_statusBarFrame;
-(void)_updateTitle;
-(void)cancelRequestForSiriSnippetViewController:(id)arg1 ;
-(void)siriSnippetViewController:(id)arg1 willPresentViewController:(id)arg2 ;
-(void)siriViewController:(id)arg1 performAceCommands:(id)arg2 ;
-(void)siriSnippetViewController:(id)arg1 willDismissViewController:(id)arg2 ;
-(double)siriViewControllerExpectedWidth:(id)arg1 ;
@end

