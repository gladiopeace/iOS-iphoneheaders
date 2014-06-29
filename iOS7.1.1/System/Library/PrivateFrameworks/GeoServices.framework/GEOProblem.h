/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:28 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CoreFoundation/NSCopying.h>

@class NSString, NSMutableArray, GEOPlace, GEOLatLng, NSData, GEOMapRegion, GEOPlaceSearchRequest, GEOPlaceSearchResponse;

@interface GEOProblem : PBCodable <NSCopying> {

	SCD_Struct_GE67* _featureHandles;
	unsigned long long _featureHandlesCount;
	unsigned long long _featureHandlesSpace;
	SCD_Struct_GE2 _sessionID;
	SCD_Struct_GE57* _curlProblemTypes;
	SCD_Struct_GE57* _pinProblemTypes;
	SCD_Struct_GE57* _problemTypes;
	NSString* _comments;
	NSMutableArray* _correctedFields;
	NSString* _correctedLabelTitle;
	GEOPlace* _correctedPlace;
	GEOLatLng* _correctedPosition;
	NSMutableArray* _directionsProblems;
	NSData* _directionsResponseID;
	GEOMapRegion* _featureRegion;
	NSString* _httpInfo;
	NSString* _incorrectLabelTitle;
	float _mapZoomLevel;
	GEOPlace* _originalPlace;
	GEOLatLng* _pinDrop;
	int _pinType;
	GEOPlaceSearchRequest* _placeSearchRequest;
	GEOPlaceSearchResponse* _placeSearchResponse;
	NSString* _preferredSearchDisplayLocation;
	unsigned _preferredSearchResultIndex;
	unsigned _problematicSearchResultIndex;
	GEOMapRegion* _region;
	NSString* _syslog;
	NSString* _tileStateLog;
	NSMutableArray* _viewportImages;
	NSData* _viewportInfo;
	NSMutableArray* _visibleTileSets;
	SCD_Struct_GE58 _has;

}

@property (nonatomic,readonly) bool hasOriginalPlace; 
@property (nonatomic,retain) GEOPlace * originalPlace;                                  //@synthesize originalPlace=_originalPlace - In the implementation block
@property (assign,nonatomic) bool hasSessionID; 
@property (assign,nonatomic) SCD_Struct_GE2 sessionID;                                  //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,readonly) unsigned long long problemTypesCount; 
@property (nonatomic,readonly) int* problemTypes; 
@property (nonatomic,readonly) bool hasCorrectedPlace; 
@property (nonatomic,retain) GEOPlace * correctedPlace;                                 //@synthesize correctedPlace=_correctedPlace - In the implementation block
@property (nonatomic,readonly) bool hasComments; 
@property (nonatomic,retain) NSString * comments;                                       //@synthesize comments=_comments - In the implementation block
@property (nonatomic,readonly) bool hasHttpInfo; 
@property (nonatomic,retain) NSString * httpInfo;                                       //@synthesize httpInfo=_httpInfo - In the implementation block
@property (nonatomic,readonly) bool hasRegion; 
@property (nonatomic,retain) GEOMapRegion * region;                                     //@synthesize region=_region - In the implementation block
@property (assign,nonatomic) bool hasMapZoomLevel; 
@property (assign,nonatomic) float mapZoomLevel;                                        //@synthesize mapZoomLevel=_mapZoomLevel - In the implementation block
@property (nonatomic,retain) NSMutableArray * visibleTileSets;                          //@synthesize visibleTileSets=_visibleTileSets - In the implementation block
@property (nonatomic,retain) NSMutableArray * viewportImages;                           //@synthesize viewportImages=_viewportImages - In the implementation block
@property (nonatomic,readonly) bool hasViewportInfo; 
@property (nonatomic,retain) NSData * viewportInfo;                                     //@synthesize viewportInfo=_viewportInfo - In the implementation block
@property (nonatomic,readonly) bool hasPinDrop; 
@property (nonatomic,retain) GEOLatLng * pinDrop;                                       //@synthesize pinDrop=_pinDrop - In the implementation block
@property (nonatomic,readonly) unsigned long long pinProblemTypesCount; 
@property (nonatomic,readonly) int* pinProblemTypes; 
@property (nonatomic,readonly) unsigned long long curlProblemTypesCount; 
@property (nonatomic,readonly) int* curlProblemTypes; 
@property (nonatomic,retain) NSMutableArray * correctedFields;                          //@synthesize correctedFields=_correctedFields - In the implementation block
@property (nonatomic,readonly) bool hasCorrectedPosition; 
@property (nonatomic,retain) GEOLatLng * correctedPosition;                             //@synthesize correctedPosition=_correctedPosition - In the implementation block
@property (nonatomic,readonly) bool hasPlaceSearchRequest; 
@property (nonatomic,retain) GEOPlaceSearchRequest * placeSearchRequest;                //@synthesize placeSearchRequest=_placeSearchRequest - In the implementation block
@property (nonatomic,readonly) bool hasPlaceSearchResponse; 
@property (nonatomic,retain) GEOPlaceSearchResponse * placeSearchResponse;              //@synthesize placeSearchResponse=_placeSearchResponse - In the implementation block
@property (nonatomic,readonly) bool hasDirectionsResponseID; 
@property (nonatomic,retain) NSData * directionsResponseID;                             //@synthesize directionsResponseID=_directionsResponseID - In the implementation block
@property (assign,nonatomic) bool hasPinType; 
@property (assign,nonatomic) int pinType;                                               //@synthesize pinType=_pinType - In the implementation block
@property (nonatomic,readonly) bool hasSyslog; 
@property (nonatomic,retain) NSString * syslog;                                         //@synthesize syslog=_syslog - In the implementation block
@property (nonatomic,readonly) bool hasTileStateLog; 
@property (nonatomic,retain) NSString * tileStateLog;                                   //@synthesize tileStateLog=_tileStateLog - In the implementation block
@property (nonatomic,readonly) bool hasIncorrectLabelTitle; 
@property (nonatomic,retain) NSString * incorrectLabelTitle;                            //@synthesize incorrectLabelTitle=_incorrectLabelTitle - In the implementation block
@property (nonatomic,readonly) bool hasCorrectedLabelTitle; 
@property (nonatomic,retain) NSString * correctedLabelTitle;                            //@synthesize correctedLabelTitle=_correctedLabelTitle - In the implementation block
@property (nonatomic,readonly) bool hasFeatureRegion; 
@property (nonatomic,retain) GEOMapRegion * featureRegion;                              //@synthesize featureRegion=_featureRegion - In the implementation block
@property (nonatomic,readonly) unsigned long long featureHandlesCount; 
@property (nonatomic,readonly) SCD_Struct_GE67* featureHandles; 
@property (nonatomic,retain) NSMutableArray * directionsProblems;                       //@synthesize directionsProblems=_directionsProblems - In the implementation block
@property (assign,nonatomic) bool hasProblematicSearchResultIndex; 
@property (assign,nonatomic) unsigned problematicSearchResultIndex;                     //@synthesize problematicSearchResultIndex=_problematicSearchResultIndex - In the implementation block
@property (assign,nonatomic) bool hasPreferredSearchResultIndex; 
@property (assign,nonatomic) unsigned preferredSearchResultIndex;                       //@synthesize preferredSearchResultIndex=_preferredSearchResultIndex - In the implementation block
@property (nonatomic,readonly) bool hasPreferredSearchDisplayLocation; 
@property (nonatomic,retain) NSString * preferredSearchDisplayLocation;                 //@synthesize preferredSearchDisplayLocation=_preferredSearchDisplayLocation - In the implementation block
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)dictionaryRepresentation;
-(bool)hasComments;
-(SCD_Struct_GE2)sessionID;
-(void)setSessionID:(SCD_Struct_GE2)arg1 ;
-(void)setPlaceSearchRequest:(id)arg1 ;
-(void)setHasSessionID:(bool)arg1 ;
-(bool)hasSessionID;
-(bool)hasPlaceSearchRequest;
-(id)placeSearchRequest;
-(void)setDirectionsResponseID:(id)arg1 ;
-(bool)hasDirectionsResponseID;
-(id)directionsResponseID;
-(void)setFeatureRegion:(id)arg1 ;
-(void)clearFeatureHandles;
-(unsigned long long)featureHandlesCount;
-(SCD_Struct_GE67)featureHandleAtIndex:(unsigned long long)arg1 ;
-(void)addFeatureHandle:(SCD_Struct_GE67)arg1 ;
-(bool)hasFeatureRegion;
-(void)setFeatureHandles:(SCD_Struct_GE67*)arg1 count:(unsigned long long)arg2 ;
-(id)featureRegion;
-(void)setPlaceSearchResponse:(id)arg1 ;
-(bool)hasPlaceSearchResponse;
-(id)placeSearchResponse;
-(void)setCorrectedFields:(id)arg1 ;
-(unsigned long long)correctedFieldsCount;
-(void)clearCorrectedFields;
-(id)correctedFields;
-(void)setPreferredSearchDisplayLocation:(id)arg1 ;
-(bool)hasPreferredSearchDisplayLocation;
-(id)preferredSearchDisplayLocation;
-(void)setOriginalPlace:(id)arg1 ;
-(void)setVisibleTileSets:(id)arg1 ;
-(void)setTileStateLog:(id)arg1 ;
-(unsigned long long)visibleTileSetsCount;
-(void)clearVisibleTileSets;
-(void)setPinType:(int)arg1 ;
-(void)setHasPinType:(bool)arg1 ;
-(bool)hasPinType;
-(bool)hasOriginalPlace;
-(bool)hasTileStateLog;
-(int)pinType;
-(id)originalPlace;
-(id)tileStateLog;
-(void)setCorrectedPlace:(id)arg1 ;
-(void)setHttpInfo:(id)arg1 ;
-(void)setRegion:(id)arg1 ;
-(void)setViewportImages:(id)arg1 ;
-(void)setViewportInfo:(id)arg1 ;
-(void)setPinDrop:(id)arg1 ;
-(void)setCorrectedPosition:(id)arg1 ;
-(void)setSyslog:(id)arg1 ;
-(void)setIncorrectLabelTitle:(id)arg1 ;
-(void)setCorrectedLabelTitle:(id)arg1 ;
-(void)setDirectionsProblems:(id)arg1 ;
-(void)addVisibleTileSet:(id)arg1 ;
-(void)addViewportImages:(id)arg1 ;
-(void)addCorrectedField:(id)arg1 ;
-(void)addDirectionsProblems:(id)arg1 ;
-(unsigned long long)problemTypesCount;
-(void)clearProblemTypes;
-(int)problemTypeAtIndex:(unsigned long long)arg1 ;
-(void)addProblemType:(int)arg1 ;
-(id)visibleTileSetAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)viewportImagesCount;
-(void)clearViewportImages;
-(id)viewportImagesAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)pinProblemTypesCount;
-(void)clearPinProblemTypes;
-(int)pinProblemTypeAtIndex:(unsigned long long)arg1 ;
-(void)addPinProblemType:(int)arg1 ;
-(unsigned long long)curlProblemTypesCount;
-(void)clearCurlProblemTypes;
-(int)curlProblemTypeAtIndex:(unsigned long long)arg1 ;
-(void)addCurlProblemType:(int)arg1 ;
-(id)correctedFieldAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)directionsProblemsCount;
-(void)clearDirectionsProblems;
-(id)directionsProblemsAtIndex:(unsigned long long)arg1 ;
-(int*)problemTypes;
-(void)setProblemTypes:(int*)arg1 count:(unsigned long long)arg2 ;
-(bool)hasCorrectedPlace;
-(bool)hasHttpInfo;
-(bool)hasRegion;
-(void)setMapZoomLevel:(float)arg1 ;
-(void)setHasMapZoomLevel:(bool)arg1 ;
-(bool)hasMapZoomLevel;
-(bool)hasViewportInfo;
-(bool)hasPinDrop;
-(int*)pinProblemTypes;
-(void)setPinProblemTypes:(int*)arg1 count:(unsigned long long)arg2 ;
-(int*)curlProblemTypes;
-(void)setCurlProblemTypes:(int*)arg1 count:(unsigned long long)arg2 ;
-(bool)hasCorrectedPosition;
-(bool)hasSyslog;
-(bool)hasIncorrectLabelTitle;
-(bool)hasCorrectedLabelTitle;
-(void)setProblematicSearchResultIndex:(unsigned)arg1 ;
-(void)setHasProblematicSearchResultIndex:(bool)arg1 ;
-(bool)hasProblematicSearchResultIndex;
-(void)setPreferredSearchResultIndex:(unsigned)arg1 ;
-(void)setHasPreferredSearchResultIndex:(bool)arg1 ;
-(bool)hasPreferredSearchResultIndex;
-(id)correctedPlace;
-(id)httpInfo;
-(id)region;
-(float)mapZoomLevel;
-(id)viewportImages;
-(id)pinDrop;
-(id)correctedPosition;
-(id)syslog;
-(id)incorrectLabelTitle;
-(id)correctedLabelTitle;
-(id)directionsProblems;
-(unsigned)problematicSearchResultIndex;
-(unsigned)preferredSearchResultIndex;
-(bool)readFrom:(id)arg1 ;
-(void)setComments:(id)arg1 ;
-(id)comments;
-(id)visibleTileSets;
-(id)viewportInfo;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(SCD_Struct_GE67*)featureHandles;
@end

