/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:16:22 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <assistivetouchd/assistivetouchd-Structs.h>
#import <assistivetouchd/SCATCursorLayer.h>

@interface SCATForegroundCursorLayer : SCATCursorLayer
-(id)_strokeColorForTheme:(int)arg1 level:(int)arg2 highVisibility:(BOOL)arg3 options:(int)arg4 ;
-(double)_boundsInsetForTheme:(int)arg1 level:(int)arg2 highVisibility:(BOOL)arg3 options:(int)arg4 ;
-(double)_borderWidthForTheme:(int)arg1 level:(int)arg2 highVisibility:(BOOL)arg3 options:(int)arg4 ;
-(id)_borderPatternForTheme:(int)arg1 level:(int)arg2 highVisibility:(BOOL)arg3 options:(int)arg4 ;
-(void)updatePath:(id)arg1 frame:(CGRect)arg2 isSimpleRect:(BOOL)arg3 animated:(BOOL)arg4 options:(int)arg5 ;
@end

