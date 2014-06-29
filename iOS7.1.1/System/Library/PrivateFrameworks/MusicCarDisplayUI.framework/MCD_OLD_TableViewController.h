/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:52 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>

@protocol MCDCarDisplayServiceProvider;
@class MPAVController, MPMediaQuery, MCDNowPlayingButton, NSIndexPath;

@interface MCD_OLD_TableViewController : UITableViewController {

	<MCDCarDisplayServiceProvider>* _serviceProvider;
	MPAVController* _player;
	MPMediaQuery* _query;
	bool _viewHasAppeared;
	MCDNowPlayingButton* _nowPlayingButton;
	NSIndexPath* _previouslySelectedIndexPath;
	bool _alwaysShowNavBar;

}

@property (nonatomic,readonly) <MCDCarDisplayServiceProvider> * serviceProvider;              //@synthesize serviceProvider=_serviceProvider - In the implementation block
@property (nonatomic,readonly) MPAVController * player;                                       //@synthesize player=_player - In the implementation block
@property (nonatomic,readonly) MPMediaQuery * query;                                          //@synthesize query=_query - In the implementation block
@property (assign,nonatomic) bool alwaysShowNavBar;                                           //@synthesize alwaysShowNavBar=_alwaysShowNavBar - In the implementation block
@property (assign,nonatomic) bool viewHasAppeared;                                            //@synthesize viewHasAppeared=_viewHasAppeared - In the implementation block
+(id)addAlbumArtViewWithImage:(id)arg1 toCell:(id)arg2 rowHeight:(double)arg3 ;
+(id)addAlbumArtViewFromItem:(id)arg1 toCell:(id)arg2 rowHeight:(double)arg3 ;
-(void)_itemChanged:(id)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)query;
-(void)viewWillAppear:(bool)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(bool)arg1 ;
-(void)viewWillDisappear:(bool)arg1 ;
-(void).cxx_destruct;
-(void)_nowPlayingButtonTapped:(id)arg1 ;
-(id)initWithQuery:(id)arg1 player:(id)arg2 serviceProvider:(id)arg3 ;
-(id)dequeueReusableCarDisplayCellForTableView:(id)arg1 indexPath:(id)arg2 ;
-(id)serviceProvider;
-(id)viewControllerForRowAtIndexPath:(id)arg1 ;
-(bool)alwaysShowNavBar;
-(void)_updateNowPlayingVisibility;
-(void)setViewHasAppeared:(bool)arg1 ;
-(bool)viewHasAppeared;
-(bool)hasRowsToDisplay;
-(void)_presentNowPlayingViewController;
-(void)setAlwaysShowNavBar:(bool)arg1 ;
-(id)player;
@end

