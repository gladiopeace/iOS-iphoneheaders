/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:11 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileSafari/MobileSafari-Structs.h>
#import <UIKit/UINavigationController.h>
#import <MobileSafari/CloudTabViewControllerDelegate.h>
#import <MobileSafari/BrowserPanel.h>

@protocol CloudTabNavigationControllerDelegate;
@class CloudTabViewController;

@interface CloudTabNavigationController : UINavigationController <CloudTabViewControllerDelegate, BrowserPanel> {

	CloudTabViewController* _cloudTabViewController;
	<CloudTabNavigationControllerDelegate>* _cloudTabNavigationControllerDelegate;

}

@property (assign,nonatomic) <CloudTabNavigationControllerDelegate> * cloudTabNavigationControllerDelegate;              //@synthesize cloudTabNavigationControllerDelegate=_cloudTabNavigationControllerDelegate - In the implementation block
-(int)panelType;
-(int)pausesPages;
-(BOOL)ignoresPrivateBrowsingStyle;
-(BOOL)handlesAnimations;
-(void)setCloudTabNavigationControllerDelegate:(id)arg1 ;
-(void)cloudTabViewController:(id)arg1 didSelectNavigationDestination:(id)arg2 ;
-(id)cloudTabNavigationControllerDelegate;
-(void)dealloc;
-(id)init;
-(void)viewWillAppear:(BOOL)arg1 ;
-(CGSize)preferredContentSize;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
@end

