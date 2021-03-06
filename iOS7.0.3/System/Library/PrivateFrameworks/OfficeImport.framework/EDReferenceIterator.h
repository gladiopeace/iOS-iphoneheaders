/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:05 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class EDWorkbook, EDWorksheet, EDCollection, EDReference, EDRowBlocks, EDRowBlock;

@interface EDReferenceIterator : NSObject {

	EDWorkbook* mWorkbook;
	EDWorksheet* mCurrentSheet;
	EDCollection* mReferences;
	EDReference* mReference;
	EDRowBlocks* mRowBlocks;
	EDRowBlock* mRowBlock;
	unsigned mRowBlockIndex;
	EDRowInfo* mRowInfo;
	unsigned mRowInfoIndex;
	unsigned mCellIndex;
	unsigned mNextArrayIndex;
	int mCurrentCellIndex;
	unsigned mPreviousColumnNumber;

}
+(id)referenceIteratorWithReferenceArray:(id)arg1 workbook:(id)arg2 ;
+(id)referenceIteratorWithReference:(id)arg1 workbook:(id)arg2 ;
-(void)dealloc;
-(void)setCurrentSheet:(id)arg1 ;
-(EDCellHeader*)nextCell;
-(unsigned)currentCellIndex;
-(void)setReference:(id)arg1 ;
-(id)initWithReferenceArray:(id)arg1 reference:(id)arg2 workbook:(id)arg3 ;
-(id)initWithReference:(id)arg1 workbook:(id)arg2 ;
-(id)initWithReferenceArray:(id)arg1 workbook:(id)arg2 ;
-(bool)nextRow;
-(bool)nextReference;
@end

