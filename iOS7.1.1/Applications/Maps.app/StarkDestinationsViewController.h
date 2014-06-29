/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:58:59 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/StarkTableViewController.h>

@protocol HistoryUIHold;
@class NSArray, StarkRouteLoadingLabel, UINavigationItem;

@interface StarkDestinationsViewController : StarkTableViewController {

	<HistoryUIHold>* _historyHold;
	NSArray* _suggestions;
	/*^block*/ id _completion;
	StarkRouteLoadingLabel* _loadingView;
	UINavigationItem* _navigationItem;
	BOOL _loading;

}
-(void)_sendSearchCancelFeedback;
-(void)showBookmarks;
-(void)showSearch;
-(void)_updateLoading;
-(void)_recentsChanged:(id)arg1 ;
-(void)_stopLiveUpdating;
-(void)modeWillPop;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)navigationItem;
-(id)initWithCompletionBlock:(/*^block*/ id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)done;
-(void).cxx_destruct;
@end

