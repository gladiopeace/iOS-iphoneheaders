/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:36 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/AOSNotification.framework/AOSNotification
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface AOSFMFAccountInfo : NSObject <NSSecureCoding> {

	int _appAuthTokenStatus;
	NSString* _dsid;
	NSString* _username;
	NSString* _appAuthToken;
	NSDictionary* _additionalInfo;
	NSString* _aosServerHost;
	NSString* _aosServerProtocolScheme;
	NSString* _aosAPSEnvironment;
	NSString* _internalAuthToken;

}

@property (nonatomic,retain) NSString * dsid;                                 //@synthesize dsid=_dsid - In the implementation block
@property (nonatomic,retain) NSString * username;                             //@synthesize username=_username - In the implementation block
@property (nonatomic,retain) NSString * appAuthToken;                         //@synthesize appAuthToken=_appAuthToken - In the implementation block
@property (nonatomic,retain) NSDictionary * additionalInfo;                   //@synthesize additionalInfo=_additionalInfo - In the implementation block
@property (nonatomic,retain) NSString * aosServerHost;                        //@synthesize aosServerHost=_aosServerHost - In the implementation block
@property (nonatomic,retain) NSString * aosServerProtocolScheme;              //@synthesize aosServerProtocolScheme=_aosServerProtocolScheme - In the implementation block
@property (nonatomic,retain) NSString * aosAPSEnvironment;                    //@synthesize aosAPSEnvironment=_aosAPSEnvironment - In the implementation block
@property (nonatomic,retain) NSString * internalAuthToken;                    //@synthesize internalAuthToken=_internalAuthToken - In the implementation block
@property (assign,nonatomic) int appAuthTokenStatus;                          //@synthesize appAuthTokenStatus=_appAuthTokenStatus - In the implementation block
+(bool)supportsSecureCoding;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setDsid:(id)arg1 ;
-(void)setAppAuthToken:(id)arg1 ;
-(void)setAosServerHost:(id)arg1 ;
-(void)setAosServerProtocolScheme:(id)arg1 ;
-(void)setAosAPSEnvironment:(id)arg1 ;
-(void)setInternalAuthToken:(id)arg1 ;
-(void)setAppAuthTokenStatus:(int)arg1 ;
-(id)appAuthToken;
-(int)appAuthTokenStatus;
-(id)internalAuthToken;
-(id)aosServerHost;
-(id)aosServerProtocolScheme;
-(id)aosAPSEnvironment;
-(void)setUsername:(id)arg1 ;
-(id)username;
-(id)dsid;
-(id)additionalInfo;
-(void)setAdditionalInfo:(id)arg1 ;
@end

