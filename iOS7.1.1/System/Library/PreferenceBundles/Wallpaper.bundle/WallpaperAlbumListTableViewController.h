/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:35 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PreferenceBundles/Wallpaper.bundle/Wallpaper
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Wallpaper/Wallpaper-Structs.h>
#import <PhotosUI/PUAlbumListTableViewController.h>
#import <Preferences/PSController.h>

@protocol PSController;
@class WallpaperAlbumListTableViewControllerSpec, UIViewController, PSRootController, PSSpecifier;

@interface WallpaperAlbumListTableViewController : PUAlbumListTableViewController <PSController> {

	WallpaperAlbumListTableViewControllerSpec* _wallpaperAlbumListTableViewSpec;
	UIViewController<PSController>* _parentController;
	PSRootController* _rootController;
	PSSpecifier* _specifier;
	unsigned long long _albumCount;

}

@property (nonatomic,retain) WallpaperAlbumListTableViewControllerSpec * wallpaperAlbumListTableViewSpec;              //@synthesize wallpaperAlbumListTableViewSpec=_wallpaperAlbumListTableViewSpec - In the implementation block
@property (assign,nonatomic) UIViewController<PSController> * parentController;                                        //@synthesize parentController=_parentController - In the implementation block
@property (assign,nonatomic) PSRootController * rootController;                                                        //@synthesize rootController=_rootController - In the implementation block
@property (nonatomic,retain) PSSpecifier * specifier;                                                                  //@synthesize specifier=_specifier - In the implementation block
@property (assign,nonatomic) unsigned long long albumCount;                                                            //@synthesize albumCount=_albumCount - In the implementation block
-(id)specifier;
-(void)setSpecifier:(id)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)suspend;
-(long long)tableViewStyle;
-(void).cxx_destruct;
-(void)handleMagicCategorySelection:(id)arg1 ;
-(void)setAlbumCount:(unsigned long long)arg1 ;
-(void)_navigateToDynamic;
-(void)_navigateToVR;
-(void)_navigateToPanorama;
-(void)_navigateToStills;
-(unsigned long long)albumCount;
-(id)wallpaperAlbumListTableViewSpec;
-(void)_navigateToWallpaperGridControllerWithCategoryKey:(id)arg1 andTitle:(id)arg2 ;
-(void)setWallpaperAlbumListTableViewSpec:(id)arg1 ;
-(void)handleURL:(id)arg1 ;
-(id)parentController;
-(void)setParentController:(id)arg1 ;
-(void)assetContainerListDidChange:(id)arg1 ;
-(id)initWithSpec:(id)arg1 ;
-(void)setAlbumList:(id)arg1 ;
-(id)backgroundColorForTableView;
-(bool)canShowSyncProgress;
-(NSObject*)albumAtIndexPath:(id)arg1 ;
-(void)navigateToAssetContainer:(id)arg1 animated:(bool)arg2 completion:(/*^block*/ id)arg3 ;
-(bool)showsEmptyPlaceholderWhenEmpty;
-(void)setTitleForCell:(id)arg1 withAlbum:(NSObject*)arg2 ;
-(bool)showsTopPlaceholdersSection;
-(bool)showsBottomPlaceholdersSection;
-(id)rootController;
-(void)formSheetViewWillDisappear;
-(void)popupViewWillDisappear;
-(void)setRootController:(id)arg1 ;
-(void)pushController:(id)arg1 ;
-(bool)canBeShownFromSuspendedState;
-(void)setPreferenceValue:(id)arg1 specifier:(id)arg2 ;
-(id)readPreferenceValue:(id)arg1 ;
-(void)didLock;
-(void)willUnlock;
-(void)didUnlock;
-(void)didWake;
-(void)willResignActive;
-(void)willBecomeActive;
-(void)statusBarWillAnimateByHeight:(double)arg1 ;
-(void)popupViewDidDisappear;
-(void)formSheetViewDidDisappear;
@end

