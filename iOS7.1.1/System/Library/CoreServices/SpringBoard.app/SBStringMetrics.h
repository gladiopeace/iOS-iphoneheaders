/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:57:55 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <CoreFoundation/NSFastEnumeration.h>

@class NSMutableArray;

@interface SBStringMetrics : NSObject <NSFastEnumeration> {

	NSMutableArray* _fragments;

}
-(void)addFragment:(id)arg1 ;
-(void)dealloc;
-(unsigned)countByEnumeratingWithState:(SCD_Struct_SB27*)arg1 objects:(id*)arg2 count:(unsigned)arg3 ;
-(id)init;
-(id)description;
-(unsigned)fragmentCount;
-(id)fragments;
@end

