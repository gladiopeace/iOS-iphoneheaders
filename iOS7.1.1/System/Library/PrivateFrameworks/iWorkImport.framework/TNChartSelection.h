/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:56 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHSelection.h>

@interface TNChartSelection : TSCHSelection {

	SCD_Struct_TS270* mReference;

}

@property (nonatomic,readonly) SCD_Struct_TS275* reference; 
+(Class)archivedSelectionClass;
-(void)saveToArchive:(ChartSelectionArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithChartInfo:(id)arg1 ;
-(bool)returnChartFrameForAutoscroll;
-(id)initWithChartInfo:(id)arg1 paths:(id)arg2 ;
-(id)initFromArchive:(const ChartSelectionArchive*)arg1 unarchiver:(id)arg2 ;
-(id)initWithChartInfo:(id)arg1 paths:(id)arg2 reference:(SCD_Struct_TS275*)arg3 ;
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone)arg1 ;
-(id).cxx_construct;
-(SCD_Struct_TS275*)reference;
-(void)setReference:(SCD_Struct_TS275*)arg1 ;
@end

