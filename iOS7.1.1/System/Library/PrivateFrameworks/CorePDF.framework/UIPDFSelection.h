/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:08 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CorePDF/CorePDF-Structs.h>
@class UIPDFPage;

@interface UIPDFSelection : NSObject {

	UIPDFPage* _page;
	CGPDFSelectionRef _cgSelection;
	bool _dirty;
	CFStringRef _string;
	long long _cachedStartIndex;
	long long _cachedEndIndex;
	SCD_Struct_CP14 stringRange;

}

@property (assign,nonatomic) SCD_Struct_CP14 stringRange; 
-(void)dealloc;
-(id)description;
-(id)initWithPage:(id)arg1 cgSelection:(CGPDFSelectionRef)arg2 ;
-(CGPDFSelectionRef)CGSelection;
-(void)extendToParagraph;
-(CGRect)bounds;
-(id)init;
-(bool)isEmpty;
-(id)string;
-(SCD_Struct_CP14)extent;
-(CGAffineTransform)transform;
-(id)page;
-(unsigned long long)numberOfRectangles;
-(bool)getBounds:(CGRect*)arg1 transform:(CGAffineTransform*)arg2 index:(unsigned long long)arg3 ;
-(id)attributedStringAtIndex:(unsigned long long)arg1 ;
-(SCD_Struct_UI5)rectangleAtIndex:(unsigned long long)arg1 scale:(double)arg2 inset:(double)arg3 ;
-(SCD_Struct_CP14)stringRange;
-(void)setStringRange:(SCD_Struct_CP14)arg1 ;
-(id)initWithPage:(id)arg1 fromArchive:(id)arg2 ;
-(id)initWithSelection:(id)arg1 ;
-(id)initWithPage:(id)arg1 fromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3 ;
-(bool)isNonEmpty;
-(id)selectionExtendedToLineBoundaries;
-(id)containingTextLine;
-(bool)isWord;
-(id)textAtIndex:(unsigned long long)arg1 ;
-(id)htmlAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)extendAtStart:(unsigned long long)arg1 ;
-(unsigned long long)extendAtEnd:(unsigned long long)arg1 ;
-(double)baseLineAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)endIndex;
-(unsigned long long)startIndex;
-(void)copyToPasteboard;
-(id)archive;
@end

