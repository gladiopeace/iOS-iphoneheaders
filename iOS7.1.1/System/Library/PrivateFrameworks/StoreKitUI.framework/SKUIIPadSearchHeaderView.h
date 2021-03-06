/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:24 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIView.h>
#import <StoreKitUI/SKUIMenuViewControllerDelegate.h>
#import <UIKit/UIPopoverControllerDelegate.h>

@protocol SKUIIPadSearchHeaderViewDelegate;
@class SKUIClientContext, NSMutableArray, UIPopoverController, NSMutableDictionary, NSArray, NSDictionary;

@interface SKUIIPadSearchHeaderView : UIView <SKUIMenuViewControllerDelegate, UIPopoverControllerDelegate> {

	long long _activeFacetIndex;
	SKUIClientContext* _clientContext;
	<SKUIIPadSearchHeaderViewDelegate>* _delegate;
	NSMutableArray* _facetButtons;
	UIPopoverController* _facetPopoverController;
	NSMutableDictionary* _facetSelections;
	NSArray* _searchFacets;

}

@property (assign,nonatomic,__weak) <SKUIIPadSearchHeaderViewDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSArray * searchFacets;                                          //@synthesize searchFacets=_searchFacets - In the implementation block
@property (nonatomic,readonly) NSDictionary * facetSelections;                                  //@synthesize facetSelections=_facetSelections - In the implementation block
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)delegate;
-(void).cxx_destruct;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(id)facetSelections;
-(void)_destroyFacetPopover;
-(void)_facetButtonAction:(id)arg1 ;
-(id)_titleForFacet:(id)arg1 ;
-(long long)_selectedIndexForFacet:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 clientContext:(id)arg2 ;
-(void)setSearchFacets:(id)arg1 selections:(id)arg2 ;
-(id)searchFacets;
-(void)menuViewController:(id)arg1 didSelectItemAtIndex:(long long)arg2 ;
@end

