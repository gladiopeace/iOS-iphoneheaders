/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:17 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Weather.app/Weather
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Weather/Weather-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UISearchBarDelegate.h>
#import <Weather/WeatherValidatorDelegate.h>

@class UITableView, UILabel, UISearchBar, NSTimer, NSArray;

@interface WACityPickerViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, UISearchBarDelegate, WeatherValidatorDelegate> {

	UITableView* _completionTable;
	UILabel* _tablePlaceholderLabel;
	UISearchBar* _searchField;
	NSTimer* _validationTimer;
	NSTimer* _hideSpinnerTimer;
	NSArray* _validatedLocations;
	int _loadingCount;
	BOOL _isValidatingLocation;
	BOOL _isShowing;
	BOOL _networkReachable;
	BOOL _keyboardShowing;
	BOOL _progressShowing;
	id _delegate;

}

@property (assign,nonatomic) id delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_updateCompletionTablePlacehoder;
-(void)_updatePlaceholderLabel;
-(void)_searchFieldTextDidChange:(id)arg1 ;
-(void)_automaticKeyboardWillShow:(id)arg1 ;
-(void)_cancelValidation;
-(void)_setIsValidatingLocation:(BOOL)arg1 ;
-(void)_setValidatedLocations:(id)arg1 updateStatus:(BOOL)arg2 ;
-(void)_validateLocation;
-(void)_scheduleValidation;
-(void)_setLoadingData:(BOOL)arg1 ;
-(void)_showCompletions;
-(void)_hideCompletions;
-(void)didFailWithError:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)delegate;
-(BOOL)shouldAutorotate;
-(unsigned)supportedInterfaceOrientations;
-(void)viewDidLayoutSubviews;
-(void)loadView;
-(BOOL)textFieldShouldBeginEditing:(id)arg1 ;
-(void)viewDidLoad;
-(void)cancel;
-(BOOL)isLoading;
-(void)setNetworkReachable:(BOOL)arg1 ;
-(void)_automaticKeyboardDidHide:(id)arg1 ;
-(void)_setHideSpinnerTimer:(id)arg1 ;
-(void)_showSpinner;
-(void)_hideSpinner;
-(void)didValidateLocation:(id)arg1 ;
-(void)didShow;
-(void)willHide;
@end

