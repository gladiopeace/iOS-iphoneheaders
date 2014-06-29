/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:19:25 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/AccessibilityBundles/MobileTimer.axbundle/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <UIKit/UIAccessibilityElement.h>

@class UILabel;

@interface UIAccessibilityElementTimerControl : UIAccessibilityElement {

	UILabel* _icon;
	UILabel* _name;

}

@property (nonatomic,retain) UILabel * icon;              //@synthesize icon=_icon - In the implementation block
@property (nonatomic,retain) UILabel * name;              //@synthesize name=_name - In the implementation block
-(void)dealloc;
-(void)setName:(id)arg1 ;
-(id)name;
-(id)accessibilityLabel;
-(void)setIcon:(id)arg1 ;
-(CGRect)accessibilityFrame;
-(unsigned long long)accessibilityTraits;
-(id)icon;
@end

