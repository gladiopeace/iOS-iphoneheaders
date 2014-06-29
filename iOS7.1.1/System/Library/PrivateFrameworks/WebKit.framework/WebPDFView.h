/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:00 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <WebCore/WAKView.h>
#import <WebKit/WebPDFDocumentView.h>
#import <WebKit/WebPDFDocumentRepresentation.h>

@class NSString;

@interface WebPDFView : WAKView <WebPDFDocumentView, WebPDFDocumentRepresentation> {

	bool dataSourceHasBeenSet;
	CGPDFDocumentRef _PDFDocument;
	NSString* _title;
	CGRect* _pageRects;

}
+(CGColorRef)backgroundColor;
+(CGColorRef)shadowColor;
+(id)supportedMIMETypes;
+(Class)_representationClassForWebFrame:(id)arg1 ;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(void)setDataSource:(id)arg1 ;
-(id)title;
-(void)layout;
-(void)setNeedsLayout:(bool)arg1 ;
-(unsigned)totalPages;
-(CGRect)rectForPageNumber:(unsigned)arg1 ;
-(CGPDFDocumentRef)doc;
-(void)finishedLoadingWithDataSource:(id)arg1 ;
-(void)receivedData:(id)arg1 withDataSource:(id)arg2 ;
-(void)dataSourceUpdated:(id)arg1 ;
-(void)receivedError:(id)arg1 withDataSource:(id)arg2 ;
-(void)viewWillMoveToHostWindow:(id)arg1 ;
-(void)viewDidMoveToHostWindow;
-(bool)canProvideDocumentSource;
-(id)documentSource;
-(id)_pagesInRect:(CGRect)arg1 ;
-(void)drawPage:(CGPDFPageRef)arg1 ;
-(void)_checkPDFTitle;
-(void)_computePageRects;
-(unsigned)pageNumberForRect:(CGRect)arg1 ;
@end

