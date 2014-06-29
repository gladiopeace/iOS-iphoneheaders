/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:25 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class GEOTileKeyList, GEOTileRequester;

@interface GEOTileServerLocalProxyBatchContext : NSObject {

	GEOTileKeyList* _fullList;
	GEOTileKeyList* _interestList;
	GEOTileKeyList* _networkList;
	GEOTileKeyList* _pendingNetworkList;
	GEOTileRequester* _tileRequester;

}

@property (nonatomic,retain) GEOTileKeyList * fullList;                        //@synthesize fullList=_fullList - In the implementation block
@property (nonatomic,retain) GEOTileKeyList * interestList;                    //@synthesize interestList=_interestList - In the implementation block
@property (nonatomic,retain) GEOTileKeyList * networkList;                     //@synthesize networkList=_networkList - In the implementation block
@property (nonatomic,retain) GEOTileKeyList * pendingNetworkList;              //@synthesize pendingNetworkList=_pendingNetworkList - In the implementation block
@property (nonatomic,retain) GEOTileRequester * tileRequester;                 //@synthesize tileRequester=_tileRequester - In the implementation block
-(void)dealloc;
-(id)interestList;
-(id)tileRequester;
-(id)pendingNetworkList;
-(void)setTileRequester:(id)arg1 ;
-(void)setFullList:(id)arg1 ;
-(void)setInterestList:(id)arg1 ;
-(void)setNetworkList:(id)arg1 ;
-(void)setPendingNetworkList:(id)arg1 ;
-(id)networkList;
-(id)fullList;
@end

