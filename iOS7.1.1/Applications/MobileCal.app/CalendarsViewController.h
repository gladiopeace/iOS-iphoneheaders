/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:05 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <MobileCal/EKStyleProvider.h>
#import <MobileCal/PopoverContentView.h>

@class CalendarModel, UINavigationController;

@interface CalendarsViewController : UIViewController <EKStyleProvider, PopoverContentView> {

	/*^block*/ id _doneBlock;
	CalendarModel* _model;
	UINavigationController* _embeddedNavigationController;

}

@property (nonatomic,copy) id doneBlock;                                                         //@synthesize doneBlock=_doneBlock - In the implementation block
@property (nonatomic,retain) CalendarModel * model;                                              //@synthesize model=_model - In the implementation block
@property (nonatomic,retain) UINavigationController * embeddedNavigationController;              //@synthesize embeddedNavigationController=_embeddedNavigationController - In the implementation block
-(/*^block*/ id)doneBlock;
-(void)setDoneBlock:(/*^block*/ id)arg1 ;
-(id)embeddedNavigationController;
-(void)_saveFilterAndNotify;
-(void)setEmbeddedNavigationController:(id)arg1 ;
-(id)initWithModel:(id)arg1 ;
-(void)calendarChooserSelectionDidChange:(id)arg1 ;
-(void)calendarChooserDidFinish:(id)arg1 ;
-(void)refreshCalendarsButtonPressed;
-(id)backgroundColor;
-(unsigned)supportedInterfaceOrientations;
-(void)loadView;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)model;
-(BOOL)canDismiss;
-(void).cxx_destruct;
-(void)setModel:(id)arg1 ;
@end

