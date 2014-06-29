/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:07 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol UIApplicationDelegate <NSObject>
@property (nonatomic,retain) UIWindow * window; 
@optional
-(id)window;
-(bool)application:(id)arg1 handleOpenURL:(id)arg2;
-(bool)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
-(void)applicationDidReceiveMemoryWarning:(id)arg1;
-(void)applicationWillTerminate:(id)arg1;
-(void)applicationSignificantTimeChange:(id)arg1;
-(void)application:(id)arg1 willChangeStatusBarOrientation:(long long)arg2 duration:(double)arg3;
-(void)application:(id)arg1 didChangeStatusBarOrientation:(long long)arg2;
-(void)application:(id)arg1 willChangeStatusBarFrame:(CGRect)arg2;
-(void)application:(id)arg1 didChangeStatusBarFrame:(CGRect)arg2;
-(void)applicationDidBecomeActive:(id)arg1;
-(void)applicationWillResignActive:(id)arg1;
-(void)applicationDidEnterBackground:(id)arg1;
-(void)applicationWillEnterForeground:(id)arg1;
-(bool)application:(id)arg1 shouldSaveApplicationState:(id)arg2;
-(bool)application:(id)arg1 shouldRestoreApplicationState:(id)arg2;
-(unsigned long long)application:(id)arg1 supportedInterfaceOrientationsForWindow:(id)arg2;
-(bool)application:(id)arg1 willFinishLaunchingWithOptions:(id)arg2;
-(bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
-(void)applicationDidFinishLaunching:(id)arg1;
-(void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2;
-(void)application:(id)arg1 didReceiveLocalNotification:(id)arg2;
-(void)setWindow:(id)arg1;
-(void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2 fetchCompletionHandler:(/*^block*/ id)arg3;
-(void)application:(id)arg1 handleEventsForBackgroundURLSession:(id)arg2 completionHandler:(/*^block*/ id)arg3;
-(void)application:(id)arg1 performFetchWithCompletionHandler:(/*^block*/ id)arg2;
-(void)application:(id)arg1 willEncodeRestorableStateWithCoder:(id)arg2;
-(id)application:(id)arg1 viewControllerWithRestorationIdentifierPath:(id)arg2 coder:(id)arg3;
-(void)application:(id)arg1 didDecodeRestorableStateWithCoder:(id)arg2;
-(void)applicationProtectedDataWillBecomeUnavailable:(id)arg1;
-(void)applicationProtectedDataDidBecomeAvailable:(id)arg1;
-(void)application:(id)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg2;
-(void)application:(id)arg1 didFailToRegisterForRemoteNotificationsWithError:(id)arg2;
@end

