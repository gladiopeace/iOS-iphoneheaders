/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:54 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebKitLegacy/WebKitLegacy-Structs.h>
#import <WebCore/WAKView.h>
#import <WebKitLegacy/WebPDFDocumentView.h>
#import <WebKitLegacy/WebPDFDocumentRepresentation.h>

@class NSString;

@interface WebPDFView : WAKView <WebPDFDocumentView, WebPDFDocumentRepresentation> {

	BOOL dataSourceHasBeenSet;
	CGPDFDocumentRef _PDFDocument;
	NSString* _title;
	CGRect* _pageRects;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGColorRef)backgroundColor;
+(CGColorRef)shadowColor;
+(Class)_representationClassForWebFrame:(id)arg1 ;
+(id)supportedMIMETypes;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(void)setDataSource:(id)arg1 ;
-(id)title;
-(void)layout;
-(void)setNeedsLayout:(BOOL)arg1 ;
-(unsigned)totalPages;
-(CGRect)rectForPageNumber:(unsigned)arg1 ;
-(CGPDFDocumentRef)doc;
-(void)dataSourceUpdated:(id)arg1 ;
-(void)viewWillMoveToHostWindow:(id)arg1 ;
-(void)viewDidMoveToHostWindow;
-(void)receivedData:(id)arg1 withDataSource:(id)arg2 ;
-(void)receivedError:(id)arg1 withDataSource:(id)arg2 ;
-(void)finishedLoadingWithDataSource:(id)arg1 ;
-(BOOL)canProvideDocumentSource;
-(id)documentSource;
-(id)_pagesInRect:(CGRect)arg1 ;
-(void)drawPage:(CGPDFPageRef)arg1 ;
-(void)_checkPDFTitle;
-(void)_computePageRects;
-(unsigned)pageNumberForRect:(CGRect)arg1 ;
@end

