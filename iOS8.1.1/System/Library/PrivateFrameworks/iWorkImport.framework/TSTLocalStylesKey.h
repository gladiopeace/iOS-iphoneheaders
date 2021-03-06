/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:40 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/NSCopying.h>

@class TSTCellStyle, TSWPParagraphStyle;

@interface TSTLocalStylesKey : NSObject <NSCopying> {

	TSTCellStyle* _cellStyle;
	TSWPParagraphStyle* _textStyle;

}

@property (retain) TSTCellStyle * cellStyle;                    //@synthesize cellStyle=_cellStyle - In the implementation block
@property (retain) TSWPParagraphStyle * textStyle;              //@synthesize textStyle=_textStyle - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(TSWPParagraphStyle *)textStyle;
-(TSTCellStyle *)cellStyle;
-(void)setCellStyle:(TSTCellStyle *)arg1 ;
-(void)setTextStyle:(TSWPParagraphStyle *)arg1 ;
@end

