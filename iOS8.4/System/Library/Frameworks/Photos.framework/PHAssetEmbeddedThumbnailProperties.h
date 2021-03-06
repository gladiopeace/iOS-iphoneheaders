/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:32 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class PHAsset, NSData;

@interface PHAssetEmbeddedThumbnailProperties : NSObject {

	short _embeddedThumbnailWidth;
	short _embeddedThumbnailHeight;
	int _embeddedThumbnailOffset;
	int _embeddedThumbnailLength;
	PHAsset* _asset;

}

@property (nonatomic,__weak,readonly) PHAsset * asset;                      //@synthesize asset=_asset - In the implementation block
@property (nonatomic,readonly) BOOL hasEmbeddedThumbnail; 
@property (nonatomic,readonly) NSData * embeddedThumbnailData; 
@property (nonatomic,readonly) int embeddedThumbnailOffset;                 //@synthesize embeddedThumbnailOffset=_embeddedThumbnailOffset - In the implementation block
@property (nonatomic,readonly) int embeddedThumbnailLength;                 //@synthesize embeddedThumbnailLength=_embeddedThumbnailLength - In the implementation block
@property (nonatomic,readonly) short embeddedThumbnailWidth;                //@synthesize embeddedThumbnailWidth=_embeddedThumbnailWidth - In the implementation block
@property (nonatomic,readonly) short embeddedThumbnailHeight;               //@synthesize embeddedThumbnailHeight=_embeddedThumbnailHeight - In the implementation block
-(id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 ;
-(PHAsset *)asset;
-(int)embeddedThumbnailOffset;
-(short)embeddedThumbnailWidth;
-(short)embeddedThumbnailHeight;
-(int)embeddedThumbnailLength;
-(BOOL)hasEmbeddedThumbnail;
-(NSData *)embeddedThumbnailData;
@end

