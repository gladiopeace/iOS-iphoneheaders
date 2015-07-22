/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:14 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSArray;

@interface UIKBKeyDisplayContents : NSObject {

	char _isCustomGlyph;
	char _secondaryIsCustomGlyph;
	char _fillPath;
	char _force1xImages;
	char _stringKeycapOverImage;
	NSString* _displayString;
	NSString* _displayStringImage;
	NSString* _secondaryDisplayStringImage;
	NSString* _secondaryDisplayString;
	NSArray* _variantDisplayStrings;
	NSArray* _variantDisplayImages;
	int _highlightedVariantIndex;
	int _displayPathType;
	UIKBKeyDisplayContents* _fallbackContents;

}

@property (nonatomic,retain) NSString * displayString;                               //@synthesize displayString=_displayString - In the implementation block
@property (nonatomic,retain) NSString * displayStringImage;                          //@synthesize displayStringImage=_displayStringImage - In the implementation block
@property (nonatomic,retain) NSString * secondaryDisplayStringImage;                 //@synthesize secondaryDisplayStringImage=_secondaryDisplayStringImage - In the implementation block
@property (assign,nonatomic) char isCustomGlyph;                                     //@synthesize isCustomGlyph=_isCustomGlyph - In the implementation block
@property (nonatomic,retain) NSString * secondaryDisplayString;                      //@synthesize secondaryDisplayString=_secondaryDisplayString - In the implementation block
@property (assign,nonatomic) char secondaryIsCustomGlyph;                            //@synthesize secondaryIsCustomGlyph=_secondaryIsCustomGlyph - In the implementation block
@property (nonatomic,retain) NSArray * variantDisplayStrings;                        //@synthesize variantDisplayStrings=_variantDisplayStrings - In the implementation block
@property (nonatomic,retain) NSArray * variantDisplayImages;                         //@synthesize variantDisplayImages=_variantDisplayImages - In the implementation block
@property (assign,nonatomic) int highlightedVariantIndex;                            //@synthesize highlightedVariantIndex=_highlightedVariantIndex - In the implementation block
@property (assign,nonatomic) int displayPathType;                                    //@synthesize displayPathType=_displayPathType - In the implementation block
@property (assign,nonatomic) char fillPath;                                          //@synthesize fillPath=_fillPath - In the implementation block
@property (assign,nonatomic) char force1xImages;                                     //@synthesize force1xImages=_force1xImages - In the implementation block
@property (assign,nonatomic) char stringKeycapOverImage;                             //@synthesize stringKeycapOverImage=_stringKeycapOverImage - In the implementation block
@property (nonatomic,retain) UIKBKeyDisplayContents * fallbackContents;              //@synthesize fallbackContents=_fallbackContents - In the implementation block
+(id)displayContents;
-(void)dealloc;
-(id)description;
-(void)setVariantDisplayStrings:(NSArray *)arg1 ;
-(NSString *)displayString;
-(void)setDisplayString:(NSString *)arg1 ;
-(void)setHighlightedVariantIndex:(int)arg1 ;
-(int)highlightedVariantIndex;
-(void)setDisplayPathType:(int)arg1 ;
-(void)setDisplayStringImage:(NSString *)arg1 ;
-(void)setSecondaryDisplayStringImage:(NSString *)arg1 ;
-(void)setIsCustomGlyph:(char)arg1 ;
-(NSString *)secondaryDisplayString;
-(NSString *)displayStringImage;
-(void)setForce1xImages:(char)arg1 ;
-(char)isCustomGlyph;
-(char)secondaryIsCustomGlyph;
-(NSArray *)variantDisplayImages;
-(NSArray *)variantDisplayStrings;
-(int)displayPathType;
-(char)fillPath;
-(char)force1xImages;
-(UIKBKeyDisplayContents *)fallbackContents;
-(char)stringKeycapOverImage;
-(NSString *)secondaryDisplayStringImage;
-(void)setSecondaryDisplayString:(NSString *)arg1 ;
-(void)setSecondaryIsCustomGlyph:(char)arg1 ;
-(void)setVariantDisplayImages:(NSArray *)arg1 ;
-(void)setFillPath:(char)arg1 ;
-(void)setFallbackContents:(UIKBKeyDisplayContents *)arg1 ;
-(void)setStringKeycapOverImage:(char)arg1 ;
@end
