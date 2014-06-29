/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:57:54 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SBBulletinWindowClient <NSObject>
@optional
-(BOOL)requiresKeyWindow;
-(void)bulletinWindowDidBecomeKey;
-(void)bulletinWindowDidResignKey;

@required
-(void)bulletinWindowWillRotateToOrientation:(int)arg1 duration:(double)arg2;
-(void)bulletinWindowIsAnimatingRotationToOrientation:(int)arg1 duration:(double)arg2;
-(void)bulletinWindowDidRotateFromOrientation:(int)arg1;
@end

