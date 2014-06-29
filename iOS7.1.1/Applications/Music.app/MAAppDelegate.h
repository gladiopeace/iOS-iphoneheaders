/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:12 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Music.app/Music
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Music/MusicTabBarControllerDelegate.h>
#import <MusicUI/RUCreateStationViewControllerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <Music/MCDCarDisplayServiceProvider.h>
#import <UIKit/UIApplicationTestingDelegate.h>

@class MCDRootController, MPReportingController, NSDate, MusicPlayerServerDelegate, MusicTabBarController, UIWindow, UINavigationController;

@interface MAAppDelegate : NSObject <MusicTabBarControllerDelegate, RUCreateStationViewControllerDelegate, UINavigationControllerDelegate, MCDCarDisplayServiceProvider, UIApplicationTestingDelegate> {

	MCDRootController* _carDisplayController;
	MPReportingController* _globalReportingController;
	NSDate* _lastArchivedPlaybackQueueDate;
	MusicPlayerServerDelegate* _musicPlayerServerDelegate;
	MusicTabBarController* _tabBarController;
	UIWindow* _window;

}

@property (nonatomic,readonly) UINavigationController * radioNavigationController; 
@property (nonatomic,readonly) MusicTabBarController * tabBarController;                        //@synthesize tabBarController=_tabBarController - In the implementation block
@property (nonatomic,retain) UIWindow * window;                                                 //@synthesize window=_window - In the implementation block
@property (nonatomic,readonly) MCDRootController * carDisplayController;                        //@synthesize carDisplayController=_carDisplayController - In the implementation block
-(void)_migrateTabBarOrderingIfNeeded;
-(id)_storeClientController;
-(void)_screenDidConnectNotification:(id)arg1 ;
-(void)_screenDidDisconnectNotification:(id)arg1 ;
-(void)_setIAmTheIPod;
-(void)_attachToStarkScreen:(id)arg1 ;
-(BOOL)_MAApplication:(id)arg1 willFinishLaunchingWithOptions:(id)arg2 ;
-(void)_endDiscoveringMediaLibrariesIfNecessary;
-(void)_pushNowPlayingViewControllerAnimated:(BOOL)arg1 ;
-(void)_showAddSharedStationFailedAlertWithErrorCode:(int)arg1 ;
-(void)scrollViewList:(id)arg1 withOptions:(id)arg2 andIdentifier:(id)arg3 ;
-(void)switchViewTest:(id)arg1 withOptions:(id)arg2 andIdentifier:(id)arg3 ;
-(id)_controllerFromIdentifier:(id)arg1 ;
-(void)changeRepeatType:(unsigned)arg1 ;
-(void)changeShuffleType:(unsigned)arg1 ;
-(void)_itemDidChangeNotification:(id)arg1 ;
-(void)_isExplicitTracksEnabledDidChangeNotification:(id)arg1 ;
-(void)dealloc;
-(id)window;
-(BOOL)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationWillResignActive:(id)arg1 ;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(BOOL)application:(id)arg1 shouldSaveApplicationState:(id)arg2 ;
-(BOOL)application:(id)arg1 shouldRestoreApplicationState:(id)arg2 ;
-(BOOL)application:(id)arg1 willFinishLaunchingWithOptions:(id)arg2 ;
-(void)applicationDidFinishLaunching:(id)arg1 ;
-(void)setWindow:(id)arg1 ;
-(void)application:(id)arg1 willEncodeRestorableStateWithCoder:(id)arg2 ;
-(void)application:(id)arg1 didDecodeRestorableStateWithCoder:(id)arg2 ;
-(id)tabBarController;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(BOOL)application:(id)arg1 runTest:(id)arg2 options:(id)arg3 ;
-(void).cxx_destruct;
-(void)reloadPlayer:(id)arg1 radioStation:(id)arg2 options:(id)arg3 completion:(/*^block*/ id)arg4 ;
-(void)reloadPlayer:(id)arg1 mediaQuery:(id)arg2 options:(id)arg3 ;
-(void)reloadPlayer:(id)arg1 geniusMixPlaylist:(id)arg2 options:(id)arg3 ;
-(void)_availableMediaLibrariesDidChangeNotification:(id)arg1 ;
-(void)music_tabBarController:(id)arg1 didSelectViewController:(id)arg2 ;
-(void)music_tabBarControllerDidChangeOrderedViewControllerIdentifiers:(id)arg1 ;
-(id)radioNavigationController;
-(void)completeAdditionOfStation:(id)arg1 withPrefixItem:(id)arg2 keepPlayingCurrentItemIfPossible:(BOOL)arg3 animated:(BOOL)arg4 ;
-(void)addStationWithDictionary:(id)arg1 completionHandler:(/*^block*/ id)arg2 ;
-(id)carDisplayController;
-(void)prepareToAddStation;
-(BOOL)makeRadioVisible;
-(void)scrollStationToVisible:(id)arg1 withCompletionHandler:(/*^block*/ id)arg2 ;
-(void)createStationViewController:(id)arg1 didSelectStation:(id)arg2 ;
-(void)createStationViewControllerDidFinish:(id)arg1 ;
-(void)presentAddStation;
@end

