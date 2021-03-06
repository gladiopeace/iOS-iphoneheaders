/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:34 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Health.app/Health
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITabBarController.h>
#import <Health/MFMailComposeViewControllerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, MFMailComposeViewController, WDExportManager, NSArray, NSString;

@interface WDTabBarController : UITabBarController <MFMailComposeViewControllerDelegate> {

	NSObject*<OS_dispatch_queue> _exportQueue;
	unsigned _backgroundTask;
	MFMailComposeViewController* _mailComposeVC;
	WDExportManager* _exportManager;
	NSArray* _controlsToDisable;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithControllerManager:(id)arg1 ;
-(void)verifyExport;
-(void)setControlsToDisableDuringExport:(id)arg1 ;
-(char)shouldAutorotate;
-(unsigned)supportedInterfaceOrientations;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
-(void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3 ;
@end

