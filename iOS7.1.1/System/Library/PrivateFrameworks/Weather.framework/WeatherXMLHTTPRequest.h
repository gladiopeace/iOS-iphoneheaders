/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:53 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Weather/Weather-Structs.h>
#import <libTelephonyUtilDynamic.dylib/NSURLConnectionDelegate.h>

@class NSMutableURLRequest, NSURLConnection, NSMutableData;

@interface WeatherXMLHTTPRequest : NSObject <NSURLConnectionDelegate> {

	NSMutableURLRequest* _request;
	NSURLConnection* _connection;
	NSMutableData* _rawData;

}

@property (nonatomic,readonly) NSURLConnection * connection;              //@synthesize connection=_connection - In the implementation block
+(void)appendDebugString:(id)arg1 ;
+(void)saveDebugString;
-(void)dealloc;
-(id)init;
-(void)cancel;
-(void)loadRequest:(id)arg1 ;
-(bool)isLoading;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(id)connection;
-(void)failWithError:(id)arg1 ;
-(id)aggregateDictionaryDomain;
-(void)willProcessDocument;
-(void)processDocument:(xmlDoc*)arg1 ;
-(void)didProcessDocument;
-(void)_forceRawDataDump:(id)arg1 ;
@end

