/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:34 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHChartCommand.h>

@class NSNumber;

@interface TSCHCommandSetGridValue : TSCHChartCommand {

	unsigned long long mRowIndex;
	unsigned long long mColumnIndex;
	NSNumber* mOldValue;
	NSNumber* mNewValue;

}
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)commitPrimitive;
-(void)undoPrimitive;
-(void)redoPrimitive;
-(const ChartCommandArchive*)chartCommandArchiveFromUnarchiver:(id)arg1 ;
-(id)initWithChartInfo:(id)arg1 rowIndex:(unsigned long long)arg2 columnIndex:(unsigned long long)arg3 value:(id)arg4 ;
-(void)dealloc;
-(bool)process;
@end

