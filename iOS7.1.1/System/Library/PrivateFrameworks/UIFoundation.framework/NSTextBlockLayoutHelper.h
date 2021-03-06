/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:39 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <UIFoundation/UIFoundation-Structs.h>
@class NSTextTableBlock;

@interface NSTextBlockLayoutHelper : NSObject {

	NSTextTableBlock* _block;
	NSRange _charRange;
	NSRange _glyphRange;
	CGRect _layoutRect;
	CGRect _boundsRect;
	double _lMargin;
	double _lBorder;
	double _lPadding;
	double _tMargin;
	double _tBorder;
	double _tPadding;
	double _width;
	double _height;
	double _rPadding;
	double _rBorder;
	double _rMargin;
	double _bPadding;
	double _bBorder;
	double _bMargin;

}
-(void)dealloc;
-(id)description;
-(id)initWithTextBlock:(id)arg1 charRange:(NSRange)arg2 glyphRange:(NSRange)arg3 layoutRect:(CGRect)arg4 boundsRect:(CGRect)arg5 containerWidth:(double)arg6 allowMargins:(bool)arg7 collapseBorders:(bool)arg8 allowPadding:(bool)arg9 ;
-(id)initWithTextBlock:(id)arg1 charRange:(NSRange)arg2 text:(id)arg3 layoutManager:(id)arg4 containerWidth:(double)arg5 collapseBorders:(bool)arg6 ;
-(id)initWithTextBlock:(id)arg1 charIndex:(unsigned long long)arg2 text:(id)arg3 layoutManager:(id)arg4 containerWidth:(double)arg5 collapseBorders:(bool)arg6 ;
-(id)initWithTextTable:(id)arg1 charIndex:(unsigned long long)arg2 text:(id)arg3 layoutManager:(id)arg4 containerWidth:(double)arg5 collapseBorders:(bool)arg6 ;
@end

