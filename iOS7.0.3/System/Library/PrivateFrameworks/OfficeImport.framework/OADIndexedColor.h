/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:08 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADColor.h>

@interface OADIndexedColor : OADColor {

	unsigned mIndex;

}
+(id)indexedColorWithIndex:(unsigned)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(unsigned)index;
-(id)colorFromPalette:(id)arg1 ;
-(id)initWithIndex:(unsigned)arg1 ;
@end
