/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:27 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOSimpleTileRequester.h>
#import <libTelephonyUtilDynamic.dylib/NSURLConnectionDelegate.h>

@interface GEOVoltaireSimpleTileRequester : GEOSimpleTileRequester <NSURLConnectionDelegate>
-(unsigned)tileEditionForKey:(GEOTileKey*)arg1 ;
-(id)urlForTileKey:(GEOTileKey*)arg1 ;
-(id)localizationURLForTileKey:(GEOTileKey*)arg1 ;
-(id)_localizationURLForTileKey:(GEOTileKey*)arg1 ;
-(unsigned)tileSetForKey:(const GEOTileKey*)arg1 ;
@end

