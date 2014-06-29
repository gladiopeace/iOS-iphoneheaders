/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:30 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Symbolication/Symbolication-Structs.h>
@class NSMutableArray, NSMapTable;

@interface VMUVMRegionIdentifier : NSObject {

	NSMutableArray* _regions;
	NSMapTable* _mallocZoneStatisticsMap;

}
-(id)initWithTask:(unsigned)arg1 ;
-(void)dealloc;
-(id)initWithTask:(unsigned)arg1 options:(unsigned long long)arg2 ;
-(id)regions;
-(id)descriptionForRange:(VMURange)arg1 options:(unsigned long long)arg2 ;
-(id)descriptionForMallocZoneTotalsWithOptions:(unsigned long long)arg1 ;
-(id)descriptionForRange:(VMURange)arg1 ;
-(id)descriptionForRegionTotalsWithOptions:(unsigned long long)arg1 ;
@end

