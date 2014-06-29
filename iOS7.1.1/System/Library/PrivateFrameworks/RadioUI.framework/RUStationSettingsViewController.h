/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:48 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <RadioUI/RadioUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <RadioUI/RUAddSeedViewControllerDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class UIImage, RUAddSeedViewController, NSArray, RUParallelScrollView, UIView, UIAlertView, MPImageCache, RUMetricsController, NSMutableArray, RadioStation, UITableViewCell, UITextField, RUStationTuningView, _RUStationSettingsTableView;

@interface RUStationSettingsViewController : UIViewController <RUAddSeedViewControllerDelegate, UITableViewDataSource, UITableViewDelegate> {

	UIImage* _addLikeBanImage;
	RUAddSeedViewController* _addSeedViewController;
	bool _addingForLike;
	NSArray* _bannedItems;
	RUParallelScrollView* _containerScrollView;
	UIView* _deleteTintView;
	UIAlertView* _deletionAlertView;
	MPImageCache* _imageCache;
	bool _isEditing;
	NSArray* _likedItems;
	RUMetricsController* _metricsController;
	NSMutableArray* _orderedSections;
	NSMutableArray* _queuedMetricsOperations;
	long long _sharingRow;
	RadioStation* _station;
	UITableViewCell* _stationNameCell;
	UITextField* _stationNameTextField;
	UITableViewCell* _stationTuningCell;
	RUStationTuningView* _stationTuningView;
	_RUStationSettingsTableView* _tableView;
	long long _tuningRow;

}
-(void)_applicationWillEnterForegroundNotification:(id)arg1 ;
-(id)initWithStation:(id)arg1 ;
-(void)_radioModelDidChangeNotification:(id)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(long long)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)viewWillAppear:(bool)arg1 ;
-(id)contentScrollView;
-(void)viewDidLoad;
-(void)dismissViewControllerAnimated:(bool)arg1 completion:(/*^block*/ id)arg2 ;
-(void)viewWillDisappear:(bool)arg1 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(void).cxx_destruct;
-(void)addSeedViewController:(id)arg1 didSelectStation:(id)arg2 ;
-(void)addSeedViewControllerDidCancel:(id)arg1 ;
-(void)_updateEditingStateAnimated:(bool)arg1 ;
-(id)_newPageEvent;
-(void)_addMetricsControllerOperationBlock:(/*^block*/ id)arg1 ;
-(id)_newShadowViewWithFrame:(CGRect)arg1 ;
-(void)_updateLikesAndBans;
-(void)_didSelectLikeBanStation:(id)arg1 ;
-(long long)_countOfSettingsSections;
-(bool)_isDeletableRowAtIndexPath:(id)arg1 ;
-(long long)_settingsSectionForTableViewSection:(long long)arg1 ;
-(id)_addLikeBanImage;
-(long long)_tableViewSectionForSettingsSection:(long long)arg1 ;
-(void)_presentAddSeedController;
-(id)_titleForSettingsSection:(long long)arg1 ;
-(id)_newSectionHeaderWithFrame:(CGRect)arg1 title:(id)arg2 ;
-(void)_stationNameTextFieldValueDidEndEditingAction:(id)arg1 ;
-(void)_stationNameTextFieldEditingDidBeginAction:(id)arg1 ;
-(void)_toggleEditAction:(id)arg1 ;
-(id)_newTextField;
@end

