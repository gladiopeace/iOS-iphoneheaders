/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:58:55 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/AppStore.app/AppStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppStore/AppStore-Structs.h>
#import <AppStore/ASPurchasedAppViewController.h>
#import <AppStore/SKUIItemGridDelegate.h>
#import <StoreKitUI/SKUIMenuViewControllerDelegate.h>
#import <StoreKitUI/SKUIProductPageOverlayDelegate.h>
#import <StoreKitUI/SKUIViewControllerTesting.h>
#import <UIKit/UIPopoverControllerDelegate.h>

@class UIPopoverController, ASPurchasedHeaderView, SKUIItemGridViewController, SKUIProductPageOverlayController;

@interface ASIPadPurchasedViewController : ASPurchasedAppViewController <SKUIItemGridDelegate, SKUIMenuViewControllerDelegate, SKUIProductPageOverlayDelegate, SKUIViewControllerTesting, UIPopoverControllerDelegate> {

	UIPopoverController* _deviceTypeMenuPopover;
	ASPurchasedHeaderView* _headerView;
	SKUIItemGridViewController* _itemGridViewController;
	SKUIProductPageOverlayController* _overlayController;
	int _overlaySourceItemIndex;
	UIPopoverController* _sortMenuPopover;

}
-(void)_reloadEverything;
-(void)_reloadCurrentItems;
-(id)_newMenuPopoverWithTitles:(id)arg1 checkedIndex:(int)arg2 ;
-(void)_sortControlAction:(id)arg1 ;
-(void)_filterLocalAppsAction:(id)arg1 ;
-(void)_deviceTypeButtonAction:(id)arg1 ;
-(void)_currentItemsDidChange;
-(void)_searchStringDidChange:(id)arg1 ;
-(void)dealloc;
-(unsigned)supportedInterfaceOrientations;
-(void)decodeRestorableStateWithCoder:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void).cxx_destruct;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(id)_headerView;
-(id)productPageOverlay:(id)arg1 flipSourceViewToDismissItem:(id)arg2 ;
-(id)productPageOverlay:(id)arg1 flipSourceViewToPresentItem:(id)arg2 ;
-(void)productPageOverlayDidDismiss:(id)arg1 ;
-(BOOL)performTestWithName:(id)arg1 options:(id)arg2 ;
-(id)_popSourceViewForOverlayController:(id)arg1 ;
-(void)itemGrid:(id)arg1 didSelectItem:(id)arg2 atIndex:(int)arg3 ;
-(void)itemGridWillBeginDragging:(id)arg1 ;
-(void)_reloadNavigationBar;
-(void)menuViewController:(id)arg1 didSelectItemAtIndex:(int)arg2 ;
-(void)_reloadHeaderView;
@end

