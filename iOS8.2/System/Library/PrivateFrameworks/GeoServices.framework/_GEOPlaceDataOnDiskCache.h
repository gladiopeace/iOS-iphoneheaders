/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:09 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/_GEOPlaceDataCacheProxy.h>

@class GEOPlaceDataDBReader, GEOPlaceDataDBWriter, NSString;

@interface _GEOPlaceDataOnDiskCache : NSObject <_GEOPlaceDataCacheProxy> {

	GEOPlaceDataDBReader* _reader;
	GEOPlaceDataDBWriter* _writer;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithPath:(id)arg1 ;
-(void)setPlaceData:(id)arg1 forKey:(GEOTileKey)arg2 ;
-(void)setPlaceData:(id)arg1 forMUID:(unsigned long long)arg2 ;
-(void)deletePhoneNumberMapping;
-(void)shrinkToSize:(unsigned long long)arg1 finished:(/*^block*/id)arg2 ;
-(void)calculateFreeableSpaceWithHandler:(/*^block*/id)arg1 ;
-(id)placeDataForMUID:(unsigned long long)arg1 ;
-(void)evictPlaceDataForMUID:(unsigned long long)arg1 ;
-(unsigned long long)muidForPhoneNumber:(unsigned long long)arg1 ;
-(id)placeDataForPhoneNumber:(unsigned long long)arg1 ;
-(id)allCacheEntries;
-(id)placeDataForKey:(GEOTileKey)arg1 ;
-(void)evictPlaceDataForKey:(GEOTileKey)arg1 ;
-(void)evictAllEntries;
@end

