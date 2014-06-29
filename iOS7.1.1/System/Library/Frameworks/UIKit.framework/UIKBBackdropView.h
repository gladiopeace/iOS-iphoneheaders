/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:51 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UIBackdropView.h>

@class NSMutableArray, UIKeyboardBackdropCornerView;

@interface UIKBBackdropView : _UIBackdropView {

	bool _primaryBackdrop;
	NSMutableArray* _secondaryBackdrops;
	UIKeyboardBackdropCornerView* _backdropCornerView;
	bool _hasUpdatedFrame;

}

@property (nonatomic,readonly) bool _hasUpdatedFrame;              //@synthesize hasUpdatedFrame=_hasUpdatedFrame - In the implementation block
+(id)unconditionalTriggerNotificationNames;
+(void)overlayRelevantSettings:(id)arg1 ontoSettings:(id)arg2 ;
+(id)triggerNotificationNames;
+(void)_registerSecondaryBackdropView:(id)arg1 ;
+(void)_unregisterSecondaryBackdropView:(id)arg1 ;
+(void)_updatedSecondaryBackdropsWithSettings:(id)arg1 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)updateFrame:(CGRect)arg1 withCorners:(int)arg2 ;
-(void)applySettings:(id)arg1 ;
-(void)triggerUpdate:(id)arg1 ;
-(void)transitionToStyle:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 primaryBackdrop:(bool)arg3 ;
-(int)textEffectsVisibilityLevel;
-(void)willCallRenderInContextOnBackdropViewLayer;
-(void)didCallRenderInContextOnBackdropViewLayer;
-(bool)_hasUpdatedFrame;
@end

