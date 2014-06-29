/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:47 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CoreFoundation/NSCopying.h>

@class NSString;

@interface VKPGenericShieldVariant : PBCodable <NSCopying> {

	SCD_Struct_VK291* _layers;
	unsigned long long _layersCount;
	unsigned long long _layersSpace;
	NSString* _fontName;
	float _fontSize;
	float _leftCapWidth;
	float _leftPadding;
	float _lineSpacing;
	unsigned _numberOfLines;
	float _rightCapWidth;
	float _rightPadding;
	float _textBaseLine;
	SCD_Struct_VK166 _has;

}

@property (assign,nonatomic) bool hasNumberOfLines; 
@property (assign,nonatomic) unsigned numberOfLines;                        //@synthesize numberOfLines=_numberOfLines - In the implementation block
@property (nonatomic,readonly) unsigned long long layersCount; 
@property (nonatomic,readonly) SCD_Struct_VK291* layers; 
@property (assign,nonatomic) bool hasTextBaseLine; 
@property (assign,nonatomic) float textBaseLine;                            //@synthesize textBaseLine=_textBaseLine - In the implementation block
@property (nonatomic,readonly) bool hasFontName; 
@property (nonatomic,retain) NSString * fontName;                           //@synthesize fontName=_fontName - In the implementation block
@property (assign,nonatomic) bool hasFontSize; 
@property (assign,nonatomic) float fontSize;                                //@synthesize fontSize=_fontSize - In the implementation block
@property (assign,nonatomic) bool hasLeftCapWidth; 
@property (assign,nonatomic) float leftCapWidth;                            //@synthesize leftCapWidth=_leftCapWidth - In the implementation block
@property (assign,nonatomic) bool hasRightCapWidth; 
@property (assign,nonatomic) float rightCapWidth;                           //@synthesize rightCapWidth=_rightCapWidth - In the implementation block
@property (assign,nonatomic) bool hasLineSpacing; 
@property (assign,nonatomic) float lineSpacing;                             //@synthesize lineSpacing=_lineSpacing - In the implementation block
@property (assign,nonatomic) bool hasLeftPadding; 
@property (assign,nonatomic) float leftPadding;                             //@synthesize leftPadding=_leftPadding - In the implementation block
@property (assign,nonatomic) bool hasRightPadding; 
@property (assign,nonatomic) float rightPadding;                            //@synthesize rightPadding=_rightPadding - In the implementation block
-(CGSize)_imageSizeWithTextureAtlases:(id)arg1 ;
-(CGImageRef)newImageWithBackgroundColor:(CGColorRef)arg1 borderColor:(CGColorRef)arg2 textureAtlases:(id)arg3 contentScale:(double)arg4 ;
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(float)leftCapWidth;
-(void)setNumberOfLines:(unsigned)arg1 ;
-(id)fontName;
-(float)lineSpacing;
-(unsigned)numberOfLines;
-(void)setLineSpacing:(float)arg1 ;
-(void)setFontSize:(float)arg1 ;
-(id)dictionaryRepresentation;
-(void)setFontName:(id)arg1 ;
-(void)setRightPadding:(float)arg1 ;
-(float)rightPadding;
-(float)fontSize;
-(float)leftPadding;
-(bool)hasLineSpacing;
-(bool)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(bool)hasFontName;
-(float)textBaseLine;
-(void)setTextBaseLine:(float)arg1 ;
-(void)setHasTextBaseLine:(bool)arg1 ;
-(bool)hasTextBaseLine;
-(void)setHasFontSize:(bool)arg1 ;
-(bool)hasFontSize;
-(unsigned long long)layersCount;
-(SCD_Struct_VK291)layerAtIndex:(unsigned long long)arg1 ;
-(float)rightCapWidth;
-(void)clearLayers;
-(void)addLayer:(SCD_Struct_VK291)arg1 ;
-(void)setHasNumberOfLines:(bool)arg1 ;
-(bool)hasNumberOfLines;
-(SCD_Struct_VK291*)layers;
-(void)setLayers:(SCD_Struct_VK291*)arg1 count:(unsigned long long)arg2 ;
-(void)setLeftCapWidth:(float)arg1 ;
-(void)setHasLeftCapWidth:(bool)arg1 ;
-(bool)hasLeftCapWidth;
-(void)setRightCapWidth:(float)arg1 ;
-(void)setHasRightCapWidth:(bool)arg1 ;
-(bool)hasRightCapWidth;
-(void)setHasLineSpacing:(bool)arg1 ;
-(void)setLeftPadding:(float)arg1 ;
-(void)setHasLeftPadding:(bool)arg1 ;
-(bool)hasLeftPadding;
-(void)setHasRightPadding:(bool)arg1 ;
-(bool)hasRightPadding;
@end

