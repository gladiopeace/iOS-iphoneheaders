/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:47 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSTCell, TSWPColumn, TSTLayoutContentCachedKey;

@interface TSTCellStateForLayout : NSObject {

	bool mCellPropsRowHeight;
	bool mCellWraps;
	bool mForDrawing;
	bool mInDynamicLayout;
	SCD_Struct_TS267 mModelCellID;
	int mVerticalAlignment;
	int mLayoutCacheFlags;
	TSTCell* mCell;
	SCD_Struct_TS500 mMergedRange;
	TSWPColumn* mWPColumn;
	id mCellContents;
	TSTLayoutContentCachedKey* mKeyVal;
	unsigned long long mPageNumber;
	unsigned long long mPageCount;
	CGSize mMinSize;
	CGSize mMaxSize;
	UIEdgeInsets mPaddingInsets;

}

@property (assign,nonatomic) SCD_Struct_TS267 modelCellID; 
@property (nonatomic,copy) TSTCell * cell; 
@property (assign,nonatomic) SCD_Struct_TS501 mergedRange; 
@property (nonatomic,retain) id cellContents; 
@property (assign,nonatomic) CGSize minSize; 
@property (assign,nonatomic) CGSize maxSize; 
@property (assign,nonatomic) UIEdgeInsets paddingInsets; 
@property (assign,nonatomic) int verticalAlignment; 
@property (assign,nonatomic) bool cellPropsRowHeight; 
@property (assign,nonatomic) bool cellWraps; 
@property (assign,nonatomic) bool forDrawing; 
@property (assign,nonatomic) bool inDynamicLayout; 
@property (assign,nonatomic) int layoutCacheFlags; 
@property (nonatomic,readonly) bool hasContent; 
@property (nonatomic,retain) TSTLayoutContentCachedKey * keyVal; 
@property (nonatomic,retain) TSWPColumn * wpColumn; 
@property (assign,nonatomic) unsigned long long pageNumber; 
@property (assign,nonatomic) unsigned long long pageCount; 
-(void)setModelCellID:(SCD_Struct_TS267)arg1 ;
-(void)setCellPropsRowHeight:(bool)arg1 ;
-(void)setCellWraps:(bool)arg1 ;
-(void)setPaddingInsets:(UIEdgeInsets)arg1 ;
-(void)setForDrawing:(bool)arg1 ;
-(void)setMergedRange:(SCD_Struct_TS501)arg1 ;
-(void)setInDynamicLayout:(bool)arg1 ;
-(void)setCellContents:(id)arg1 ;
-(void)setLayoutCacheFlags:(int)arg1 ;
-(id)wpColumn;
-(id)keyVal;
-(id)cellContents;
-(SCD_Struct_TS267)modelCellID;
-(bool)cellWraps;
-(int)layoutCacheFlags;
-(UIEdgeInsets)paddingInsets;
-(void)setKeyVal:(id)arg1 ;
-(void)setWpColumn:(id)arg1 ;
-(SCD_Struct_TS501)mergedRange;
-(bool)inDynamicLayout;
-(bool)cellPropsRowHeight;
-(bool)forDrawing;
-(void)dealloc;
-(id)init;
-(CGSize)maxSize;
-(CGSize)minSize;
-(void)setMaxSize:(CGSize)arg1 ;
-(bool)hasContent;
-(unsigned long long)pageCount;
-(id)cell;
-(void)setPageCount:(unsigned long long)arg1 ;
-(void)setCell:(id)arg1 ;
-(unsigned long long)pageNumber;
-(void)setMinSize:(CGSize)arg1 ;
-(void)setPageNumber:(unsigned long long)arg1 ;
-(int)verticalAlignment;
-(void)setVerticalAlignment:(int)arg1 ;
@end

