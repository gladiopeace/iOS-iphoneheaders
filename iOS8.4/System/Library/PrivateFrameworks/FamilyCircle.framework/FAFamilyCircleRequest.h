/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:12 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface FAFamilyCircleRequest : NSObject {

	NSString* _usernameOrDSID;
	NSString* _passwordOrToken;

}

@property (copy) NSString * usernameOrDSID;               //@synthesize usernameOrDSID=_usernameOrDSID - In the implementation block
@property (copy) NSString * passwordOrToken;              //@synthesize passwordOrToken=_passwordOrToken - In the implementation block
-(id)init;
-(id)serviceRemoteObjectWithErrorHandler:(/*^block*/id)arg1 ;
-(id)serviceConnection;
-(NSString *)usernameOrDSID;
-(NSString *)passwordOrToken;
-(void)setUsernameOrDSID:(NSString *)arg1 ;
-(void)setPasswordOrToken:(NSString *)arg1 ;
-(id)requestOptions;
@end

