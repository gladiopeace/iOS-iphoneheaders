/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:57 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebCore/DOMEvent.h>

@class DOMAbstractView;

@interface DOMUIEvent : DOMEvent

@property (readonly) DOMAbstractView * view; 
@property (readonly) int detail; 
@property (readonly) int keyCode; 
@property (readonly) int charCode; 
@property (readonly) int layerX; 
@property (readonly) int layerY; 
@property (readonly) int pageX; 
@property (readonly) int pageY; 
@property (readonly) int which; 
-(id)view;
-(int)keyCode;
-(int)charCode;
-(int)pageX;
-(int)pageY;
-(int)detail;
-(int)layerX;
-(int)layerY;
-(int)which;
-(void)initUIEvent:(id)arg1 canBubble:(bool)arg2 cancelable:(bool)arg3 view:(id)arg4 detail:(int)arg5 ;
-(void)initUIEvent:(id)arg1 :(bool)arg2 :(bool)arg3 :(id)arg4 :(int)arg5 ;
@end

