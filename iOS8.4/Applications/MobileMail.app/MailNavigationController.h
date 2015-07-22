/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:48 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UINavigationController.h>

@class NSArray;

@interface MailNavigationController : UINavigationController {

	NSArray* _previousViewControllers;
	char _hasAppeared;
	char _poppingFromLeft;
	char _transferNavigationControllerShown;

}
-(id)mf_statusBarSubtitleString;
-(void)removeViewController:(id)arg1 ;
-(char)isPopping;
-(unsigned)mf_unreadCountForDisplay;
-(void)becomePreparedForTransferOfMessages:(id)arg1 options:(int)arg2 animated:(char)arg3 ;
-(void)resignPreparedForTransferOfMessages:(char)arg1 ;
-(char)canShowTransferNavigationController;
-(void)showTransferNavigationController:(id)arg1 fromViewController:(id)arg2 animated:(char)arg3 ;
-(void)hideTransferNavigationControllerFromViewController:(id)arg1 animated:(char)arg2 ;
-(void)pushViewControllersFromLeft:(id)arg1 animated:(char)arg2 ;
-(id)popViewControllersPushedFromLeftAnimated:(char)arg1 ;
-(void)_didPopFromLeft;
-(void)dealloc;
-(id)popViewControllerAnimated:(char)arg1 ;
-(char)shouldAutorotate;
-(void)viewWillAppear:(char)arg1 ;
-(char)_viewControllerUnderlapsStatusBar;
-(void)removeChildViewController:(id)arg1 notifyDidMove:(char)arg2 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)removeChildViewController:(id)arg1 ;
-(id)popToViewController:(id)arg1 animated:(char)arg2 ;
-(void)didShowViewController:(id)arg1 animated:(char)arg2 ;
@end
