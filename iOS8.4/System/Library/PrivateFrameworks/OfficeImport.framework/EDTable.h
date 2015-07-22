/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:17 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class EDResources, NSString, EDReference, EDCollection;

@interface EDTable : NSObject {

	EDResources* mResources;
	unsigned long long mStyleIndex;
	unsigned long long mHeaderRowDxfIndex;
	unsigned long long mTotalsRowDxfIndex;
	unsigned long long mDataAreaDxfIndex;
	unsigned long long mHeaderRowBorderDxfIndex;
	unsigned long long mTotalsRowBorderDxfIndex;
	unsigned long long mDataAreaBorderDxfIndex;
	unsigned long long mTableBorderDxfIndex;
	NSString* mName;
	NSString* mDisplayName;
	EDReference* mTableRange;
	NSString* mStyleName;
	unsigned long long mHeaderRowCount;
	unsigned long long mTotalsRowCount;
	BOOL mShowFirstColumn;
	BOOL mShowLastColumn;
	BOOL mShowRowStripes;
	BOOL mShowColumnStripes;
	EDCollection* mTableColumns;
	EDCollection* mColumnFilters;

}
+(id)tableWithResources:(id)arg1 ;
-(unsigned long long)styleIndex;
-(void)setStyleIndex:(unsigned long long)arg1 ;
-(unsigned long long)headerRowDxfIndex;
-(void)setHeaderRowDxfIndex:(unsigned long long)arg1 ;
-(unsigned long long)totalsRowDxfIndex;
-(void)setTotalsRowDxfIndex:(unsigned long long)arg1 ;
-(unsigned long long)dataAreaDxfIndex;
-(void)setDataAreaDxfIndex:(unsigned long long)arg1 ;
-(unsigned long long)headerRowBorderDxfIndex;
-(void)setHeaderRowBorderDxfIndex:(unsigned long long)arg1 ;
-(unsigned long long)totalsRowBorderDxfIndex;
-(void)setTotalsRowBorderDxfIndex:(unsigned long long)arg1 ;
-(unsigned long long)dataAreaBorderDxfIndex;
-(void)setDataAreaBorderDxfIndex:(unsigned long long)arg1 ;
-(unsigned long long)tableBorderDxfIndex;
-(void)setTableBorderDxfIndex:(unsigned long long)arg1 ;
-(void)dealloc;
-(void)setName:(id)arg1 ;
-(id)name;
-(id)style;
-(void)setStyle:(id)arg1 ;
-(id)displayName;
-(void)setDisplayName:(id)arg1 ;
-(id)initWithResources:(id)arg1 ;
-(id)headerRowDxf;
-(void)setHeaderRowDxf:(id)arg1 ;
-(id)totalsRowDxf;
-(void)setTotalsRowDxf:(id)arg1 ;
-(id)dataAreaDxf;
-(void)setDataAreaDxf:(id)arg1 ;
-(id)headerRowBorderDxf;
-(void)setHeaderRowBorderDxf:(id)arg1 ;
-(id)totalsRowBorderDxf;
-(void)setTotalsRowBorderDxf:(id)arg1 ;
-(id)dataAreaBorderDxf;
-(void)setDataAreaBorderDxf:(id)arg1 ;
-(id)tableBorderDxf;
-(void)setTableBorderDxf:(id)arg1 ;
-(void)setStyleName:(id)arg1 ;
-(id)tableRange;
-(unsigned long long)headerRowCount;
-(void)setHeaderRowCount:(unsigned long long)arg1 ;
-(unsigned long long)totalsRowCount;
-(void)setTotalsRowCount:(unsigned long long)arg1 ;
-(id)tableColumns;
-(id)columnFilters;
-(BOOL)showFirstColumn;
-(void)setShowFirstColumn:(BOOL)arg1 ;
-(BOOL)showLastColumn;
-(void)setShowLastColumn:(BOOL)arg1 ;
-(BOOL)showRowStripes;
-(void)setShowRowStripes:(BOOL)arg1 ;
-(BOOL)showColumnStripes;
-(void)setShowColumnStripes:(BOOL)arg1 ;
-(void)setTableRange:(id)arg1 ;
-(id)styleName;
@end
