/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:04 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableView.h>

@class UIKeyboardMenuView;

@interface UIInputSwitcherTableView : UITableView {

	UIKeyboardMenuView* _menu;

}

@property (assign,nonatomic) UIKeyboardMenuView * menu;              //@synthesize menu=_menu - In the implementation block
-(void)selectRowAtIndexPath:(id)arg1 animated:(bool)arg2 scrollPosition:(long long)arg3 ;
-(void)deselectRowAtIndexPath:(id)arg1 animated:(bool)arg2 ;
-(id)menu;
-(void)setMenu:(id)arg1 ;
@end

