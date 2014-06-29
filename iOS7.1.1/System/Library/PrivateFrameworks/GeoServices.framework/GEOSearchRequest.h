/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:25 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOPlaceSearchRequest.h>

@interface GEOSearchRequest : GEOPlaceSearchRequest {

	unsigned short _provider;

}

@property (assign,nonatomic) unsigned short provider;              //@synthesize provider=_provider - In the implementation block
-(id)initBasicSearchRequest:(bool)arg1 ;
-(id)initDisplayableSearchRequest:(bool)arg1 ;
-(id)initCompletionsSearchRequest;
-(id)initRoutingSearchRequest;
-(void)addMapViewInfo:(id)arg1 ;
-(id)initDisplayableSearchRequest;
-(id)_mapkit_initForCompletionsWithEntriesType:(long long)arg1 listType:(long long)arg2 ;
-(id)_mapkit_initWithLocalSearchRequest:(id)arg1 ;
-(void)setDeviceGEOCoordinate:(SCD_Struct_GE12)arg1 ;
-(void)setProvider:(unsigned short)arg1 ;
-(id)init;
-(Class)responseClass;
-(unsigned short)provider;
@end

