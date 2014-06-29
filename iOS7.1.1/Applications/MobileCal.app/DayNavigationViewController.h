/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:05 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <MobileCal/DayNavigationViewDelegate.h>

@protocol DayNavigationViewControllerDelegate, DayNavigationViewCellFactory;
@class CalendarModel, DayNavigationView, NSObject, DayNavigationWeekScrollView, DayTwoPartLabel;

@interface DayNavigationViewController : UIViewController <DayNavigationViewDelegate> {

	CalendarModel* _model;
	DayNavigationView* _navigationView;
	BOOL _showWeekdayLabel;
	NSObject<DayNavigationViewControllerDelegate>* _delegate;
	NSObject<DayNavigationViewCellFactory>* _cellFactory;

}

@property (assign,nonatomic,__weak) NSObject<DayNavigationViewControllerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) DayNavigationWeekScrollView * weekScrollView; 
@property (nonatomic,readonly) DayTwoPartLabel * weekdayLabel; 
@property (nonatomic,retain) NSObject<DayNavigationViewCellFactory> * cellFactory;                         //@synthesize cellFactory=_cellFactory - In the implementation block
@property (assign,nonatomic) BOOL showWeekdayLabel;                                                        //@synthesize showWeekdayLabel=_showWeekdayLabel - In the implementation block
-(void)pulseToday;
-(id)cellFactory;
-(BOOL)showWeekdayLabel;
-(id)weekScrollView;
-(void)setSelectedDate:(id)arg1 animated:(BOOL)arg2 ;
-(void)dayNavigationView:(id)arg1 selectedDateChanged:(id)arg2 ;
-(BOOL)dayNavigationViewAllowedToChangeSelectedDate;
-(void)dayNavigationViewFailedToSelectDate;
-(BOOL)canAnimateToDate:(id)arg1 ;
-(void)setCellFactory:(id)arg1 ;
-(void)setShowWeekdayLabel:(BOOL)arg1 ;
-(id)initWithModel:(id)arg1 ;
-(void)_timeZoneChanged:(id)arg1 ;
-(void)significantTimeChangeOccurred;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)loadView;
-(void)setVisible:(BOOL)arg1 ;
-(void).cxx_destruct;
-(id)weekdayLabel;
-(void)_localeChanged:(id)arg1 ;
@end

