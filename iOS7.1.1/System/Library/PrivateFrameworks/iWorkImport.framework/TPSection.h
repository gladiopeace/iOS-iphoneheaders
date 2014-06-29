/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:57 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPObject.h>
#import <iWorkImport/TSKDocumentObject.h>
#import <iWorkImport/TSKModel.h>
#import <iWorkImport/TSWPSection.h>

@class TPDocumentRoot, TSWPStorage, TPPageMaster, NSString;

@interface TPSection : TSPObject <TSKDocumentObject, TSKModel, TSWPSection> {

	TPDocumentRoot* _documentRoot;
	TSWPStorage* _parentStorage;
	TPPageMaster* _pageMasters[3];
	NSString* _name;
	bool _inheritPreviousHeaderFooter;
	bool _pageMasterFirstPageDifferent;
	bool _pageMasterFirstPageHidesHeaderFooter;
	bool _pageMasterEvenOddPagesDifferent;
	unsigned _sectionStartKind;
	unsigned _sectionPageNumberKind;
	unsigned _sectionPageNumberStart;

}

@property (nonatomic,retain) NSString * name;                                        //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) TSWPStorage * parentStorage;                            //@synthesize parentStorage=_parentStorage - In the implementation block
@property (assign,nonatomic) bool inheritPreviousHeaderFooter;                       //@synthesize inheritPreviousHeaderFooter=_inheritPreviousHeaderFooter - In the implementation block
@property (assign,nonatomic) bool pageMasterFirstPageDifferent;                      //@synthesize pageMasterFirstPageDifferent=_pageMasterFirstPageDifferent - In the implementation block
@property (assign,nonatomic) bool pageMasterFirstPageHidesHeaderFooter;              //@synthesize pageMasterFirstPageHidesHeaderFooter=_pageMasterFirstPageHidesHeaderFooter - In the implementation block
@property (assign,nonatomic) bool pageMasterEvenOddPagesDifferent;                   //@synthesize pageMasterEvenOddPagesDifferent=_pageMasterEvenOddPagesDifferent - In the implementation block
@property (assign,nonatomic) unsigned sectionStartKind;                              //@synthesize sectionStartKind=_sectionStartKind - In the implementation block
@property (assign,nonatomic) unsigned sectionPageNumberKind;                         //@synthesize sectionPageNumberKind=_sectionPageNumberKind - In the implementation block
@property (assign,nonatomic) unsigned sectionPageNumberStart;                        //@synthesize sectionPageNumberStart=_sectionPageNumberStart - In the implementation block
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(id)copyWithContext:(id)arg1 ;
-(void)adoptStylesheet:(id)arg1 withMapper:(id)arg2 ;
-(void)willBeAddedToDocumentRoot:(id)arg1 context:(id)arg2 ;
-(void)wasAddedToDocumentRoot:(id)arg1 context:(id)arg2 ;
-(void)willBeRemovedFromDocumentRoot:(id)arg1 ;
-(void)wasRemovedFromDocumentRoot:(id)arg1 ;
-(id)parentStorage;
-(void)setParentStorage:(id)arg1 ;
-(void)i_ensureHeaderFooterStoragesExistWithStylesheet:(id)arg1 ;
-(id)pageMasterForType:(int)arg1 ;
-(bool)isHeaderFooterEmpty:(int)arg1 ;
-(id)pageMasterOwningModel:(id)arg1 ;
-(id)pageMasters;
-(bool)inheritPreviousHeaderFooter;
-(void)setInheritPreviousHeaderFooter:(bool)arg1 ;
-(bool)pageMasterFirstPageDifferent;
-(void)setPageMasterFirstPageDifferent:(bool)arg1 ;
-(bool)pageMasterFirstPageHidesHeaderFooter;
-(void)setPageMasterFirstPageHidesHeaderFooter:(bool)arg1 ;
-(bool)pageMasterEvenOddPagesDifferent;
-(void)setPageMasterEvenOddPagesDifferent:(bool)arg1 ;
-(unsigned)sectionStartKind;
-(void)setSectionStartKind:(unsigned)arg1 ;
-(unsigned)sectionPageNumberKind;
-(void)setSectionPageNumberKind:(unsigned)arg1 ;
-(unsigned)sectionPageNumberStart;
-(void)setSectionPageNumberStart:(unsigned)arg1 ;
-(void)i_clearPropertiesToDefaults;
-(void)p_unarchiveAndUpgrade:(id)arg1 archive:(const SectionArchive*)arg2 ;
-(void)i_setDocumentRoot:(id)arg1 ;
-(void)p_upgradePageSizeAndMarginsFromParsedArchive:(const SectionArchive*)arg1 ;
-(id)initWithContext:(id)arg1 section:(id)arg2 ;
-(void)i_copyHeadersAndFootersFrom:(id)arg1 dolcContext:(id)arg2 ;
-(bool)isHeaderFooterVisible:(int)arg1 ;
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(id)description;
-(void)setName:(id)arg1 ;
-(id)name;
-(id)initWithContext:(id)arg1 ;
-(id)childEnumerator;
@end

