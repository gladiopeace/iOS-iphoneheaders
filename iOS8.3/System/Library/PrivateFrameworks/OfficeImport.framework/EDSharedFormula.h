/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:53:22 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/EDFormula.h>

@class EDReference;

@interface EDSharedFormula : EDFormula {

	BOOL _forceNonBaseFormula;
	unsigned _baseFormulaIndex;
	int _rowBaseOrOffset;
	int _columnBaseOrOffset;
	EDReference* _baseFormulaRange;

}

@property (assign,nonatomic) unsigned baseFormulaIndex;                     //@synthesize baseFormulaIndex=_baseFormulaIndex - In the implementation block
@property (assign,nonatomic) BOOL forceNonBaseFormula;                      //@synthesize forceNonBaseFormula=_forceNonBaseFormula - In the implementation block
@property (assign,nonatomic) int rowBaseOrOffset;                           //@synthesize rowBaseOrOffset=_rowBaseOrOffset - In the implementation block
@property (assign,nonatomic) int columnBaseOrOffset;                        //@synthesize columnBaseOrOffset=_columnBaseOrOffset - In the implementation block
@property (nonatomic,readonly) EDReference * baseFormulaRange;              //@synthesize baseFormulaRange=_baseFormulaRange - In the implementation block
-(void)dealloc;
-(id)init;
-(BOOL)isBaseFormula;
-(BOOL)convertTokensToShared;
-(EDReference *)baseFormulaRange;
-(void)unarchiveFromData:(CFDataRef)arg1 offset:(unsigned*)arg2 ;
-(void)archiveByAppendingToMutableData:(CFDataRef)arg1 ;
-(id)initWithFormula:(id)arg1 ;
-(BOOL)forceNonBaseFormula;
-(id)warningWithRowBlocks:(id)arg1 ;
-(void)setForceNonBaseFormula:(BOOL)arg1 ;
-(void)updateBaseFormulaRangeWithRow:(int)arg1 column:(int)arg2 ;
-(void)setRowBaseOrOffset:(int)arg1 ;
-(void)setColumnBaseOrOffset:(int)arg1 ;
-(void)setBaseFormulaIndex:(unsigned)arg1 ;
-(id)baseFormulaWithRowBlocks:(id)arg1 ;
-(int)rowBaseOrOffset;
-(int)columnBaseOrOffset;
-(BOOL)isSharedFormula;
-(unsigned)baseFormulaIndex;
@end
