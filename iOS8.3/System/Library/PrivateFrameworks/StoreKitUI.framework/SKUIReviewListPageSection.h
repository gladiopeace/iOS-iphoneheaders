/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:38:56 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIStorePageSection.h>

@class SKUIViewElementLayoutContext, SKUIReviewListPageComponent;

@interface SKUIReviewListPageSection : SKUIStorePageSection {

	SKUIViewElementLayoutContext* _cellLayoutContext;

}

@property (nonatomic,readonly) SKUIReviewListPageComponent * pageComponent; 
-(id)initWithPageComponent:(id)arg1 ;
-(void)willAppearInContext:(id)arg1 ;
-(void)reloadCellWithIndexPath:(id)arg1 reason:(int)arg2 ;
-(void)collectionViewWillApplyLayoutAttributes:(id)arg1 ;
-(CGSize)cellSizeForIndexPath:(id)arg1 ;
-(id)cellForIndexPath:(id)arg1 ;
-(void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2 ;
-(int)numberOfCells;
-(void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg1 ;
-(void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1 ;
-(void)collectionViewDidSelectItemAtIndexPath:(id)arg1 ;
-(void)willTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(UIEdgeInsets)_contentInsetForReviewIndex:(int)arg1 ;
-(void)_requestCellLayout;
@end

