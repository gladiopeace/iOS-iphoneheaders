/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:46 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol TSTCellRangeIteratorDelegate;
#import <iWorkImport/iWorkImport-Structs.h>
@class TSTCellIterator;

@interface TSTCellRangeIterator : NSObject {

	TSTCellIterator* mCellIterator;
	SCD_Struct_TS509* mIterData;
	bool mIterDataValid;
	bool mCellValidForDelegate;
	<TSTCellRangeIteratorDelegate>* mDelegate;

}

@property (nonatomic,readonly) bool cellValid; 
-(id)initWithTableModel:(id)arg1 region:(id)arg2 delegate:(id)arg3 ;
-(id)initWithTableModel:(id)arg1 range:(SCD_Struct_TS501)arg2 delegate:(id)arg3 ;
-(bool)cellValid;
-(id)initWithTableModel:(id)arg1 delegate:(id)arg2 ;
-(bool)processRange;
-(void)dealloc;
-(id).cxx_construct;
@end

