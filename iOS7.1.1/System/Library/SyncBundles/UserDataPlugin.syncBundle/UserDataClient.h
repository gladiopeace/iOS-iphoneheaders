/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:27:11 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/SyncBundles/UserDataPlugin.syncBundle/UserDataPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AirTraffic/ATClient.h>

@interface UserDataClient : NSObject <ATClient>
-(id)currentSyncAnchor;
-(bool)prepareForSyncWithHostAnchor:(id)arg1 progressCallback:(/*^block*/ id)arg2 error:(id*)arg3 ;
-(id)outstandingAssetTransfers;
-(id)installedAssetMetrics;
-(id)supportedDataclasses;
@end

