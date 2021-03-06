/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:47 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MPAbstractAlternateTracksViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class UIView, UINavigationBar, UITableView, UIProgressIndicator, UITextLabel;

@interface MPAlternateTracksViewController : MPAbstractAlternateTracksViewController <UITableViewDataSource, UITableViewDelegate> {

	UIView* _backgroundView;
	UINavigationBar* _navigationBar;
	UITableView* _table;
	UIProgressIndicator* _progressIndicator;
	UITextLabel* _loadingLabel;

}
-(void)willChangeToInterfaceOrientation:(int)arg1 ;
-(void)didChangeToInterfaceOrientation:(int)arg1 ;
-(void)_cancelButtonAction:(id)arg1 ;
-(void)_doneButtonAction:(id)arg1 ;
-(void)_exitAnimated:(BOOL)arg1 ;
-(void)_setCell:(id)arg1 isChecked:(BOOL)arg2 ;
-(void)addLoadingUI;
-(void)removeLoadingUI;
-(void)dealloc;
-(void)reloadData;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)loadView;
-(void).cxx_destruct;
@end

