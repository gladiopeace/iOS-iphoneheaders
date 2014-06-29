/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:34 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MFDragSource <NSObject>
@required
-(id)viewForDragSource;
-(id)viewForDraggedItem:(id)arg1 atScale:(double)arg2;
-(bool)allowsDrag;
-(void)dragCompletedForItem:(id)arg1 success:(bool)arg2;
-(CGRect*)frameForDraggedItem:(id)arg1;
-(void)dragStartedWithItem:(id)arg1;
-(void)animatePlaceholderForDragFailure:(id)arg1;
-(id)dragInitiatedAtPoint:(CGPoint)arg1;
@end

