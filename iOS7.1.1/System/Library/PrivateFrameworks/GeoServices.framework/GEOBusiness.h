/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:25 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CoreFoundation/NSCopying.h>

@class NSMutableArray, GEOLatLng, NSString;

@interface GEOBusiness : PBCodable <NSCopying> {

	unsigned long long _uID;
	NSMutableArray* _attributeKeyValues;
	NSMutableArray* _attributions;
	NSMutableArray* _categorys;
	GEOLatLng* _center;
	NSMutableArray* _localizedCategories;
	NSString* _mapsURL;
	NSString* _name;
	NSString* _notice;
	NSMutableArray* _openHours;
	NSString* _phoneticName;
	NSString* _phoneticNotice;
	NSMutableArray* _photos;
	NSMutableArray* _ratings;
	NSMutableArray* _sources;
	NSMutableArray* _starRatings;
	NSString* _telephone;
	unsigned _totalNumberOfPhotos;
	NSString* _uRL;
	int _version;
	bool _canBeCorrectedByBusinessOwner;
	bool _isClosed;
	bool _isUnverified;
	SCD_Struct_GE56 _has;

}

@property (assign,nonatomic) bool hasUID; 
@property (assign,nonatomic) unsigned long long uID;                             //@synthesize uID=_uID - In the implementation block
@property (assign,nonatomic) bool hasVersion; 
@property (assign,nonatomic) int version;                                        //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) bool hasName; 
@property (nonatomic,retain) NSString * name;                                    //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) bool hasNotice; 
@property (nonatomic,retain) NSString * notice;                                  //@synthesize notice=_notice - In the implementation block
@property (nonatomic,readonly) bool hasPhoneticName; 
@property (nonatomic,retain) NSString * phoneticName;                            //@synthesize phoneticName=_phoneticName - In the implementation block
@property (nonatomic,readonly) bool hasPhoneticNotice; 
@property (nonatomic,retain) NSString * phoneticNotice;                          //@synthesize phoneticNotice=_phoneticNotice - In the implementation block
@property (nonatomic,readonly) bool hasTelephone; 
@property (nonatomic,retain) NSString * telephone;                               //@synthesize telephone=_telephone - In the implementation block
@property (nonatomic,readonly) bool hasURL; 
@property (nonatomic,retain) NSString * uRL;                                     //@synthesize uRL=_uRL - In the implementation block
@property (assign,nonatomic) bool hasIsUnverified; 
@property (assign,nonatomic) bool isUnverified;                                  //@synthesize isUnverified=_isUnverified - In the implementation block
@property (assign,nonatomic) bool hasIsClosed; 
@property (assign,nonatomic) bool isClosed;                                      //@synthesize isClosed=_isClosed - In the implementation block
@property (nonatomic,readonly) bool hasMapsURL; 
@property (nonatomic,retain) NSString * mapsURL;                                 //@synthesize mapsURL=_mapsURL - In the implementation block
@property (nonatomic,retain) NSMutableArray * ratings;                           //@synthesize ratings=_ratings - In the implementation block
@property (nonatomic,retain) NSMutableArray * categorys;                         //@synthesize categorys=_categorys - In the implementation block
@property (nonatomic,retain) NSMutableArray * photos;                            //@synthesize photos=_photos - In the implementation block
@property (nonatomic,retain) NSMutableArray * attributeKeyValues;                //@synthesize attributeKeyValues=_attributeKeyValues - In the implementation block
@property (nonatomic,retain) NSMutableArray * openHours;                         //@synthesize openHours=_openHours - In the implementation block
@property (nonatomic,readonly) bool hasCenter; 
@property (nonatomic,retain) GEOLatLng * center;                                 //@synthesize center=_center - In the implementation block
@property (assign,nonatomic) bool hasTotalNumberOfPhotos; 
@property (assign,nonatomic) unsigned totalNumberOfPhotos;                       //@synthesize totalNumberOfPhotos=_totalNumberOfPhotos - In the implementation block
@property (nonatomic,retain) NSMutableArray * localizedCategories;               //@synthesize localizedCategories=_localizedCategories - In the implementation block
@property (nonatomic,retain) NSMutableArray * attributions;                      //@synthesize attributions=_attributions - In the implementation block
@property (assign,nonatomic) bool hasCanBeCorrectedByBusinessOwner; 
@property (assign,nonatomic) bool canBeCorrectedByBusinessOwner;                 //@synthesize canBeCorrectedByBusinessOwner=_canBeCorrectedByBusinessOwner - In the implementation block
@property (nonatomic,retain) NSMutableArray * sources;                           //@synthesize sources=_sources - In the implementation block
@property (nonatomic,retain) NSMutableArray * starRatings;                       //@synthesize starRatings=_starRatings - In the implementation block
-(id)initWithLocalSearchBusiness:(id)arg1 ;
-(id)initWithLocalSearchBusiness:(id)arg1 ;
-(void)setSources:(id)arg1 ;
-(void)addSource:(id)arg1 ;
-(id)sources;
-(id)photos;
-(void)setPhotos:(id)arg1 ;
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)center;
-(void)setCenter:(id)arg1 ;
-(void)setName:(id)arg1 ;
-(id)name;
-(void)setURL:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setVersion:(int)arg1 ;
-(int)version;
-(id)ratings;
-(bool)hasCenter;
-(void)setNotice:(id)arg1 ;
-(void)setPhoneticName:(id)arg1 ;
-(void)setPhoneticNotice:(id)arg1 ;
-(void)setTelephone:(id)arg1 ;
-(void)setMapsURL:(id)arg1 ;
-(void)setRatings:(id)arg1 ;
-(void)setCategorys:(id)arg1 ;
-(void)setAttributeKeyValues:(id)arg1 ;
-(void)setOpenHours:(id)arg1 ;
-(void)setLocalizedCategories:(id)arg1 ;
-(void)setStarRatings:(id)arg1 ;
-(void)addRating:(id)arg1 ;
-(void)addCategory:(id)arg1 ;
-(void)addPhoto:(id)arg1 ;
-(void)addAttributeKeyValue:(id)arg1 ;
-(void)addOpenHours:(id)arg1 ;
-(void)addLocalizedCategories:(id)arg1 ;
-(void)addAttribution:(id)arg1 ;
-(void)addStarRating:(id)arg1 ;
-(unsigned long long)ratingsCount;
-(void)clearRatings;
-(id)ratingAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)categorysCount;
-(void)clearCategorys;
-(id)categoryAtIndex:(unsigned long long)arg1 ;
-(void)clearPhotos;
-(id)photoAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)attributeKeyValuesCount;
-(void)clearAttributeKeyValues;
-(id)attributeKeyValueAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)openHoursCount;
-(void)clearOpenHours;
-(id)openHoursAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)localizedCategoriesCount;
-(void)clearLocalizedCategories;
-(id)localizedCategoriesAtIndex:(unsigned long long)arg1 ;
-(void)clearAttributions;
-(id)attributionAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)sourcesCount;
-(void)clearSources;
-(id)sourceAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)starRatingsCount;
-(void)clearStarRatings;
-(id)starRatingAtIndex:(unsigned long long)arg1 ;
-(void)setUID:(unsigned long long)arg1 ;
-(void)setHasUID:(bool)arg1 ;
-(bool)hasUID;
-(bool)hasNotice;
-(bool)hasPhoneticName;
-(bool)hasPhoneticNotice;
-(bool)hasTelephone;
-(bool)hasURL;
-(void)setIsUnverified:(bool)arg1 ;
-(void)setHasIsUnverified:(bool)arg1 ;
-(bool)hasIsUnverified;
-(void)setIsClosed:(bool)arg1 ;
-(void)setHasIsClosed:(bool)arg1 ;
-(bool)hasIsClosed;
-(bool)hasMapsURL;
-(void)setTotalNumberOfPhotos:(unsigned)arg1 ;
-(void)setHasTotalNumberOfPhotos:(bool)arg1 ;
-(bool)hasTotalNumberOfPhotos;
-(void)setCanBeCorrectedByBusinessOwner:(bool)arg1 ;
-(void)setHasCanBeCorrectedByBusinessOwner:(bool)arg1 ;
-(bool)hasCanBeCorrectedByBusinessOwner;
-(id)notice;
-(id)phoneticName;
-(id)phoneticNotice;
-(id)telephone;
-(id)uRL;
-(bool)isUnverified;
-(bool)isClosed;
-(id)mapsURL;
-(id)categorys;
-(id)attributeKeyValues;
-(id)openHours;
-(unsigned)totalNumberOfPhotos;
-(id)localizedCategories;
-(bool)canBeCorrectedByBusinessOwner;
-(id)starRatings;
-(bool)readFrom:(id)arg1 ;
-(unsigned long long)photosCount;
-(id)attributions;
-(void)writeTo:(id)arg1 ;
-(void)setHasVersion:(bool)arg1 ;
-(bool)hasVersion;
-(void)copyTo:(id)arg1 ;
-(bool)hasName;
-(unsigned long long)uID;
-(unsigned long long)attributionsCount;
-(void)setAttributions:(id)arg1 ;
@end

