/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:46 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKShieldArtwork.h>

@class NSDictionary;

@interface _VKGenericShieldArtwork : VKShieldArtwork {

	double _leftCap;
	double _rightCap;
	double _baseline;
	double _leftPadding;
	double _rightPadding;
	NSDictionary* _stringAttributes;
	double _lineHeight;
	CGColorRef _shadowColor;
	CGSize _shadowOffset;
	double _shadowSize;
	unsigned long long _maxLineCount;
	double _lineSpacing;
	CGImageRef _image;

}
-(void)dealloc;
-(CGSize)size;
-(id).cxx_construct;
-(CGImageRef)newImageWithShieldText:(id)arg1 allowMultiline:(bool)arg2 centerPoint:(CGPoint*)arg3 ;
-(id)initWithImage:(CGImageRef)arg1 scale:(double)arg2 leftPadding:(double)arg3 rightPadding:(double)arg4 textColor:(VGLColor)arg5 baseline:(double)arg6 leftCap:(double)arg7 rightCap:(double)arg8 shouldStroke:(bool)arg9 strokeWidth:(double)arg10 strokeColor:(VGLColor)arg11 shouldShadow:(bool)arg12 shadowOffset:(CGSize)arg13 shadowSize:(double)arg14 shadowColor:(VGLColor)arg15 fontName:(id)arg16 fontSize:(double)arg17 maxLineCount:(unsigned long long)arg18 lineSpacing:(double)arg19 ;
-(CGSize)sizeWithTextWidth:(float)arg1 ;
@end

