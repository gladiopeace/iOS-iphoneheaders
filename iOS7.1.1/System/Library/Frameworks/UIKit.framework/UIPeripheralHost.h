/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:59 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIKeyboardSplitTransitionDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIScrollViewIntersectionDelegate.h>

@protocol _UIPeripheralHostCustomTransition;
@class UIPeripheralHostView, UIKeyboardAutomatic, UIPanGestureRecognizer, CADisplayLink, NSMutableArray, UIInputViewSet, UIResponder, NSMutableSet, UIInputViewPostPinningReloadState, UIKeyboardRotationState, UIInputViewTransition, UIScrollView, NSMutableDictionary, UITextEffectsWindow, UIView, UIKeyboard, UIPeripheralHostState;

@interface UIPeripheralHost : NSObject <UIKeyboardSplitTransitionDelegate, UIGestureRecognizerDelegate, UIScrollViewIntersectionDelegate> {

	UIPeripheralHostView* _hostView;
	UIKeyboardAutomatic* _automaticKeyboard;
	bool _automaticAppearanceEnabled;
	bool _automaticAppearanceEnabledInternal;
	bool _automaticKeyboardAnimatingIn;
	bool _automaticKeyboardAnimatingOut;
	int _automaticKeyboardState;
	int _ignoringReloadInputViews;
	bool _suppresingNotifications;
	bool _useHideNotificationsWhenNotVisible;
	bool _reloadInputViewsForcedIsAllowed;
	int _nextAutomaticOrderInDirection;
	long long _targetRotatedOrientation;
	bool _isTranslating;
	bool _isSplitting;
	bool _isUndocked;
	bool _splitLockState;
	UIPanGestureRecognizer* _translateRecognizer;
	CADisplayLink* _displayLink;
	double _lastBounceTime;
	double _lastTranslationNotificationTime;
	CGAffineTransform _targetTransform;
	CGAffineTransform _initialTransform;
	CGPoint _velocity;
	NSMutableArray* _dropShadowViews;
	int _shadowStyle;
	bool _wasBackgroundSplit;
	CGRect _previousShadowFrameLeft;
	CGRect _previousShadowFrameRight;
	/*^block*/ id _bounceCompletionBlock;
	double m_keyboardAttachedViewHeight;
	CGRect _lastKnownIVFrame;
	CGRect _lastKnownIAVFrame;
	NSMutableArray* _animationStyleStack;
	bool _hasCustomAnimationProperties;
	double _nextAutomaticOrderInDuration;
	double _lastAutomaticKeyboardDuration;
	long long _disableAnimationsCount;
	NSMutableArray* _targetStateStack;
	UIInputViewSet* _inputViewSet;
	UIResponder* _responder;
	bool _ignoreInputModeChanges;
	NSMutableSet* _pinningResponders;
	bool _ignoresPinning;
	UIInputViewPostPinningReloadState* _postPinningReloadState;
	bool _animationFencingEnabled;
	bool _interfaceAutorotationDisabled;
	UIKeyboardRotationState* _rotationState;
	UIInputViewTransition* _currentTransition;
	UIScrollView* _scrollViewForTransition;
	bool _scrollViewShowsHorizontalScrollIndicator;
	UIInputViewTransition* _scrollViewTransition;
	bool _scrollViewTransitionFinishing;
	CGPoint _scrollViewTransitionPreviousPoint;
	CGPoint _scrollViewTransitionVelocity;
	UIResponder* _selfHostingTrigger;
	NSMutableDictionary* _preservedViewSets;
	bool _didFadeInputViews;
	bool _blockedReloadInputViewsForDictation;
	bool _animateCornerRefresh;
	bool _showCorners;
	NSMutableArray* _extraViews;
	int _clippingKeyboardMode;
	CGRect _clippingKeyboardAdjustmentStart;
	CGRect _clippingKeyboardAdjustmentEnd;
	NSMutableDictionary* _preservedAccessoryViewNextResponderSets;
	UIResponder* _responderWithoutAutomaticAppearanceEnabled;
	UITextEffectsWindow* _containerWindow;
	bool _springBoardLockStateIsLocked;
	UIInputViewSet* _transientInputViewSet;
	<_UIPeripheralHostCustomTransition>* _customTransitionInfo;
	double _ambiguousControlCenterActivationMargin;

}

@property (nonatomic,readonly) UIView * view; 
@property (nonatomic,readonly) NSMutableArray * dropShadowViews; 
@property (assign,nonatomic) bool automaticAppearanceInternalEnabled; 
@property (getter=_isIgnoringReloadInputViews,nonatomic,readonly) bool ignoringReloadInputViews; 
@property (nonatomic,@dynamic,readonly) UIResponder * responder; 
@property (assign,nonatomic) bool ignoresPinning; 
@property (assign,nonatomic,@dynamic) bool animationFencingEnabled; 
@property (nonatomic,readonly) UIKeyboard * automaticKeyboard; 
@property (nonatomic,retain) UIInputViewSet * inputViews; 
@property (nonatomic,readonly) UIInputViewSet * loadAwareInputViews; 
@property (nonatomic,readonly) bool keyClicksEnabled; 
@property (assign,nonatomic) bool automaticAppearanceEnabled;                                                 //@synthesize automaticAppearanceEnabled=_automaticAppearanceEnabled - In the implementation block
@property (assign,nonatomic) int currentState;                                                                //@synthesize automaticKeyboardState=_automaticKeyboardState - In the implementation block
@property (nonatomic,retain) UIKeyboardRotationState * rotationState;                                         //@synthesize rotationState=_rotationState - In the implementation block
@property (nonatomic,retain) UIPeripheralHostState * targetState; 
@property (nonatomic,retain) UIResponder * responder;                                                         //@synthesize responder=_responder - In the implementation block
@property (nonatomic,retain) UIInputViewPostPinningReloadState * postPinningReloadState;                      //@synthesize postPinningReloadState=_postPinningReloadState - In the implementation block
@property (nonatomic,retain) UIInputViewTransition * currentTransition;                                       //@synthesize currentTransition=_currentTransition - In the implementation block
@property (nonatomic,retain) <_UIPeripheralHostCustomTransition> * customTransitionInfo;                      //@synthesize customTransitionInfo=_customTransitionInfo - In the implementation block
@property (nonatomic,readonly) bool automaticAppearanceReallyEnabled; 
@property (assign,nonatomic) bool animationFencingEnabled;                                                    //@synthesize animationFencingEnabled=_animationFencingEnabled - In the implementation block
@property (nonatomic,readonly) bool animationsEnabled; 
@property (nonatomic,readonly) UIKeyboardAutomatic * automaticKeyboard; 
@property (nonatomic,retain) UIInputViewSet * _inputViews;                                                    //@synthesize inputViewSet=_inputViewSet - In the implementation block
@property (assign,nonatomic) UIInputViewSet * _transientInputViews;                                           //@synthesize transientInputViewSet=_transientInputViewSet - In the implementation block
@property (assign,nonatomic) double ambiguousControlCenterActivationMargin;                                   //@synthesize ambiguousControlCenterActivationMargin=_ambiguousControlCenterActivationMargin - In the implementation block
@property (nonatomic,retain) UIResponder * selfHostingTrigger;                                                //@synthesize selfHostingTrigger=_selfHostingTrigger - In the implementation block
+(CGRect)visiblePeripheralFrame;
+(id)passthroughViews;
+(double)gridViewRubberBandValueForValue:(double)arg1 target:(double)arg2 timeInterval:(double)arg3 velocity:(double*)arg4 ;
+(Class)hostViewClass;
+(id)sharedInstance;
+(id)activeInstance;
+(void)_releaseSharedInstance;
+(CGRect)screenBoundsInAppOrientation;
-(id)view;
-(void)customTransitionWillStartWithSettings:(id)arg1 ;
-(bool)_isTransitioning;
-(bool)_isCoordinatingWithSystemGestures;
-(void)_clearPreservedInputViewsWithRestorableResponder:(id)arg1 ;
-(id)containerWindow;
-(void)scrollView:(id)arg1 didPanAtWindowPoint:(CGPoint)arg2 ;
-(void)scrollView:(id)arg1 didFinishPanAtWindowPoint:(CGPoint)arg2 ;
-(double)getVerticalOverlapForView:(id)arg1 usingKeyboardInfo:(id)arg2 ;
-(void)_clearPreservedInputViewsWithId:(id)arg1 clearKeyboard:(bool)arg2 ;
-(void)setNextAutomaticOrderInDirection:(int)arg1 duration:(double)arg2 ;
-(void)setkeyboardAttachedViewHeight:(double)arg1 ;
-(double)getLastAutomaticDuration;
-(void)_preserveInputViewsWithId:(id)arg1 animated:(bool)arg2 ;
-(bool)_restoreInputViewsWithId:(id)arg1 animated:(bool)arg2 ;
-(void)resetNextAutomaticOrderInDirectionAndDuration;
-(void)pushAnimationStyle:(id)arg1 ;
-(void)_beginPinningInputViewsOnBehalfOfResponder:(id)arg1 ;
-(void)_stopPinningInputViewsOnBehalfOfResponder:(id)arg1 ;
-(void)popAnimationStyle;
-(void)_setIgnoresPinning:(bool)arg1 allowImmediateReload:(bool)arg2 ;
-(void)_beginDisablingAnimations;
-(void)_endDisablingAnimations;
-(void)_beginIgnoringReloadInputViews;
-(void)_reloadInputViewsForResponder:(id)arg1 ;
-(void)_endIgnoringReloadInputViews;
-(bool)_isTrackingResponder:(id)arg1 ;
-(void)_setReloadInputViewsForcedIsAllowed:(bool)arg1 ;
-(bool)_isPinningInputViewsOnBehalfOfResponder:(id)arg1 ;
-(bool)ignoresPinning;
-(bool)shouldApplySettingsForBackdropView:(id)arg1 ;
-(id)_inheritedRenderConfig;
-(int)_clipCornersOfView:(id)arg1 ;
-(CGRect)_inputViewRectToAvoid;
-(void)moveToPersistentOffset;
-(id)loadAwareInputViews;
-(bool)isTranslating;
-(id)inputViews;
-(bool)_hasPostPinningReloadState;
-(bool)isSplitting;
-(void)setIgnoresPinning:(bool)arg1 ;
-(void)postWillShowNotificationForGeometry:(UIPeripheralAnimationGeometry)arg1 duration:(double)arg2 ;
-(bool)minimize;
-(bool)maximize;
-(void)postDidShowNotificationForGeometry:(UIPeripheralAnimationGeometry)arg1 ;
-(void)setUndockedWithOffset:(CGPoint)arg1 animated:(bool)arg2 ;
-(bool)keyClicksEnabled;
-(bool)_shouldDelayRotationForWindow:(id)arg1 ;
-(bool)_isAccessoryViewChangedOnly;
-(void)setAutomaticAppearanceInternalEnabled:(bool)arg1 ;
-(void)resetCurrentOrderOutAnimationDuration:(double)arg1 ;
-(id)containerTextEffectsWindowAboveStatusBar;
-(id)containerTextEffectsWindow;
-(CGPoint)offHostPointForPoint:(CGPoint)arg1 ;
-(void)executeTransition:(id)arg1 ;
-(CGPoint)adjustedPersistentOffset;
-(double)minimumOffsetForBuffer:(double)arg1 ;
-(id)dropShadowViews;
-(id)computeTransitionForInputViews:(id)arg1 fromOrientation:(long long)arg2 toOrientation:(long long)arg3 ;
-(id)_inputViewsForResponder:(id)arg1 ;
-(void)setInputViews:(id)arg1 animationStyle:(id)arg2 ;
-(double)keyboardAttachedViewHeight;
-(id)_screenForFirstResponder:(id)arg1 ;
-(void)setTextEffectsWindowLevelForInputView:(id)arg1 responder:(id)arg2 ;
-(id)_inputViewsForResponder:(id)arg1 withAutomaticKeyboard:(bool)arg2 ;
-(void)_trackInputModeIfNecessary:(id)arg1 ;
-(bool)pinningPreventsInputViews:(id)arg1 ;
-(bool)_isIgnoringReloadInputViews;
-(void)setInputViews:(id)arg1 ;
-(void)_inputModeChangedWhileContextTracked:(id)arg1 ;
-(bool)_isSuppressedByManualKeyboard;
-(CGRect)visiblePeripheralFrame:(bool)arg1 ;
-(CGRect)calculateSnapshotRectForTransition:(id)arg1 forStart:(bool)arg2 ;
-(CGRect)calculateRectForTransition:(id)arg1 forStart:(bool)arg2 ;
-(id)containerForClippingMode:(int)arg1 onTransition:(id)arg2 ;
-(void)addExtraViewsForTransition:(id)arg1 ;
-(bool)shouldUseHideNotificationForGeometry:(UIPeripheralAnimationGeometry)arg1 ;
-(void)peripheralViewMinMaximized:(id)arg1 finished:(id)arg2 context:(id)arg3 ;
-(bool)maximizeWithAnimation:(bool)arg1 ;
-(id)computeTransitionFromInputViews:(id)arg1 toInputViews:(id)arg2 animationStyle:(id)arg3 ;
-(void)adjustHostViewForTransitionEndFrame:(id)arg1 ;
-(CGRect)adjustRect:(CGRect)arg1 forStart:(bool)arg2 ;
-(void)updateExtraViewsForStart:(bool)arg1 onTransition:(id)arg2 ;
-(double)accessoryViewFadeDuration:(id)arg1 ;
-(void)finishExtraViewsForTransition:(id)arg1 ;
-(void)adjustAccessoryViewForSubsumedTransition:(id)arg1 ;
-(void)adjustHostViewForTransitionStartFrame:(id)arg1 ;
-(void)enableKeyboardTyping;
-(void)removeExtraViewsForTransition:(id)arg1 ;
-(void)endClippingForTransition:(id)arg1 ;
-(void)adjustHostViewForTransitionCompletion:(id)arg1 ;
-(void)finishScrollViewTransition;
-(CGRect)displayRectForViewSet:(id)arg1 orientation:(long long)arg2 position:(int)arg3 fromRotation:(bool)arg4 ;
-(CGRect)localDisplayRectForViewSet:(id)arg1 ;
-(CGRect)localDisplayRectForViewSet:(id)arg1 position:(int)arg2 ;
-(bool)skipTransitionForInputViews:(id)arg1 ;
-(void)setInputViews:(id)arg1 animated:(bool)arg2 ;
-(bool)_isSelfHosting;
-(void)extendKeyboardBackdropHeight:(double)arg1 withDuration:(double)arg2 ;
-(void)hideScrollViewHorizontalScrollIndicator:(bool)arg1 ;
-(void)updateScrollViewContentInsetBottom:(double)arg1 ;
-(void)animateKeyboardOutWithDuration:(double)arg1 delta:(double)arg2 ;
-(void)prepareForPinning;
-(void)_updateContainerWindowLevel;
-(void)_clearPinningResponders;
-(bool)automaticAppearanceInternalEnabled;
-(void)updateAmbiguousControlCenterActivationMargin;
-(void)prepareToAnimateClippedKeyboardWithOffsets:(CGRect)arg1 orderingIn:(bool)arg2 onSnapshot:(bool)arg3 ;
-(void)addExtraAnimatedView:(id)arg1 withAlignment:(int)arg2 animation:(/*^block*/ id)arg3 onSnapshotView:(bool)arg4 ;
-(void)implBoundsHeightChangeDoneForGeometry:(UIPeripheralAnimationGeometry)arg1 ;
-(id)_currentInputView;
-(bool)_hostFirstResponder:(id)arg1 onBehalfOfResponder:(id)arg2 ;
-(void)_resignFirstResponderIfHostingOnBehalfOfResponder:(id)arg1 ;
-(void)candidateBarWillChangeHeight:(double)arg1 withDuration:(double)arg2 ;
-(void)updateInputAccessoryViewVisibility:(bool)arg1 withDuration:(double)arg2 ;
-(bool)hasCustomInputView;
-(void)postDidHideNotificationForGeometry:(UIPeripheralAnimationGeometry)arg1 ;
-(UIPeripheralAnimationGeometry)calculateAnimationGeometryForOrientation:(long long)arg1 outDirection:(int)arg2 forTransition:(int)arg3 ;
-(void)postWillHideNotificationForGeometry:(UIPeripheralAnimationGeometry)arg1 duration:(double)arg2 ;
-(void)setPeripheralToolbarFrameForHostWidth:(double)arg1 ;
-(void)setPeripheralFrameForHostBounds:(CGRect)arg1 ;
-(CGSize)totalPeripheralSizeForOrientation:(long long)arg1 ;
-(CGRect)screenRectFromBounds:(CGRect)arg1 atCenter:(CGPoint)arg2 applyingSourceHeightDelta:(double)arg3 ;
-(id)userInfoFromGeometry:(UIPeripheralAnimationGeometry)arg1 duration:(double)arg2 forWill:(bool)arg3 forShow:(bool)arg4 ;
-(bool)userInfoContainsActualGeometryChange:(id)arg1 ;
-(bool)isHostingActiveImpl;
-(void)logGeometryDescriptionFromUserInfo:(id)arg1 ;
-(void)syncToExistingAnimations;
-(id)retain;
-(void)dealloc;
-(id)init;
-(bool)gestureRecognizerShouldBegin:(id)arg1 ;
-(bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)setResponder:(id)arg1 ;
-(int)currentState;
-(id)responder;
-(void)layoutIfNeeded;
-(bool)isOnScreen;
-(void)forceOrderInAutomaticAnimated:(bool)arg1 ;
-(void)forceOrderOutAutomaticAnimated:(bool)arg1 ;
-(id)rotationState;
-(bool)isUndocked;
-(bool)animationFencingEnabled;
-(void)setAnimationFencingEnabled:(bool)arg1 ;
-(bool)automaticAppearanceEnabled;
-(void)setAutomaticAppearanceEnabled:(bool)arg1 ;
-(void)orderInAutomatic;
-(void)orderInAutomaticFromDirection:(int)arg1 withDuration:(double)arg2 ;
-(void)orderOutAutomatic;
-(void)orderOutAutomaticToDirection:(int)arg1 withDuration:(double)arg2 ;
-(void)orderInAutomaticSkippingAnimation;
-(void)orderOutAutomaticSkippingAnimation;
-(bool)isOffScreen;
-(void)prepareForRotationOfKeyboard:(id)arg1 toOrientation:(long long)arg2 ;
-(void)rotateKeyboard:(id)arg1 toOrientation:(long long)arg2 ;
-(void)finishRotationOfKeyboard:(id)arg1 ;
-(void)prepareForRotationToOrientation:(long long)arg1 ;
-(void)rotateToOrientation:(long long)arg1 ;
-(void)finishRotation;
-(void)forceOrderInAutomatic;
-(void)forceOrderOutAutomatic;
-(void)forceOrderInAutomaticFromDirection:(int)arg1 withDuration:(double)arg2 ;
-(void)forceOrderOutAutomaticToDirection:(int)arg1 withDuration:(double)arg2 ;
-(void)manualKeyboardWillBeOrderedIn:(id)arg1 ;
-(void)manualKeyboardWasOrderedIn:(id)arg1 ;
-(void)manualKeyboardWillBeOrderedOut:(id)arg1 ;
-(void)manualKeyboardWasOrderedOut:(id)arg1 ;
-(void)transitionDidFinish:(bool)arg1 ;
-(void)updateProgress:(double)arg1 mergedHeight:(double)arg2 splitHeight:(double)arg3 ;
-(void)prepareForSplitTransition;
-(void)showDropShadows:(bool)arg1 ;
-(void)finishSplitTransition:(/*^block*/ id)arg1 ;
-(void)set_inputViews:(id)arg1 ;
-(void)peripheralHostWillResume:(id)arg1 ;
-(void)peripheralHostDidEnterBackground:(id)arg1 ;
-(void)textEffectsWindowDidRotate:(id)arg1 ;
-(void)springBoardLockStateChanged:(id)arg1 ;
-(void)setListeningToSpringBoardKeyboardNotifications:(bool)arg1 ;
-(void)setCurrentTransition:(id)arg1 ;
-(void)setRotationState:(id)arg1 ;
-(void)setSelfHostingTrigger:(id)arg1 ;
-(void)setPostPinningReloadState:(id)arg1 ;
-(id)currentTransition;
-(void)completeCurrentTransitionIfNeeded;
-(void)translateDetected:(id)arg1 ;
-(CGSize)sizeOfInputViewForInputViewSet:(id)arg1 withInterfaceOrientation:(long long)arg2 ;
-(void)showCorners:(bool)arg1 withDuration:(double)arg2 ;
-(void)updateDropShadow;
-(void)updateBackdrop;
-(void)initializeTranslateGestureRecognizer;
-(void)setKeyboardOnScreenNotifyKey:(bool)arg1 ;
-(void)setCurrentState:(int)arg1 ;
-(id)targetState;
-(void)setTargetState:(id)arg1 ;
-(void)postDidShowNotification;
-(void)postDidHideNotification;
-(id)undockedInfoFromDefaultInfo:(id)arg1 forNotification:(id)arg2 ;
-(void)_performRefreshCorners;
-(void)postDockingNotification;
-(void)refreshCorners;
-(void)postUndockingNotification;
-(void)fadeInInputViews:(bool)arg1 ;
-(void)disableInterfaceAutorotation:(bool)arg1 ;
-(void)undock;
-(void)postKeyboardFrameChangeNotification:(id)arg1 withInfo:(id)arg2 ;
-(void)dock;
-(void)invalidateDisplayLink;
-(void)bounceAnimationDidFinish;
-(void)_updateBounceAnimation:(id)arg1 ;
-(void)handleTranslateDetectedFinished:(id)arg1 ;
-(bool)hasDictationKeyboard;
-(void)createHostViewIfNeeded;
-(bool)_somePartOfKeyboardIsOnScreen:(id)arg1 ;
-(CGRect)_centerStretchRectForWidth:(double)arg1 ;
-(void)orderInWithAnimationStyle:(id)arg1 ;
-(void)orderOutWithAnimationStyle:(id)arg1 ;
-(void)createAutomaticKeyboardIfNeeded;
-(void)layoutInputViewsForGeometry:(UIPeripheralAnimationGeometry)arg1 ;
-(void)layoutInputViews;
-(id)nextAnimationStyle;
-(id)nextAnimationStyle:(bool)arg1 ;
-(bool)automaticAppearanceReallyEnabled;
-(bool)animationsEnabled;
-(void)setAccessoryViewVisible:(bool)arg1 delay:(double)arg2 ;
-(void)fadeInputViewsIfNeeded;
-(void)showInputViewsIfNeeded;
-(id)automaticKeyboard;
-(void)orderOutWithAnimation:(bool)arg1 toDirection:(int)arg2 duration:(double)arg3 ;
-(id)_inputViews;
-(id)_transientInputViews;
-(void)set_transientInputViews:(id)arg1 ;
-(id)selfHostingTrigger;
-(id)postPinningReloadState;
-(id)customTransitionInfo;
-(void)setCustomTransitionInfo:(id)arg1 ;
-(double)ambiguousControlCenterActivationMargin;
-(void)setAmbiguousControlCenterActivationMargin:(double)arg1 ;
@end

