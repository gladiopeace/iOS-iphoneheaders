/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:52 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol UIKeyboardImplGeometryDelegate
@property (assign,getter=isMinimized,nonatomic) bool minimized; 
@required
-(bool)isActive;
-(bool)shouldSaveMinimizationState;
-(bool)isMinimized;
-(void)prepareForImplBoundsHeightChange:(double)arg1 suppressNotification:(bool)arg2;
-(void)implBoundsHeightChangeDone:(double)arg1 suppressNotification:(bool)arg2;
-(void)setMinimized:(bool)arg1;
-(bool)canDismiss;
@end

