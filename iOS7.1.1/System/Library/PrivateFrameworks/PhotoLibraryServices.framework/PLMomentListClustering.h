/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:30 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableSet, NSMapTable, NSDateFormatter;

@interface PLMomentListClustering : NSObject {

	double __maximumTimeThreshold;
	double __maximumTimeThresholdBetweenMomentsWithLocation;
	double __maximumTimeThresholdFromPeakMatch;
	double __maximumTimeThresholdBetweenMomentsWithoutLocation;
	double __maximumTimeThresholdFromPeakWithoutLocation;
	double __maximumDistanceThresholdBetweenMoments;
	double __maximumDistanceThresholdFromPeak;
	double __maximumDistanceBetweenAccumulatedMoments;
	unsigned long long __defaultNumberOfAssetsRequiredForSeeding;
	unsigned long long __defaultMaxFailuresForExpansion;
	double __megamomentAccumulationMaximumTimeThreshold;
	unsigned long long __minimumNumberOfAssetsToAvoidMegamomentAccumulation;
	unsigned long long __minimumNumberOfAssetsToAvoidYearAccumulation;
	NSMutableDictionary* __clustersByYearAndMonth;
	NSMutableSet* __visitedMoments;
	NSMapTable* __cachedLocationsByMoment;
	NSDateFormatter* __debugDateFormatter;

}

@property (nonatomic,readonly) double _maximumTimeThreshold;                                                         //@synthesize _maximumTimeThreshold=__maximumTimeThreshold - In the implementation block
@property (nonatomic,readonly) double _maximumTimeThresholdBetweenMomentsWithLocation;                               //@synthesize _maximumTimeThresholdBetweenMomentsWithLocation=__maximumTimeThresholdBetweenMomentsWithLocation - In the implementation block
@property (nonatomic,readonly) double _maximumTimeThresholdFromPeakMatch;                                            //@synthesize _maximumTimeThresholdFromPeakMatch=__maximumTimeThresholdFromPeakMatch - In the implementation block
@property (nonatomic,readonly) double _maximumTimeThresholdBetweenMomentsWithoutLocation;                            //@synthesize _maximumTimeThresholdBetweenMomentsWithoutLocation=__maximumTimeThresholdBetweenMomentsWithoutLocation - In the implementation block
@property (nonatomic,readonly) double _maximumTimeThresholdFromPeakWithoutLocation;                                  //@synthesize _maximumTimeThresholdFromPeakWithoutLocation=__maximumTimeThresholdFromPeakWithoutLocation - In the implementation block
@property (nonatomic,readonly) double _maximumDistanceThresholdBetweenMoments;                                       //@synthesize _maximumDistanceThresholdBetweenMoments=__maximumDistanceThresholdBetweenMoments - In the implementation block
@property (nonatomic,readonly) double _maximumDistanceThresholdFromPeak;                                             //@synthesize _maximumDistanceThresholdFromPeak=__maximumDistanceThresholdFromPeak - In the implementation block
@property (nonatomic,readonly) double _maximumDistanceBetweenAccumulatedMoments;                                     //@synthesize _maximumDistanceBetweenAccumulatedMoments=__maximumDistanceBetweenAccumulatedMoments - In the implementation block
@property (nonatomic,readonly) unsigned long long _defaultNumberOfAssetsRequiredForSeeding;                          //@synthesize _defaultNumberOfAssetsRequiredForSeeding=__defaultNumberOfAssetsRequiredForSeeding - In the implementation block
@property (nonatomic,readonly) unsigned long long _defaultMaxFailuresForExpansion;                                   //@synthesize _defaultMaxFailuresForExpansion=__defaultMaxFailuresForExpansion - In the implementation block
@property (nonatomic,readonly) double _megamomentAccumulationMaximumTimeThreshold;                                   //@synthesize _megamomentAccumulationMaximumTimeThreshold=__megamomentAccumulationMaximumTimeThreshold - In the implementation block
@property (nonatomic,readonly) unsigned long long _minimumNumberOfAssetsToAvoidMegamomentAccumulation;               //@synthesize _minimumNumberOfAssetsToAvoidMegamomentAccumulation=__minimumNumberOfAssetsToAvoidMegamomentAccumulation - In the implementation block
@property (nonatomic,readonly) unsigned long long _minimumNumberOfAssetsToAvoidYearAccumulation;                     //@synthesize _minimumNumberOfAssetsToAvoidYearAccumulation=__minimumNumberOfAssetsToAvoidYearAccumulation - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _clustersByYearAndMonth;                                        //@synthesize _clustersByYearAndMonth=__clustersByYearAndMonth - In the implementation block
@property (nonatomic,readonly) NSMutableSet * _visitedMoments;                                                       //@synthesize _visitedMoments=__visitedMoments - In the implementation block
@property (setter=_setCachedLocationsByMoment:,nonatomic,retain) NSMapTable * _cachedLocationsByMoment;              //@synthesize _cachedLocationsByMoment=__cachedLocationsByMoment - In the implementation block
@property (nonatomic,readonly) NSDateFormatter * _debugDateFormatter;                                                //@synthesize _debugDateFormatter=__debugDateFormatter - In the implementation block
+(double)maximumTimeThresholdBetweenMoments;
-(void)dealloc;
-(id)init;
-(id)_cachedLocationForMoment:(id)arg1 ;
-(double)_maximumTimeThresholdBetweenMomentsWithLocation;
-(bool)_isDateInMoment:(id)arg1 inDateRangeOfLastMoment:(id)arg2 withDelta:(double)arg3 forwards:(bool)arg4 ;
-(double)_maximumTimeThresholdFromPeakMatch;
-(double)_maximumDistanceThresholdBetweenMoments;
-(double)_maximumDistanceThresholdFromPeak;
-(double)_maximumTimeThresholdBetweenMomentsWithoutLocation;
-(double)_maximumTimeThresholdFromPeakWithoutLocation;
-(bool)_shouldMegaMomentList:(id)arg1 includeMoment:(id)arg2 withPeakMoment:(id)arg3 recentMoment:(id)arg4 recentMomentWithLocation:(id)arg5 forwards:(bool)arg6 haveRejectedMomentsForDistance:(bool)arg7 ;
-(id)_cachedLocationsByMoment;
-(void)_verifyMomentsAreSorted:(id)arg1 ;
-(void)_createMomentListClusterCacheForMoments:(id)arg1 ;
-(void)_setCachedLocationsByMoment:(id)arg1 ;
-(unsigned long long)_defaultNumberOfAssetsRequiredForSeeding;
-(id)_insertNewMegaMomentListWithMoment:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(unsigned long long)_expandMegaMomentList:(id)arg1 fromPeakMoment:(id)arg2 towardMoments:(id)arg3 forwards:(bool)arg4 outRejectedMoments:(id)arg5 ;
-(void)_updateMegaMomentList:(id)arg1 withRejectedMoments:(id)arg2 ;
-(double)_megamomentAccumulationMaximumTimeThreshold;
-(unsigned long long)_minimumNumberOfAssetsToAvoidMegamomentAccumulation;
-(double)_maximumDistanceBetweenAccumulatedMoments;
-(unsigned long long)_minimumNumberOfAssetsToAvoidYearAccumulation;
-(id)generateMegaMomentListsForMoments:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(id)generateYearMomentListsForMoments:(id)arg1 earliestDate:(id)arg2 latestDate:(id)arg3 inManagedObjectContext:(id)arg4 ;
-(double)_maximumTimeThreshold;
-(unsigned long long)_defaultMaxFailuresForExpansion;
-(id)_clustersByYearAndMonth;
-(id)_visitedMoments;
-(id)_debugDateFormatter;
@end

