/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:03 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol UIPDFPageViewDelegate
@optional
-(void)resetZoom:(id)arg1;
-(void)zoom:(id)arg1 to:(CGRect)arg2 atPoint:(CGPoint)arg3 kind:(int)arg4;
-(void)doubleTapIn:(id)arg1 atPoint:(CGPoint)arg2;
-(bool)shouldRecognizeTapIn:(id)arg1 atPoint:(CGPoint)arg2;
-(void)didTap:(id)arg1 atPoint:(CGPoint)arg2;
-(bool)selectionWillTrack:(id)arg1;
-(void)selectionDidEndTracking:(id)arg1;
-(Class)classForAnnotationType:(const char*)arg1;
-(void)pageWasRendered:(id)arg1;
@end

