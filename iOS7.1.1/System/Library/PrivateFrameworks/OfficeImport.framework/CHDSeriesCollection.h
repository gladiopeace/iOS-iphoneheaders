/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:04 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/EDSortedCollection.h>

@class CHDChart;

@interface CHDSeriesCollection : EDSortedCollection {

	CHDChart* mChart;

}
+(id)seriesCollectionWithChart:(id)arg1 ;
-(unsigned long long)addObject:(id)arg1 ;
-(id)initWithChart:(id)arg1 ;
-(unsigned long long)nonEmptySeriesCount;
-(id)firstNonEmptySeries;
@end

