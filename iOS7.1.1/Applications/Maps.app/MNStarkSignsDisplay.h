/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:04 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/MNGuidanceSignsDisplay.h>
#import <Maps/StarkDrivingNavigationItemDelegate.h>

@class StarkNavigationOverlaySign, StarkReroutingOverlaySign, StarkArrivalOverlaySign, StarkGuidanceToggleOverlaySign, NSTimer, StarkETAOnlyOverlaySign, StarkChromeViewController, UIView, MNNavigationModeController, NSArray, NSString, ManeuverGuidance, StarkDrivingNavigationItem;

@interface MNStarkSignsDisplay : MNGuidanceSignsDisplay <StarkDrivingNavigationItemDelegate> {

	StarkNavigationOverlaySign* _primaryOverlaySign;
	StarkNavigationOverlaySign* _secondaryOverlaySign;
	StarkReroutingOverlaySign* _reroutingOverlaySign;
	StarkArrivalOverlaySign* _arrivalOverlaySign;
	StarkGuidanceToggleOverlaySign* _guidanceToggleOverlaySign;
	NSTimer* _transientToggleTimer;
	StarkETAOnlyOverlaySign* _ETAOnlyOverlaySign;
	StarkChromeViewController* _chromeViewController;
	UIView* _view;
	MNNavigationModeController* _mode;
	BOOL _isTopBarShowing;
	NSArray* _overlayItems;
	BOOL _arrived;
	BOOL _updatesPending;
	BOOL _rerouting;
	BOOL _showTransientToggleSign;
	BOOL _guidanceEnabled;
	NSString* _destinationDisplayName;
	ManeuverGuidance* _primaryGuidance;
	ManeuverGuidance* _secondaryGuidance;
	StarkDrivingNavigationItem* _navigationItem;

}

@property (nonatomic,retain) ManeuverGuidance * primaryGuidance;                         //@synthesize primaryGuidance=_primaryGuidance - In the implementation block
@property (nonatomic,retain) ManeuverGuidance * secondaryGuidance;                       //@synthesize secondaryGuidance=_secondaryGuidance - In the implementation block
@property (nonatomic,copy) NSString * destinationDisplayName;                            //@synthesize destinationDisplayName=_destinationDisplayName - In the implementation block
@property (nonatomic,readonly) StarkDrivingNavigationItem * navigationItem;              //@synthesize navigationItem=_navigationItem - In the implementation block
-(void)setGuidanceEnabled:(BOOL)arg1 ;
-(void)setInitialSelection;
-(void)removeFromContainingViewController;
-(id)initWithContainingChromeViewController:(id)arg1 mode:(id)arg2 inView:(id)arg3 ;
-(id)overlayItemsForState:(id)arg1 ;
-(void)setShowsDimmedSigns:(BOOL)arg1 animation:(id)arg2 ;
-(void)showNoGuidance;
-(void)layoutForUnobscuredBoundsChange;
-(void)showAuxiliaryChromeWithAnimation:(id)arg1 ;
-(void)hideAuxiliaryChromeWithAnimation:(id)arg1 ;
-(void)setDestinationDisplayName:(id)arg1 ;
-(void)showArrived;
-(void)showRecalculating;
-(void)showProceedingToRouteDistance:(double)arg1 displayString:(id)arg2 ;
-(void)setTotalRemainingTime:(double)arg1 remainingDistance:(double)arg2 ;
-(void)showNewManeuver:(int)arg1 junction:(id)arg2 instructions:(id)arg3 shorterAlternativeInstructions:(id)arg4 shieldType:(int)arg5 shieldText:(id)arg6 drivingSide:(int)arg7 ;
-(void)showManeuverAlertForAnnouncementStage:(int)arg1 ;
-(void)setTimeToManeuver:(double)arg1 distanceToManeuver:(double)arg2 ;
-(void)showSecondaryManeuver:(int)arg1 junction:(id)arg2 instructions:(id)arg3 shorterAlternativeInstructions:(id)arg4 shieldType:(int)arg5 shieldText:(id)arg6 drivingSide:(int)arg7 ;
-(void)hideSecondaryManeuver;
-(void)showRecalculationFailed;
-(void)setGuidanceEnabled:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)isGuidanceEnabled;
-(id)destinationDisplayName;
-(void)drivingNavigationItemZoomIn:(id)arg1 ;
-(void)drivingNavigationItemZoomOut:(id)arg1 ;
-(id)mapViewForDrivingNavigationItem:(id)arg1 ;
-(BOOL)drivingNavigationItemAllowsZooming:(id)arg1 ;
-(void)drivingNavigationItemDidEndRoute:(id)arg1 ;
-(void)drivingNavigationItemDidToggleOverview:(id)arg1 ;
-(void)_initializeGuidanceOverlay;
-(id)_currentOverlayItemsForTopBarShowing:(BOOL)arg1 ;
-(void)_updateGuidanceOverlayReloadingIfNeeded:(BOOL)arg1 ;
-(void)_updateOverviewButton;
-(void)_scheduleUpdate;
-(void)_resetToggleTimer;
-(void)_toggleTimerFired;
-(id)primaryGuidance;
-(void)setPrimaryGuidance:(id)arg1 ;
-(id)secondaryGuidance;
-(void)setSecondaryGuidance:(id)arg1 ;
-(BOOL)_shouldShowSecondarySign;
-(id)arrivalOverlayItems;
-(id)transientToggleOverlayItems;
-(id)ETAOnlyOverlayItems;
-(id)reroutingOverlayItems;
-(id)navigationOverlayItems;
-(id)_newGuidanceToggleOverlayItem;
-(void)_toggleGuidance;
-(void)_showRecalculatingWithDataConnectionFailedMessage:(BOOL)arg1 ;
-(void)_showDirectionsList;
-(void)dealloc;
-(id)navigationItem;
-(void)setHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void).cxx_destruct;
@end

