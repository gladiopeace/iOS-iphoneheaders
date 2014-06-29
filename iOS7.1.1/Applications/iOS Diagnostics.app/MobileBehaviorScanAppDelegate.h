/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:18 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/iOS Diagnostics.app/iOS Diagnostics
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIApplication.h>

@class UIWindow, UINavigationController, MainViewController, NSString;

@interface MobileBehaviorScanAppDelegate : UIApplication {

	UIWindow* window;
	UINavigationController* navigationController;
	MainViewController* mainViewController;
	NSString* launchingApp;

}

@property (retain) NSString * launchingApp; 
@property (nonatomic,retain) UIWindow * window; 
@property (nonatomic,retain) UINavigationController * navigationController; 
@property (nonatomic,retain) MainViewController * mainViewController; 
-(void)setLaunchingApp:(id)arg1 ;
-(id)launchingApp;
-(void)closeApplication;
-(id)mainViewController;
-(void)setMainViewController:(id)arg1 ;
-(void)dealloc;
-(id)window;
-(void)applicationWillTerminate:(id)arg1 ;
-(BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2 ;
-(void)setWindow:(id)arg1 ;
-(id)navigationController;
-(void)setNavigationController:(id)arg1 ;
@end

