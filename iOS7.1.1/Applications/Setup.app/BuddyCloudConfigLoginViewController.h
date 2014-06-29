/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:15 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Setup/BuddyTableViewController.h>
#import <UIKit/UITextFieldDelegate.h>

@class BuddyCloudConfigController, NSError, BuddyCloudConfigurationLoginHeaderView, UITableViewCell, UIBarButtonItem;

@interface BuddyCloudConfigLoginViewController : BuddyTableViewController <UITextFieldDelegate> {

	BuddyCloudConfigController* _configController;
	NSError* _lastError;
	BuddyCloudConfigurationLoginHeaderView* _headerLabel;
	UITableViewCell* _usernameCell;
	UITableViewCell* _passwordCell;
	UIBarButtonItem* _nextButton;

}

@property (assign,nonatomic) BuddyCloudConfigController * configController;                     //@synthesize configController=_configController - In the implementation block
@property (nonatomic,retain) NSError * lastError;                                               //@synthesize lastError=_lastError - In the implementation block
@property (nonatomic,retain) BuddyCloudConfigurationLoginHeaderView * headerLabel;              //@synthesize headerLabel=_headerLabel - In the implementation block
@property (nonatomic,retain) UITableViewCell * usernameCell;                                    //@synthesize usernameCell=_usernameCell - In the implementation block
@property (nonatomic,retain) UITableViewCell * passwordCell;                                    //@synthesize passwordCell=_passwordCell - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * nextButton;                                      //@synthesize nextButton=_nextButton - In the implementation block
-(id)usernameCell;
-(id)passwordCell;
-(void)setConfigController:(id)arg1 ;
-(id)configController;
-(void)_setupForCloudConfigurationState;
-(void)retryLogin;
-(void)setHeaderLabel:(id)arg1 ;
-(void)setUsernameCell:(id)arg1 ;
-(void)setPasswordCell:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(float)heightForHeaderInTableView:(id)arg1 ;
-(id)viewForHeaderInTableView:(id)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setNextButton:(id)arg1 ;
-(id)nextButton;
-(id)headerLabel;
-(void)setLastError:(id)arg1 ;
-(id)lastError;
-(void)_textChanged:(id)arg1 ;
@end

