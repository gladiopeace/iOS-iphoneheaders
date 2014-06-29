/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:25 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <StoreKitUI/SKUICategoryArtworkLoaderObserver.h>
#import <StoreKitUI/SKUICategoryTableViewControllerDelegate.h>

@protocol SKUICategoryTableViewControllerDelegate;
@class SKUICategoryArtworkLoader, SKUICategory, SKUIClientContext, NSArray, NSURL;

@interface SKUICategoryTableViewController : UITableViewController <SKUICategoryArtworkLoaderObserver, SKUICategoryTableViewControllerDelegate> {

	SKUICategoryArtworkLoader* _artworkLoader;
	SKUICategory* _category;
	SKUIClientContext* _clientContext;
	<SKUICategoryTableViewControllerDelegate>* _delegate;
	NSArray* _metricsLocations;
	long long _numberOfHiddenRows;
	NSURL* _selectedURL;
	NSURL* _defaultURL;
	bool _isRoot;
	bool _childrenHaveArtwork;

}

@property (nonatomic,retain) SKUICategoryArtworkLoader * artworkLoader;                                //@synthesize artworkLoader=_artworkLoader - In the implementation block
@property (nonatomic,retain) SKUICategory * category;                                                  //@synthesize category=_category - In the implementation block
@property (nonatomic,retain) SKUIClientContext * clientContext;                                        //@synthesize clientContext=_clientContext - In the implementation block
@property (assign,nonatomic,__weak) <SKUICategoryTableViewControllerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSArray * metricsLocations;                                                 //@synthesize metricsLocations=_metricsLocations - In the implementation block
@property (assign,nonatomic) long long numberOfHiddenRows;                                             //@synthesize numberOfHiddenRows=_numberOfHiddenRows - In the implementation block
@property (nonatomic,retain) NSURL * selectedURL;                                                      //@synthesize selectedURL=_selectedURL - In the implementation block
@property (nonatomic,retain) NSURL * defaultURL;                                                       //@synthesize defaultURL=_defaultURL - In the implementation block
@property (assign,getter=isRoot,nonatomic) bool root;                                                  //@synthesize isRoot=_isRoot - In the implementation block
-(void)_doneButtonAction:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)delegate;
-(void)loadView;
-(void)viewWillAppear:(bool)arg1 ;
-(void)setCategory:(id)arg1 ;
-(id)category;
-(void).cxx_destruct;
-(id)clientContext;
-(id)artworkLoader;
-(void)setArtworkLoader:(id)arg1 ;
-(void)setSelectedURL:(id)arg1 ;
-(void)setDefaultURL:(id)arg1 ;
-(id)_categoryAtIndexPath:(id)arg1 ;
-(void)categoryTableView:(id)arg1 didSelectCategory:(id)arg2 ;
-(id)metricsPageContextForCategoryTableView:(id)arg1 ;
-(void)_recordClickEventForIndexPath:(id)arg1 category:(id)arg2 actionType:(id)arg3 ;
-(id)_metricsLocationsToPushIndexPath:(id)arg1 ;
-(void)setMetricsLocations:(id)arg1 ;
-(long long)_metricsLocationPostionForIndexPath:(id)arg1 ;
-(void)categoryArtworkLoader:(id)arg1 didLoadImage:(id)arg2 forCategory:(id)arg3 ;
-(void)setNumberOfHiddenRows:(long long)arg1 ;
-(id)defaultURL;
-(id)metricsLocations;
-(long long)numberOfHiddenRows;
-(bool)isRoot;
-(void)setRoot:(bool)arg1 ;
-(id)selectedURL;
-(void)setClientContext:(id)arg1 ;
@end

