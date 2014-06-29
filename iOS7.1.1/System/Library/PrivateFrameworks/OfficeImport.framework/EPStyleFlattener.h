/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:07 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/EDProcessor.h>

@class EDWorksheet, EDRowBlocks, EDRowBlock, EDColumnInfoCollection, NSArray, NSMutableArray;

@interface EPStyleFlattener : EDProcessor {

	EDWorksheet* mWorksheet;
	EDRowBlocks* mRowBlocks;
	EDRowBlock* mCurrentRowBlock;
	EDColumnInfoCollection* mColumnInfos;
	NSArray* mKeys;
	NSMutableArray* mRanges;
	int mFirstRow;
	int mLastRow;
	int mFirstColumn;
	int mLastColumn;
	unsigned mFirstRowStripeSize;
	unsigned mSecondRowStripeSize;
	unsigned mFirstColumnStripeSize;
	unsigned mSecondColumnStripeSize;

}
-(void)clearCache;
-(id)extractKeys:(id)arg1 from:(id)arg2 parent:(id)arg3 ;
-(void)cacheRange:(id)arg1 ;
-(void)cacheSizes:(id)arg1 inObject:(id)arg2 ;
-(id)collectionFromWorksheet:(id)arg1 ;
-(id)styleFromObject:(id)arg1 ;
-(id)extractRowStyleElements:(id)arg1 parentScope:(id)arg2 row:(int)arg3 ;
-(id)extractCellStyleElements:(id)arg1 parentScope:(id)arg2 row:(int)arg3 column:(int)arg4 ;
-(id)keysInTheOrderTheyShouldBeApplied;
-(int)borderFlagsForStyleType:(int)arg1 row:(int)arg2 column:(int)arg3 ;
-(id)extractGlobalStyleElements:(id)arg1 ;
-(id)wrapDifferentialStyleInATableStyleElement:(id)arg1 type:(int)arg2 ;
-(void)processObject:(id)arg1 ;
-(EDCellHeader*)cellWithSetupStyleAtRowNumber:(int)arg1 columnNumber:(int)arg2 ;
-(void)applyStyleElements:(id)arg1 toCell:(EDCellHeader*)arg2 row:(int)arg3 column:(int)arg4 ;
-(void)applyDifferentialStyle:(id)arg1 borderFlags:(int)arg2 precedence:(unsigned long long)arg3 toCell:(EDCellHeader*)arg4 row:(int)arg5 column:(int)arg6 ;
-(id)copyFlattenBorders:(id)arg1 differentialBorders:(id)arg2 borderFlags:(int)arg3 precedence:(unsigned long long)arg4 row:(int)arg5 column:(int)arg6 ;
-(id)copyFlattenFill:(id)arg1 differentialFill:(id)arg2 ;
-(id)copyFlattenFont:(id)arg1 differentialFont:(id)arg2 ;
-(id)copyFlattenBorder:(int)arg1 borders:(id)arg2 differentialBorders:(id)arg3 flag:(bool)arg4 precedence:(unsigned long long)arg5 row:(int)arg6 column:(int)arg7 ;
-(void)dealloc;
-(void)applyProcessorToObject:(id)arg1 sheet:(id)arg2 ;
@end

