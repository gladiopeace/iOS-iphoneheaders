/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:27 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, NSDictionary, NSLock, NSString;

@interface GEONetworkDefaults : NSObject {

	NSMutableArray* _completionHandlers;
	bool _isRegistering;
	NSDictionary* _networkDefaults;
	NSLock* _networkDefaultsLock;
	NSString* _cacheFilePath;

}
+(id)sharedNetworkDefaults;
-(void)dealloc;
-(id)init;
-(id)valueForKey:(id)arg1 ;
-(void)refreshNetworkDefaults;
-(void)registerNetworkDefaults:(/*^block*/ id)arg1 ;
-(void)_registrationComplete;
-(bool)needsUpdate;
@end

