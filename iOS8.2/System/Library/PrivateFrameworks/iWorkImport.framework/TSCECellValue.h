/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:04 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSCECellValue : NSObject {

	int mValueType;

}

@property (assign,nonatomic) int valueType; 
-(char)isEqualToCellValue:(id)arg1 ;
-(id)initCellValueWithArchive:(const CellValueArchive*)arg1 ;
-(void)encodeCellValueToArchive:(CellValueArchive*)arg1 ;
-(void)dealloc;
-(id)displayString;
-(SCD_Struct_TS53*)formatStruct;
-(int)valueType;
-(void)setValueType:(int)arg1 ;
@end

