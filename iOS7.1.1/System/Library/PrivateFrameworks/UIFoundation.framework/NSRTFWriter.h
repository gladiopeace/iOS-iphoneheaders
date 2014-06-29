/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:40 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <UIFoundation/UIFoundation-Structs.h>
@class NSMutableData, NSAttributedString, NSFileWrapper, NSMutableDictionary, NSMutableArray, NSDictionary;

@interface NSRTFWriter : NSObject {

	NSMutableData* _output;
	NSAttributedString* _attrString;
	unsigned long long _attrStringLength;
	NSFileWrapper* _document;
	NSMutableDictionary* _fontNames;
	NSMutableDictionary* _colors;
	NSMutableArray* _listRanges;
	id _curFont;
	id _curForegroundColor;
	id _curBackgroundColor;
	id _curParagraphStyle;
	id _curKern;
	id _curBaselineOffset;
	id _curSuperscript;
	id _curUnderlineStyle;
	int _curTraits;
	unsigned _curEncoding;
	struct {
		unsigned _forceColorWrite : 1;
		unsigned _activeFontFeatures : 1;
		unsigned _preserveNaturalAlignment : 1;
		unsigned _reserved : 29;
	}  _rwFlags;
	double _rightMargin;
	NSDictionary* _docAttrs;
	void* _layoutSections;

}
+(void)initialize;
+(id)RTFDataForString:(id)arg1 range:(NSRange)arg2 encoding:(unsigned)arg3 ;
+(id)RTFDataForDate:(id)arg1 ;
-(void)dealloc;
-(id)initWithAttributedString:(id)arg1 ;
-(void)setDocumentAttributes:(id)arg1 ;
-(void)writeHeader;
-(id)RTF;
-(id)RTFD;
-(id)RTFDFileWrapper;
-(id)documentAttributes;
-(void)_setRTFDFileWrapper:(id)arg1 ;
-(id)_RTFDFileWrapper;
-(id)documentAttribute:(id)arg1 ;
-(void)collectResources;
-(void)writeBody;
-(void)writeRTF;
-(id)_plainFontNameForFont:(id)arg1 ;
-(void)writeEscapedUTF8String:(id)arg1 ;
-(int)_mostCompatibleCharset:(id)arg1 ;
-(void)_writeCharacters:(id)arg1 range:(NSRange)arg2 ;
-(void)writeDate:(id)arg1 ;
-(void)writeStringDocumentAttribute:(id)arg1 withRTFKeyword:(const char*)arg2 ;
-(void)writeDateDocumentAttribute:(id)arg1 withRTFKeyword:(const char*)arg2 ;
-(void)writeKeywordsDocumentAttribute;
-(void)_writeVersionsAndEncodings;
-(void)writeFontTable;
-(void)writeColorTable;
-(void)writeStyleSheetTable;
-(void)writeListTable;
-(void)writeInfo;
-(void)writePaperSize;
-(void)writeHyphenation;
-(void)writeDefaultTabInterval;
-(void)writeBackgroundColor;
-(void)writeColor:(id)arg1 type:(unsigned long long)arg2 ;
-(void)writeFont:(id)arg1 forceFontNumber:(bool)arg2 ;
-(void)writeKern:(id)arg1 ;
-(void)writeBaselineOffset:(id)arg1 ;
-(void)writeSuperscript:(id)arg1 ;
-(void)writeUnderlineStyle:(id)arg1 allowStrikethrough:(bool)arg2 ;
-(void)writeStrikethroughStyle:(id)arg1 ;
-(void)writeLigature:(id)arg1 ;
-(void)writeCharacterShape:(id)arg1 ;
-(void)writeStrokeWidth:(id)arg1 ;
-(void)writeObliqueness:(id)arg1 ;
-(void)writeExpansion:(id)arg1 ;
-(void)writeShadow:(id)arg1 ;
-(void)writeTableHeader:(id)arg1 atIndex:(unsigned long long)arg2 nestingLevel:(unsigned long long)arg3 ;
-(void)writeParagraphStyle:(id)arg1 ;
-(bool)writeLinkInfo:(id)arg1 ;
-(void)writeCharacterAttributes:(id)arg1 previousAttributes:(id)arg2 ;
-(unsigned long long)textFlowWithAttributes:(id)arg1 range:(NSRange*)arg2 ;
-(void)writeTextFlow:(unsigned long long)arg1 ;
-(void)writeGlyphInfo:(id)arg1 ;
-(bool)writeCellTerminator:(id)arg1 atIndex:(unsigned long long)arg2 nestingLevel:(unsigned long long)arg3 ;
-(void)restoreAttributes:(id)arg1 ;
-(void)writeAttachment:(id)arg1 editableData:(id)arg2 editableTypeIdentifier:(id)arg3 ;
-(void)_setPreserveNaturalAlignment:(bool)arg1 ;
@end

