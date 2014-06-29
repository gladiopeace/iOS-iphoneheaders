/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:40 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class NSString, UIFontDescriptor;

@interface _UIFontCacheKey : NSObject <NSCopying> {

	int _traits;
	NSString* _fontName;
	double _pointSize;
	NSString* _textStyle;
	NSString* _contentSizeCategory;
	UIFontDescriptor* _fontDescriptor;

}

@property (nonatomic,copy) NSString * fontName;                            //@synthesize fontName=_fontName - In the implementation block
@property (assign,nonatomic) int traits;                                   //@synthesize traits=_traits - In the implementation block
@property (assign,nonatomic) double pointSize;                             //@synthesize pointSize=_pointSize - In the implementation block
@property (nonatomic,copy) NSString * textStyle;                           //@synthesize textStyle=_textStyle - In the implementation block
@property (nonatomic,copy) NSString * contentSizeCategory;                 //@synthesize contentSizeCategory=_contentSizeCategory - In the implementation block
@property (nonatomic,copy) UIFontDescriptor * fontDescriptor;              //@synthesize fontDescriptor=_fontDescriptor - In the implementation block
+(id)fontCacheKeyWithFontName:(id)arg1 traits:(int)arg2 pointSize:(double)arg3 ;
+(id)systemFontCacheKeyWithTraits:(int)arg1 pointSize:(double)arg2 ;
+(id)fontCacheKeyWithTextStyle:(id)arg1 contentSizeCategory:(id)arg2 ;
+(id)fontCacheKeyWithFontDescriptor:(id)arg1 pointSize:(double)arg2 ;
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(double)pointSize;
-(id)fontName;
-(int)traits;
-(void)setFontName:(id)arg1 ;
-(id)textStyle;
-(id)fontDescriptor;
-(void)setTextStyle:(id)arg1 ;
-(void)setTraits:(int)arg1 ;
-(void)setPointSize:(double)arg1 ;
-(void)setContentSizeCategory:(id)arg1 ;
-(void)setFontDescriptor:(id)arg1 ;
-(id)contentSizeCategory;
@end

