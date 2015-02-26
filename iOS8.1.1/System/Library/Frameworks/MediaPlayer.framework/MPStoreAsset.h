/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:31 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class AVAsset;

@interface MPStoreAsset : NSObject {

	unsigned long long _storeAssetType;
	AVAsset* _asset;

}

@property (assign,nonatomic) unsigned long long storeAssetType;              //@synthesize storeAssetType=_storeAssetType - In the implementation block
@property (nonatomic,retain) AVAsset * asset;                                //@synthesize asset=_asset - In the implementation block
+(void)setShouldAlwaysAirPlayFromCloud:(BOOL)arg1 ;
+(id)assetForContext:(id)arg1 allowCloudDialogue:(BOOL)arg2 ;
-(void)setStoreAssetType:(unsigned long long)arg1 ;
-(unsigned long long)storeAssetType;
-(AVAsset *)asset;
-(void)setAsset:(AVAsset *)arg1 ;
@end
