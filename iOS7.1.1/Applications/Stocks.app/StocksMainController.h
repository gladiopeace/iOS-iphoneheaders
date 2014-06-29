/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:16 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Stocks.app/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Stocks/StocksController.h>

@class StocksMainView, UIViewController, StocksBackSideNavigationController;

@interface StocksMainController : StocksController {

	StocksMainView* _stocksView;
	BOOL _showingBackside;
	BOOL _updateStocksOnFlipToFront;
	BOOL _updateChartOnFlipToFront;
	UIViewController* _frontSideViewController;
	StocksBackSideNavigationController* _backSideNavigationController;

}
+(id)sharedStocksController;
-(void)prepareForApplicationScreenshot;
-(id)stocksView;
-(void)setShowingBackside:(BOOL)arg1 ;
-(void)_stockWasAdded:(id)arg1 ;
-(id)chartView;
-(id)newsView;
-(void)updateChartData;
-(void)updateStockData;
-(void)setSelectedStock:(id)arg1 writeToDefaults:(BOOL)arg2 ;
-(void)attemptRotationToCurrentDeviceOrientation;
-(void)_handleStatusBarHeightChange:(id)arg1 ;
-(void)switchToBackIfNeeded;
-(void)switchToBack;
-(void)setShowingBackside:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)showingBackside;
-(void)backSideDone;
-(id)backsideNavigationController;
-(id)backsideView;
-(void)didBecomeActive;
-(id)listView;
-(BOOL)isRotating;
-(BOOL)shouldAutorotate;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(void)run;
-(void)resume;
-(BOOL)isLoading;
-(void).cxx_destruct;
-(void)willResignActive;
@end

