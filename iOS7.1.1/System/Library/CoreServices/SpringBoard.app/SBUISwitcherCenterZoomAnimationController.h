/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:57:55 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBUIAnimationZoomUpApp.h>

@class UIView;

@interface SBUISwitcherCenterZoomAnimationController : SBUIAnimationZoomUpApp {

	UIView* __switcherSnapshotView;

}

@property (setter=_setSwitcherSnapshotView:,nonatomic,retain) UIView * _switcherSnapshotView;              //@synthesize _switcherSnapshotView=__switcherSnapshotView - In the implementation block
-(id)_getTransitionWindow;
-(void)prepareZoom;
-(void)cleanupZoom;
-(void)_setSwitcherSnapshotView:(id)arg1 ;
-(id)_switcherSnapshotView;
@end

