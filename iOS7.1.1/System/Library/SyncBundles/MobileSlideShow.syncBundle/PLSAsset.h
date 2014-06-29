/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:27:10 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/SyncBundles/MobileSlideShow.syncBundle/MobileSlideShow
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileSlideShow/PLSItem.h>

@class NSNumber, NSString, NSArray, PLSAssetProperties;

@interface PLSAsset : PLSItem {

	NSNumber* _rating;
	NSNumber* _isFlagged;
	NSString* _caption;
	NSArray* _adjustments;
	NSString* _eventUUID;
	NSNumber* _longitude;
	NSNumber* _latitude;
	NSNumber* _exposureDate;
	NSNumber* _modificationDate;
	NSString* _originalFileName;
	bool _isVideo;
	NSArray* _facesInfo;
	PLSAssetProperties* _properties;

}

@property (nonatomic,retain) NSNumber * rating;                            //@synthesize rating=_rating - In the implementation block
@property (nonatomic,retain) NSNumber * isFlagged;                         //@synthesize isFlagged=_isFlagged - In the implementation block
@property (assign,nonatomic) bool isVideo;                                 //@synthesize isVideo=_isVideo - In the implementation block
@property (nonatomic,retain) NSString * caption;                           //@synthesize caption=_caption - In the implementation block
@property (nonatomic,retain) NSString * eventUUID;                         //@synthesize eventUUID=_eventUUID - In the implementation block
@property (nonatomic,retain) NSArray * adjustments;                        //@synthesize adjustments=_adjustments - In the implementation block
@property (nonatomic,retain) NSNumber * exposureDate;                      //@synthesize exposureDate=_exposureDate - In the implementation block
@property (nonatomic,retain) NSNumber * modificationDate;                  //@synthesize modificationDate=_modificationDate - In the implementation block
@property (nonatomic,retain) NSNumber * longitude;                         //@synthesize longitude=_longitude - In the implementation block
@property (nonatomic,retain) NSNumber * latitude;                          //@synthesize latitude=_latitude - In the implementation block
@property (nonatomic,retain) NSString * originalFileName;                  //@synthesize originalFileName=_originalFileName - In the implementation block
@property (nonatomic,retain) NSArray * facesInfo;                          //@synthesize facesInfo=_facesInfo - In the implementation block
@property (nonatomic,retain) PLSAssetProperties * properties;              //@synthesize properties=_properties - In the implementation block
+(id)asset;
+(id)assetWithUUID:(id)arg1 ;
-(void)setAdjustments:(id)arg1 ;
-(void)setEventUUID:(id)arg1 ;
-(id)isFlagged;
-(id)exposureDate;
-(void)setIsFlagged:(id)arg1 ;
-(id)getFacesArray;
-(id)_itemType;
-(id)initFromPropertyList:(id)arg1 ;
-(void)setExposureDate:(id)arg1 ;
-(bool)isEquivalentTo:(id)arg1 ;
-(id)initWithUUID:(id)arg1 ;
-(id)eventUUID;
-(void)setLatitude:(id)arg1 ;
-(void)setLongitude:(id)arg1 ;
-(id)propertyList;
-(void)setRating:(id)arg1 ;
-(id)rating;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(id)properties;
-(void)setProperties:(id)arg1 ;
-(bool)isVideo;
-(id)latitude;
-(id)longitude;
-(void)setModificationDate:(id)arg1 ;
-(id)modificationDate;
-(id)originalFileName;
-(id)facesInfo;
-(id)adjustments;
-(void)setFacesInfo:(id)arg1 ;
-(void)setOriginalFileName:(id)arg1 ;
-(void)setIsVideo:(bool)arg1 ;
-(id)caption;
-(void)setCaption:(id)arg1 ;
@end
