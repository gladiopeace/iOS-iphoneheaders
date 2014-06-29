/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:10 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OADColorPalette;
@class OADDefaultProperties, OADStyleMatrix, OADFontScheme, OADColorScheme, OADColorMap;

@interface OADDrawingTheme : NSObject {

	OADDefaultProperties* mShapeDefaults;
	OADDefaultProperties* mLineDefaults;
	OADDefaultProperties* mTextDefaults;
	OADStyleMatrix* mStyleMatrix;
	OADFontScheme* mFontScheme;
	OADColorScheme* mColorScheme;
	OADColorMap* mColorMap;
	<OADColorPalette>* mColorPalette;

}

@property (nonatomic,readonly) OADDefaultProperties * shapeDefaults; 
@property (nonatomic,readonly) OADDefaultProperties * lineDefaults; 
@property (nonatomic,readonly) OADDefaultProperties * textDefaults; 
@property (nonatomic,readonly) OADStyleMatrix * styleMatrix; 
@property (nonatomic,readonly) OADFontScheme * fontScheme; 
@property (nonatomic,retain) OADColorScheme * colorScheme; 
@property (nonatomic,readonly) OADColorMap * colorMap; 
@property (nonatomic,retain) <OADColorPalette> * colorPalette; 
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(id)colorScheme;
-(void)setColorScheme:(id)arg1 ;
-(id)styleMatrix;
-(id)colorMap;
-(id)fontScheme;
-(void)setColorPalette:(id)arg1 ;
-(id)colorPalette;
-(id)lineDefaults;
-(id)shapeDefaults;
-(id)textDefaults;
-(id)initWithTheme:(id)arg1 colorMap:(id)arg2 colorPalette:(id)arg3 ;
-(void)applyThemeOverrides:(id)arg1 colorMapOverride:(id)arg2 ;
@end
