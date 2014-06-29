/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:43 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <VectorKit/VectorKit-Structs.h>
@class VKImage, VGLUncompressedTexture;

@interface VGLIcon : NSObject {

	VKImage* _image;
	CGRect _textureRect;
	int _iconTag;

}

@property (nonatomic,readonly) int iconTag;                                   //@synthesize iconTag=_iconTag - In the implementation block
@property (nonatomic,readonly) float verticalPadding; 
@property (nonatomic,readonly) VGLUncompressedTexture * texture; 
@property (nonatomic,readonly) CGRect textureRect; 
-(void)dealloc;
-(id)initWithImage:(id)arg1 ;
-(id).cxx_construct;
-(id)texture;
-(CGRect)textureRect;
-(VGLColor)quadAtPixel:(Vec2Imp<float>)arg1 ;
-(VGLColor)rectAtPixel:(Vec2Imp<float>)arg1 ;
-(float)verticalPadding;
-(id)initWithPackedIcon:(id)arg1 imageAtlas:(id)arg2 quadSize:(CGSize)arg3 ;
-(BRectImp<float>)textureCoordinateRect;
-(void)setIconTagFromName:(id)arg1 ;
-(bool)isCityDot;
-(int)iconTag;
@end

