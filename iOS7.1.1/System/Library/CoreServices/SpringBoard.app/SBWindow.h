/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:58:01 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIWindow.h>

@class SBRecycledViewsContainer;

@interface SBWindow : UIWindow {

	SBRecycledViewsContainer* _recycledViewsContainerView;
	int _jailBehavior;

}

@property (nonatomic,readonly) UIEdgeInsets jailInsets; 
+(CGRect)_actualBoundsForScreen:(id)arg1 withJailBehavior:(int)arg2 ;
+(UIEdgeInsets)_jailInsetsForScreen:(id)arg1 ;
-(id)initWithScreen:(id)arg1 jailBehavior:(int)arg2 ;
-(id)recycledViewsContainer;
-(UIEdgeInsets)jailInsets;
-(void)setAlphaAndObeyBecauseIAmTheWindowManager:(float)arg1 ;
-(id)initWithScreen:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setAlpha:(float)arg1 ;
-(BOOL)_isConstrainedByScreenJail;
-(BOOL)_isClippedByScreenJail;
@end

