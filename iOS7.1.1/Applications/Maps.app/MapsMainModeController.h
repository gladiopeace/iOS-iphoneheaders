/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:01 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/SettingsControllerDelegate.h>
#import <Maps/CustomSearchManagerObserver.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <Maps/SteppingModeDelegate.h>
#import <Maps/MUActivityViewControllerDelegate.h>
#import <Maps/MainChromeModeController.h>
#import <Maps/CollectionsViewControllerDelegate.h>
#import <Maps/DirectionsControllerDelegate.h>
#import <Maps/DirectionsInfoBarDelegate.h>
#import <Maps/DirectionsSearchViewControllerDelegate.h>
#import <Maps/DirectionsStepsTableViewControllerDelegate.h>
#import <Maps/DebugViewControllerDelegate.h>
#import <Maps/MapDimmingViewDelegate.h>
#import <MapKit/MKMapViewDelegate.h>
#import <Maps/PlacePresentationControllerDelegate.h>
#import <Maps/PrintControllerDelegate.h>
#import <Maps/SearchBarControllerDelegate.h>
#import <Maps/SearchBarDelegate.h>
#import <Maps/SearchManagerObserver.h>
#import <Maps/SearchResultsListViewControllerDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIPopoverControllerDelegate.h>
#import <UIKit/UIPopoverControllerDelegatePrivate.h>
#import <Maps/AdvisorySheetViewDelegate.h>
#import <Maps/RefinementSelectionDelegate.h>

@class MainChromeViewController, DirectionsSearchViewController, MKMapView, SearchResult, GEOMapRegion, SearchManager, CustomSearchManager, FloatingControlsView, UIPopoverController, UIButton, UIAlertView, RefinementTableViewController, POISearchManager, DirectionsInfoBar, UIView, CollectionsViewController, DirectionsController, PrintController, NSInvocation, SearchResultsListViewController, UINavigationController, DirectionsStepsTableViewController, PlacePresentationController, TrafficIncidentsViewController, MKAnnotationView, VKLabelMarker, SearchBarController, MapViewSearchInfo, UILongPressGestureRecognizer, NSTimer, MapDimmingView, SteppingModeController, NSError, NSMutableArray, NSMutableSet, SettingsController, UIWindow;

@interface MapsMainModeController : NSObject <SettingsControllerDelegate, CustomSearchManagerObserver, UITableViewDelegate, UIActionSheetDelegate, SteppingModeDelegate, MUActivityViewControllerDelegate, MainChromeModeController, CollectionsViewControllerDelegate, DirectionsControllerDelegate, DirectionsInfoBarDelegate, DirectionsSearchViewControllerDelegate, DirectionsStepsTableViewControllerDelegate, DebugViewControllerDelegate, MapDimmingViewDelegate, MKMapViewDelegate, PlacePresentationControllerDelegate, PrintControllerDelegate, SearchBarControllerDelegate, SearchBarDelegate, SearchManagerObserver, SearchResultsListViewControllerDelegate, UIGestureRecognizerDelegate, UIPopoverControllerDelegate, UIPopoverControllerDelegatePrivate, AdvisorySheetViewDelegate, RefinementSelectionDelegate> {

	MKMapView* _mapView;
	SearchResult* _navigationTarget;
	id _restoreNavigationMarkerOrAnnotation;
	GEOMapRegion* _restoreNavigationRegion;
	SearchManager* _searchManager;
	CustomSearchManager* _customSearchManager;
	int _viewMode;
	DirectionsSearchViewController* _directionsSearchViewController;
	FloatingControlsView* _controlBar;
	UIPopoverController* _exclusivePopover;
	UIButton* _searchListViewControl;
	UIButton* _shareControl;
	UIButton* _settingsControl;
	BOOL _hasRestoredFromDefaults;
	BOOL _registeredForAddressBookChanges;
	BOOL _displayingError;
	UIAlertView* _multipleRefinementAlertView;
	UIAlertView* _spellingSuggestionAlertView;
	RefinementTableViewController* _multipleRefinementTableViewController;
	int _postAlertSearchType;
	BOOL _lockOrientation;
	int _lockedOrientation;
	POISearchManager* _poiSearchManager;
	BOOL _isShowingKeyboard;
	BOOL _isRotating;
	DirectionsInfoBar* _directionsInfoBar;
	UIView* _topButtonBarBorder;
	UIView* _showingPanel;
	CollectionsViewController* _collectionsViewController;
	DirectionsController* _directionsController;
	PrintController* _printController;
	NSInvocation* _hideSettingsViewDidEndInvocation;
	SearchResult* _bookmarkToShow;
	SearchResultsListViewController* _searchResultsListViewController;
	UINavigationController* _searchResultsNavController;
	UIPopoverController* _searchResultsPopoverController;
	BOOL _isDisplayingSearchResultsPopover;
	DirectionsStepsTableViewController* _directionsStepsTableViewController;
	UINavigationController* _directionsStepsNavController;
	UIPopoverController* _directionsStepsPopoverController;
	BOOL _isDisplayingDirectionsStepsPopover;
	PlacePresentationController* _placePresentationController;
	TrafficIncidentsViewController* _trafficIncidentsViewController;
	UINavigationController* _trafficIncidentsNavigationController;
	MKAnnotationView* _annotationViewToReSelectAfterExpandedPopoverDismissal;
	VKLabelMarker* _labelMarkerToReSelectAfterExpandedPopoverDismissal;
	/*^block*/ id _refinementSearchCompletion;
	BOOL _searchModeEnabled;
	SearchBarController* _searchBarController;
	UINavigationController* _directionsSearchNavigationController;
	SearchResult* _pendingSelectedSearchResult;
	MapViewSearchInfo* _mapViewSearchInfo;
	BOOL _isShowingBookmarks;
	BOOL _isShowingPanel;
	BOOL _ignoreMapViewPositionChanges;
	BOOL _userRejectedSpellingRefinement;
	BOOL _isShowingCurrentLocationError;
	BOOL _firstDisplayOccurred;
	BOOL _didLoadFromLaunchURL;
	BOOL _didLoadForBackgroundNavigation;
	BOOL _showingDirectionsInfoBar;
	BOOL _isShowingRoute;
	BOOL _showsSearchResultsInOverview;
	BOOL _dismissDirectionsSheetOnEnterForeground;
	BOOL _resetTrafficSettingOnEnterForeground;
	BOOL _skipRegionChangeOnOverviewPop;
	UILongPressGestureRecognizer* _locateOnLaunchMapGestureRecognizer;
	BOOL _userHasInteractedWithMapSinceStartup;
	BOOL _zoomedIn;
	NSTimer* _timer;
	MKMapView* _externalMapView;
	UILongPressGestureRecognizer* _longPress;
	MapDimmingView* _mapDimmingView;
	BOOL _isShowingDimmingView;
	SteppingModeController* _steppingMode;
	BOOL _hasShownDrivingNavModeAdvisory;
	BOOL _hasShownWalkingNavModeAdvisory;
	NSError* _lastTileLoadError;
	UILongPressGestureRecognizer* _logTileStateRecognizer;
	NSMutableArray* _blocksToPerformAfterMapViewIsFullyDrawn;
	int _3DButtonTextVisibilityCount;
	NSTimer* _gestureCoalesceTimer;
	BOOL _flyoverChangedDuringCurrentGestures;
	BOOL _dismissingPlaceCard;
	/*^block*/ id _enqueuedFixedProblemViewControllerShowAction;
	NSMutableSet* _becomeContainerMapActions;
	SettingsController* _settingsController;
	BOOL _showTraffic;
	int _displayMode;
	BOOL _labelMarkerSelected;
	UIWindow* _window;
	BOOL _showingTraffic;
	BOOL _didLaunchWithExplicitIntent;
	MainChromeViewController* _chromeViewController;

}

@property (nonatomic,readonly) SearchBarController * searchBarController; 
@property (nonatomic,readonly) DirectionsController * directionsController;                                  //@synthesize directionsController=_directionsController - In the implementation block
@property (nonatomic,retain) DirectionsInfoBar * directionsInfoBar;                                          //@synthesize directionsInfoBar=_directionsInfoBar - In the implementation block
@property (nonatomic,readonly) MKMapView * mapView;                                                          //@synthesize mapView=_mapView - In the implementation block
@property (assign,nonatomic,__weak) MainChromeViewController * chromeViewController;                         //@synthesize chromeViewController=_chromeViewController - In the implementation block
@property (nonatomic,retain) SearchResult * navigationTarget;                                                //@synthesize navigationTarget=_navigationTarget - In the implementation block
@property (nonatomic,readonly) BOOL canPlayTrace; 
@property (assign,nonatomic) BOOL showsSearchResultsInOverview;                                              //@synthesize showsSearchResultsInOverview=_showsSearchResultsInOverview - In the implementation block
@property (assign,nonatomic) BOOL skipRegionChangeOnOverviewPop;                                             //@synthesize skipRegionChangeOnOverviewPop=_skipRegionChangeOnOverviewPop - In the implementation block
@property (assign,nonatomic) BOOL resetTrafficSettingOnEnterForeground;                                      //@synthesize resetTrafficSettingOnEnterForeground=_resetTrafficSettingOnEnterForeground - In the implementation block
@property (assign,nonatomic) BOOL didLaunchWithExplicitIntent;                                               //@synthesize didLaunchWithExplicitIntent=_didLaunchWithExplicitIntent - In the implementation block
@property (assign,nonatomic) BOOL didLoadForBackgroundNavigation;                                            //@synthesize didLoadForBackgroundNavigation=_didLoadForBackgroundNavigation - In the implementation block
@property (nonatomic,copy) id enqueuedFixedProblemViewControllerShowAction;                                  //@synthesize enqueuedFixedProblemViewControllerShowAction=_enqueuedFixedProblemViewControllerShowAction - In the implementation block
@property (assign,nonatomic) BOOL lockOrientation;                                                           //@synthesize lockOrientation=_lockOrientation - In the implementation block
@property (assign,nonatomic) int lockedOrientation;                                                          //@synthesize lockedOrientation=_lockedOrientation - In the implementation block
@property (nonatomic,readonly) UIAlertView * multipleRefinementAlertView; 
@property (nonatomic,readonly) UIAlertView * spellingSuggestionAlertView; 
@property (assign,setter=_setShowTraffic:,nonatomic) BOOL showingTraffic;                                    //@synthesize showingTraffic=_showingTraffic - In the implementation block
@property (nonatomic,readonly) float defaultZoomLevelForSearching; 
@property (nonatomic,retain) SearchResult * customSearchResult; 
@property (nonatomic,retain) SearchResult * bookmarkToShow;                                                  //@synthesize bookmarkToShow=_bookmarkToShow - In the implementation block
@property (nonatomic,retain) NSInvocation * hideSettingsViewDidEndInvocation;                                //@synthesize hideSettingsViewDidEndInvocation=_hideSettingsViewDidEndInvocation - In the implementation block
@property (nonatomic,retain) SteppingModeController * steppingMode;                                          //@synthesize steppingMode=_steppingMode - In the implementation block
@property (nonatomic,retain) NSMutableSet * becomeContainerMapActions;                                       //@synthesize becomeContainerMapActions=_becomeContainerMapActions - In the implementation block
@property (assign,nonatomic) BOOL hasShownDrivingNavModeAdvisory;                                            //@synthesize hasShownDrivingNavModeAdvisory=_hasShownDrivingNavModeAdvisory - In the implementation block
@property (assign,nonatomic) BOOL hasShownWalkingNavModeAdvisory;                                            //@synthesize hasShownWalkingNavModeAdvisory=_hasShownWalkingNavModeAdvisory - In the implementation block
@property (assign,nonatomic) BOOL locationPulseEnabled; 
@property (nonatomic,readonly) DirectionsSearchViewController * directionsSearchViewController;              //@synthesize directionsSearchViewController=_directionsSearchViewController - In the implementation block
@property (nonatomic,readonly) BOOL isRotating;                                                              //@synthesize isRotating=_isRotating - In the implementation block
-(void)_locationManagerApprovalDidChange:(id)arg1 ;
-(id)customSearchResult;
-(void)setCustomSearchResult:(id)arg1 ;
-(void)customSearchManager:(id)arg1 didReplaceCustomSearchResult:(id)arg2 ;
-(void)customSearchManager:(id)arg1 didModifyCustomSearchResult:(id)arg2 ;
-(id)collectionsViewController;
-(void)collectionsViewControllerDidReceiveMemoryWarning:(id)arg1 ;
-(void)closeCollectionsViewController:(id)arg1 ;
-(void)collectionsViewController:(id)arg1 choseHistoryItem:(id)arg2 ;
-(void)collectionsViewController:(id)arg1 choseBookmark:(id)arg2 ;
-(int)searchMode;
-(void)collectionsViewController:(id)arg1 choseAddress:(id)arg2 ;
-(void)cancelSearches;
-(void)searchManagerDidClearSearchResults:(id)arg1 ;
-(void)searchManager:(id)arg1 willPerformSearchForQuery:(id)arg2 ;
-(void)searchManager:(id)arg1 didReceiveResults:(id)arg2 scrollToResults:(BOOL)arg3 ;
-(void)searchForAddressString:(id)arg1 source:(int)arg2 ;
-(void)searchManagerSearchFailed:(id)arg1 withError:(id)arg2 ;
-(void)searchManagerSearchCanceled:(id)arg1 ;
-(void)searchManager:(id)arg1 didReceiveRefinementResults:(id)arg2 ;
-(void)searchManager:(id)arg1 didReceiveSpellingSuggestion:(id)arg2 scrollToResults:(BOOL)arg3 ;
-(void)searchForString:(id)arg1 coordinate:(SCD_Struct_Si13)arg2 source:(int)arg3 ;
-(void)searchForString:(id)arg1 displayQuery:(id)arg2 mapViewSearchInfo:(id)arg3 scrollToResults:(BOOL)arg4 source:(int)arg5 ;
-(void)searchForAddress:(id)arg1 source:(int)arg2 ;
-(void)searchForBusinessUID:(unsigned long long)arg1 localSearchProvider:(int)arg2 query:(id)arg3 coordinate:(SCD_Struct_Si13)arg4 source:(int)arg5 ;
-(id)selectedSearchResult;
-(id)searchBarController;
-(void)resetForLaunchURL;
-(void)dismissPlaceCard;
-(void)presentPlaceCardForSearchResult:(id)arg1 animated:(BOOL)arg2 ;
-(int)lockedOrientation;
-(BOOL)lockOrientation;
-(void)setLockedOrientation:(int)arg1 ;
-(void)setLockOrientation:(BOOL)arg1 ;
-(void)debugController:(id)arg1 choseTracePlayer:(id)arg2 startNav:(BOOL)arg3 ;
-(id)directionsSearchViewController;
-(void)searchBarDidPresentPopover:(id)arg1 shouldReselectAnnotation:(BOOL)arg2 ;
-(void)searchBarDirectionsButtonWasTapped:(id)arg1 ;
-(void)searchBar:(id)arg1 choseHistoryItem:(id)arg2 ;
-(void)searchBar:(id)arg1 choseBookmark:(id)arg2 ;
-(BOOL)isPrinting;
-(CGRect)popoverPresentationRectForPrintController:(id)arg1 ;
-(void)printControllerDidPresentPrinterOptions:(id)arg1 ;
-(id)chromeViewController;
-(void)setChromeViewController:(id)arg1 ;
-(id)directionsController;
-(void)setDidLoadForBackgroundNavigation:(BOOL)arg1 ;
-(float)defaultZoomLevelForSearching;
-(void)searchForRouteFromAddress:(id)arg1 toAddress:(id)arg2 directionsMode:(int)arg3 withFeedback:(id)arg4 ;
-(void)setDidLaunchWithExplicitIntent:(BOOL)arg1 ;
-(void)_setShowTraffic:(BOOL)arg1 ;
-(void)setResetTrafficSettingOnEnterForeground:(BOOL)arg1 ;
-(void)setShowsSearchResultsInOverview:(BOOL)arg1 ;
-(void)addBecomingContainerMapAction:(/*^block*/ id)arg1 ;
-(BOOL)displayNavigationAlertAndShouldContinue;
-(void)routeFromSearchResult:(id)arg1 toSearchResult:(id)arg2 withFeedback:(id)arg3 ;
-(void)setEnqueuedFixedProblemViewControllerShowAction:(/*^block*/ id)arg1 ;
-(void)displayOrScheduleDisplayOfEnqueuedFixedProblem;
-(void)dismissAllModalViewsIfPresentWithCompletion:(/*^block*/ id)arg1 ;
-(id)_directionsListViewControl;
-(void)_directionsListViewButtonTapped:(id)arg1 ;
-(CGSize)_contentSizeForDirectionsStepsPopover;
-(void)layoutForUnobscuredBoundsChange;
-(void)directionsControllerDidChangeRoute:(id)arg1 ;
-(id)directionsStepsTableViewController;
-(id)directionsStepsNavController;
-(id)_directionsStepsPopoverController;
-(void)_dismissListView:(id)arg1 ;
-(void)_presentDirectionsStepsList;
-(void)becomeCurrentModeWithViews:(id)arg1 animated:(BOOL)arg2 state:(id)arg3 fromMode:(id)arg4 ;
-(void)resignCurrentModeAnimated:(BOOL)arg1 toMode:(id)arg2 ;
-(void)willChangeToMapDisplayStyle:(int)arg1 forChangeToLightLevel:(int)arg2 animation:(id)arg3 ;
-(void)willProvideAnnotationView:(id)arg1 forAnnotation:(id)arg2 ;
-(BOOL)canPresentInterruptionOfKind:(int)arg1 ;
-(/*^block*/ id)presentInterruptionOfKind:(int)arg1 userInfo:(id)arg2 completionHandler:(/*^block*/ id)arg3 ;
-(void)directionsStepsTableViewController:(id)arg1 didTapRowForRouteStep:(id)arg2 ;
-(void)directionsStepsTableViewController:(id)arg1 didTapDisclosureForSearchResult:(id)arg2 ;
-(BOOL)directionsStepsTableViewControllerShouldAllowInfoCardsForEndpoints:(id)arg1 ;
-(BOOL)directionsStepsTableViewControllerShouldShowOverview:(id)arg1 ;
-(void)mapDimmingViewWasTapped:(id)arg1 ;
-(void)_unregisterForAddressBookChanges;
-(void)_updateShowingTraffic;
-(void)_presentDirectionsStepsPopover;
-(void)performAfterMapViewIsFullyDrawn:(/*^block*/ id)arg1 ;
-(void)_performBlocksWaitingOnMapViewFullyDrawn;
-(void)_startCurrentLocationUpdate;
-(void)_dismissListViewAnimated:(BOOL)arg1 ;
-(void)directionsInfoBarChoseEndInOverview:(id)arg1 ;
-(void)_resetTracking:(BOOL)arg1 ;
-(void)_refreshShareControlAvailability;
-(void)_stopCurrentLocationUpdate;
-(void)_showBookmark;
-(void)_updateCenteringRect;
-(BOOL)_isDrivingDirectionsCalloutControl:(id)arg1 ;
-(BOOL)_isWalkingDirectionsCalloutControl:(id)arg1 ;
-(void)_saveDisplayedInfoCard;
-(void)_saveDirections;
-(BOOL)_isTrafficSupportedForCurrentDisplayMode;
-(void)_updateControlBarItemsAnimated:(BOOL)arg1 ;
-(id)calloutPopoverController;
-(void)_presentSearchResultsList:(id)arg1 ;
-(void)_presentSettings:(id)arg1 ;
-(void)_presentShareSheet:(id)arg1 ;
-(BOOL)_showingRoute;
-(id)_selectedSearchResultOrPOI;
-(id)_shareControl;
-(id)_trackingButton;
-(id)_maps3DButton;
-(id)_searchListViewControl;
-(id)_settingsControl;
-(id)poiSearchManager;
-(void)_routeFromSearchResult:(id)arg1 toSearchResult:(id)arg2 tracePlayer:(id)arg3 withFeedback:(id)arg4 ;
-(BOOL)_shouldShowDirectionsCalloutButtonForAnnotation:(id)arg1 ;
-(unsigned)_directionsCalloutButtonTransportTypeForSearchResult:(id)arg1 ;
-(void)_updateDirectionsCalloutButtonForSelectedAnnotationView:(id)arg1 searchResult:(id)arg2 ;
-(void)_updateDirectionsCalloutButtonForSelectedLabelMarker:(id)arg1 searchResult:(id)arg2 ;
-(void)_update3DButtonTextVisibility;
-(void)_gestureCoalesceTimerFired:(id)arg1 ;
-(void)_update3DButtonTextVisibilityForGesture:(int)arg1 gestureEnded:(BOOL)arg2 ;
-(void)_handleAdvisoryForRoute:(id)arg1 ;
-(void)_registerForAddressBookChanges:(id)arg1 ;
-(void)_updateRatingsAndReviewsForAnnotationView:(id)arg1 labelMarker:(id)arg2 searchResult:(id)arg3 animated:(BOOL)arg4 ;
-(id)_placePresentationController;
-(void)_updateETAForSearchResult:(id)arg1 calloutButton:(id)arg2 transportType:(unsigned)arg3 ;
-(void)_updateUserSpecifiedZoomLevel:(BOOL)arg1 ;
-(void)_dismissDirectionsSheet:(BOOL)arg1 ;
-(void)clearRouteAnimated:(BOOL)arg1 ;
-(void)_clearCustomSearchResult;
-(BOOL)_isShowingBookmarks;
-(void)_setShowingBookmarks:(BOOL)arg1 forSearchType:(int)arg2 completion:(/*^block*/ id)arg3 ;
-(BOOL)_isDisplayingPlaceCard;
-(BOOL)_isDisplayingTrafficIncident;
-(void)_dismissSettingsAnimated:(BOOL)arg1 completion:(/*^block*/ id)arg2 ;
-(void)_enterTrackingModeForOffscreenLocation:(id)arg1 ;
-(BOOL)_determineValueForKey:(id)arg1 ;
-(void)_cancelLocateOnLaunch;
-(void)_enterTrackingModeIfDistanceTraveledForLocation:(id)arg1 ;
-(void)_updateCalloutForSelectedAnnotationOrLabel;
-(void)_routeUsingDirectionsSearchFieldsWithFeedback:(id)arg1 ;
-(id)refreshedMapViewSearchInfo;
-(void)_clearOverlayRoutesAnimated:(BOOL)arg1 ;
-(void)displayAlertWithTitle:(id)arg1 message:(id)arg2 postAlertSearchType:(int)arg3 ;
-(void)_presentDirectionsSheetAnimated:(BOOL)arg1 completion:(/*^block*/ id)arg2 ;
-(void)_handleTapToSwitchRoutes:(id)arg1 ;
-(void)_handleLogTileState:(id)arg1 ;
-(void)_setupMapView;
-(id)becomeContainerMapActions;
-(void)setBecomeContainerMapActions:(id)arg1 ;
-(void)_updateTopBarContentAnimated:(BOOL)arg1 ;
-(void)performIfLocationServicesAvailable:(/*^block*/ id)arg1 ;
-(void)_restoreFromDefaults;
-(void)_updateTapToHideBehavior;
-(id)directionsInfoBar;
-(void)_updateTopBarBackdrop;
-(void)_showTransitAttributionForRouteStep:(id)arg1 animate:(BOOL)arg2 ;
-(void)_loadDirections;
-(void)_restoreDisplayedInfoCard;
-(void)_setShowingRoute:(BOOL)arg1 animate:(BOOL)arg2 ;
-(void)_delayedGoToRouteStepAnimated;
-(void)_doZoomTest:(id)arg1 ;
-(unsigned)_transportTypeForControl:(id)arg1 ;
-(BOOL)_showDirectionsToSearchResult:(id)arg1 transportType:(unsigned)arg2 ;
-(BOOL)_isParkingCalloutControl:(id)arg1 ;
-(void)_showTrafficDetailsForTrafficIncident:(id)arg1 animate:(BOOL)arg2 ;
-(id)_trafficIncidentsViewController;
-(id)_trafficIncidentsNavigationController;
-(void)setShowing:(BOOL)arg1 modalViewController:(id)arg2 animated:(BOOL)arg3 completion:(/*^block*/ id)arg4 ;
-(void)_createCustomSearchResultForDroppedPinAtPoint:(SCD_Struct_Si13)arg1 ;
-(void)setBookmarkToShow:(id)arg1 ;
-(void)_setSearchResult:(id)arg1 forSearchType:(int)arg2 ;
-(void)_actuallyPresentDirectionsSheetAnimated:(BOOL)arg1 completion:(/*^block*/ id)arg2 ;
-(void)_searchForHistoryItem:(id)arg1 completedQuery:(id)arg2 source:(int)arg3 ;
-(void)setShowingSearch:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)stopShowingDefaultSuggestions;
-(id)_mapDimmingView;
-(void)_fadeMapDimmingViewAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3 ;
-(void)_choseBookmark:(id)arg1 forSearchType:(int)arg2 ;
-(void)_setShowingDirectionsInfoBar:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_clearRouteStartAndEnd;
-(void)_routeFromSearchResult:(id)arg1 toSearchResult:(id)arg2 overrideDirectionsMode:(int)arg3 tracePlayer:(id)arg4 withFeedback:(id)arg5 ;
-(void)_routeFromSearchResult:(id)arg1 toAddressBookAddress:(id)arg2 withFeedback:(id)arg3 ;
-(void)_reportCurrentLocationFailure;
-(void)_startDirectionsRequiringNavigation:(BOOL)arg1 ;
-(void)setSteppingMode:(id)arg1 ;
-(void)resumeNavigationIfNeeded;
-(id)steppingMode;
-(void)searchForString:(id)arg1 scrollToResults:(BOOL)arg2 source:(int)arg3 ;
-(void)_searchForResult:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)_showOrUpdateSteppingModeWithSettingsFromBlock:(/*^block*/ id)arg1 ;
-(void)_goToSearchResult:(id)arg1 ;
-(void)_transitionToOverview;
-(void)_dropPinsForSearchResults:(id)arg1 scrollToResults:(BOOL)arg2 ;
-(void)_searchManagerResultsChanged;
-(void)_resolveRefinementForSearch:(id)arg1 atIndex:(unsigned)arg2 ;
-(id)multipleRefinementAlertView;
-(id)spellingSuggestionAlertView;
-(void)_reportSearchError:(id)arg1 ;
-(BOOL)_setupAndStartDirectionsRequiringNavigation:(BOOL)arg1 ;
-(void)_showNavModeAdvisoryIfNecessary;
-(void)displayCurrentLocationAlertWithMessage:(id)arg1 postAlertSearchType:(int)arg2 ;
-(void)directionsModeDidChange;
-(void)directionsController:(id)arg1 didChangeSelectedRouteIndex:(unsigned)arg2 ;
-(void)_updateSelectedRoute;
-(id)calloutViewController;
-(void)setHideSettingsViewDidEndInvocation:(id)arg1 ;
-(BOOL)_replaceSearchResult:(id)arg1 withSearchResult:(id)arg2 ;
-(void)_showDirectionsFromSearchResult:(id)arg1 orToSearchResult:(id)arg2 completion:(/*^block*/ id)arg3 ;
-(void)_showDirectionsFromSearchResult:(id)arg1 orToSearchResult:(id)arg2 directionsMode:(int)arg3 completion:(/*^block*/ id)arg4 ;
-(void)addBookmarkWithName:(id)arg1 fromSearchResult:(id)arg2 ;
-(int)_directionsModeForTransportType:(unsigned)arg1 ;
-(void)routeFromAddress:(id)arg1 toAddress:(id)arg2 withFeedback:(id)arg3 ;
-(id)searchResultsListViewController;
-(void)_searchResultsListClearButtonClicked:(id)arg1 ;
-(id)searchResultsNavController;
-(void)presentActionSheet:(id)arg1 ;
-(void)presentViewControllerInExclusivePopover:(id)arg1 permittedArrowDirections:(unsigned)arg2 fromView:(id)arg3 ;
-(void)steppingModeChoseEnd:(id)arg1 ;
-(void)steppingModeChoseOverview:(id)arg1 ;
-(void)mapsActivityViewController:(id)arg1 addBookmarkWithSearchResult:(id)arg2 title:(id)arg3 ;
-(void)mapsActivityViewController:(id)arg1 performedActivityOfType:(id)arg2 withSearchResult:(id)arg3 completed:(BOOL)arg4 ;
-(void)mapsActivityViewControllerPrint:(id)arg1 ;
-(void)directionsController:(id)arg1 displayDirectionsWithoutNavigationToSelectedRouteWithOptions:(int)arg2 ;
-(void)directionsControllerNavigationModeChoseOverview:(id)arg1 ;
-(void)directionsControllerNavigationModeChoseEndNavigation:(id)arg1 ;
-(void)directionsControllerDidStartLoad:(id)arg1 ;
-(void)directionsControllerDidLoad:(id)arg1 ;
-(void)directionsControllerDidCancelLoad:(id)arg1 ;
-(void)directionsControllerDidFailToLoad:(id)arg1 withError:(id)arg2 ;
-(void)directionsControllerDidReset:(id)arg1 ;
-(void)directionsController:(id)arg1 didUpdateRemainingTime:(double)arg2 remainingDistance:(double)arg3 ;
-(void)directionsController:(id)arg1 didSetEndPin:(id)arg2 ;
-(void)directionsControllerUpdatedETA:(id)arg1 ;
-(void)directionsControllerHasArrived:(id)arg1 ;
-(void)directionsInfoBarDidClearDirections:(id)arg1 ;
-(void)directionsInfoBarDidCancelDirections:(id)arg1 ;
-(void)directionsInfoBarDidStartDirections:(id)arg1 ;
-(void)directionsInfoBarChoseResumeInOverview:(id)arg1 ;
-(void)directionsSearchViewControllerDidCancel:(id)arg1 ;
-(void)directionsSearchViewControllerDidRoute:(id)arg1 ;
-(void)directionsSearchViewControllerDidSelectRoutingApp:(id)arg1 ;
-(void)directionsSearchViewController:(id)arg1 didSelectDirectionsMode:(int)arg2 ;
-(id)directionsSearchViewControllerMapViewSearchInfo:(id)arg1 ;
-(id)visibleMapViewForDebugController:(id)arg1 ;
-(void)debugControllerDidFinish:(id)arg1 ;
-(BOOL)hasShownDrivingNavModeAdvisory;
-(void)setHasShownDrivingNavModeAdvisory:(BOOL)arg1 ;
-(BOOL)hasShownWalkingNavModeAdvisory;
-(void)setHasShownWalkingNavModeAdvisory:(BOOL)arg1 ;
-(BOOL)locationPulseEnabled;
-(void)setLocationPulseEnabled:(BOOL)arg1 ;
-(void)presentationController:(id)arg1 handleReportAProblemWithSearchResult:(id)arg2 ;
-(void)presentationController:(id)arg1 showDirctionsToSearchResult:(id)arg2 ;
-(void)presentationController:(id)arg1 showDirectionsFromSearchResult:(id)arg2 ;
-(void)presentationController:(id)arg1 showTransitDirectionsToSearchResult:(id)arg2 ;
-(void)presentationController:(id)arg1 removeCustomSearchResult:(id)arg2 ;
-(void)presentationController:(id)arg1 addBookmarkForSearchResult:(id)arg2 title:(id)arg3 ;
-(void)presentationController:(id)arg1 wasDismissedForSearchResult:(id)arg2 ;
-(void)presentationController:(id)arg1 completedActivityOfType:(id)arg2 forSearchResult:(id)arg3 ;
-(void)presentationController:(id)arg1 searchForAddress:(id)arg2 ;
-(BOOL)presentationController:(id)arg1 shouldShowDirectionsForSearchResult:(id)arg2 ;
-(BOOL)presentationController:(id)arg1 shouldShowReportAProblemForSearchResult:(id)arg2 ;
-(void)presentationController:(id)arg1 didSelectDisplayedAddressForSearchResult:(id)arg2 ;
-(void)presentationController:(id)arg1 oldSearchResult:(id)arg2 becameNewSearchResult:(id)arg3 ;
-(void)searchBarController:(id)arg1 didSearchForItem:(id)arg2 source:(int)arg3 ;
-(void)searchBarControllerDidClear:(id)arg1 ;
-(void)searchBarController:(id)arg1 didSelectHistoryItem:(id)arg2 completedQuery:(id)arg3 ;
-(void)searchBarControllerDidBeginEditing:(id)arg1 ;
-(void)searchBarControllerTextWasEdited:(id)arg1 ;
-(void)searchBarControllerDidEndEditing:(id)arg1 ;
-(void)searchBarController:(id)arg1 showDimmingView:(BOOL)arg2 ;
-(id)searchBarControllerMapViewSearchInfo:(id)arg1 ;
-(void)searchBarBookmarksButtonWasTapped:(id)arg1 ;
-(void)searchBarCancelButtonWasTapped:(id)arg1 ;
-(void)searchResultsListViewController:(id)arg1 didTapDisclosureForSearchResult:(id)arg2 ;
-(void)searchResultsListViewController:(id)arg1 didTapRowForSearchResult:(id)arg2 ;
-(void)advisorySheetButtonWasTapped:(id)arg1 ;
-(void)refinementSelected:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)updateDefaults;
-(id)calloutSearchResult;
-(id)fullScreenViewController;
-(void)mapDisplayWillSuspend;
-(void)mapDisplayDidResume;
-(BOOL)isShowingTraffic;
-(void)toggleZoomTest;
-(void)setShowing:(BOOL)arg1 modalViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)_routeFromSearchResult:(id)arg1 toAddress:(id)arg2 withFeedback:(id)arg3 ;
-(BOOL)canPromptToCalibrateHeading;
-(void)startPreparedBackgroundNavigation;
-(void)modalDismissViewControllerDidComplete:(id)arg1 ;
-(BOOL)supportsSearchingFromURL:(id)arg1 ;
-(SCD_Struct_Se14)regionCenteredAt:(SCD_Struct_Si13)arg1 zoomLevel:(float)arg2 ;
-(void)endBackgroundNavigation;
-(CGRect)visibleMapBounds;
-(BOOL)canPlayTrace;
-(id)navigationTarget;
-(void)setNavigationTarget:(id)arg1 ;
-(void)setDirectionsInfoBar:(id)arg1 ;
-(id)bookmarkToShow;
-(id)hideSettingsViewDidEndInvocation;
-(BOOL)showingTraffic;
-(BOOL)showsSearchResultsInOverview;
-(BOOL)skipRegionChangeOnOverviewPop;
-(void)setSkipRegionChangeOnOverviewPop:(BOOL)arg1 ;
-(BOOL)resetTrafficSettingOnEnterForeground;
-(BOOL)didLaunchWithExplicitIntent;
-(BOOL)didLoadForBackgroundNavigation;
-(/*^block*/ id)enqueuedFixedProblemViewControllerShowAction;
-(id)_settingsController;
-(void)settingsControllerWillDismissSettings:(id)arg1 ;
-(void)settingsControllerDidDismissSettings:(id)arg1 ;
-(void)settingsController:(id)arg1 didSetViewMode:(int)arg2 ;
-(void)settingsControllerDidRequestPinDrop:(id)arg1 ;
-(void)settingsControllerDidRequestReportAProblem:(id)arg1 ;
-(void)settingsController:(id)arg1 didSetShowingTraffic:(BOOL)arg2 ;
-(void)settingsControllerDidRequestAttributionLegalese:(id)arg1 ;
-(void)settingsControllerDidRequestEnvironments:(id)arg1 ;
-(void)applicationDidEnterBackground;
-(void)mapView:(id)arg1 didChangeUserTrackingMode:(int)arg2 animated:(BOOL)arg3 fromTrackingButton:(BOOL)arg4 ;
-(double)mapView:(id)arg1 shouldDelayTapResponse:(id)arg2 onAnnotationView:(id)arg3 forDuration:(double)arg4 ;
-(id)mapViewCurrentRouteMatch:(id)arg1 ;
-(void)mapView:(id)arg1 willStartRespondingToGesture:(int)arg2 animated:(BOOL)arg3 ;
-(void)mapView:(id)arg1 didStopRespondingToGesture:(int)arg2 zoomDirection:(int)arg3 didDecelerate:(BOOL)arg4 ;
-(void)mapView:(id)arg1 didBecomePitched:(BOOL)arg2 ;
-(void)mapView:(id)arg1 canEnter3DModeDidChange:(BOOL)arg2 ;
-(void)mapView:(id)arg1 canShowFlyoverDidChange:(BOOL)arg2 ;
-(void)mapViewDidFinishCalloutExpansion:(id)arg1 ;
-(void)mapView:(id)arg1 labelMarker:(id)arg2 calloutAccessoryControlTapped:(id)arg3 ;
-(void)mapView:(id)arg1 didSelectLabelMarker:(id)arg2 ;
-(void)mapView:(id)arg1 didDeselectLabelMarker:(id)arg2 ;
-(void)_handleLongPress:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(BOOL)isRotating;
-(void)prepareForDefaultImageSnapshotForScreen:(id)arg1 ;
-(BOOL)shouldAutorotate;
-(unsigned)supportedInterfaceOrientations;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)_keyboardWillShow:(id)arg1 ;
-(void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(int)arg1 ;
-(void)_keyboardDidHide:(id)arg1 ;
-(int)viewMode;
-(void)popoverController:(id)arg1 animationCompleted:(int)arg2 ;
-(void).cxx_destruct;
-(void)_cleanup;
-(void)willPresentAlertView:(id)arg1 ;
-(id)printInteractionControllerParentViewController:(id)arg1 ;
-(void)applicationDidBecomeActive;
-(void)applicationWillResignActive;
-(id)searchManager;
-(void)print;
-(void)_countryProvidersDidChange:(id)arg1 ;
-(void)setViewMode:(int)arg1 ;
-(void)setMapView:(id)arg1 ;
-(void)mapView:(id)arg1 regionDidChangeAnimated:(BOOL)arg2 ;
-(void)mapViewDidFailLoadingMap:(id)arg1 withError:(id)arg2 ;
-(void)mapViewDidFinishRenderingMap:(id)arg1 fullyRendered:(BOOL)arg2 ;
-(void)mapView:(id)arg1 annotationView:(id)arg2 calloutAccessoryControlTapped:(id)arg3 ;
-(void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2 ;
-(void)mapView:(id)arg1 didDeselectAnnotationView:(id)arg2 ;
-(void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2 ;
-(void)mapView:(id)arg1 didFailToLocateUserWithError:(id)arg2 ;
-(void)mapView:(id)arg1 annotationView:(id)arg2 didChangeDragState:(unsigned)arg3 fromOldState:(unsigned)arg4 ;
-(id)mapView;
-(void)_setDisplayMode:(int)arg1 ;
@end

