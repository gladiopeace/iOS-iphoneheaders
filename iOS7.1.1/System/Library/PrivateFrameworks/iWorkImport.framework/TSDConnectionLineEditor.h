/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:41 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSDShapeEditor.h>

@class NSSet;

@interface TSDConnectionLineEditor : TSDShapeEditor {

	NSSet* mSelectedObjectsSupportingConnectionLineAttributes;

}
+(id)commandForSettingConnectionLineLayout:(id)arg1 toType:(int)arg2 ;
-(id)initWithInteractiveCanvasController:(id)arg1 ;
-(int)canPerformEditorAction:(SEL)arg1 withSender:(id)arg2 ;
-(id)selectedObjectsSupportingConnectionLineAttributes;
-(void)toggleLineType:(id)arg1 ;
-(void)setConnectionLineType:(int)arg1 ;
-(double)p_outsetOnLeft:(bool)arg1 ;
-(void)p_didChangeConnectionOutset:(double)arg1 onLeft:(bool)arg2 ;
-(double)leftOutset;
-(double)rightOutset;
-(void)beginChangingConnectionOutset;
-(void)didChangeConnectionLeftOutset:(double)arg1 ;
-(void)didChangeConnectionRightOutset:(double)arg1 ;
-(void)endChangingConnectionOutset;
-(void)dealloc;
-(void)canvasDidLayout;
@end

