/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:17 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIActionSheet.h>
#import <UIKit/UIActionSheetDelegate.h>

@class NSMutableDictionary;

@interface GKUIActionSheet : UIActionSheet <UIActionSheetDelegate> {

	NSMutableDictionary* _buttonHandlers;
	/*^block*/ id _finallyHandler;

}

@property (nonatomic,retain) NSMutableDictionary * buttonHandlers;              //@synthesize buttonHandlers=_buttonHandlers - In the implementation block
@property (nonatomic,copy) id finallyHandler;                                   //@synthesize finallyHandler=_finallyHandler - In the implementation block
+(id)actionSheetWithTitle:(id)arg1 ;
-(id)buttonHandlers;
-(long long)addButtonWithTitle:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(void)setButtonHandlers:(id)arg1 ;
-(long long)addCancelButtonWithTitle:(id)arg1 ;
-(void)setFinallyHandler:(/*^block*/ id)arg1 ;
-(/*^block*/ id)finallyHandler;
-(void)showFromBarButtonItem:(id)arg1 animated:(bool)arg2 dismissHandler:(/*^block*/ id)arg3 ;
-(long long)addDestructiveButtonWithTitle:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(void)dealloc;
-(void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(id)initWithTitle:(id)arg1 ;
@end

