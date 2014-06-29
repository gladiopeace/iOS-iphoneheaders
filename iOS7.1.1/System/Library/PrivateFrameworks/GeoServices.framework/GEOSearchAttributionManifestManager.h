/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:29 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol GEOSearchAttributionServerProxy;
@interface GEOSearchAttributionManifestManager : NSObject {

	<GEOSearchAttributionServerProxy>* _serverProxy;

}

@property (nonatomic,readonly) <GEOSearchAttributionServerProxy> * serverProxy;              //@synthesize serverProxy=_serverProxy - In the implementation block
+(void)useRemoteProxy;
+(void)useLocalProxy;
+(id)sharedManager;
-(void)dealloc;
-(id)init;
-(void)loadAttributionInfoForIdentifier:(id)arg1 version:(unsigned)arg2 completionHandler:(/*^block*/ id)arg3 errorHandler:(/*^block*/ id)arg4 ;
-(id)serverProxy;
@end

