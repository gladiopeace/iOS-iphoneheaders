/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:08 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CorePDF/CorePDF-Structs.h>
@class CPZone, CPTextLine;

@interface CPHighlighter : NSObject {

	CPZone* boundingZone;
	CPTextLine* textLine;
	CGColorRef color;
	CPPDFStyle* style;
	CPPDFStyle* highlightedStyle;

}

@property (nonatomic,readonly) CGColorRef color; 
@property (assign,nonatomic) CPPDFStyle* style; 
@property (assign,nonatomic) CPPDFStyle* highlightedStyle; 
+(bool)reconstructHighlightFor:(id)arg1 ;
-(void)setStyle:(CPPDFStyle*)arg1 ;
-(CPPDFStyle*)style;
-(CGColorRef)color;
-(void)highlight;
-(CPPDFStyle*)highlightedStyle;
-(void)setHighlightedStyle:(CPPDFStyle*)arg1 ;
-(id)initWithTextLine:(id)arg1 inZone:(id)arg2 ofColor:(CGColorRef)arg3 ;
@end

