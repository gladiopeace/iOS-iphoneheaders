/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:57:55 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@protocol SBLockOverlayViewControllerDelegate;
@interface SBLockOverlayViewController : UIViewController {

	<SBLockOverlayViewControllerDelegate>* _delegate;

}

@property (assign,nonatomic) <SBLockOverlayViewControllerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)overlayView;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
@end

