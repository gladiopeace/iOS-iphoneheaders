/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:54 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIWindow.h>

@interface UIAutoRotatingWindow : UIWindow {

	long long _interfaceOrientation;
	bool _unknownOrientation;

}
+(id)sharedPopoverHostingWindow;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)_didRemoveSubview:(id)arg1 ;
-(void)updateForOrientation:(long long)arg1 ;
@end

