/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:56 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TNChartFormulaArgument : NSObject {

	int mType;
	void* mData;

}

@property (readonly) int type; 
@property (readonly) bool isCellReference; 
@property (readonly) bool isRangeReference; 
@property (readonly) bool isStaticValue; 
@property (readonly) bool isReference; 
@property (readonly) SCD_Struct_TS286* cellReference; 
@property (readonly) SCD_Struct_TS275* rangeReference; 
@property (readonly) TSCEValue* staticValue; 
-(SCD_Struct_TS275*)rangeReference;
-(id)initWithRangeReference:(SCD_Struct_TS275*)arg1 ;
-(id)initWithCellReference:(SCD_Struct_TS286*)arg1 ;
-(SCD_Struct_TS286*)cellReference;
-(bool)isRangeReference;
-(bool)isStaticValue;
-(TSCEValue*)staticValue;
-(bool)isReference;
-(id)initWithStaticValue:(const TSCEValue*)arg1 ;
-(void)dealloc;
-(id)description;
-(int)type;
-(bool)isCellReference;
@end

