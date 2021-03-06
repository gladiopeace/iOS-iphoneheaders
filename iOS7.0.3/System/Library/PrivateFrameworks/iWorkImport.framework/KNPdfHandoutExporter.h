/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:10:14 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/KNPdfExporter.h>

@interface KNPdfHandoutExporter : KNPdfExporter {

	BOOL mPrintingRuledLines;
	BOOL mPrintingNotes;
	BOOL mPrintingDivider;
	BOOL mIsPrintingNote;

}

@property (assign,getter=isPrintingNotes,nonatomic) BOOL printingNotes; 
@property (assign,getter=isPrintingRuledLines,nonatomic) BOOL printingRuledLines; 
@property (assign,getter=isPrintingDivider,nonatomic) BOOL printingDivider; 
-(id)initWithDocumentRoot:(id)arg1 ;
-(id)currentInfos;
-(BOOL)drawCurrentPageInContext:(CGContextRef)arg1 viewScale:(float)arg2 unscaledClipRect:(CGRect)arg3 createPage:(BOOL)arg4 ;
-(BOOL)incrementPage;
-(void)p_drawNotesForNode:(id)arg1 index:(unsigned)arg2 forRect:(CGRect)arg3 unscaledClipRect:(CGRect)arg4 scaledClipRect:(CGRect)arg5 context:(CGContextRef)arg6 ;
-(void)p_drawDividerLineForRect:(CGRect)arg1 pageRect:(CGRect)arg2 context:(CGContextRef)arg3 ;
-(void)p_drawRuledLinesForRect:(CGRect)arg1 pageRect:(CGRect)arg2 numberOfLines:(unsigned)arg3 context:(CGContextRef)arg4 ;
-(BOOL)isPrintingRuledLines;
-(BOOL)isPrintingNotes;
-(void)setPrintingRuledLines:(BOOL)arg1 ;
-(void)setPrintingNotes:(BOOL)arg1 ;
-(BOOL)isPrintingDivider;
-(void)setPrintingDivider:(BOOL)arg1 ;
@end

