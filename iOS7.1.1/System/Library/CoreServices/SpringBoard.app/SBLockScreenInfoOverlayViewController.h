/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:57:54 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBLockOverlayViewController.h>
#import <SpringBoard/SBLockOverlayViewDelegate.h>

@class SBLockScreenInfoOverlayView, NSString;

@interface SBLockScreenInfoOverlayViewController : SBLockOverlayViewController <SBLockOverlayViewDelegate> {

	SBLockScreenInfoOverlayView* _overlayView;
	NSString* _title;

}

@property (assign,nonatomic) <SBLockScreenInfoOverlayDelegate> * delegate; 
-(void)handleTapGestureFromView:(id)arg1 ;
-(void)dealloc;
-(id)initWithTitle:(id)arg1 ;
-(void)loadView;
@end

