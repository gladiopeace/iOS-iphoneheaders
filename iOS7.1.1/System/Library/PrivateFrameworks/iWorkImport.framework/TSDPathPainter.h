/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:38 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol TSDPathPainter <NSObject>
@optional
-(void)drawSwatchInRect:(CGRect)arg1 inContext:(CGContextRef)arg2 forImage:(CGImageRef)arg3 swatchRect:(CGRect)arg4 wantsStroke:(bool)arg5;

@required
-(void)drawSwatchInRect:(CGRect)arg1 inContext:(CGContextRef)arg2;
-(void)paintPath:(CGPathRef)arg1 inContext:(CGContextRef)arg2;
@end

