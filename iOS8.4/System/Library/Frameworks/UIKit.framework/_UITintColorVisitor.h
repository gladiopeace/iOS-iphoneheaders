/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:19:03 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UIViewVisitor.h>

@class UIView;

@interface _UITintColorVisitor : _UIViewVisitor {

	unsigned long long _reasons;
	BOOL _visitedViewIsWindow;
	BOOL _viewHasDefinedTintColor;
	BOOL _viewHasNonAutomaticTintAdjustmentMode;
	UIView* _originalVisitedView;
	UIView* _changedSubview;

}
-(id)initWithNotificationReasons:(unsigned long long)arg1 ;
-(id)initWithTraversalDirection:(unsigned long long)arg1 ;
-(BOOL)_prepareVisitor:(id)arg1 toVisitView:(id)arg2 changedSubview:(id)arg3 previousWindow:(id)arg4 previousSuperview:(id)arg5 ;
-(BOOL)_visitView:(id)arg1 ;
-(void)_prepareForView:(id)arg1 trackingHierarchy:(BOOL)arg2 ;
@end
