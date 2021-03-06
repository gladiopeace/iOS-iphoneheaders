/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:57 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIViewControllerKeyboardContextTransitioning.h>

@protocol UIInputViewAnimationHost;
@class UIView, _UIViewControllerTransitionContext, NSString;

@interface UIInputViewAnimationControllerViewControllerContext : NSObject <UIViewControllerKeyboardContextTransitioning> {

	_UIViewControllerTransitionContext* _context;
	id<UIInputViewAnimationHost> _host;
	UIView* _from;
	UIView* _to;
	CGRect _fromRect;
	CGRect _toRect;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<UIViewControllerContextTransitioning> mainContext; 
@property (nonatomic,readonly) UIView * fromKeyboard; 
@property (nonatomic,readonly) CGRect fromKeyboardFrame; 
@property (nonatomic,readonly) UIView * toKeyboard; 
@property (nonatomic,readonly) CGRect toKeyboardFrame; 
+(id)contextWithHost:(id)arg1 startPlacement:(id)arg2 endPlacement:(id)arg3 transitionContext:(id)arg4 ;
-(void)dealloc;
-(UIView *)toKeyboard;
-(UIView *)fromKeyboard;
-(CGRect)fromKeyboardFrame;
-(CGRect)toKeyboardFrame;
-(id)initWithHost:(id)arg1 startPlacement:(id)arg2 endPlacement:(id)arg3 transitionContext:(id)arg4 ;
-(id<UIViewControllerContextTransitioning>)mainContext;
@end

