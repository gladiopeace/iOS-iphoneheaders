/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:45 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPObject.h>
#import <iWorkImport/TSKModel.h>
#import <iWorkImport/TSSPresetSource.h>

@class NSString, TSSStylesheet, NSMutableDictionary;

@interface TSSTheme : TSPObject <TSKModel, TSSPresetSource> {

	NSString* mThemeIdentifier;
	TSSStylesheet* mStylesheet;
	NSMutableDictionary* mPresetsByKind;

}

@property (nonatomic,readonly) TSSStylesheet * stylesheet; 
@property (assign,nonatomic) bool isLocked; 
@property (nonatomic,retain) NSString * themeIdentifier; 
+(void)tstRegisterPresetSourceClasses;
+(void)tsdRegisterPresetSourceClasses;
+(id)presetKinds;
+(void)bootstrapPresetsOfKind:(id)arg1 inTheme:(id)arg2 alternate:(int)arg3 ;
+(void)tschRegisterPresetSourceClasses;
+(void)registerPresetSourceClasses;
+(void)registerPresetSourceClass:(Class)arg1 ;
+(id)presetSources;
+(id)presetBootstrapOrder;
+(id)themeWithContext:(id)arg1 alternate:(int)arg2 ;
-(id)hyperlinkStyle;
-(void)createDefaultParagraphStyleIfNeeded;
-(id)defaultColumnStyle;
-(void)createCommentInfoStyleIfNeeded;
-(id)paragraphStylesWithContentTag:(id)arg1 ;
-(id)paragraphStyleWithContentTag:(id)arg1 ;
-(id)paragraphStylesWithPartialContentTag:(id)arg1 ;
-(id)paragraphPresetStyles;
-(void)modifyHyperlinkStyleToMatchSage;
-(id)undeletableStyles;
-(id)unmodifiableStyles;
-(void)removeTextStylesOfPresetKinds:(id)arg1 notReferencedInDocumentRoot:(id)arg2 ;
-(id)defaultParagraphStyle;
-(id)defaultCharacterStyle;
-(id)defaultListStyle;
-(void)tswpLoadFromArchive:(const ThemeArchive*)arg1 unarchiver:(id)arg2 ;
-(void)tswpSaveToArchive:(ThemeArchive*)arg1 archiver:(id)arg2 ;
-(void)tstLoadFromArchive:(const ThemeArchive*)arg1 unarchiver:(id)arg2 ;
-(void)tstSaveToArchive:(ThemeArchive*)arg1 archiver:(id)arg2 ;
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchive:(ThemeArchive*)arg1 archiver:(id)arg2 ;
-(void)loadFromArchive:(const ThemeArchive*)arg1 unarchiver:(id)arg2 ;
-(void)installContactCurvedShadowPresets;
-(void)installMoviePresets;
-(void)tsdLoadFromArchive:(const ThemeArchive*)arg1 unarchiver:(id)arg2 ;
-(void)tsdSaveToArchive:(ThemeArchive*)arg1 archiver:(id)arg2 ;
-(void)tschLoadFromArchive:(const ThemeArchive*)arg1 unarchiver:(id)arg2 ;
-(void)tschSaveToArchive:(ThemeArchive*)arg1 archiver:(id)arg2 ;
-(id)modelPathComponentForChild:(id)arg1 ;
-(void)enablePresetValidation;
-(id)presetsOfKind:(id)arg1 ;
-(void)setPresets:(id)arg1 ofKind:(id)arg2 ;
-(void)setIsLocked:(bool)arg1 ;
-(unsigned long long)indexOfPreset:(id)arg1 ;
-(void)removePreset:(id)arg1 ;
-(void)insertPreset:(id)arg1 ofKind:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(bool)hasPresetsOfKind:(id)arg1 ;
-(id)presetOfKind:(id)arg1 index:(unsigned long long)arg2 ;
-(void)addPreset:(id)arg1 ofKind:(id)arg2 ;
-(void)disablePresetValidation;
-(void)bootstrapThemeAlternate:(int)arg1 ;
-(id)p_identifierForBootstrapTheme:(int)arg1 ;
-(void)movePresetOfKind:(id)arg1 fromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3 ;
-(bool)containsCGColor:(CGColorRef)arg1 ;
-(void)checkThemeStylesheetConsistency;
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(bool)isLocked;
-(id)initWithContext:(id)arg1 ;
-(id)colors;
-(id)childEnumerator;
-(id)themeIdentifier;
-(void)setThemeIdentifier:(id)arg1 ;
-(id)stylesheet;
@end

