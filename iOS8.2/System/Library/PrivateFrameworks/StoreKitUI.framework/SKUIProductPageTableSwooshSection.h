/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:11 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/SKUIProductPageTableSection.h>
#import <StoreKitUI/SKUIMissingItemDelegate.h>
#import <StoreKitUI/SKUISwooshViewControllerDelegate.h>

@class SKUILockupSwooshArtworkLoader, SKUIMissingItemLoader, SKUIResourceLoader, SKUISwooshPageComponent, SKUILockupSwooshViewController, SKUIColorScheme, UIViewController, NSString;

@interface SKUIProductPageTableSwooshSection : SKUIProductPageTableSection <SKUIMissingItemDelegate, SKUISwooshViewControllerDelegate> {

	/*^block*/id _actionBlock;
	SKUILockupSwooshArtworkLoader* _artworkLoader;
	SKUIMissingItemLoader* _missingItemLoader;
	SKUIResourceLoader* _resourceLoader;
	SKUISwooshPageComponent* _swooshComponent;
	SKUILockupSwooshViewController* _swooshViewController;

}

@property (nonatomic,copy) id actionBlock;                                           //@synthesize actionBlock=_actionBlock - In the implementation block
@property (nonatomic,retain) SKUIColorScheme * colorScheme; 
@property (nonatomic,retain) SKUIResourceLoader * resourceLoader;                    //@synthesize resourceLoader=_resourceLoader - In the implementation block
@property (nonatomic,readonly) UIViewController * swooshViewController; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(SKUIColorScheme *)colorScheme;
-(void)setColorScheme:(SKUIColorScheme *)arg1 ;
-(id)actionBlock;
-(void)setActionBlock:(id)arg1 ;
-(id)headerViewForTableView:(id)arg1 ;
-(void)setResourceLoader:(SKUIResourceLoader *)arg1 ;
-(id)_missingItemLoader;
-(void)missingItemLoader:(id)arg1 didLoadItems:(id)arg2 invalidItemIdentifiers:(id)arg3 ;
-(UIViewController *)swooshViewController;
-(id)_swooshViewController;
-(id)_artworkLoader;
-(id)swoosh:(id)arg1 imageForCellAtIndex:(int)arg2 ;
-(void)swoosh:(id)arg1 didSelectCellAtIndex:(int)arg2 ;
-(id)initWithLockups:(id)arg1 title:(id)arg2 ;
-(id)initWithItems:(id)arg1 title:(id)arg2 ;
-(SKUIResourceLoader *)resourceLoader;
@end
