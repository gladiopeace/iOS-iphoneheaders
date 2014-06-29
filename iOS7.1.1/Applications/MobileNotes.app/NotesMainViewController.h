/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:08 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UISplitViewController.h>
#import <UIKit/UINavigationControllerDelegate.h>

@class UINavigationController, UIImageView;

@interface NotesMainViewController : UISplitViewController <UINavigationControllerDelegate> {

	UINavigationController* _leftNavController;
	UINavigationController* _rightNavController;
	UIImageView* _leftImageView;
	BOOL _restorePopover;

}

@property (readonly) UINavigationController * leftNavController;               //@synthesize leftNavController=_leftNavController - In the implementation block
@property (readonly) UINavigationController * rightNavController;              //@synthesize rightNavController=_rightNavController - In the implementation block
-(id)leftNavController;
-(id)rightNavController;
-(void)setRightNavController:(id)arg1 leftNavController:(id)arg2 ;
-(void)updateViewControllers;
-(void)dealloc;
-(void)loadView;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)_setupRoundedCorners;
-(void).cxx_destruct;
@end

