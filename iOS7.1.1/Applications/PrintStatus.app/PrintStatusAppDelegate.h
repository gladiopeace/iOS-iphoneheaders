/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:14 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/PrintStatus.app/PrintStatus
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PrintStatus/PrintStatus-Structs.h>
#import <UIKit/UIResponder.h>
#import <UIKit/UIApplicationDelegate.h>

@class UIWindow, PrintStatusViewController;

@interface PrintStatusAppDelegate : UIResponder <UIApplicationDelegate> {

	UIWindow* _window;
	PrintStatusViewController* _viewController;

}

@property (nonatomic,retain) UIWindow * window;                                       //@synthesize window=_window - In the implementation block
@property (nonatomic,retain) PrintStatusViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
-(void)dealloc;
-(id)window;
-(BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2 ;
-(void)setWindow:(id)arg1 ;
-(void)setViewController:(id)arg1 ;
-(id)viewController;
@end

