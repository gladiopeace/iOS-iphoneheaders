/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:32 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <CoreFoundation/NSFastEnumeration.h>

@class TSCHChartGrid, NSString;

@interface TSCHChartGridAdapter : NSObject <NSFastEnumeration> {

	TSCHChartGrid* mGrid;
	unsigned long long mIndex;

}

@property (nonatomic,readonly) TSCHChartGrid * grid; 
@property (nonatomic,retain) NSString * name; 
-(id)initWithChartGrid:(id)arg1 index:(unsigned long long)arg2 ;
-(id*)valuesAtIndexes:(NSRange)arg1 ;
-(void)dealloc;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_TS24*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(unsigned long long)count;
-(void)setName:(id)arg1 ;
-(id)name;
-(id)grid;
-(void)setValue:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)valueAtIndex:(unsigned long long)arg1 ;
@end

