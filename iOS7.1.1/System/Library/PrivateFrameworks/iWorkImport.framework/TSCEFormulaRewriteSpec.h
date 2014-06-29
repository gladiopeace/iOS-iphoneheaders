/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:23 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSCEFormulaRewriteSpec : NSObject {

	int mType;
	SCD_Union_TS274* mInfo;

}
-(id)initWithTectonicShift:(id)arg1 ;
-(id)initWithSortMapping:(id)arg1 tableID:(CFUUIDRef)arg2 explodeRanges:(bool)arg3 ;
-(id)initWithRangeMoveFrom:(SCD_Struct_TS275*)arg1 to:(SCD_Struct_TS275*)arg2 ;
-(id)initWithOwnerDeletion:(CFUUIDRef)arg1 ;
-(id)initWithTableResize:(CFUUIDRef)arg1 oldTableSize:(SCD_Struct_TS268)arg2 newTableSize:(SCD_Struct_TS268)arg3 ;
-(id)initWithCellMergeInTable:(CFUUIDRef)arg1 mergedRange:(SCD_Struct_TS268)arg2 ;
-(int)rewriteType;
-(/*function pointer*/ void**)rewriteInfo;
-(CFUUIDRef)affectedOwnerID;
-(void)saveToArchive:(FormulaRewriteSpecArchive*)arg1 archiver:(id)arg2 ;
-(void)dealloc;
-(id)description;
-(id).cxx_construct;
-(id)initWithArchive:(const FormulaRewriteSpecArchive*)arg1 ;
@end

