/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:24 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSUUID, NSDictionary;

@interface HMMessage : NSObject {

	BOOL _remoteSource;
	NSString* _name;
	NSUUID* _identifier;
	NSDictionary* _messagePayload;
	/*^block*/id _responseHandler;
	id _transport;

}

@property (nonatomic,readonly) NSString * name;                                      //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSUUID * identifier;                                  //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSDictionary * messagePayload;                        //@synthesize messagePayload=_messagePayload - In the implementation block
@property (nonatomic,readonly) id responseHandler;                                   //@synthesize responseHandler=_responseHandler - In the implementation block
@property (nonatomic,readonly) id transport;                                         //@synthesize transport=_transport - In the implementation block
@property (getter=isRemoteSource,nonatomic,readonly) BOOL remoteSource;              //@synthesize remoteSource=_remoteSource - In the implementation block
+(id)messageWithName:(id)arg1 messagePayload:(id)arg2 ;
+(id)messageWithName:(id)arg1 identifier:(id)arg2 messagePayload:(id)arg3 ;
+(id)messageWithName:(id)arg1 identifier:(id)arg2 messagePayload:(id)arg3 remoteSource:(BOOL)arg4 ;
+(id)messageWithName:(id)arg1 messagePayload:(id)arg2 responseHandler:(/*^block*/id)arg3 ;
+(id)messageWithName:(id)arg1 identifier:(id)arg2 messagePayload:(id)arg3 remoteSource:(BOOL)arg4 responseHandler:(/*^block*/id)arg5 ;
+(id)messageWithName:(id)arg1 identifier:(id)arg2 messagePayload:(id)arg3 transport:(id)arg4 responseHandler:(/*^block*/id)arg5 ;
+(id)messageWithName:(id)arg1 identifier:(id)arg2 messagePayload:(id)arg3 transport:(id)arg4 ;
+(id)messageWithName:(id)arg1 messagePayload:(id)arg2 transport:(id)arg3 ;
+(id)messageWithName:(id)arg1 messagePayload:(id)arg2 transport:(id)arg3 responseHandler:(/*^block*/id)arg4 ;
+(id)messageWithName:(id)arg1 identifier:(id)arg2 messagePayload:(id)arg3 responseHandler:(/*^block*/id)arg4 ;
-(BOOL)boolForKey:(id)arg1 ;
-(id)stringForKey:(id)arg1 ;
-(id)dictionaryForKey:(id)arg1 ;
-(BOOL)boolForKey:(id)arg1 keyPresent:(BOOL*)arg2 ;
-(id)numberForKey:(id)arg1 ;
-(id)uuidForKey:(id)arg1 ;
-(id)dateForKey:(id)arg1 ;
-(id)timeZoneForKey:(id)arg1 ;
-(id)dateComponentsForKey:(id)arg1 ;
-(id)errorForKey:(id)arg1 ;
-(id)calendarForKey:(id)arg1 ;
-(id)nullForKey:(id)arg1 ;
-(id)uuidFromRemoteMessageForKey:(id)arg1 ;
-(int)sourcePid;
-(id)dataForKey:(id)arg1 ;
-(id)arrayForKey:(id)arg1 ;
-(NSUUID *)identifier;
-(NSString *)name;
-(id)transport;
-(id)responseHandler;
-(NSDictionary *)messagePayload;
-(BOOL)isRemoteSource;
-(id)initWithName:(id)arg1 identifier:(id)arg2 messagePayload:(id)arg3 transport:(id)arg4 responseHandler:(/*^block*/id)arg5 remoteSource:(BOOL)arg6 ;
@end
