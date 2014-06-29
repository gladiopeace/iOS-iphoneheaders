/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:48 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <RadioUI/RUSearchViewControllerDelegate.h>

@protocol RUAddSeedViewControllerDelegate;
@class UISearchBar, UISearchDisplayController, RUSearchViewController;

@interface RUAddSeedViewController : UIViewController <RUSearchViewControllerDelegate> {

	UISearchBar* _searchBar;
	UISearchDisplayController* _searchDisplayController;
	RUSearchViewController* _searchViewController;
	<RUAddSeedViewControllerDelegate>* _delegate;

}

@property (assign,nonatomic,__weak) <RUAddSeedViewControllerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)viewWillAppear:(bool)arg1 ;
-(id)contentScrollView;
-(void)viewDidLoad;
-(void).cxx_destruct;
-(void)removeAddingIndicator;
-(id)metricsPageDescriptionForSearchViewController:(id)arg1 ;
-(id)metricsPageTypeForSearchViewController:(id)arg1 ;
-(void)searchViewController:(id)arg1 didSelectStation:(id)arg2 ;
-(void)searchViewControllerDidEndSearching:(id)arg1 ;
-(id)_newSearchDisplayControllerWithSearchBar:(id)arg1 searchViewController:(id)arg2 ;
-(id)_newSearchBar;
@end

