/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:34 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Health.app/Health
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol WDTableViewSectionDelegate;
@class HKHealthStore, HKDataUnitGroupController;

@interface WDTableViewSection : NSObject {

	id<WDTableViewSectionDelegate> _delegate;
	unsigned _section;

}

@property (nonatomic,readonly) id<WDTableViewSectionDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned section;                                       //@synthesize section=_section - In the implementation block
@property (readonly) HKHealthStore * healthStore; 
@property (readonly) HKDataUnitGroupController * dataUnitGroupController; 
-(id)initWithDelegate:(id)arg1 atSection:(unsigned)arg2 ;
-(void)reloadAnimated:(char)arg1 ;
-(void)setUpWithTableViewController:(id)arg1 ;
-(HKDataUnitGroupController *)dataUnitGroupController;
-(id)cellForRow:(unsigned)arg1 table:(id)arg2 ;
-(void)didSelectRow:(unsigned)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)_controllerManager;
-(id)viewForHeader:(id)arg1 ;
-(id)viewForFooter:(id)arg1 ;
-(float)heightForHeader;
-(float)heightForFooter;
-(void)accessoryButtonTappedForRow:(unsigned)arg1 ;
-(HKHealthStore *)healthStore;
-(float)heightForRow:(unsigned)arg1 ;
-(id)titleForHeader;
-(id<WDTableViewSectionDelegate>)delegate;
-(unsigned)section;
-(unsigned)numberOfRows;
-(void)deactivate;
-(void)viewWillAppear:(char)arg1 ;
-(void)activate;
-(id)titleForFooter;
-(void)applicationDidEnterBackground;
-(void)applicationWillEnterForeground;
@end

