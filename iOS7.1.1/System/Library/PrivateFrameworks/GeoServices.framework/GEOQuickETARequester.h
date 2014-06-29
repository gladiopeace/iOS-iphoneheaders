/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:29 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class GEOQuickETARequest, GEOClientETARequest, GEODirectionsRouteRequest, NSString;

@interface GEOQuickETARequester : NSObject {

	GEOQuickETARequest* _request;
	GEOClientETARequest* _simpleETARequest;
	GEODirectionsRouteRequest* _directionsETARequest;
	NSString* _loggingFacility;

}

@property (nonatomic,copy) NSString * loggingFacility;              //@synthesize loggingFacility=_loggingFacility - In the implementation block
-(void)calculateETALocalizedDescriptionFromOrigin:(id)arg1 toPLOI:(id)arg2 handler:(/*^block*/ id)arg3 ;
-(void)dealloc;
-(void)cancel;
-(id)initWithRequest:(id)arg1 ;
-(void)calculateETAWithResponseHandler:(/*^block*/ id)arg1 ;
-(void)_calculateSimpleETAWithHandler:(/*^block*/ id)arg1 ;
-(void)_calculateRoutingETAWithHandler:(/*^block*/ id)arg1 ;
-(void)calculateETAWithHandler:(/*^block*/ id)arg1 ;
-(id)loggingFacility;
-(void)setLoggingFacility:(id)arg1 ;
@end

