/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:57:47 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class SBApplication, UIView;

@interface SBMiniAlertController : NSObject {

	SBApplication* _displayShowingAnAlert;
	unsigned _sbMiniAlertVisible : 1;
	UIView* _hiddenAlertWindow;

}
+(id)sharedInstance;
-(void)displayWillDismissMiniAlert:(id)arg1 ;
-(BOOL)miniAlertVisible;
-(void)deactivateAlertItemsForDisplay:(id)arg1 ;
-(void)noteMiniAlertStateChanged;
-(void)_setAlertVisibleNotifyState:(BOOL)arg1 ;
-(void)_hideMiniAlertsForApp:(id)arg1 ;
-(void)_setDisplayShowingAnAlert:(id)arg1 ;
-(void)showApplicationMiniAlertsIfNeeded;
-(id)displayShowingAnAlert;
-(void)hideApplicationMiniAlerts;
-(void)displayWillShowMiniAlert:(id)arg1 ;
-(void)displayDidDismissMiniAlert:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)canShowAlerts;
@end

