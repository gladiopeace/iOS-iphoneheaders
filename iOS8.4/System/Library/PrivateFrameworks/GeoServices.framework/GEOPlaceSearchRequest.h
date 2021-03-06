/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:35 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <GeoServices/NSCopying.h>

@class GEOAddress, GEOBusinessOptions, GEOClientCapabilities, NSString, GEOLatLng, NSMutableArray, GEOIndexQueryNode, GEOLocation, GEOMapRegion, GEOSuggestionsOptions, NSData;

@interface GEOPlaceSearchRequest : PBRequest <NSCopying> {

	SCD_Struct_GE2 _sessionGUID;
	SCD_Struct_GE54* _additionalPlaceTypes;
	SCD_Struct_GE66* _businessIDs;
	SCD_Struct_GE54* _optionalSuppressionReasons;
	SCD_Struct_GE67 _searchContextSubstring;
	SCD_Struct_GE67* _searchSubstrings;
	unsigned long long _searchSubstringsCount;
	unsigned long long _searchSubstringsSpace;
	long long _geoId;
	unsigned long long _intersectingGeoId;
	double _timeSinceMapEnteredForeground;
	double _timeSinceMapViewportChanged;
	double _timestamp;
	GEOAddress* _address;
	GEOBusinessOptions* _businessOptions;
	int _businessSortOrder;
	GEOClientCapabilities* _clientCapabilities;
	NSString* _deviceCountryCode;
	GEOLatLng* _deviceLocation;
	NSString* _deviceTimeZone;
	NSMutableArray* _filterByBusinessCategorys;
	GEOIndexQueryNode* _indexFilter;
	NSString* _inputLanguage;
	int _knownAccuracy;
	GEOLatLng* _knownLocation;
	int _localSearchProviderID;
	GEOLocation* _location;
	GEOMapRegion* _mapRegion;
	int _maxBusinessReviews;
	int _maxResults;
	NSString* _phoneticLocaleIdentifier;
	int _placeTypeLimit;
	GEOAddress* _preserveFields;
	NSString* _search;
	NSString* _searchContext;
	GEOLatLng* _searchLocation;
	int _searchSource;
	int _sequenceNumber;
	NSMutableArray* _serviceTags;
	GEOSuggestionsOptions* _suggestionsOptions;
	NSString* _suggestionsPrefix;
	int _transportTypeForTravelTimes;
	NSData* _zilchPoints;
	BOOL _excludeAddressInResults;
	BOOL _includeBusinessCategories;
	BOOL _includeBusinessRating;
	BOOL _includeEntryPoints;
	BOOL _includeFeatureSets;
	BOOL _includeGeoId;
	BOOL _includeMatchedToken;
	BOOL _includeNameForForwardGeocodingResults;
	BOOL _includePhonetics;
	BOOL _includeQuads;
	BOOL _includeRevgeoRequestTemplate;
	BOOL _includeSpokenNames;
	BOOL _includeStatusCodeInfo;
	BOOL _includeSuggestionsOnly;
	BOOL _includeTravelDistance;
	BOOL _includeTravelTime;
	BOOL _includeUnmatchedStrings;
	BOOL _isFromAPI;
	BOOL _isStrictGeocoding;
	BOOL _isStrictMapRegion;
	BOOL _structuredSearch;
	BOOL _suppressResultsRequiringAttribution;
	SCD_Struct_GE68 _has;

}

@property (nonatomic,readonly) unsigned long long businessIDsCount; 
@property (nonatomic,readonly) unsigned long long* businessIDs; 
@property (nonatomic,readonly) BOOL hasAddress; 
@property (nonatomic,retain) GEOAddress * address;                                              //@synthesize address=_address - In the implementation block
@property (nonatomic,readonly) BOOL hasLocation; 
@property (nonatomic,retain) GEOLocation * location;                                            //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) BOOL hasSearch; 
@property (nonatomic,retain) NSString * search;                                                 //@synthesize search=_search - In the implementation block
@property (nonatomic,readonly) BOOL hasMapRegion; 
@property (nonatomic,retain) GEOMapRegion * mapRegion;                                          //@synthesize mapRegion=_mapRegion - In the implementation block
@property (nonatomic,readonly) unsigned long long additionalPlaceTypesCount; 
@property (nonatomic,readonly) int* additionalPlaceTypes; 
@property (assign,nonatomic) BOOL hasIncludePhonetics; 
@property (assign,nonatomic) BOOL includePhonetics;                                             //@synthesize includePhonetics=_includePhonetics - In the implementation block
@property (assign,nonatomic) BOOL hasMaxResults; 
@property (assign,nonatomic) int maxResults;                                                    //@synthesize maxResults=_maxResults - In the implementation block
@property (assign,nonatomic) BOOL hasSessionGUID; 
@property (assign,nonatomic) SCD_Struct_GE2 sessionGUID;                                        //@synthesize sessionGUID=_sessionGUID - In the implementation block
@property (assign,nonatomic) BOOL hasBusinessSortOrder; 
@property (assign,nonatomic) int businessSortOrder;                                             //@synthesize businessSortOrder=_businessSortOrder - In the implementation block
@property (assign,nonatomic) BOOL hasIncludeBusinessRating; 
@property (assign,nonatomic) BOOL includeBusinessRating;                                        //@synthesize includeBusinessRating=_includeBusinessRating - In the implementation block
@property (assign,nonatomic) BOOL hasIncludeBusinessCategories; 
@property (assign,nonatomic) BOOL includeBusinessCategories;                                    //@synthesize includeBusinessCategories=_includeBusinessCategories - In the implementation block
@property (assign,nonatomic) BOOL hasMaxBusinessReviews; 
@property (assign,nonatomic) int maxBusinessReviews;                                            //@synthesize maxBusinessReviews=_maxBusinessReviews - In the implementation block
@property (nonatomic,retain) NSMutableArray * filterByBusinessCategorys;                        //@synthesize filterByBusinessCategorys=_filterByBusinessCategorys - In the implementation block
@property (assign,nonatomic) BOOL hasIsStrictMapRegion; 
@property (assign,nonatomic) BOOL isStrictMapRegion;                                            //@synthesize isStrictMapRegion=_isStrictMapRegion - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) double timestamp;                                                  //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasZilchPoints; 
@property (nonatomic,retain) NSData * zilchPoints;                                              //@synthesize zilchPoints=_zilchPoints - In the implementation block
@property (assign,nonatomic) BOOL hasIncludeEntryPoints; 
@property (assign,nonatomic) BOOL includeEntryPoints;                                           //@synthesize includeEntryPoints=_includeEntryPoints - In the implementation block
@property (nonatomic,readonly) BOOL hasBusinessOptions; 
@property (nonatomic,retain) GEOBusinessOptions * businessOptions;                              //@synthesize businessOptions=_businessOptions - In the implementation block
@property (assign,nonatomic) BOOL hasLocalSearchProviderID; 
@property (assign,nonatomic) int localSearchProviderID;                                         //@synthesize localSearchProviderID=_localSearchProviderID - In the implementation block
@property (assign,nonatomic) BOOL hasIncludeSuggestionsOnly; 
@property (assign,nonatomic) BOOL includeSuggestionsOnly;                                       //@synthesize includeSuggestionsOnly=_includeSuggestionsOnly - In the implementation block
@property (assign,nonatomic) BOOL hasStructuredSearch; 
@property (assign,nonatomic) BOOL structuredSearch;                                             //@synthesize structuredSearch=_structuredSearch - In the implementation block
@property (nonatomic,readonly) BOOL hasSuggestionsPrefix; 
@property (nonatomic,retain) NSString * suggestionsPrefix;                                      //@synthesize suggestionsPrefix=_suggestionsPrefix - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceCountryCode; 
@property (nonatomic,retain) NSString * deviceCountryCode;                                      //@synthesize deviceCountryCode=_deviceCountryCode - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceLocation; 
@property (nonatomic,retain) GEOLatLng * deviceLocation;                                        //@synthesize deviceLocation=_deviceLocation - In the implementation block
@property (nonatomic,readonly) BOOL hasInputLanguage; 
@property (nonatomic,retain) NSString * inputLanguage;                                          //@synthesize inputLanguage=_inputLanguage - In the implementation block
@property (nonatomic,readonly) BOOL hasPhoneticLocaleIdentifier; 
@property (nonatomic,retain) NSString * phoneticLocaleIdentifier;                               //@synthesize phoneticLocaleIdentifier=_phoneticLocaleIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasSequenceNumber; 
@property (assign,nonatomic) int sequenceNumber;                                                //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (assign,nonatomic) BOOL hasSuppressResultsRequiringAttribution; 
@property (assign,nonatomic) BOOL suppressResultsRequiringAttribution;                          //@synthesize suppressResultsRequiringAttribution=_suppressResultsRequiringAttribution - In the implementation block
@property (assign,nonatomic) BOOL hasIsFromAPI; 
@property (assign,nonatomic) BOOL isFromAPI;                                                    //@synthesize isFromAPI=_isFromAPI - In the implementation block
@property (assign,nonatomic) BOOL hasTimeSinceMapEnteredForeground; 
@property (assign,nonatomic) double timeSinceMapEnteredForeground;                              //@synthesize timeSinceMapEnteredForeground=_timeSinceMapEnteredForeground - In the implementation block
@property (assign,nonatomic) BOOL hasTimeSinceMapViewportChanged; 
@property (assign,nonatomic) double timeSinceMapViewportChanged;                                //@synthesize timeSinceMapViewportChanged=_timeSinceMapViewportChanged - In the implementation block
@property (assign,nonatomic) BOOL hasIncludeSpokenNames; 
@property (assign,nonatomic) BOOL includeSpokenNames;                                           //@synthesize includeSpokenNames=_includeSpokenNames - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceTimeZone; 
@property (nonatomic,retain) NSString * deviceTimeZone;                                         //@synthesize deviceTimeZone=_deviceTimeZone - In the implementation block
@property (nonatomic,readonly) BOOL hasClientCapabilities; 
@property (nonatomic,retain) GEOClientCapabilities * clientCapabilities;                        //@synthesize clientCapabilities=_clientCapabilities - In the implementation block
@property (assign,nonatomic) BOOL hasIncludeTravelTime; 
@property (assign,nonatomic) BOOL includeTravelTime;                                            //@synthesize includeTravelTime=_includeTravelTime - In the implementation block
@property (assign,nonatomic) BOOL hasTransportTypeForTravelTimes; 
@property (assign,nonatomic) int transportTypeForTravelTimes;                                   //@synthesize transportTypeForTravelTimes=_transportTypeForTravelTimes - In the implementation block
@property (nonatomic,readonly) BOOL hasSuggestionsOptions; 
@property (nonatomic,retain) GEOSuggestionsOptions * suggestionsOptions;                        //@synthesize suggestionsOptions=_suggestionsOptions - In the implementation block
@property (assign,nonatomic) BOOL hasPlaceTypeLimit; 
@property (assign,nonatomic) int placeTypeLimit;                                                //@synthesize placeTypeLimit=_placeTypeLimit - In the implementation block
@property (assign,nonatomic) BOOL hasIsStrictGeocoding; 
@property (assign,nonatomic) BOOL isStrictGeocoding;                                            //@synthesize isStrictGeocoding=_isStrictGeocoding - In the implementation block
@property (assign,nonatomic) BOOL hasIncludeTravelDistance; 
@property (assign,nonatomic) BOOL includeTravelDistance;                                        //@synthesize includeTravelDistance=_includeTravelDistance - In the implementation block
@property (assign,nonatomic) BOOL hasGeoId; 
@property (assign,nonatomic) long long geoId;                                                   //@synthesize geoId=_geoId - In the implementation block
@property (assign,nonatomic) BOOL hasIncludeQuads; 
@property (assign,nonatomic) BOOL includeQuads;                                                 //@synthesize includeQuads=_includeQuads - In the implementation block
@property (assign,nonatomic) BOOL hasExcludeAddressInResults; 
@property (assign,nonatomic) BOOL excludeAddressInResults;                                      //@synthesize excludeAddressInResults=_excludeAddressInResults - In the implementation block
@property (nonatomic,readonly) unsigned long long searchSubstringsCount; 
@property (nonatomic,readonly) SCD_Struct_GE67* searchSubstrings; 
@property (assign,nonatomic) BOOL hasIncludeGeoId; 
@property (assign,nonatomic) BOOL includeGeoId;                                                 //@synthesize includeGeoId=_includeGeoId - In the implementation block
@property (nonatomic,readonly) BOOL hasSearchContext; 
@property (nonatomic,retain) NSString * searchContext;                                          //@synthesize searchContext=_searchContext - In the implementation block
@property (assign,nonatomic) BOOL hasSearchContextSubstring; 
@property (assign,nonatomic) SCD_Struct_GE67 searchContextSubstring;                            //@synthesize searchContextSubstring=_searchContextSubstring - In the implementation block
@property (assign,nonatomic) BOOL hasIncludeStatusCodeInfo; 
@property (assign,nonatomic) BOOL includeStatusCodeInfo;                                        //@synthesize includeStatusCodeInfo=_includeStatusCodeInfo - In the implementation block
@property (nonatomic,readonly) BOOL hasPreserveFields; 
@property (nonatomic,retain) GEOAddress * preserveFields;                                       //@synthesize preserveFields=_preserveFields - In the implementation block
@property (assign,nonatomic) BOOL hasIncludeUnmatchedStrings; 
@property (assign,nonatomic) BOOL includeUnmatchedStrings;                                      //@synthesize includeUnmatchedStrings=_includeUnmatchedStrings - In the implementation block
@property (nonatomic,readonly) BOOL hasIndexFilter; 
@property (nonatomic,retain) GEOIndexQueryNode * indexFilter;                                   //@synthesize indexFilter=_indexFilter - In the implementation block
@property (assign,nonatomic) BOOL hasIncludeFeatureSets; 
@property (assign,nonatomic) BOOL includeFeatureSets;                                           //@synthesize includeFeatureSets=_includeFeatureSets - In the implementation block
@property (nonatomic,retain) NSMutableArray * serviceTags;                                      //@synthesize serviceTags=_serviceTags - In the implementation block
@property (assign,nonatomic) BOOL hasIntersectingGeoId; 
@property (assign,nonatomic) unsigned long long intersectingGeoId;                              //@synthesize intersectingGeoId=_intersectingGeoId - In the implementation block
@property (nonatomic,readonly) BOOL hasKnownLocation; 
@property (nonatomic,retain) GEOLatLng * knownLocation;                                         //@synthesize knownLocation=_knownLocation - In the implementation block
@property (assign,nonatomic) BOOL hasKnownAccuracy; 
@property (assign,nonatomic) int knownAccuracy;                                                 //@synthesize knownAccuracy=_knownAccuracy - In the implementation block
@property (assign,nonatomic) BOOL hasIncludeRevgeoRequestTemplate; 
@property (assign,nonatomic) BOOL includeRevgeoRequestTemplate;                                 //@synthesize includeRevgeoRequestTemplate=_includeRevgeoRequestTemplate - In the implementation block
@property (assign,nonatomic) BOOL hasIncludeMatchedToken; 
@property (assign,nonatomic) BOOL includeMatchedToken;                                          //@synthesize includeMatchedToken=_includeMatchedToken - In the implementation block
@property (assign,nonatomic) BOOL hasSearchSource; 
@property (assign,nonatomic) int searchSource;                                                  //@synthesize searchSource=_searchSource - In the implementation block
@property (nonatomic,readonly) unsigned long long optionalSuppressionReasonsCount; 
@property (nonatomic,readonly) int* optionalSuppressionReasons; 
@property (nonatomic,readonly) BOOL hasSearchLocation; 
@property (nonatomic,retain) GEOLatLng * searchLocation;                                        //@synthesize searchLocation=_searchLocation - In the implementation block
@property (assign,nonatomic) BOOL hasIncludeNameForForwardGeocodingResults; 
@property (assign,nonatomic) BOOL includeNameForForwardGeocodingResults;                        //@synthesize includeNameForForwardGeocodingResults=_includeNameForForwardGeocodingResults - In the implementation block
-(id)initWithTraits:(id)arg1 ;
-(id)initWithTraits:(id)arg1 includeEntryPoints:(BOOL)arg2 ;
-(id)initWithTraits:(id)arg1 maxResults:(int)arg2 ;
-(GEOAddress *)address;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(GEOLocation *)location;
-(id)dictionaryRepresentation;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(BOOL)hasTimestamp;
-(void)setZilchPoints:(NSData *)arg1 ;
-(BOOL)hasZilchPoints;
-(NSData *)zilchPoints;
-(BOOL)hasMapRegion;
-(void)setKnownAccuracy:(int)arg1 ;
-(void)setHasKnownAccuracy:(BOOL)arg1 ;
-(BOOL)hasKnownAccuracy;
-(int)knownAccuracy;
-(void)setAddress:(GEOAddress *)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasAddress;
-(void)setClientCapabilities:(GEOClientCapabilities *)arg1 ;
-(void)setServiceTags:(NSMutableArray *)arg1 ;
-(void)addServiceTag:(id)arg1 ;
-(unsigned long long)serviceTagsCount;
-(void)clearServiceTags;
-(id)serviceTagAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasClientCapabilities;
-(void)setSequenceNumber:(int)arg1 ;
-(void)setHasSequenceNumber:(BOOL)arg1 ;
-(BOOL)hasSequenceNumber;
-(GEOClientCapabilities *)clientCapabilities;
-(int)sequenceNumber;
-(NSMutableArray *)serviceTags;
-(void)setInputLanguage:(NSString *)arg1 ;
-(void)setPhoneticLocaleIdentifier:(NSString *)arg1 ;
-(void)setLocalSearchProviderID:(int)arg1 ;
-(void)setHasLocalSearchProviderID:(BOOL)arg1 ;
-(BOOL)hasLocalSearchProviderID;
-(void)setGeoId:(long long)arg1 ;
-(void)setHasGeoId:(BOOL)arg1 ;
-(BOOL)hasGeoId;
-(int)localSearchProviderID;
-(long long)geoId;
-(BOOL)hasInputLanguage;
-(NSString *)inputLanguage;
-(BOOL)hasPhoneticLocaleIdentifier;
-(NSString *)phoneticLocaleIdentifier;
-(void)setSuppressResultsRequiringAttribution:(BOOL)arg1 ;
-(void)setHasSuppressResultsRequiringAttribution:(BOOL)arg1 ;
-(BOOL)hasSuppressResultsRequiringAttribution;
-(BOOL)suppressResultsRequiringAttribution;
-(void)setSearch:(NSString *)arg1 ;
-(void)setFilterByBusinessCategorys:(NSMutableArray *)arg1 ;
-(void)setBusinessOptions:(GEOBusinessOptions *)arg1 ;
-(void)setSuggestionsPrefix:(NSString *)arg1 ;
-(void)setDeviceCountryCode:(NSString *)arg1 ;
-(void)setDeviceLocation:(GEOLatLng *)arg1 ;
-(void)setDeviceTimeZone:(NSString *)arg1 ;
-(void)setSuggestionsOptions:(GEOSuggestionsOptions *)arg1 ;
-(void)clearSearchSubstrings;
-(void)setSearchContext:(NSString *)arg1 ;
-(void)setPreserveFields:(GEOAddress *)arg1 ;
-(void)setIndexFilter:(GEOIndexQueryNode *)arg1 ;
-(void)setKnownLocation:(GEOLatLng *)arg1 ;
-(void)setSearchLocation:(GEOLatLng *)arg1 ;
-(void)addFilterByBusinessCategory:(id)arg1 ;
-(unsigned long long)businessIDsCount;
-(void)clearBusinessIDs;
-(unsigned long long)businessIDAtIndex:(unsigned long long)arg1 ;
-(void)addBusinessID:(unsigned long long)arg1 ;
-(unsigned long long)additionalPlaceTypesCount;
-(void)clearAdditionalPlaceTypes;
-(int)additionalPlaceTypeAtIndex:(unsigned long long)arg1 ;
-(void)addAdditionalPlaceType:(int)arg1 ;
-(unsigned long long)filterByBusinessCategorysCount;
-(void)clearFilterByBusinessCategorys;
-(id)filterByBusinessCategoryAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)searchSubstringsCount;
-(SCD_Struct_GE67)searchSubstringAtIndex:(unsigned long long)arg1 ;
-(void)addSearchSubstring:(SCD_Struct_GE67)arg1 ;
-(unsigned long long)optionalSuppressionReasonsCount;
-(void)clearOptionalSuppressionReasons;
-(int)optionalSuppressionReasonAtIndex:(unsigned long long)arg1 ;
-(void)addOptionalSuppressionReason:(int)arg1 ;
-(unsigned long long*)businessIDs;
-(void)setBusinessIDs:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)hasSearch;
-(int*)additionalPlaceTypes;
-(void)setAdditionalPlaceTypes:(int*)arg1 count:(unsigned long long)arg2 ;
-(void)setIncludePhonetics:(BOOL)arg1 ;
-(void)setHasIncludePhonetics:(BOOL)arg1 ;
-(BOOL)hasIncludePhonetics;
-(int)maxResults;
-(void)setMaxResults:(int)arg1 ;
-(void)setHasMaxResults:(BOOL)arg1 ;
-(BOOL)hasMaxResults;
-(void)setSessionGUID:(SCD_Struct_GE2)arg1 ;
-(void)setHasSessionGUID:(BOOL)arg1 ;
-(BOOL)hasSessionGUID;
-(void)setBusinessSortOrder:(int)arg1 ;
-(void)setHasBusinessSortOrder:(BOOL)arg1 ;
-(BOOL)hasBusinessSortOrder;
-(void)setIncludeBusinessRating:(BOOL)arg1 ;
-(void)setHasIncludeBusinessRating:(BOOL)arg1 ;
-(BOOL)hasIncludeBusinessRating;
-(void)setIncludeBusinessCategories:(BOOL)arg1 ;
-(void)setHasIncludeBusinessCategories:(BOOL)arg1 ;
-(BOOL)hasIncludeBusinessCategories;
-(void)setMaxBusinessReviews:(int)arg1 ;
-(void)setHasMaxBusinessReviews:(BOOL)arg1 ;
-(BOOL)hasMaxBusinessReviews;
-(void)setIsStrictMapRegion:(BOOL)arg1 ;
-(void)setHasIsStrictMapRegion:(BOOL)arg1 ;
-(BOOL)hasIsStrictMapRegion;
-(void)setIncludeEntryPoints:(BOOL)arg1 ;
-(void)setHasIncludeEntryPoints:(BOOL)arg1 ;
-(BOOL)hasIncludeEntryPoints;
-(BOOL)hasBusinessOptions;
-(void)setIncludeSuggestionsOnly:(BOOL)arg1 ;
-(void)setHasIncludeSuggestionsOnly:(BOOL)arg1 ;
-(BOOL)hasIncludeSuggestionsOnly;
-(void)setStructuredSearch:(BOOL)arg1 ;
-(void)setHasStructuredSearch:(BOOL)arg1 ;
-(BOOL)hasStructuredSearch;
-(BOOL)hasSuggestionsPrefix;
-(BOOL)hasDeviceCountryCode;
-(BOOL)hasDeviceLocation;
-(void)setIsFromAPI:(BOOL)arg1 ;
-(void)setHasIsFromAPI:(BOOL)arg1 ;
-(BOOL)hasIsFromAPI;
-(void)setTimeSinceMapEnteredForeground:(double)arg1 ;
-(void)setHasTimeSinceMapEnteredForeground:(BOOL)arg1 ;
-(BOOL)hasTimeSinceMapEnteredForeground;
-(void)setTimeSinceMapViewportChanged:(double)arg1 ;
-(void)setHasTimeSinceMapViewportChanged:(BOOL)arg1 ;
-(BOOL)hasTimeSinceMapViewportChanged;
-(void)setIncludeSpokenNames:(BOOL)arg1 ;
-(void)setHasIncludeSpokenNames:(BOOL)arg1 ;
-(BOOL)hasIncludeSpokenNames;
-(BOOL)hasDeviceTimeZone;
-(void)setIncludeTravelTime:(BOOL)arg1 ;
-(void)setHasIncludeTravelTime:(BOOL)arg1 ;
-(BOOL)hasIncludeTravelTime;
-(void)setTransportTypeForTravelTimes:(int)arg1 ;
-(void)setHasTransportTypeForTravelTimes:(BOOL)arg1 ;
-(BOOL)hasTransportTypeForTravelTimes;
-(BOOL)hasSuggestionsOptions;
-(void)setPlaceTypeLimit:(int)arg1 ;
-(void)setHasPlaceTypeLimit:(BOOL)arg1 ;
-(BOOL)hasPlaceTypeLimit;
-(void)setIsStrictGeocoding:(BOOL)arg1 ;
-(void)setHasIsStrictGeocoding:(BOOL)arg1 ;
-(BOOL)hasIsStrictGeocoding;
-(void)setIncludeTravelDistance:(BOOL)arg1 ;
-(void)setHasIncludeTravelDistance:(BOOL)arg1 ;
-(BOOL)hasIncludeTravelDistance;
-(void)setIncludeQuads:(BOOL)arg1 ;
-(void)setHasIncludeQuads:(BOOL)arg1 ;
-(BOOL)hasIncludeQuads;
-(void)setExcludeAddressInResults:(BOOL)arg1 ;
-(void)setHasExcludeAddressInResults:(BOOL)arg1 ;
-(BOOL)hasExcludeAddressInResults;
-(SCD_Struct_GE67*)searchSubstrings;
-(void)setSearchSubstrings:(SCD_Struct_GE67*)arg1 count:(unsigned long long)arg2 ;
-(void)setIncludeGeoId:(BOOL)arg1 ;
-(void)setHasIncludeGeoId:(BOOL)arg1 ;
-(BOOL)hasIncludeGeoId;
-(BOOL)hasSearchContext;
-(void)setSearchContextSubstring:(SCD_Struct_GE67)arg1 ;
-(void)setHasSearchContextSubstring:(BOOL)arg1 ;
-(BOOL)hasSearchContextSubstring;
-(void)setIncludeStatusCodeInfo:(BOOL)arg1 ;
-(void)setHasIncludeStatusCodeInfo:(BOOL)arg1 ;
-(BOOL)hasIncludeStatusCodeInfo;
-(BOOL)hasPreserveFields;
-(void)setIncludeUnmatchedStrings:(BOOL)arg1 ;
-(void)setHasIncludeUnmatchedStrings:(BOOL)arg1 ;
-(BOOL)hasIncludeUnmatchedStrings;
-(BOOL)hasIndexFilter;
-(void)setIncludeFeatureSets:(BOOL)arg1 ;
-(void)setHasIncludeFeatureSets:(BOOL)arg1 ;
-(BOOL)hasIncludeFeatureSets;
-(void)setIntersectingGeoId:(unsigned long long)arg1 ;
-(void)setHasIntersectingGeoId:(BOOL)arg1 ;
-(BOOL)hasIntersectingGeoId;
-(BOOL)hasKnownLocation;
-(void)setIncludeRevgeoRequestTemplate:(BOOL)arg1 ;
-(void)setHasIncludeRevgeoRequestTemplate:(BOOL)arg1 ;
-(BOOL)hasIncludeRevgeoRequestTemplate;
-(void)setIncludeMatchedToken:(BOOL)arg1 ;
-(void)setHasIncludeMatchedToken:(BOOL)arg1 ;
-(BOOL)hasIncludeMatchedToken;
-(void)setSearchSource:(int)arg1 ;
-(void)setHasSearchSource:(BOOL)arg1 ;
-(BOOL)hasSearchSource;
-(int*)optionalSuppressionReasons;
-(void)setOptionalSuppressionReasons:(int*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)hasSearchLocation;
-(void)setIncludeNameForForwardGeocodingResults:(BOOL)arg1 ;
-(void)setHasIncludeNameForForwardGeocodingResults:(BOOL)arg1 ;
-(BOOL)hasIncludeNameForForwardGeocodingResults;
-(BOOL)includePhonetics;
-(SCD_Struct_GE2)sessionGUID;
-(int)businessSortOrder;
-(BOOL)includeBusinessRating;
-(BOOL)includeBusinessCategories;
-(int)maxBusinessReviews;
-(NSMutableArray *)filterByBusinessCategorys;
-(BOOL)isStrictMapRegion;
-(BOOL)includeEntryPoints;
-(GEOBusinessOptions *)businessOptions;
-(BOOL)includeSuggestionsOnly;
-(BOOL)structuredSearch;
-(NSString *)suggestionsPrefix;
-(NSString *)deviceCountryCode;
-(GEOLatLng *)deviceLocation;
-(BOOL)isFromAPI;
-(double)timeSinceMapEnteredForeground;
-(double)timeSinceMapViewportChanged;
-(BOOL)includeSpokenNames;
-(NSString *)deviceTimeZone;
-(BOOL)includeTravelTime;
-(int)transportTypeForTravelTimes;
-(GEOSuggestionsOptions *)suggestionsOptions;
-(int)placeTypeLimit;
-(BOOL)isStrictGeocoding;
-(BOOL)includeTravelDistance;
-(BOOL)includeQuads;
-(BOOL)excludeAddressInResults;
-(BOOL)includeGeoId;
-(NSString *)searchContext;
-(SCD_Struct_GE67)searchContextSubstring;
-(BOOL)includeStatusCodeInfo;
-(GEOAddress *)preserveFields;
-(BOOL)includeUnmatchedStrings;
-(GEOIndexQueryNode *)indexFilter;
-(BOOL)includeFeatureSets;
-(unsigned long long)intersectingGeoId;
-(GEOLatLng *)knownLocation;
-(BOOL)includeRevgeoRequestTemplate;
-(BOOL)includeMatchedToken;
-(int)searchSource;
-(GEOLatLng *)searchLocation;
-(BOOL)includeNameForForwardGeocodingResults;
-(void)setLocation:(GEOLocation *)arg1 ;
-(GEOMapRegion *)mapRegion;
-(void)setMapRegion:(GEOMapRegion *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasLocation;
-(NSString *)search;
@end

