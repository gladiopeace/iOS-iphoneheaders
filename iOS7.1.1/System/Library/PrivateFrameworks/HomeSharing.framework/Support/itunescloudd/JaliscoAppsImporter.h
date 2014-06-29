/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 4:04:25 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <itunescloudd/JaliscoImporter.h>

@class JaliscoAppLibrary, SSAppPurchaseHistoryDatabase;

@interface JaliscoAppsImporter : JaliscoImporter {

	JaliscoAppLibrary* _appCloudLibrary;
	SSAppPurchaseHistoryDatabase* _purchaseHistoryDatabase;

}
-(id)metadataKeys;
-(id)purchaseTokens;
-(id)queryFilter;
-(BOOL)includeFlavors;
-(unsigned)onDiskRevision;
-(id)initWithLibrary:(id)arg1 purchaseHistoryDatabase:(id)arg2 ;
-(void)_importTracksFromItemsResponseData:(id)arg1 ;
-(void).cxx_destruct;
-(id)connection;
-(BOOL)includeHiddenItems;
-(id)handleResponse:(id)arg1 ;
@end

