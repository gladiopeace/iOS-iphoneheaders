/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:25 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <StoreKitUI/SKUIItemListTableDelegate.h>

@protocol SKUIChartsViewControllerDelegate;
@class SKUIResourceLoader, NSArray, NSMutableDictionary, SKUIClientContext, SKUISegmentedTableHeaderView, NSOperationQueue, UISegmentedControl;

@interface SKUIIPhoneChartsViewController : UIViewController <SKUIItemListTableDelegate> {

	SKUIResourceLoader* _artworkLoader;
	NSArray* _charts;
	NSMutableDictionary* _chartViewControllers;
	SKUIClientContext* _clientContext;
	UIEdgeInsets _contentInset;
	<SKUIChartsViewControllerDelegate>* _delegate;
	bool _delegateWantsWillDisplay;
	SKUISegmentedTableHeaderView* _headerView;
	NSOperationQueue* _operationQueue;
	long long _selectedChartIndex;
	UISegmentedControl* _segmentedControl;

}

@property (nonatomic,retain) SKUIResourceLoader * artworkLoader;                                //@synthesize artworkLoader=_artworkLoader - In the implementation block
@property (nonatomic,copy) NSArray * charts;                                                    //@synthesize charts=_charts - In the implementation block
@property (nonatomic,retain) SKUIClientContext * clientContext;                                 //@synthesize clientContext=_clientContext - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInset;                                         //@synthesize contentInset=_contentInset - In the implementation block
@property (assign,nonatomic,__weak) <SKUIChartsViewControllerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)viewDidLayoutSubviews;
-(UIEdgeInsets)contentInset;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(void)viewWillAppear:(bool)arg1 ;
-(void).cxx_destruct;
-(void)_reloadData;
-(id)clientContext;
-(id)artworkLoader;
-(id)charts;
-(void)_segmentedControlAction:(id)arg1 ;
-(void)loadNextPageOfArtworkWithReason:(long long)arg1 ;
-(void)setArtworkLoader:(id)arg1 ;
-(void)itemList:(id)arg1 willDisplayCellForItem:(id)arg2 atIndexPath:(id)arg3 ;
-(id)itemList:(id)arg1 didConfirmItemOfferForItem:(id)arg2 atIndexPath:(id)arg3 ;
-(void)itemList:(id)arg1 didSelectItem:(id)arg2 atIndexPath:(id)arg3 ;
-(void)enumerateVisibleItemsUsingBlock:(/*^block*/ id)arg1 ;
-(void)setCharts:(id)arg1 ;
-(CGRect)frameForItemIndex:(long long)arg1 chartIndex:(long long)arg2 ;
-(id)_itemListWithChart:(id)arg1 ;
-(id)_artworkContextForChart:(id)arg1 ;
-(void)_showSelectedViewController;
-(long long)_chartIndexForChartViewController:(id)arg1 ;
-(id)_viewControllerWithIndex:(long long)arg1 ;
-(id)_selectedViewController;
-(void)setClientContext:(id)arg1 ;
@end

