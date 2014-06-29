/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:19:13 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/AccessibilityBundles/GuidedAccess.axuiservice/GuidedAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GuidedAccess/GuidedAccess-Structs.h>
#import <GuidedAccess/GAXFeatureViewController.h>
#import <GuidedAccess/GAXOptionsViewControllerDataSource.h>
#import <GuidedAccess/GAXOptionsViewControllerDelegate.h>
#import <UIKit/UIPopoverControllerDelegate.h>

@class UIPopoverController;

@interface GAXFeatureViewController_Pad : GAXFeatureViewController <GAXOptionsViewControllerDataSource, GAXOptionsViewControllerDelegate, UIPopoverControllerDelegate> {

	UIPopoverController* _appOptionsPopoverController;
	UIPopoverController* _hardwareOptionsPopoverController;

}

@property (nonatomic,retain) UIPopoverController * appOptionsPopoverController;                   //@synthesize appOptionsPopoverController=_appOptionsPopoverController - In the implementation block
@property (nonatomic,retain) UIPopoverController * hardwareOptionsPopoverController;              //@synthesize hardwareOptionsPopoverController=_hardwareOptionsPopoverController - In the implementation block
-(void)dismissOptionsAnimated:(bool)arg1 ;
-(id)_hardwareFeatureViews;
-(id)_appFeatureViews;
-(void)setAppOptionsPopoverController:(id)arg1 ;
-(void)setHardwareOptionsPopoverController:(id)arg1 ;
-(id)appOptionsPopoverController;
-(id)hardwareOptionsPopoverController;
-(CGSize)_popoverContentSizeForOptionsPopoverController:(id)arg1 ;
-(unsigned long long)numberOfFeaturesInOptionsViewController:(id)arg1 ;
-(id)_paddingViewsWithCount:(unsigned long long)arg1 ;
-(id)_optionsPopoverControllerWithType:(long long)arg1 ;
-(id)optionsViewController:(id)arg1 textForFeatureAtIndex:(unsigned long long)arg2 ;
-(id)optionsViewController:(id)arg1 detailTextForFeatureAtIndex:(unsigned long long)arg2 ;
-(bool)optionsViewController:(id)arg1 stateForForFeatureAtIndex:(unsigned long long)arg2 ;
-(void)optionsViewController:(id)arg1 featureAtIndex:(unsigned long long)arg2 didChangeState:(bool)arg3 ;
-(void)featureView:(id)arg1 didChangeState:(bool)arg2 ;
-(void)presentOptionsForFeatureView:(id)arg1 ;
-(void)dealloc;
-(void)loadView;
-(bool)popoverControllerShouldDismissPopover:(id)arg1 ;
@end

