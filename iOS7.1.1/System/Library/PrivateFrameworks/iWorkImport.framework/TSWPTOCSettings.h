/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:51 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPObject.h>
#import <iWorkImport/TSSPreset.h>

@class NSString, TSURetainedPointerKeyDictionary, NSSet;

@interface TSWPTOCSettings : TSPObject <TSSPreset> {

	int _scope;
	NSString* _displayName;
	TSURetainedPointerKeyDictionary* _map;

}

@property (nonatomic,copy) NSString * displayName;                               //@synthesize displayName=_displayName - In the implementation block
@property (assign,nonatomic) int scope;                                          //@synthesize scope=_scope - In the implementation block
@property (nonatomic,readonly) NSSet * indexedStyles; 
@property (nonatomic,readonly) NSSet * paragraphStylesShownInTOC; 
@property (nonatomic,retain) TSURetainedPointerKeyDictionary * map;              //@synthesize map=_map - In the implementation block
@property (nonatomic,readonly) NSString * presetKind; 
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)saveToArchive:(TOCSettingsArchive*)arg1 archiver:(id)arg2 ;
-(void)loadFromArchive:(const TOCSettingsArchive*)arg1 unarchiver:(id)arg2 ;
-(id)presetKind;
-(bool)isThemeEquivalent:(id)arg1 ;
-(id)indexedStyles;
-(bool)showInTOCForParagraphStyle:(id)arg1 ;
-(id)entryStyleForParagraphStyle:(id)arg1 ;
-(void)addIndexedStyle:(id)arg1 withEntryStyle:(id)arg2 showInTOC:(bool)arg3 ;
-(void)removeIndexedStyle:(id)arg1 ;
-(void)adoptStylesheet:(id)arg1 withMapper:(id)arg2 ;
-(void)addIndexedStyle:(id)arg1 withEntryStyle:(id)arg2 ;
-(id)paragraphStylesShownInTOC;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)initWithContext:(id)arg1 ;
-(id)displayName;
-(void)setMap:(id)arg1 ;
-(void)setDisplayName:(id)arg1 ;
-(id)map;
-(int)scope;
-(void)setScope:(int)arg1 ;
@end

