/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:36:09 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/SyncBundles/AirFair.syncBundle/AirFair
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AirFair/AirFair-Structs.h>
#import <AirFair/ATClient.h>

@class NSString;

@interface FPAirFair : NSObject <ATClient> {

	unsigned HPD8FhhtYi5OC5SPY;
	unsigned LnGBbUJQLDA;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(int)DrFjYlmSKahjfJzgmaPvs:(FairPlayHWInfo_*)arg1 ;
-(int)ENaUvadPgTNQtAOA;
-(int)U0DV0QxFFjyMatlbDyqSZ4s3d:(id)arg1 ;
-(int)wkiHcH3uUYkLWEOOs:(char*)arg1 reqSize:(unsigned)arg2 fileName:(id)arg3 ;
-(int)FVxWQcJol3R;
-(BOOL)Jaz0t2BPNjwE;
-(int)MvKgJWHiyPi9jHcCD1zBrVK7F:(id)arg1 bytes:(char**)arg2 size:(unsigned*)arg3 ;
-(int)cIjYbQiRD8mj9H;
-(void)dealloc;
-(id)init;
-(void)syncEndedWithSuccess:(BOOL)arg1 ;
-(BOOL)prepareForSyncWithHostAnchor:(id)arg1 progressCallback:(/*^block*/id)arg2 grappaID:(unsigned)arg3 hostVersion:(id)arg4 error:(id*)arg5 ;
-(BOOL)reconcileSync:(unsigned)arg1 withNewAnchor:(id)arg2 progressCallback:(/*^block*/id)arg3 error:(id*)arg4 ;
-(id)supportedDataclasses;
@end

