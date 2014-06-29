/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:59 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIStatusBarItemView.h>

@class UIView;

@interface UIStatusBarBatteryItemView : UIStatusBarItemView {

	int _capacity;
	int _state;
	UIView* _accessoryView;

}
-(void)dealloc;
-(bool)updateForNewData:(id)arg1 actions:(int)arg2 ;
-(id)contentsImage;
-(double)legibilityStrength;
-(double)extraRightPadding;
-(void)_updateAccessoryImage;
-(bool)_needsAccessoryImage;
-(id)_accessoryImage;
-(double)_batteryYOffsetWithBackground:(id)arg1 ;
@end

