/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:11 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSSecureCoding.h>

@class NSString, NSURL;

@interface ADAdSpaceConfiguration : NSObject <NSSecureCoding> {

	int _creativeType;
	long long _options;
	NSString* _identifier;
	NSURL* _serverURL;
	NSString* _advertisingSection;
	NSString* _authenticationUserName;

}

@property (assign,nonatomic) int creativeType;                             //@synthesize creativeType=_creativeType - In the implementation block
@property (assign,nonatomic) long long options;                            //@synthesize options=_options - In the implementation block
@property (nonatomic,copy) NSString * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSURL * serverURL;                              //@synthesize serverURL=_serverURL - In the implementation block
@property (nonatomic,copy) NSString * advertisingSection;                  //@synthesize advertisingSection=_advertisingSection - In the implementation block
@property (nonatomic,copy) NSString * authenticationUserName;              //@synthesize authenticationUserName=_authenticationUserName - In the implementation block
+(bool)supportsSecureCoding;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)identifier;
-(void)setIdentifier:(id)arg1 ;
-(void)setOptions:(long long)arg1 ;
-(long long)options;
-(void)setServerURL:(id)arg1 ;
-(void)setAdvertisingSection:(id)arg1 ;
-(void)setAuthenticationUserName:(id)arg1 ;
-(id)advertisingSection;
-(id)authenticationUserName;
-(int)creativeType;
-(void)setCreativeType:(int)arg1 ;
-(id)serverURL;
@end

