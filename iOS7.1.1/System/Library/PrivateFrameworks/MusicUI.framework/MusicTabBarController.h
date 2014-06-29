/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:57 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITabBarController.h>

@protocol UINavigationControllerDelegate;
@class NSArray, UINavigationController, MusicRadioViewController;

@interface MusicTabBarController : UITabBarController {

	bool _isVisible;
	bool _needsReloadWhenBecomingVisible;
	bool _supportsTransiency;
	bool _displayEmptyTabs;
	NSArray* _customizableViewControllerIdentifiers;
	<UINavigationControllerDelegate>* _navigationControllerDelegate;
	NSArray* _orderedViewControllerIdentifiers;
	UINavigationController* _radioNavigationController;
	MusicRadioViewController* _radioViewController;

}

@property (nonatomic,copy) NSArray * customizableViewControllerIdentifiers;                                       //@synthesize customizableViewControllerIdentifiers=_customizableViewControllerIdentifiers - In the implementation block
@property (assign,nonatomic,__weak) <MusicTabBarControllerDelegate> * delegate; 
@property (assign,nonatomic,__weak) <UINavigationControllerDelegate> * navigationControllerDelegate;              //@synthesize navigationControllerDelegate=_navigationControllerDelegate - In the implementation block
@property (nonatomic,readonly) NSArray * visibleViewControllerIdentifiers; 
@property (nonatomic,copy) NSArray * orderedViewControllerIdentifiers;                                            //@synthesize orderedViewControllerIdentifiers=_orderedViewControllerIdentifiers - In the implementation block
@property (nonatomic,readonly) UINavigationController * radioNavigationController;                                //@synthesize radioNavigationController=_radioNavigationController - In the implementation block
@property (nonatomic,readonly) MusicRadioViewController * radioViewController;                                    //@synthesize radioViewController=_radioViewController - In the implementation block
@property (assign,nonatomic) bool supportsTransiency;                                                             //@synthesize supportsTransiency=_supportsTransiency - In the implementation block
@property (assign,nonatomic) bool displayEmptyTabs;                                                               //@synthesize displayEmptyTabs=_displayEmptyTabs - In the implementation block
+(Class)_moreNavigationControllerClass;
-(void)_mediaLibraryDidChangeNotification:(id)arg1 ;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(bool)arg1 ;
-(void)viewDidDisappear:(bool)arg1 ;
-(id)moreNavigationController;
-(void)_setSelectedViewController:(id)arg1 ;
-(void)tabBar:(id)arg1 didEndCustomizingItems:(id)arg2 changed:(bool)arg3 ;
-(void).cxx_destruct;
-(void)_availableMediaLibrariesDidChangeNotification:(id)arg1 ;
-(void)switchToShortcutIdentifier:(id)arg1 ;
-(void)_reloadTabsAnimated:(bool)arg1 ;
-(void)_isRadioEnabledDidChangeNotification:(id)arg1 ;
-(id)_mergedOrderedViewControllerIdentifiersWithViewControllers:(id)arg1 ;
-(void)_setOrderedViewControllerIdentifiers:(id)arg1 animated:(bool)arg2 notifyDelegate:(bool)arg3 ;
-(void)setOrderedViewControllerIdentifiers:(id)arg1 animated:(bool)arg2 ;
-(id)_navigationControllerIdentifierForViewControllerIdentifier:(id)arg1 ;
-(id)_navigationControllerForNavigationIdentifier:(id)arg1 ;
-(id)_orderedViewControllerIdentifiersForViewControllers:(id)arg1 ;
-(id)_viewControllerIdentifierForNavigationControllerIdentifier:(id)arg1 ;
-(bool)displayEmptyTabs;
-(void)setCustomizableViewControllerIdentifiers:(id)arg1 ;
-(void)setNavigationControllerDelegate:(id)arg1 ;
-(void)setOrderedViewControllerIdentifiers:(id)arg1 ;
-(void)setSupportsTransiency:(bool)arg1 ;
-(void)switchToPlaylistWithPID:(id)arg1 ;
-(id)visibleViewControllerIdentifiers;
-(id)_tabBarCustomizableViewControllerIdentifiers;
-(id)customizableViewControllerIdentifiers;
-(id)navigationControllerDelegate;
-(id)orderedViewControllerIdentifiers;
-(id)radioNavigationController;
-(id)radioViewController;
-(bool)supportsTransiency;
-(void)setDisplayEmptyTabs:(bool)arg1 ;
@end

