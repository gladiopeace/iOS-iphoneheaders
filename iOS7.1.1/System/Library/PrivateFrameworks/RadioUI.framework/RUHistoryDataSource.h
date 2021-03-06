/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:48 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/ADBannerViewDelegate.h>

@protocol OS_dispatch_source, RUHistoryDataSourceDelegate;
@class NSMutableDictionary, NSObject, NSMutableArray, RadioGetHistoryRequest, NSArray;

@interface RUHistoryDataSource : NSObject <ADBannerViewDelegate> {

	NSMutableDictionary* _adIdentifierToAdTrack;
	NSMutableDictionary* _adIdentifierToPendingBannerView;
	NSObject<OS_dispatch_source>* _adLoadTimeoutTimerSource;
	NSMutableArray* _bannerViewsPendingRemoval;
	NSMutableArray* _bannerViewsPendingLoad;
	RadioGetHistoryRequest* _historyRequest;
	NSArray* _pendingHistoryCategories;
	<RUHistoryDataSourceDelegate>* _delegate;
	NSArray* _historyCategories;

}

@property (assign,nonatomic,__weak) <RUHistoryDataSourceDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSArray * historyCategories;                                //@synthesize historyCategories=_historyCategories - In the implementation block
@property (getter=isRefreshing,nonatomic,readonly) bool refreshing; 
-(void)bannerViewDidLoadAd:(id)arg1 ;
-(void)bannerView:(id)arg1 didFailToReceiveAdWithError:(id)arg2 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(void).cxx_destruct;
-(bool)isRefreshing;
-(id)viewControllerForStoryboardPresentationFromBannerView:(id)arg1 ;
-(void)_cancelAdLoadTimeout;
-(void)_finalizePendingHistoryCategoryIfPossible;
-(id)_arrayByRemovingItemsWithAdIdentifier:(id)arg1 inHistoryCategories:(id)arg2 ;
-(void)_removePendingBannerView:(id)arg1 ;
-(id)_adIdentifierForHistoryItem:(id)arg1 ;
-(void)_reloadWithHistoryCategories:(id)arg1 ;
-(void)_scheduleAdLoadTimeout;
-(void)_handleAdLoadTimeout;
-(id)adTrackForHistoryItem:(id)arg1 ;
-(void)refreshHistory;
-(id)historyCategories;
@end

