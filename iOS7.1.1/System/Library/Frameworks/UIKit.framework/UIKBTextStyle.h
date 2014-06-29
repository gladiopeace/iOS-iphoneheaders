/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:10 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class NSString;

@interface UIKBTextStyle : NSObject <NSCopying> {

	NSString* _fontName;
	double _fontSize;
	double _minFontSize;
	double _kerning;
	double _textOpacity;
	NSString* _textColor;
	NSString* _etchColor;
	double _pathWeight;
	long long _selector;
	CGPoint _textOffset;
	CGPoint _etchOffset;

}

@property (nonatomic,retain) NSString * fontName;               //@synthesize fontName=_fontName - In the implementation block
@property (assign,nonatomic) double fontSize;                   //@synthesize fontSize=_fontSize - In the implementation block
@property (assign,nonatomic) double minFontSize;                //@synthesize minFontSize=_minFontSize - In the implementation block
@property (assign,nonatomic) double kerning;                    //@synthesize kerning=_kerning - In the implementation block
@property (assign,nonatomic) double textOpacity;                //@synthesize textOpacity=_textOpacity - In the implementation block
@property (nonatomic,retain) NSString * textColor;              //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,retain) NSString * etchColor;              //@synthesize etchColor=_etchColor - In the implementation block
@property (assign,nonatomic) CGPoint textOffset;                //@synthesize textOffset=_textOffset - In the implementation block
@property (assign,nonatomic) CGPoint etchOffset;                //@synthesize etchOffset=_etchOffset - In the implementation block
@property (assign,nonatomic) double pathWeight;                 //@synthesize pathWeight=_pathWeight - In the implementation block
@property (assign,nonatomic) long long selector;                //@synthesize selector=_selector - In the implementation block
+(id)styleWithFontName:(id)arg1 withFontSize:(double)arg2 ;
+(id)styleWithTextColor:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(bool)isEqual:(id)arg1 ;
-(id)description;
-(void)setSelector:(long long)arg1 ;
-(id)copyWithZone:(NSZone)arg1 ;
-(void)setTextColor:(id)arg1 ;
-(id)textColor;
-(long long)selector;
-(id)fontName;
-(void)setMinFontSize:(double)arg1 ;
-(double)minFontSize;
-(void)setFontSize:(double)arg1 ;
-(void)setTextOffset:(CGPoint)arg1 ;
-(CGPoint)textOffset;
-(void)setFontName:(id)arg1 ;
-(void)setKerning:(double)arg1 ;
-(void)setTextOpacity:(double)arg1 ;
-(double)fontSize;
-(double)kerning;
-(double)textOpacity;
-(id)etchColor;
-(CGPoint)etchOffset;
-(double)pathWeight;
-(void)setEtchColor:(id)arg1 ;
-(void)setEtchOffset:(CGPoint)arg1 ;
-(void)setPathWeight:(double)arg1 ;
-(void)overlayWithStyle:(id)arg1 ;
@end

