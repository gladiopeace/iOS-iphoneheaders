/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:16 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Stocks.app/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class NSTimer, UIWindow, Stock;

@interface StocksController : UIViewController {

	BOOL _reachabilityCancelledLoads;
	BOOL _suspending;
	BOOL _dataIsLive;
	int _rowDataType;
	NSTimer* _updateTimer;
	UIWindow* _window;
	Stock* _selectedStock;

}

@property (nonatomic,retain) UIWindow * window;                  //@synthesize window=_window - In the implementation block
@property (nonatomic,retain) Stock * selectedStock;              //@synthesize selectedStock=_selectedStock - In the implementation block
+(id)sharedStocksController;
-(void)setSelectedStock:(id)arg1 ;
-(id)selectedStock;
-(void)prepareForApplicationScreenshot;
-(void)updateLoadingStatus;
-(void)reachabilityChanged:(id)arg1 ;
-(void)viewFullQuoteForStock:(id)arg1 ;
-(BOOL)dataIsLive;
-(id)chartView;
-(id)newsView;
-(void)updateChartData;
-(void)updateStockData;
-(void)didUpdateQuotes;
-(void)didUpdateMetadata;
-(void)_restoreSelectedStock;
-(void)startUpdateTimer;
-(void)stopUpdateTimer;
-(void)setSelectedStock:(id)arg1 writeToDefaults:(BOOL)arg2 ;
-(void)didBecomeActive;
-(id)listView;
-(void)dealloc;
-(id)window;
-(void)setWindow:(id)arg1 ;
-(void)suspend;
-(void)run;
-(void)resume;
-(BOOL)isNetworkReachable;
-(BOOL)isLoading;
-(void).cxx_destruct;
-(void)willResignActive;
-(void)resetLocale;
@end

