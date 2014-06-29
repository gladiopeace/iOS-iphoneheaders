/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:55 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSARenderingExporter.h>
#import <iWorkImport/TSDCanvasDelegate.h>

@class KNSlideNode, NSMutableArray, KNOffscreenController, KNPdfHyperlinkController, NSString, NSSet, NSArray;

@interface KNRenderingExporter : TSARenderingExporter <TSDCanvasDelegate> {

	KNSlideNode* mCurrentSlideNode;
	NSMutableArray* mCurrentSlidesOnPage;
	unsigned long long mCurrentBuildIndex;
	KNOffscreenController* mOffscreenController;
	KNPdfHyperlinkController* mHyperlinkController;
	int mPrintLayout;
	bool mPrintingBuilds;
	bool mPrintingBackgrounds;
	bool mPrintingBorders;
	bool mPrintingSlideNumbers;
	bool mPrintingDate;
	bool mPrintingSkippedSlides;
	bool mPrintingSelectedSlides;
	bool mPrintingPageMargins;
	unsigned long long mSlidesPerPage;
	unsigned long long mCurrentPage;
	NSString* mPrintTitle;
	double mPageMargin;
	NSSet* mSelectedSlideNodes;
	id mPrintView;

}

@property (nonatomic,retain) KNOffscreenController * offscreenController; 
@property (assign,nonatomic) unsigned long long slidesPerPage; 
@property (nonatomic,readonly) NSArray * slidesForPrinting; 
@property (nonatomic,retain) KNSlideNode * currentSlideNode; 
@property (nonatomic,readonly) unsigned long long currentSlideNumber; 
@property (nonatomic,copy) NSSet * selectedSlideNodes; 
@property (assign,nonatomic) int printLayout; 
@property (assign,getter=isPrintingBuilds,nonatomic) bool printingBuilds; 
@property (assign,getter=isPrintingBackgrounds,nonatomic) bool printingBackgrounds; 
@property (assign,getter=isPrintingBorders,nonatomic) bool printingBorders; 
@property (assign,getter=isPrintingSlideNumbers,nonatomic) bool printingSlideNumbers; 
@property (assign,getter=isPrintingDate,nonatomic) bool printingDate; 
@property (assign,getter=isPrintingSkippedSlides,nonatomic) bool printingSkippedSlides; 
@property (assign,getter=isPrintingSelectedSlides,nonatomic) bool printingSelectedSlides; 
@property (assign,getter=isPrintingPageMargins,nonatomic) bool printingPageMargins; 
@property (nonatomic,readonly) double heightOfPrintedText; 
@property (nonatomic,readonly) double spaceForSlideNumbers; 
@property (assign,nonatomic) double pageMargin; 
@property (nonatomic,copy) NSString * printTitle; 
@property (nonatomic,readonly) bool usesViewForDrawing; 
@property (assign,nonatomic) id printView; 
-(bool)shouldSuppressBackgrounds;
-(bool)isPrintingCanvas;
-(bool)isCanvasDrawingIntoPDF:(id)arg1 ;
-(id)p_slideNumberStringForSlideNode:(id)arg1 buildIndex:(unsigned long long)arg2 ;
-(unsigned long long)p_slideNumberForSlideNode:(id)arg1 ;
-(id)documentRoot;
-(id)initWithDocumentRoot:(id)arg1 ;
-(bool)exportToURL:(id)arg1 delegate:(id)arg2 error:(id*)arg3 ;
-(CGRect)boundsRect;
-(id)currentInfos;
-(bool)exportToURL:(id)arg1 pageNumber:(unsigned long long)arg2 delegate:(id)arg3 error:(id*)arg4 ;
-(bool)incrementPage;
-(bool)preparePage:(unsigned long long)arg1 ;
-(double)progressForCurrentPage;
-(id)slidesForPrinting;
-(void)setCurrentSlideNode:(id)arg1 ;
-(unsigned long long)slidesPerPage;
-(bool)isPrintingBuilds;
-(bool)isPrintingSlideNumbers;
-(bool)drawImageForSlideNode:(id)arg1 andEvent:(unsigned long long)arg2 slideSize:(CGSize)arg3 intoRect:(CGRect)arg4 context:(CGContextRef)arg5 createPage:(bool)arg6 ;
-(void)drawSlideNumberForNode:(id)arg1 index:(unsigned long long)arg2 forRect:(CGRect)arg3 context:(CGContextRef)arg4 position:(int)arg5 ;
-(void)drawBorderForRect:(CGRect)arg1 context:(CGContextRef)arg2 ;
-(void)drawDateForRect:(CGRect)arg1 context:(CGContextRef)arg2 ;
-(bool)isPrintingPageMargins;
-(double)heightOfPrintedText;
-(void)addAnchorPointForSlide:(id)arg1 context:(CGContextRef)arg2 ;
-(unsigned long long)currentSlideNumber;
-(id)currentSlideNode;
-(bool)isPrintingDate;
-(bool)isPrintingBackgrounds;
-(bool)isPrintingBorders;
-(void)setPrintingBuilds:(bool)arg1 ;
-(void)setPrintingSkippedSlides:(bool)arg1 ;
-(void)setPrintingBackgrounds:(bool)arg1 ;
-(double)spaceForSlideNumbers;
-(void)drawNSStringDateForRect:(CGRect)arg1 context:(CGContextRef)arg2 ;
-(bool)usesViewForDrawing;
-(void)drawInView:(id)arg1 rect:(CGRect)arg2 ;
-(id)offscreenController;
-(void)setOffscreenController:(id)arg1 ;
-(int)printLayout;
-(void)setPrintLayout:(int)arg1 ;
-(void)setPrintingBorders:(bool)arg1 ;
-(void)setPrintingSlideNumbers:(bool)arg1 ;
-(void)setPrintingDate:(bool)arg1 ;
-(bool)isPrintingSkippedSlides;
-(bool)isPrintingSelectedSlides;
-(void)setPrintingSelectedSlides:(bool)arg1 ;
-(void)setSlidesPerPage:(unsigned long long)arg1 ;
-(void)setPrintingPageMargins:(bool)arg1 ;
-(double)pageMargin;
-(void)setPageMargin:(double)arg1 ;
-(id)printView;
-(void)setPrintView:(id)arg1 ;
-(id)printTitle;
-(void)setPrintTitle:(id)arg1 ;
-(id)selectedSlideNodes;
-(void)setSelectedSlideNodes:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)pageCount;
-(void)setOptions:(id)arg1 ;
-(void)teardown;
-(void)setup;
@end

