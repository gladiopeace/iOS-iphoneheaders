/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:42 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDKnobTracker.h>

@interface TSDMediaReplaceKnobTracker : TSDKnobTracker
-(id)initWithRep:(id)arg1 knob:(id)arg2 ;
-(void)endMovingKnob;
-(bool)shouldHideSelectionHighlight;
-(void)moveKnobToRepPosition:(CGPoint)arg1 ;
-(bool)shouldHideOtherKnobs;
-(bool)operationShouldBeDynamic;
-(bool)allowHUDToDisplay;
-(id)mediaRep;
-(void)p_setTapToReplaceButtonHighlighted:(bool)arg1 ;
-(void)showReplaceImageUI;
@end

