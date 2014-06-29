/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:04 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>

@protocol PhoneMonthListViewControllerDelegate;
@class CalendarModel, NSArray, UIView, NSObject;

@interface PhoneMonthListViewController : UITableViewController {

	CalendarModel* _model;
	NSArray* _selectedDayOccurrences;
	BOOL _loadingOccurrenceCache;
	BOOL _willFlashOccurrenceTableScrollIndicators;
	BOOL _showColors;
	UIView* _noEventsView;
	BOOL _disabled;
	NSObject<PhoneMonthListViewControllerDelegate>* _phoneMonthListViewDelegate;

}

@property (assign,nonatomic) NSObject<PhoneMonthListViewControllerDelegate> * phoneMonthListViewDelegate;              //@synthesize phoneMonthListViewDelegate=_phoneMonthListViewDelegate - In the implementation block
@property (assign,nonatomic) BOOL disabled;                                                                            //@synthesize disabled=_disabled - In the implementation block
-(void)_selectedDateChanged:(id)arg1 ;
-(void)_reloadOccurrenceData;
-(void)_occurrencesChanged:(id)arg1 ;
-(void)_cachedOccurrencesChanged:(id)arg1 ;
-(void)_flashOccurrenceTableScrollIndicators;
-(void)_adjustNoEventsLabelFrame;
-(void)_updateOccurrenceTable;
-(void)_updateColorState;
-(id)_createNoEventsView;
-(id)phoneMonthListViewDelegate;
-(void)setPhoneMonthListViewDelegate:(id)arg1 ;
-(id)initWithModel:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(void)didReceiveMemoryWarning;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(BOOL)disabled;
-(void)setDisabled:(BOOL)arg1 ;
-(void).cxx_destruct;
-(void)_localeChanged:(id)arg1 ;
-(void)_significantTimeChange:(id)arg1 ;
@end

