/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:07 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <CorePDF/CPChunk.h>
#import <CorePDF/CPDisposable.h>
#import <CorePDF/CPGraphicUser.h>

@interface CPTable : CPChunk <CPDisposable, CPGraphicUser> {

	CGRect tableBounds;
	unsigned rowCount;
	double* rowY;
	unsigned columnCount;
	double* columnX;
	CGColorRef backgroundColor;
	unsigned backgroundGraphicCount;
	id* backgroundGraphics;
	unsigned usedGraphicCount;
	bool disposed;

}

@property (nonatomic,readonly) CGRect tableBounds; 
@property (assign,nonatomic) unsigned rowCount; 
@property (nonatomic,readonly) double* rowY; 
@property (assign,nonatomic) unsigned columnCount; 
@property (nonatomic,readonly) double* columnX; 
@property (nonatomic,readonly) unsigned backgroundGraphicCount; 
-(void)dealloc;
-(CGColorRef)backgroundColor;
-(unsigned)columnCount;
-(void)setColumnCount:(unsigned)arg1 ;
-(void)dispose;
-(CGRect)tableBounds;
-(void)incrementUsedGraphicCount;
-(unsigned)usedGraphicCount;
-(double*)rowY;
-(double*)columnX;
-(void)setRowCount:(unsigned)arg1 ;
-(void)setBackgroundGraphics:(id)arg1 ;
-(id)backgroundGraphicAtIndex:(unsigned)arg1 ;
-(unsigned)backgroundGraphicCount;
-(unsigned)rowCount;
-(id)initWithBounds:(CGRect)arg1 ;
-(void)finalize;
@end

