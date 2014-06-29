/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:43 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Social/Social-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <Social/SLSheetActionChangeObserving.h>

@class NSArray, UITableViewController, SLSheetTitleView, UINavigationItem, UIViewController, SLComposeServiceViewController, UIView, UIImage, UITableView;

@interface SLSheetRootViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, SLSheetActionChangeObserving> {

	NSArray* _sheetActions;
	UITableViewController* _tableViewController;
	SLSheetTitleView* _titleView;
	UINavigationItem* _navItem;
	UIViewController* _autoCompletionViewController;
	SLComposeServiceViewController* _delegate;
	UIView* _contentView;
	UIImage* _serviceIconImage;

}

@property (assign,nonatomic,__weak) SLComposeServiceViewController * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                          //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) UIImage * serviceIconImage;                                    //@synthesize serviceIconImage=_serviceIconImage - In the implementation block
@property (nonatomic,readonly) UITableView * tableView; 
-(void)sheetActionDidChange:(id)arg1 ;
-(void)resetSheetActions;
-(double)_preferredTableViewHeight;
-(void)setServiceIconImage:(id)arg1 ;
-(void)_updateCellForSheetAction:(id)arg1 ;
-(void)observeSheetActions:(id)arg1 ;
-(void)_updateCell:(id)arg1 withSheetAction:(id)arg2 ;
-(void)setPostButtonEnabled:(bool)arg1 ;
-(void)updateContentViewSize:(CGSize)arg1 ;
-(void)presentAutoCompletionViewController:(id)arg1 apparentContentHeight:(double)arg2 contentViewChangeBlock:(/*^block*/ id)arg3 ;
-(void)dismissAutoCompletionViewControllerWithContentViewChangeBlock:(/*^block*/ id)arg1 ;
-(void)setSheetActions:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)setTitle:(id)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)delegate;
-(id)navigationItem;
-(id)contentView;
-(void)setContentView:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)loadView;
-(void)viewDidLoad;
-(id)tableView;
-(void).cxx_destruct;
-(id)sheetActions;
-(id)serviceIconImage;
@end

