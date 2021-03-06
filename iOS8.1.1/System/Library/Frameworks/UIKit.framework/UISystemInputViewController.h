/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:29:25 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIInputViewController.h>

@protocol UITextInput;
@class NSMutableDictionary, UIResponder, UIKeyboard, NSArray;

@interface UISystemInputViewController : UIInputViewController {

	NSMutableDictionary* _accessoryViews;
	NSMutableDictionary* _accessoryConstraints;
	UIResponder*<UITextInput> _persistentDelegate;
	UIKeyboard* _keyboard;
	NSArray* _keyboardConstraits;

}

@property (nonatomic,retain) UIResponder*<UITextInput> persistentDelegate;              //@synthesize persistentDelegate=_persistentDelegate - In the implementation block
@property (nonatomic,retain) UIKeyboard * keyboard;                                     //@synthesize keyboard=_keyboard - In the implementation block
@property (nonatomic,retain) NSArray * keyboardConstraits;                              //@synthesize keyboardConstraits=_keyboardConstraits - In the implementation block
+(BOOL)_requiresProxyInterface;
-(void)dealloc;
-(id)init;
-(BOOL)_disableAutomaticKeyboardBehavior;
-(void)viewWillLayoutSubviews;
-(void)loadView;
-(void)updateViewConstraints;
-(UIKeyboard *)keyboard;
-(id)_keyboard;
-(void)setKeyboard:(UIKeyboard *)arg1 ;
-(id)accessoryViewForEdge:(long long)arg1 ;
-(NSArray *)keyboardConstraits;
-(id)constraintFromView:(id)arg1 attribute:(long long)arg2 toView:(id)arg3 attribute:(long long)arg4 ;
-(void)setKeyboardConstraits:(NSArray *)arg1 ;
-(void)setConstraits:(id)arg1 forEdge:(long long)arg2 ;
-(id)constraitsForEdge:(long long)arg1 ;
-(UIResponder*<UITextInput>)persistentDelegate;
-(void)setAccessoryView:(id)arg1 forEdge:(long long)arg2 ;
-(void)setPersistentDelegate:(UIResponder*<UITextInput>)arg1 ;
@end

