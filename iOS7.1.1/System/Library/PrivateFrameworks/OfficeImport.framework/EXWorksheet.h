/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:08 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface EXWorksheet : NSObject
+(void)setupProcessors:(id)arg1 ;
+(void)readWorksheetViewsFrom:(xmlNode*)arg1 state:(id)arg2 ;
+(void)readWorksheetFormatPropertiesFrom:(xmlNode*)arg1 state:(id)arg2 ;
+(void)readColumnInfosFrom:(xmlNode*)arg1 state:(id)arg2 ;
+(void)readConditionalFormattingsFrom:(xmlNode*)arg1 state:(id)arg2 ;
+(void)readHyperlinksFrom:(xmlNode*)arg1 state:(id)arg2 ;
+(void)readOleObjectsFrom:(xmlNode*)arg1 state:(id)arg2 ;
+(void)readDataValidationsFrom:(xmlNode*)arg1 state:(id)arg2 ;
+(void)readCommentTextFrom:(id)arg1 ;
+(void)readPivotTables:(id)arg1 ;
+(id)edSheetWithState:(id)arg1 ;
+(bool)readDistinctSheetElementsFrom:(xmlTextReaderRef)arg1 state:(id)arg2 ;
+(void)readOtherSheetComponentsWithState:(id)arg1 ;
+(void)readTables:(id)arg1 ;
@end

