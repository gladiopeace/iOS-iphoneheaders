/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:17 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OCBReader.h>

@class NSMutableArray, TSUNoCopyDictionary, WDDocument, WBOfficeArtReaderState;

@interface WBReader : OCBReader {

	WrdNoteTable* mFootnoteTable;
	WrdNoteTable* mEndnoteTable;
	WrdAnnotationTable* mAnnotationTable;
	WrdCPTableHeaders* mTableHeaders;
	WrdBookmarkTable* mBookmarkTable;
	WrdBookmarkTable* mAnnotationBookmarkTable;
	WrdFieldPositionTable* mFieldPositionTables[8];
	WrdStoryTable* mStoryTable;
	WrdStoryTable* mHeaderStoryTable;
	WrdFileShapeAddressTable* mFileShapeAddressTable;
	WrdFileShapeAddressTable* mFileShapeAddressHeaderTable;
	WrdEshObjectFactory* mEshObjectFactory;
	WrdParagraphProperties* mLastRowParagraphProperties;
	NSMutableArray* mAnnotationOwners;
	TSUNoCopyDictionary* mIndexToStyles;
	TSUNoCopyDictionary* mIndexToFonts;
	WDDocument* mTargetDocument;
	WBOfficeArtReaderState* mOfficeArtState;
	vector<WBTextBoxReaderInfo, std::__1::allocator<WBTextBoxReaderInfo> >* mTextBoxes;
	bool mReportProgress;
	id mAnnotationRangeStart;

}

@property (assign,nonatomic) WDDocument * targetDocument; 
-(void)setAnnotationRangeStart:(id)arg1 ;
-(id)annotationRangeStart;
-(void)initialize;
-(void)dealloc;
-(bool)start;
-(void)setOfficeArtState:(id)arg1 ;
-(id)officeArtState;
-(id)initWithCancelDelegate:(id)arg1 tracing:(id)arg2 ;
-(id)read;
-(OCCEncryptionInfoReader*)encryptionInfoReader;
-(OCCBinaryStreamer*)allocBinaryStreamerWithCryptoKey:(OCCCryptoKeyRef)arg1 baseOutputFilenameInUTF8:(const char*)arg2 ;
-(id)drawableForShapeId:(unsigned)arg1 ;
-(WrdAnnotationTable*)annotationTable;
-(WrdBinaryReader*)wrdReader;
-(id)annotationOwner:(int)arg1 ;
-(WrdBookmarkTable*)annotationBookmarkTable;
-(id)readCharactersFrom:(unsigned)arg1 to:(unsigned)arg2 textType:(int)arg3 ;
-(WrdBookmarkTable*)bookmarkTable;
-(id)fontAtIndex:(int)arg1 ;
-(id)styleAtIndex:(int)arg1 ;
-(id)readCharactersForTextRun:(WrdTextRun*)arg1 ;
-(void)setTargetDocument:(id)arg1 ;
-(WrdCPTableHeaders*)tableHeaders;
-(unsigned long long)textBoxCount;
-(WBTextBoxReaderInfo)textBoxInfoAtIndex:(unsigned long long)arg1 ;
-(void)addFont:(id)arg1 index:(int)arg2 ;
-(WrdNoteTable*)footnoteTable;
-(WrdNoteTable*)endnoteTable;
-(WrdFileShapeAddressTable*)fileShapeAddressHeaderTable;
-(WrdFileShapeAddressTable*)fileShapeAddressTable;
-(WrdFieldPositionTable*)fieldPositionTableForTextType:(int)arg1 ;
-(WrdStoryTable*)storyTable;
-(WrdStoryTable*)headerStoryTable;
-(WrdEshObjectFactory*)eshObjectFactory;
-(WrdParagraphProperties*)lastRowParagraphProperties;
-(void)setLastRowParagraphProperties:(WrdParagraphProperties*)arg1 ;
-(void)addStyle:(id)arg1 index:(int)arg2 ;
-(bool)reportProgress;
-(void)setReportProgress:(bool)arg1 ;
-(void)cacheTextBox:(id)arg1 withChainIndex:(unsigned short)arg2 ;
-(id)targetDocument;
@end

