/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:08 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface OABFill : NSObject
+(void)readGradientFill:(id)arg1 fromFillPropertiesManager:(id)arg2 colorPalette:(id)arg3 ;
+(void)readImageFill:(id)arg1 fromFillPropertiesManager:(id)arg2 colorPalette:(id)arg3 ;
+(void)addStopsFromArray:(const OABGradientStop*)arg1 stopCount:(int)arg2 inverted:(bool)arg3 startPos:(float)arg4 endPos:(float)arg5 toGradientFill:(id)arg6 fillPropertiesManager:(id)arg7 ;
+(id)readFillFromFillPropertiesManager:(id)arg1 colorPalette:(id)arg2 ;
+(void)writeFill:(id)arg1 toFill:(EshFill*)arg2 state:(id)arg3 ;
@end

