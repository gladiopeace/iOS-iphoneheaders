/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:22 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIStorePageSection.h>
#import <StoreKitUI/SKUIArtworkRequestDelegate.h>
#import <StoreKitUI/SKUIEmbeddedMediaViewDelegate.h>

@class SKUIArtwork, SKUIEmbeddedMediaView, SKUIMediaComponent;

@interface SKUIMediaPageSection : SKUIStorePageSection <SKUIArtworkRequestDelegate, SKUIEmbeddedMediaViewDelegate> {

	SKUIArtwork* _artwork;
	unsigned long long _artworkRequestID;
	CGSize _imageSize;
	SKUIEmbeddedMediaView* _mediaView;
	bool _pinned;

}

@property (nonatomic,@dynamic,readonly) SKUIMediaComponent * pageComponent; 
-(void)dealloc;
-(void).cxx_destruct;
-(void)setSectionIndex:(long long)arg1 ;
-(id)initWithPageComponent:(id)arg1 ;
-(CGSize)cellSizeForIndexPath:(id)arg1 ;
-(void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2 ;
-(long long)numberOfCells;
-(void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1 ;
-(void)collectionViewDidSelectItemAtIndexPath:(id)arg1 ;
-(id)popPinnedHeaderView;
-(void)restorePinnedHeaderView:(id)arg1 ;
-(void)willAppearInContext:(id)arg1 ;
-(void)prefetchResourcesWithReason:(long long)arg1 ;
-(double)contentInsetAdjustmentForCollectionView:(id)arg1 ;
-(void)artworkRequest:(id)arg1 didLoadImage:(id)arg2 ;
-(void)_loadImageWithReason:(long long)arg1 ;
-(void)mediaView:(id)arg1 playbackStateDidChange:(long long)arg2 ;
-(id)cellForIndexPath:(id)arg1 ;
@end

