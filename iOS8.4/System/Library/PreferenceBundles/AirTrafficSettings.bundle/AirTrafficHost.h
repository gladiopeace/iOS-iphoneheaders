/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:19:57 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PreferenceBundles/AirTrafficSettings.bundle/AirTrafficSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDictionary, NSString, NSNumber;

@interface AirTrafficHost : NSObject {

	NSDictionary* _hostDict;

}

@property (getter=libraryIdentifier,nonatomic,readonly) NSString * libraryIdentifier; 
@property (getter=lastSyncTime,nonatomic,readonly) NSNumber * lastSyncTime; 
@property (getter=hostName,nonatomic,readonly) NSString * name; 
@property (getter=syncedAssetsString,nonatomic,readonly) NSString * syncedAssetsString; 
@property (getter=isWifiEnabled,nonatomic,readonly) BOOL wifiEnabled; 
-(NSString *)syncedAssetsString;
-(id)localizedAssetTypeForDataclass:(id)arg1 ;
-(id)initWithHostDictionary:(id)arg1 ;
-(BOOL)isWifiEnabled;
-(NSString *)libraryIdentifier;
-(id)hostName;
-(NSNumber *)lastSyncTime;
@end
