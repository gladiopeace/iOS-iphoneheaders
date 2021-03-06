/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:09 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIPanGestureRecognizer.h>
#import <UIKit/_UIScreenEdgePanRecognizerDelegate.h>

@class _UIScreenEdgePanRecognizer;

@interface UIScreenEdgePanGestureRecognizer : UIPanGestureRecognizer <_UIScreenEdgePanRecognizerDelegate> {

	_UIScreenEdgePanRecognizer* _recognizer;
	unsigned long long _edges;

}

@property (assign,nonatomic) unsigned long long edges;              //@synthesize edges=_edges - In the implementation block
-(void)dealloc;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setEdges:(unsigned long long)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)reset;
-(double)_edgeRegionSize;
-(void)screenEdgePanRecognizerStateDidChange:(id)arg1 ;
-(bool)isRequiringLongPress;
-(bool)_shouldTryToBeginWithEvent:(id)arg1 ;
-(unsigned long long)edges;
@end

