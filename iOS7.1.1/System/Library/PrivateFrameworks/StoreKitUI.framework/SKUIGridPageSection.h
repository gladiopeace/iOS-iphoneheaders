/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:25 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIStorePageSection.h>
#import <StoreKitUI/SKUIArtworkRequestDelegate.h>
#import <StoreKitUI/SKUIItemStateCenterObserver.h>
#import <StoreKitUI/SKUIEmbeddedMediaViewDelegate.h>
#import <StoreKitUI/SKUIMissingItemDelegate.h>
#import <StoreKitUI/SKUIProductPageOverlayDelegate.h>

@class NSMapTable, SKUIClientContext, NSMutableIndexSet, SKUIMissingItemLoader, NSString, SKUIProductPageOverlayController, SKUIGridComponent;

@interface SKUIGridPageSection : SKUIStorePageSection <SKUIArtworkRequestDelegate, SKUIItemStateCenterObserver, SKUIEmbeddedMediaViewDelegate, SKUIMissingItemDelegate, SKUIProductPageOverlayDelegate> {

	NSMapTable* _artworkRequests;
	SKUIClientContext* _clientContext;
	bool _containsLockups;
	NSMapTable* _editorialLayouts;
	NSMutableIndexSet* _hiddenIconIndexSet;
	bool _isLandscape;
	bool _isPad;
	CGSize _lockupImageBoundingSize;
	SKUIMissingItemLoader* _missingItemLoader;
	NSString* _moreButtonTitle;
	long long _numberOfColumns;
	SKUIProductPageOverlayController* _overlayController;
	long long _overlaySourceItemIndex;
	long long _screenScale;
	NSMapTable* _lockupArtworkContexts;

}

@property (nonatomic,@dynamic,readonly) SKUIGridComponent * pageComponent; 
-(void)dealloc;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void).cxx_destruct;
-(void)itemStateCenter:(id)arg1 itemStatesChanged:(id)arg2 ;
-(void)itemStateCenterRestrictionsChanged:(id)arg1 ;
-(id)productPageOverlay:(id)arg1 flipSourceViewToDismissItem:(id)arg2 ;
-(id)productPageOverlay:(id)arg1 flipSourceViewToPresentItem:(id)arg2 ;
-(void)productPageOverlayDidDismiss:(id)arg1 ;
-(id)initWithPageComponent:(id)arg1 ;
-(CGSize)cellSizeForIndexPath:(id)arg1 ;
-(void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2 ;
-(long long)numberOfCells;
-(void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1 ;
-(void)collectionViewDidSelectItemAtIndexPath:(id)arg1 ;
-(void)collectionViewDidConfirmItemOfferAtIndexPath:(id)arg1 ;
-(void)willAppearInContext:(id)arg1 ;
-(void)willHideInContext:(id)arg1 ;
-(void)prefetchResourcesWithReason:(long long)arg1 ;
-(void)artworkRequest:(id)arg1 didLoadImage:(id)arg2 ;
-(id)clickEventWithItem:(id)arg1 elementName:(id)arg2 index:(long long)arg3 ;
-(void)collectionViewWillApplyLayoutAttributes:(id)arg1 ;
-(id)itemOfferClickEventWithItem:(id)arg1 elementName:(id)arg2 index:(long long)arg3 ;
-(void)mediaView:(id)arg1 playbackStateDidChange:(long long)arg2 ;
-(id)_missingItemLoader;
-(id)_popSourceViewForOverlayController:(id)arg1 ;
-(void)missingItemLoader:(id)arg1 didLoadItems:(id)arg2 invalidItemIdentifiers:(id)arg3 ;
-(void)_loadMissingItemsFromIndex:(long long)arg1 withReason:(long long)arg2 ;
-(id)_editorialCellWithEditorials:(id)arg1 indexPath:(id)arg2 ;
-(id)_editorialLockupCellWithLockups:(id)arg1 indexPath:(id)arg2 ;
-(id)_itemCellWithLockups:(id)arg1 indexPath:(id)arg2 ;
-(id)_mediaCellWithMedia:(id)arg1 indexPath:(id)arg2 ;
-(double)_heightForLockupAtIndexPath:(id)arg1 ;
-(double)_heightForEditorialLockupAtIndexPath:(id)arg1 ;
-(double)_heightForEditorialAtIndexPath:(id)arg1 ;
-(double)_heightForMediaAtIndexPath:(id)arg1 ;
-(void)_setPositionForClickEvent:(id)arg1 withElementIndex:(long long)arg2 ;
-(id)_itemForIndex:(long long)arg1 ;
-(void)_selectItem:(id)arg1 withIndex:(long long)arg2 ;
-(void)_loadImageForItem:(id)arg1 lockupSize:(long long)arg2 loader:(id)arg3 reason:(long long)arg4 ;
-(void)_enumerateItemsFromStartIndex:(long long)arg1 withBlock:(/*^block*/ id)arg2 ;
-(id)_editorialLayoutForLockup:(id)arg1 ;
-(id)_editorialLayoutForEditorial:(id)arg1 ;
-(void)_updateVisibileEditorialWithInterfaceOrientation:(long long)arg1 ;
-(void)_enumerateVisibleItemsWithBlock:(/*^block*/ id)arg1 ;
-(void)_enumerateVisibleIndexPathsWithBlock:(/*^block*/ id)arg1 ;
-(void)_reloadEditorialLockupCell:(id)arg1 withLockup:(id)arg2 index:(long long)arg3 ;
-(void)_reloadItemCell:(id)arg1 withLockup:(id)arg2 index:(long long)arg3 ;
-(id)_artworkContextForLockupSize:(long long)arg1 ;
-(double)_heightForEditorialLockup:(id)arg1 ;
-(double)_heightForLockup:(id)arg1 ;
-(double)_mediaWidthForMediaIndex:(long long)arg1 gridWidth:(double)arg2 ;
-(double)_heightForMedia:(id)arg1 width:(double)arg2 ;
-(UIEdgeInsets)_contentInsetForMediaIndex:(long long)arg1 ;
-(id)_newSizeToFitArtworkRequestWithArtwork:(id)arg1 mediaIndex:(long long)arg2 ;
-(id)_cellImageForItem:(id)arg1 lockupSize:(long long)arg2 ;
-(id)cellForIndexPath:(id)arg1 ;
@end

