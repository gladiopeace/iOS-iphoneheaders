/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:15 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Setup/BuddyTableViewController.h>
#import <Setup/BuddyController.h>

@class UITableViewCell, NSArray, BuddyAppleIDTableHeaderView, BuddyAppleIDController, UIAlertView;

@interface BuddyAppleIDChoiceController : BuddyTableViewController <BuddyController> {

	id _delegate;
	UITableViewCell* _signInCell;
	UITableViewCell* _createNewCell;
	NSArray* _itemIconNames;
	NSArray* _itemDescriptions;
	BuddyAppleIDTableHeaderView* _serviceHeaderView;
	BuddyAppleIDController* _appleIDController;
	BOOL _allowBack;
	BOOL _whatIsReady;
	BOOL _whatIsRequested;
	UIAlertView* _skipAlert;
	UIAlertView* _wifiAlert;
	BOOL _didShowWifiAlert;
	BOOL _shouldShowWifiIfCancellingSkipAlert;

}
+(void)skip;
+(void)initialize;
-(void)startOver;
-(BOOL)shouldAllowStartOver;
-(void)setExistingAppleID:(id)arg1 ;
-(void)setExistingAccountType:(int)arg1 ;
-(BOOL)controllerAllowsNavigatingBack;
-(void)_skipPressed:(id)arg1 ;
-(void)_showOfflineTerms;
-(void)_reallySkip;
-(void)_whatIsPressed:(id)arg1 ;
-(id)navControllerForCreateAppleIDPages:(id)arg1 ;
-(void)appleIDControllerFinished:(id)arg1 success:(BOOL)arg2 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(int)arg2 ;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
-(int)tableView:(id)arg1 titleAlignmentForFooterInSection:(int)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)titleText;
@end

