/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:30 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Symbolication/Symbolication-Structs.h>
@class NSMapTable, NSMutableSet;

@interface VMUTraceData : NSObject {

	NSMapTable* pcMap;
	NSMapTable* threadTraces;
	NSMapTable* libXrefs;
	NSMapTable* fnXrefs;
	NSMutableSet* threadIDnumbers;
	unsigned maxDepth;
	unsigned long long threadCount;

}
-(void)addEvent:(id)arg1 ;
-(void)writeToFile:(_sFILE*)arg1 ;
-(void)dealloc;
-(id)init;
-(id)symbolForPC:(unsigned long long)arg1 ;
-(bool)readFromFile:(_sFILE*)arg1 ;
-(void)freeXrefTable:(id)arg1 ;
-(id)numberForThread:(unsigned)arg1 ;
-(void)buildPCMap:(long long*)arg1 withNumPages:(unsigned)arg2 forTask:(unsigned)arg3 ;
-(unsigned long long)readAddressFromFile:(_sFILE*)arg1 has64bitAddresses:(bool)arg2 needSwap:(bool)arg3 ;
-(void)addOrIncrementXref:(id)arg1 withParent:(id)arg2 withChild:(id)arg3 withSelector:(SEL)arg4 commutative:(bool)arg5 ;
-(void)generateXref:(id)arg1 withSelector:(SEL)arg2 commutative:(bool)arg3 ;
-(id)initWithLogRecords:(SCD_Struct_VM11*)arg1 forTask:(unsigned)arg2 ;
-(id)initWithBacktraces:(id)arg1 forTask:(unsigned)arg2 ;
-(id)threadIDs;
-(id)traceForThread:(unsigned)arg1 ;
-(id)functionXref;
-(id)libraryXref;
-(void)printXrefs:(id)arg1 toString:(id)arg2 ;
-(unsigned)maxDepth;
-(void)finalize;
@end

