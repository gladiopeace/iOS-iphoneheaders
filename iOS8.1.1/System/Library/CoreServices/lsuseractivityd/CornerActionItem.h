/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:24 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/CoreServices/lsuseractivityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString, NSData, NSMutableDictionary, NSDate, NSUUID, NSError, NSDictionary, NSSet, NSURL, _LSUserActivityWasContinuedInfo, LSUserActivityClientProcess;

@interface CornerActionItem : NSObject {

	NSString* _title;
	NSString* _bundleIdentifier;
	NSData* _userInfoPayload;
	NSData* _frameworkPayload;
	NSMutableDictionary* _resourceURLs;
	NSDate* _when;
	NSDate* _removeAfter;
	BOOL _payloadAvailable;
	BOOL _payloadRequested;
	NSUUID* _uuid;
	unsigned long long _actionItemType;
	NSError* _error;
	NSDictionary* _options;
	NSSet* _teamIDs;
	NSString* _activityType;
	NSString* _deviceName;
	NSString* _deviceIdentifier;
	NSString* _deviceType;
	NSURL* _webpageURL;
	NSData* _streamsData;
	NSData* _activityPayloadData;
	NSDate* _supressedUntil;
	NSData* _activityPayload;
	_LSUserActivityWasContinuedInfo* _wasContinuedInfo;
	LSUserActivityClientProcess* _originatingClient;

}

@property (copy,readonly) NSUUID * uuid;                                                     //@synthesize uuid=_uuid - In the implementation block
@property (readonly) unsigned long long actionItemType;                                      //@synthesize actionItemType=_actionItemType - In the implementation block
@property (copy) NSString * title;                                                           //@synthesize title=_title - In the implementation block
@property (copy) NSURL * webpageURL;                                                         //@synthesize webpageURL=_webpageURL - In the implementation block
@property (copy) NSData * streamsData;                                                       //@synthesize streamsData=_streamsData - In the implementation block
@property (copy) NSData * activityPayloadData;                                               //@synthesize activityPayloadData=_activityPayloadData - In the implementation block
@property (copy) NSError * error;                                                            //@synthesize error=_error - In the implementation block
@property (copy) NSDate * when;                                                              //@synthesize when=_when - In the implementation block
@property (copy) NSDate * supressedUntil;                                                    //@synthesize supressedUntil=_supressedUntil - In the implementation block
@property (copy) NSDate * removeAfter;                                                       //@synthesize removeAfter=_removeAfter - In the implementation block
@property (copy) NSSet * teamIDs;                                                            //@synthesize teamIDs=_teamIDs - In the implementation block
@property (copy) NSString * bundleIdentifier;                                                //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (copy) NSString * activityType;                                                    //@synthesize activityType=_activityType - In the implementation block
@property (copy) NSData * activityPayload;                                                   //@synthesize activityPayload=_activityPayload - In the implementation block
@property (getter=isPayloadAvailable) BOOL payloadAvailable;                                 //@synthesize payloadAvailable=_payloadAvailable - In the implementation block
@property (getter=isPayloadRequested) BOOL payloadRequested;                                 //@synthesize payloadRequested=_payloadRequested - In the implementation block
@property (copy,readonly) NSDictionary * options;                                            //@synthesize options=_options - In the implementation block
@property (copy) NSString * deviceName;                                                      //@synthesize deviceName=_deviceName - In the implementation block
@property (copy) NSString * deviceIdentifier;                                                //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
@property (copy) NSString * deviceType;                                                      //@synthesize deviceType=_deviceType - In the implementation block
@property (retain,readonly) _LSUserActivityWasContinuedInfo * wasContinuedInfo;              //@synthesize wasContinuedInfo=_wasContinuedInfo - In the implementation block
@property (__weak) LSUserActivityClientProcess * originatingClient;                          //@synthesize originatingClient=_originatingClient - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSData *)activityPayloadData;
-(id)initWithUUID:(id)arg1 type:(unsigned long long)arg2 options:(id)arg3 ;
-(LSUserActivityClientProcess *)originatingClient;
-(void)setOriginatingClient:(LSUserActivityClientProcess *)arg1 ;
-(NSDate *)supressedUntil;
-(unsigned long long)actionItemType;
-(NSDate *)removeAfter;
-(void)setSupressedUntil:(NSDate *)arg1 ;
-(_LSUserActivityWasContinuedInfo *)wasContinuedInfo;
-(void)requestPayloadWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setTeamIDs:(NSSet *)arg1 ;
-(void)setRemoveAfter:(NSDate *)arg1 ;
-(BOOL)isPayloadAvailable;
-(BOOL)isPayloadRequested;
-(void)setPayloadRequested:(BOOL)arg1 ;
-(void)setPayloadAvailable:(BOOL)arg1 ;
-(NSSet *)teamIDs;
-(void)setActivityPayloadData:(NSData *)arg1 ;
-(void)clearPayload;
-(NSURL *)webpageURL;
-(void)setWebpageURL:(NSURL *)arg1 ;
-(NSDate *)when;
-(id)logString;
-(NSData *)streamsData;
-(void)setStreamsData:(NSData *)arg1 ;
-(NSData *)activityPayload;
-(void)setActivityPayload:(NSData *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)description;
-(id)debugDescription;
-(NSString *)bundleIdentifier;
-(NSString *)title;
-(NSDictionary *)options;
-(NSString *)activityType;
-(NSUUID *)uuid;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(NSString *)deviceIdentifier;
-(void)setDeviceIdentifier:(NSString *)arg1 ;
-(void)setDeviceType:(NSString *)arg1 ;
-(void)setWhen:(NSDate *)arg1 ;
-(NSString *)deviceName;
-(void)setDeviceName:(NSString *)arg1 ;
-(id)statusString;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(NSString *)deviceType;
-(void)setActivityType:(NSString *)arg1 ;
@end
