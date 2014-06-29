/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:49 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <RadioUI/RadioUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <RadioUI/_RUStationTrackInfoViewDelegate.h>
#import <AVFoundation/MCProfileConnectionObserver.h>
#import <StoreKit/SKStoreProductViewControllerDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol RUStationActionsViewControllerDelegate;
@class UILabel, UISwitch, NSArray, RadioStation, NSMutableArray, UITableViewCell, RUStationTuningView, UITableView, RUInnerShadowHeaderFooterView, _RUStationTrackInfoView, MPAVItem;

@interface RUStationActionsViewController : UIViewController <_RUStationTrackInfoViewDelegate, MCProfileConnectionObserver, SKStoreProductViewControllerDelegate, UITableViewDataSource, UITableViewDelegate> {

	UILabel* _copyrightLabel;
	long long _currentAction;
	bool _isProfileExplicitContentRestricted;
	UILabel* _navigationTitleLabel;
	UISwitch* _playExplicitTracksSwitch;
	NSArray* _playbackQueue;
	RadioStation* _station;
	NSMutableArray* _stationActionGroups;
	UITableViewCell* _stationTuningCell;
	RUStationTuningView* _stationTuningView;
	UITableView* _tableView;
	RUInnerShadowHeaderFooterView* _topShadowView;
	_RUStationTrackInfoView* _trackInfoView;
	MPAVItem* _item;
	<RUStationActionsViewControllerDelegate>* _delegate;

}

@property (nonatomic,readonly) RadioStation * station;                                                //@synthesize station=_station - In the implementation block
@property (nonatomic,readonly) MPAVItem * item;                                                       //@synthesize item=_item - In the implementation block
@property (assign,nonatomic,__weak) <RUStationActionsViewControllerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)productViewControllerDidFinish:(id)arg1 ;
-(id)station;
-(void)_doneAction:(id)arg1 ;
-(void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)_radioModelDidChangeNotification:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(long long)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)delegate;
-(void)viewDidLayoutSubviews;
-(void)tableViewDidFinishReload:(id)arg1 ;
-(id)item;
-(void)loadView;
-(void)viewWillAppear:(bool)arg1 ;
-(id)contentScrollView;
-(void)viewDidLoad;
-(void).cxx_destruct;
-(void)_avItemStoreIDDidChangeNotification:(id)arg1 ;
-(id)initWithStation:(id)arg1 item:(id)arg2 playbackQueue:(id)arg3 ;
-(void)_didReceiveRadioAccountDidDeauthenticateNotification:(id)arg1 ;
-(id)_newShadowViewWithFrame:(CGRect)arg1 ;
-(id)_newSectionHeaderWithFrame:(CGRect)arg1 title:(id)arg2 ;
-(void)_updateAvailableActions;
-(void)_userDefaultExplicitTracksEnabledDidChangeNotification:(id)arg1 ;
-(void)_layoutTopShadowView;
-(void)_updateTableFooterView;
-(void)_showStoreSheetAction:(id)arg1 ;
-(void)_updateIsProfileExplicitContentRestrictedForProfileConnection:(id)arg1 ;
-(long long)_stationActionForIndexPath:(id)arg1 ;
-(void)_playExplicitSwitchAction:(id)arg1 ;
-(void)_addDerivedStationUsingArtist:(bool)arg1 withCompletionHandler:(/*^block*/ id)arg2 ;
-(void)trackInfoViewDidTapArtwork:(id)arg1 ;
-(id)_indexPathForStationAction:(long long)arg1 ;
@end

