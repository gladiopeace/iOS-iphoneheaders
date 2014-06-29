/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:26 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOTileRequester.h>
#import <GeoServices/GEOVoltaireMultiTileDownloaderDelegate.h>
#import <GeoServices/GEOTileRequesterDelegate.h>
#import <GeoServices/GEOResourceManifestTileGroupObserver.h>

@class NSMutableArray, NSThread, NSTimer, GEOVoltaireSimpleTileRequester;

@interface GEOVoltaireTileRequester : GEOTileRequester <GEOVoltaireMultiTileDownloaderDelegate, GEOTileRequesterDelegate, GEOResourceManifestTileGroupObserver> {

	NSMutableArray* _activeDownloads;
	NSThread* _startThread;
	NSTimer* _activeTileGroupTimeoutTimer;
	NSMutableArray* _errors;
	GEOVoltaireSimpleTileRequester* _simpleRequester;

}
+(unsigned long long)expiringTilesetsCount;
+(SCD_Struct_GE46*)newExpiringTilesets;
+(bool)skipNetworkForKeysWhenPreloading:(id)arg1 ;
+(Class)multiDownloaderClass;
+(Class)simpleRequesterClass;
+(unsigned char)tileProviderIdentifier;
-(void)dealloc;
-(void)cancel;
-(void)start;
-(void)cleanup;
-(void)_startWithTileKeys:(id)arg1 ;
-(void)_failedToReceiveActiveTileGroup:(id)arg1 ;
-(id)multiTileURLStringForTileKey:(GEOTileKey*)arg1 useStatusCodes:(bool*)arg2 ;
-(void)tryFinish;
-(void)tileDownloadFinished:(id)arg1 ;
-(void)tileDownload:(id)arg1 didReceiveData:(id)arg2 edition:(unsigned)arg3 forKey:(GEOTileKey)arg4 ;
-(void)tileDownload:(id)arg1 didFailWithError:(id)arg2 ;
-(void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1 ;
-(void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1 ;
-(void)tileRequester:(id)arg1 receivedError:(id)arg2 ;
-(unsigned)tileSetForKey:(const GEOTileKey*)arg1 ;
-(void)tileRequester:(id)arg1 receivedData:(id)arg2 tileEdition:(unsigned)arg3 tileSet:(unsigned)arg4 forKey:(GEOTileKey)arg5 userInfo:(id)arg6 ;
-(void)tileRequesterFinished:(id)arg1 ;
@end

