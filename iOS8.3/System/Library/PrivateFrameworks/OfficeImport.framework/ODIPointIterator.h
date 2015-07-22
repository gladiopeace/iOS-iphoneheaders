/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:53:04 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface ODIPointIterator : NSObject
+(id)pointsForSpecification:(id)arg1 startingPoint:(id)arg2 isLast:(char)arg3 ;
+(id)processAttributes:(id)arg1 startingPoint:(id)arg2 isLast:(char)arg3 ;
+(void)processSelfAxisFromPoint:(id)arg1 state:(ODIPointIteratorState*)arg2 ;
+(void)processChildAxisFromPoint:(id)arg1 state:(ODIPointIteratorState*)arg2 ;
+(void)processFollowingSiblingAxisFromPoint:(id)arg1 state:(ODIPointIteratorState*)arg2 ;
+(char)isDoneForState:(ODIPointIteratorState*)arg1 ;
+(char)isPoint:(id)arg1 ofType:(int)arg2 ;
+(char)addPoint:(id)arg1 state:(ODIPointIteratorState*)arg2 ;
@end
