/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:10 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreThemeDefinition/TDRenditionSpec.h>

@interface TDPhotoshopRenditionSpec : TDRenditionSpec
-(id)debugDescription;
-(void)copyAttributesInto:(id)arg1 ;
-(id)copyDataFromAttributes;
-(void)setAttributesFromCopyData:(id)arg1 ;
-(void)_logError:(id)arg1 ;
-(void)_logExtra:(id)arg1 ;
-(int)psdSliceNumberForRenditionRow:(int)arg1 sliceRow:(int)arg2 renditionColumn:(int)arg3 sliceColumn:(int)arg4 rowsPerRendition:(int)arg5 columnsPerRendition:(int)arg6 renditionColumnCount:(int)arg7 ;
-(void)_logWarning:(id)arg1 ;
-(id)createCSIRepresentationFromGradientPSDImage:(id)arg1 withCompression:(bool)arg2 colorSpaceID:(unsigned long long)arg3 ;
-(id)createCSIRepresentationFromPSDImage:(id)arg1 withCompression:(bool)arg2 edgeMetricsMask:(id)arg3 textMetricsMask:(id)arg4 colorSpaceID:(unsigned long long)arg5 ;
-(id)createCSIRepresentationWithCompression:(bool)arg1 colorSpaceID:(unsigned long long)arg2 document:(id)arg3 ;
-(id)createCSIRepresentationFromPSDImage:(id)arg1 withCompression:(bool)arg2 colorSpaceID:(unsigned long long)arg3 ;
@end

