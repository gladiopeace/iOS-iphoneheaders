/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:09 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileSafari/MobileSafari-Structs.h>
#import <UIKit/UINavigationController.h>
#import <MobileSafari/BrowserPanel.h>
#import <MobileSafari/BackForwardTableViewControllerDelegate.h>

@class BackForwardTableViewController, NSArray;

@interface BackForwardNavigationController : UINavigationController <BrowserPanel, BackForwardTableViewControllerDelegate> {

	BackForwardTableViewController* _tableViewController;
	int _savedStatusBarStyle;

}

@property (nonatomic,copy) NSArray * backForwardList; 
@property (assign,nonatomic) BOOL reversesListOrder; 
-(int)panelType;
-(int)pausesPages;
-(BOOL)ignoresPrivateBrowsingStyle;
-(void)setBackForwardList:(id)arg1 ;
-(BOOL)reversesListOrder;
-(void)setReversesListOrder:(BOOL)arg1 ;
-(void)backForwardTableViewController:(id)arg1 didSelectWebHistoryItem:(id)arg2 ;
-(BOOL)shouldShowButtonBar;
-(void)dealloc;
-(id)init;
-(void)viewWillAppear:(BOOL)arg1 ;
-(CGSize)preferredContentSize;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)rotatingFooterView;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(id)toolbarItems;
-(void)done;
-(id)backForwardList;
@end

