/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:58:01 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIViewController.h>

@class UIScreen, UIView, SBAlert, UIViewController, NSMutableSet;

@interface SBAlertWindowViewController : UIViewController {

	UIScreen* _screen;
	UIView* _contentView;
	SBAlert* _activeAlert;
	UIViewController* _activeViewController;
	NSMutableSet* _childAlerts;

}

@property (nonatomic,retain) SBAlert * activeAlert;                                //@synthesize activeAlert=_activeAlert - In the implementation block
@property (nonatomic,retain) UIViewController * activeViewController;              //@synthesize activeViewController=_activeViewController - In the implementation block
-(id)activeAlert;
-(int)stackedAlertCount;
-(id)stackedViewForAlert:(id)arg1 ;
-(BOOL)alertWindow:(id)arg1 canAnimateInAlert:(id)arg2 ;
-(void)addAlertController:(id)arg1 ;
-(void)noteAlertWindow:(id)arg1 didDisplayAlert:(id)arg2 ;
-(void)removeAlertController:(id)arg1 ;
-(id)stackedAlertsIncludingActiveAlert:(BOOL)arg1 ;
-(void)setActiveAlert:(id)arg1 ;
-(void)setActiveViewController:(id)arg1 ;
-(id)activeViewController;
-(id)initWithScreen:(id)arg1 ;
-(void)dealloc;
-(BOOL)wantsFullScreenLayout;
-(void)window:(id)arg1 willAnimateFromContentFrame:(CGRect)arg2 toContentFrame:(CGRect)arg3 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1 ;
-(BOOL)shouldAutomaticallyForwardRotationMethods;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(int)arg1 ;
@end

