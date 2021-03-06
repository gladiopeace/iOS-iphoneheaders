/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:55:15 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PreferenceBundles/CoreRoutineSettings.bundle/CoreRoutineSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreRoutineSettings/RTMapAndTableViewController.h>

@class RTPrivacyLOI, RTPrivacyVisitsViewController, RTPrivacyRoutesViewController;

@interface RTPrivacyLOIViewController : RTMapAndTableViewController {

	RTPrivacyLOI* _privacyLOI;
	RTPrivacyVisitsViewController* _privacyVisitsViewController;
	RTPrivacyRoutesViewController* _privacyRoutesViewController;

}

@property (nonatomic,retain) RTPrivacyLOI * privacyLOI;                                                //@synthesize privacyLOI=_privacyLOI - In the implementation block
@property (nonatomic,retain) RTPrivacyVisitsViewController * privacyVisitsViewController;              //@synthesize privacyVisitsViewController=_privacyVisitsViewController - In the implementation block
@property (nonatomic,retain) RTPrivacyRoutesViewController * privacyRoutesViewController;              //@synthesize privacyRoutesViewController=_privacyRoutesViewController - In the implementation block
-(RTPrivacyVisitsViewController *)privacyVisitsViewController;
-(void)setPrivacyVisitsViewController:(RTPrivacyVisitsViewController *)arg1 ;
-(void)_displayPrivacyLOI:(id)arg1 ;
-(RTPrivacyLOI *)privacyLOI;
-(void)selectRowItem:(id)arg1 ;
-(void)_removePrivacyLOI:(id)arg1 ;
-(RTPrivacyRoutesViewController *)privacyRoutesViewController;
-(void)setPrivacyRoutesViewController:(RTPrivacyRoutesViewController *)arg1 ;
-(void)setPrivacyLOI:(RTPrivacyLOI *)arg1 ;
-(void)mapView:(id)arg1 regionDidChangeAnimated:(char)arg2 ;
-(void)loadView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
@end

