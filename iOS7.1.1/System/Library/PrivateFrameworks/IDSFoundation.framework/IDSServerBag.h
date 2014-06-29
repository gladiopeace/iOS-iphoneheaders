/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:34 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class IMConnectionMonitor, NSURL, NSString, NSDictionary, NSMutableURLRequest, IMRemoteURLConnection, NSObject, NSData, NSDate, NSNumber;

@interface IDSServerBag : NSObject {

	bool _allowSelfSignedCertificates;
	bool _allowUnsignedBags;
	int _trustStatus;
	IMConnectionMonitor* _connectionMonitor;
	NSURL* _bagURL;
	NSString* _apsEnvironmentName;
	NSDictionary* _bag;
	NSDictionary* _cachedBag;
	NSMutableURLRequest* _urlRequest;
	IMRemoteURLConnection* _remoteURLConnection;
	NSObject<OS_dispatch_queue>* _bagQueue;
	NSString* _cachedURLString;
	NSData* _certData;
	NSString* _cachedHash;
	NSDate* _loadDate;
	NSNumber* _cacheTime;

}

@property (retain) NSURL * bagURL;                                                       //@synthesize bagURL=_bagURL - In the implementation block
@property (retain) NSString * apsEnvironmentName;                                        //@synthesize apsEnvironmentName=_apsEnvironmentName - In the implementation block
@property (assign) bool allowSelfSignedCertificates;                                     //@synthesize allowSelfSignedCertificates=_allowSelfSignedCertificates - In the implementation block
@property (assign) bool allowUnsignedBags;                                               //@synthesize allowUnsignedBags=_allowUnsignedBags - In the implementation block
@property (readonly) bool isLoaded; 
@property (readonly) bool isLoading; 
@property (readonly) bool isInDebilitatedMode; 
@property (readonly) bool isServerAvailable; 
@property (retain) IMConnectionMonitor * _connectionMonitor;                             //@synthesize connectionMonitor=_connectionMonitor - In the implementation block
@property (setter=_setBag:,retain) NSDictionary * _bag;                                  //@synthesize bag=_bag - In the implementation block
@property (setter=_setCachedBag:,retain) NSDictionary * _cachedBag;                      //@synthesize cachedBag=_cachedBag - In the implementation block
@property (retain) NSMutableURLRequest * _urlRequest;                                    //@synthesize urlRequest=_urlRequest - In the implementation block
@property (setter=_setCachedURLString:,retain) NSString * _cachedURLString;              //@synthesize cachedURLString=_cachedURLString - In the implementation block
@property (setter=_setCachedHash:,retain) NSString * _cachedHash;                        //@synthesize cachedHash=_cachedHash - In the implementation block
@property (retain) NSDate * _loadDate;                                                   //@synthesize loadDate=_loadDate - In the implementation block
@property (retain) NSNumber * _cacheTime;                                                //@synthesize cacheTime=_cacheTime - In the implementation block
@property (assign) IMRemoteURLConnection * _remoteURLConnection;                         //@synthesize remoteURLConnection=_remoteURLConnection - In the implementation block
@property (assign) NSObject<OS_dispatch_queue> * _bagQueue;                              //@synthesize bagQueue=_bagQueue - In the implementation block
@property (setter=_setTrustStatus:) int _trustStatus;                                    //@synthesize trustStatus=_trustStatus - In the implementation block
@property (retain) NSData * _certData;                                                   //@synthesize certData=_certData - In the implementation block
+(id)sharedInstance;
+(id)_sharedInstance;
+(id)sharedInstanceForBagType:(long long)arg1 ;
+(id)_bagCreationLock;
+(id)_sharedInstanceForClass:(Class)arg1 ;
-(void)_clearCache;
-(void)dealloc;
-(id)objectForKey:(id)arg1 ;
-(bool)isLoading;
-(bool)isLoaded;
-(void)_invalidate;
-(id)urlWithKey:(id)arg1 ;
-(id)_cachedBag;
-(id)_bag;
-(id)bagURL;
-(bool)allowSelfSignedCertificates;
-(bool)allowUnsignedBags;
-(void)startBagLoad;
-(bool)isServerAvailable;
-(id)apsEnvironmentName;
-(bool)isInDebilitatedMode;
-(void)forceBagLoad;
-(id)_initWithURL:(id)arg1 apsEnvironmentName:(id)arg2 allowSelfSignedCertificates:(bool)arg3 allowUnsignedBags:(bool)arg4 ;
-(id)_bagDefaultsDomain;
-(id)_cacheTime;
-(void)_setCachedBag:(id)arg1 ;
-(void)_setCachedURLString:(id)arg1 ;
-(void)_setBag:(id)arg1 ;
-(void)_setTrustStatus:(int)arg1 ;
-(void)__saveCacheToPrefs;
-(void)_saveCacheToPrefs;
-(void)_setCachedHash:(id)arg1 ;
-(void)_loadFromCache;
-(void)_saveToCache;
-(bool)_allowInvalid;
-(int)_trustStatus;
-(bool)_loadFromDictionary:(id)arg1 returningError:(id*)arg2 ;
-(id)_cachedURLString;
-(void)_generateURLRequest;
-(void)_cancelCurrentLoad;
-(void)_processBagResultData:(id)arg1 response:(id)arg2 inBackground:(bool)arg3 ;
-(void)_startBagLoad:(bool)arg1 ;
-(void)_bagExternallyReloaded;
-(id)_connectionMonitor;
-(void)set_connectionMonitor:(id)arg1 ;
-(void)setBagURL:(id)arg1 ;
-(void)setApsEnvironmentName:(id)arg1 ;
-(id)_urlRequest;
-(void)set_urlRequest:(id)arg1 ;
-(id)_remoteURLConnection;
-(void)set_remoteURLConnection:(id)arg1 ;
-(id)_bagQueue;
-(void)set_bagQueue:(id)arg1 ;
-(id)_certData;
-(void)set_certData:(id)arg1 ;
-(id)_cachedHash;
-(id)_loadDate;
-(void)set_loadDate:(id)arg1 ;
-(void)set_cacheTime:(id)arg1 ;
-(void)setAllowSelfSignedCertificates:(bool)arg1 ;
-(void)setAllowUnsignedBags:(bool)arg1 ;
-(void)connectionMonitorDidUpdate:(id)arg1 ;
-(bool)_loadFromSignedDictionary:(id)arg1 returningError:(id*)arg2 ;
@end

