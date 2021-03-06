/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:38:56 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIView.h>
#import <StoreKitUI/SKUIMenuViewControllerDelegate.h>
#import <UIKit/UIPopoverControllerDelegate.h>

@protocol SKUIIPadSearchHeaderViewDelegate;
@class SKUIClientContext, NSMutableArray, UIPopoverController, NSMutableDictionary, NSArray, NSDictionary, NSString;

@interface SKUIIPadSearchHeaderView : UIView <SKUIMenuViewControllerDelegate, UIPopoverControllerDelegate> {

	int _activeFacetIndex;
	SKUIClientContext* _clientContext;
	id<SKUIIPadSearchHeaderViewDelegate> _delegate;
	NSMutableArray* _facetButtons;
	UIPopoverController* _facetPopoverController;
	NSMutableDictionary* _facetSelections;
	NSArray* _searchFacets;

}

@property (assign,nonatomic,__weak) id<SKUIIPadSearchHeaderViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSArray * searchFacets;                                          //@synthesize searchFacets=_searchFacets - In the implementation block
@property (nonatomic,readonly) NSDictionary * facetSelections;                                  //@synthesize facetSelections=_facetSelections - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setDelegate:(id<SKUIIPadSearchHeaderViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<SKUIIPadSearchHeaderViewDelegate>)delegate;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(NSDictionary *)facetSelections;
-(void)menuViewController:(id)arg1 didSelectItemAtIndex:(int)arg2 ;
-(void)_destroyFacetPopover;
-(void)_facetButtonAction:(id)arg1 ;
-(id)_titleForFacet:(id)arg1 ;
-(int)_selectedIndexForFacet:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 clientContext:(id)arg2 ;
-(void)setSearchFacets:(id)arg1 selections:(id)arg2 ;
-(NSArray *)searchFacets;
@end

