/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:08 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface SWSyncHost : NSObject {

	bool _secure;
	NSString* _hostName;

}

@property (assign,getter=isSecure,nonatomic) bool secure;              //@synthesize secure=_secure - In the implementation block
@property (nonatomic,readonly) NSString * hostName;                    //@synthesize hostName=_hostName - In the implementation block
@property (nonatomic,readonly) NSString * scheme; 
+(id)productionSyncHost;
+(id)productionLandingPageHost;
+(id)developmentSyncHost;
-(id)initWithHostName:(id)arg1 secure:(bool)arg2 ;
-(id)loginURLForToken:(id)arg1 ;
-(id)generatePINServiceURL;
-(id)getPINStatusServiceURL;
-(id)generateTokenServiceURL;
-(id)syncCompleteServiceURL;
-(id)syncServiceURL;
-(id)hostName;
-(void)dealloc;
-(id)scheme;
-(bool)isSecure;
-(void)setSecure:(bool)arg1 ;
@end

