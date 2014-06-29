/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:18 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class WDParagraphProperties, WDCharacterProperties, WDOfficeArt, NSMutableString;

@interface WDListLevel : NSObject {

	WDParagraphProperties* mParagraphProperties;
	WDCharacterProperties* mCharacterProperties;
	WDOfficeArt* mImage;
	long long mStartNumber;
	int mNumberFormat;
	bool mRestartNumbering;
	bool mLegal;
	int mSuffix;
	NSMutableString* mText;
	bool mLegacy;
	long long mLegacySpace;
	long long mLegacyIndent;
	int mJustification;

}
-(void)dealloc;
-(void)setImage:(id)arg1 ;
-(id)text;
-(void)setText:(id)arg1 ;
-(id)image;
-(id)initWithDocument:(id)arg1 ;
-(id)paragraphProperties;
-(id)characterProperties;
-(int)justification;
-(long long)startNumber;
-(int)numberFormat;
-(void)setStartNumber:(long long)arg1 ;
-(void)setNumberFormat:(int)arg1 ;
-(void)setRestartNumbering:(bool)arg1 ;
-(void)setLegal:(bool)arg1 ;
-(void)setSuffix:(int)arg1 ;
-(void)setLegacy:(bool)arg1 ;
-(void)setLegacySpace:(long long)arg1 ;
-(void)setLegacyIndent:(long long)arg1 ;
-(void)setJustification:(int)arg1 ;
-(bool)restartNumbering;
-(bool)legal;
-(int)suffix;
-(bool)startNumberOverridden;
-(bool)numberFormatOverridden;
-(bool)imageBullet;
-(bool)imageBulletOverridden;
-(bool)restartNumberingOverridden;
-(bool)legalOverridden;
-(bool)suffixOverridden;
-(bool)textOverridden;
-(bool)legacy;
-(long long)legacySpace;
-(long long)legacyIndent;
-(bool)justificationOverridden;
@end

