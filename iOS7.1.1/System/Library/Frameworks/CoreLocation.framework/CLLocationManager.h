/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:55 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreLocation/CoreLocation-Structs.h>
@class NSString, CLLocation, CLHeading, NSSet;

@interface CLLocationManager : NSObject {

	id _internal;

}

@property (assign,nonatomic) <CLLocationManagerDelegate> * delegate; 
@property (nonatomic,readonly) bool locationServicesEnabled; 
@property (nonatomic,copy) NSString * purpose; 
@property (assign,nonatomic) long long activityType; 
@property (assign,nonatomic) double distanceFilter; 
@property (assign,nonatomic) double desiredAccuracy; 
@property (assign,nonatomic) bool pausesLocationUpdatesAutomatically; 
@property (nonatomic,readonly) CLLocation * location; 
@property (nonatomic,readonly) bool headingAvailable; 
@property (assign,nonatomic) double headingFilter; 
@property (assign,nonatomic) int headingOrientation; 
@property (nonatomic,readonly) CLHeading * heading; 
@property (nonatomic,readonly) double maximumRegionMonitoringDistance; 
@property (nonatomic,readonly) NSSet * monitoredRegions; 
@property (nonatomic,readonly) NSSet * rangedRegions; 
@property (assign,nonatomic) bool privateMode; 
@property (nonatomic,readonly) bool locationServicesAvailable; 
@property (nonatomic,readonly) bool locationServicesApproved; 
@property (nonatomic,readonly) double expectedGpsUpdateInterval; 
@property (assign,nonatomic) bool supportInfo; 
@property (nonatomic,readonly) double bestAccuracy; 
@property (nonatomic,readonly) CLClientRef internalClient; 
@property (assign,getter=isPersistentMonitoringEnabled,nonatomic) bool persistentMonitoringEnabled; 
@property (assign,getter=isLocationServicesPreferencesDialogEnabled,nonatomic) bool locationServicesPreferencesDialogEnabled; 
+(unsigned long long)primaryEntityClassForLocationDictionary:(id)arg1 ;
+(unsigned long long)activeLocationServiceTypesForLocationDictionary:(id)arg1 ;
+(void)setStatusBarIconEnabled:(bool)arg1 forLocationEntityClass:(unsigned long long)arg2 ;
+(bool)isStatusBarIconEnabledForLocationEntityClass:(unsigned long long)arg1 ;
+(unsigned long long)entityClassesForLocationDictionary:(id)arg1 ;
+(bool)isLocationActiveForLocationDictionary:(id)arg1 ;
+(id)dateLocationLastUsedForLocationDictionary:(id)arg1 ;
+(bool)hasUsedBackgroundLocationServices:(id)arg1 ;
+(bool)isEntityAuthorizedForLocationDictionary:(id)arg1 ;
+(void)setEntityAuthorized:(bool)arg1 forLocationDictionary:(id)arg2 ;
+(int)_authorizationStatus;
+(int)_authorizationStatusForBundleIdentifier:(id)arg1 bundle:(id)arg2 ;
+(int)_regionMonitoringAuthorizationStatusForBundleIdentifier:(id)arg1 bundle:(id)arg2 ;
+(bool)locationServicesEnabled:(bool)arg1 ;
+(void)setLocationServicesEnabled:(bool)arg1 ;
+(bool)significantLocationChangeMonitoringAvailable;
+(bool)isMonitoringAvailableForClass:(Class)arg1 ;
+(bool)regionMonitoringAvailable;
+(bool)regionMonitoringEnabled;
+(bool)isRangingAvailable;
+(bool)mapCorrectionAvailable;
+(bool)deferredLocationUpdatesAvailable;
+(int)authorizationStatusForBundle:(id)arg1 ;
+(int)regionMonitoringAuthorizationStatusForBundleIdentifier:(id)arg1 ;
+(int)regionMonitoringAuthorizationStatusForBundle:(id)arg1 ;
+(void)setAuthorizationStatus:(bool)arg1 forBundleIdentifier:(id)arg2 ;
+(void)setAuthorizationStatus:(bool)arg1 forBundle:(id)arg2 ;
+(void)setDefaultEffectiveBundleIdentifier:(id)arg1 ;
+(void)setDefaultEffectiveBundle:(id)arg1 ;
+(bool)dumpLogsWithMessage:(id)arg1 ;
+(bool)shutdownDaemon;
+(bool)bundleSupported:(id)arg1 ;
+(bool)advertiseAsBeacon:(id)arg1 withPower:(id)arg2 ;
+(int)authorizationStatus;
+(int)authorizationStatusForBundleIdentifier:(id)arg1 ;
+(bool)locationServicesEnabled;
+(id)sharedManager;
+(bool)headingAvailable;
-(void)startUpdatingVehicleSpeed;
-(void)stopUpdatingVehicleSpeed;
-(void)startUpdatingVehicleHeading;
-(void)stopUpdatingVehicleHeading;
-(void)onClientEvent:(int)arg1 supportInfo:(id)arg2 ;
-(void)setPausesLocationUpdatesAutomatically:(bool)arg1 ;
-(id)rangedRegions;
-(void)onDidBecomeActive:(id)arg1 ;
-(id)initWithEffectiveBundleIdentifier:(id)arg1 bundle:(id)arg2 ;
-(void)onClientEventAuthStatus:(id)arg1 ;
-(void)onClientEventLocation:(id)arg1 ;
-(void)onClientEventLocationUnavailable:(id)arg1 ;
-(void)onClientEventHeading:(id)arg1 ;
-(void)onClientEventHeadingCalibration:(id)arg1 ;
-(void)onClientEventHistoricLocation:(id)arg1 ;
-(void)onClientEventError:(id)arg1 ;
-(void)onClientEventRegion:(id)arg1 ;
-(void)onClientEventRegionState:(id)arg1 ;
-(void)onClientEventRegionError:(id)arg1 ;
-(void)onClientEventRanging:(id)arg1 ;
-(void)onClientEventRangingError:(id)arg1 ;
-(void)onClientEventRegionResponseDelayed:(id)arg1 ;
-(void)onClientEventRegionSetupCompleted:(id)arg1 ;
-(void)onClientEventAutopauseStatus:(id)arg1 ;
-(void)onClientEventBatch:(id)arg1 ;
-(void)onClientEventInterrupted:(id)arg1 ;
-(void)onClientEventVehicleSpeed:(id)arg1 ;
-(void)onClientEventVehicleHeading:(id)arg1 ;
-(void)resumeLocationUpdates;
-(void)pauseLocationUpdates:(bool)arg1 ;
-(id)initWithEffectiveBundle:(id)arg1 ;
-(double)distanceFilter;
-(double)desiredAccuracy;
-(bool)pausesLocationUpdatesAutomatically;
-(bool)locationServicesAvailable;
-(double)expectedGpsUpdateInterval;
-(void)setSupportInfo:(bool)arg1 ;
-(bool)supportInfo;
-(double)bestAccuracy;
-(CLClientRef)internalClient;
-(void)setPrivateMode:(bool)arg1 ;
-(bool)privateMode;
-(void)startUpdatingLocationWithPrompt;
-(void)allowDeferredLocationUpdatesUntilTraveled:(double)arg1 timeout:(double)arg2 ;
-(void)disallowDeferredLocationUpdates;
-(void)historicLocationsFromDate:(id)arg1 forInterval:(double)arg2 ;
-(double)headingFilter;
-(int)headingOrientation;
-(void)dismissHeadingCalibrationDisplay;
-(void)startAppStatusUpdates;
-(void)stopAppStatusUpdates;
-(void)startTechStatusUpdates;
-(void)stopTechStatusUpdates;
-(void)startMonitoringSignificantLocationChanges;
-(void)stopMonitoringSignificantLocationChanges;
-(void)startMonitoringForRegion:(id)arg1 desiredAccuracy:(double)arg2 ;
-(void)requestStateForRegion:(id)arg1 ;
-(double)maximumRegionMonitoringDistance;
-(void)startRangingBeaconsInRegion:(id)arg1 ;
-(void)stopRangingBeaconsInRegion:(id)arg1 ;
-(void)resetApps;
-(id)appsUsingLocation;
-(id)appsUsingLocationWithDetails;
-(id)technologiesInUse;
-(bool)isPersistentMonitoringEnabled;
-(void)setPersistentMonitoringEnabled:(bool)arg1 ;
-(bool)isLocationServicesPreferencesDialogEnabled;
-(void)setLocationServicesPreferencesDialogEnabled:(bool)arg1 ;
-(void)registerAsLocationClient;
-(id)monitoredRegions;
-(void)stopMonitoringForRegion:(id)arg1 ;
-(void)startMonitoringForRegion:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(id)location;
-(long long)activityType;
-(id)initWithEffectiveBundleIdentifier:(id)arg1 ;
-(void)setPurpose:(id)arg1 ;
-(id)purpose;
-(void)setDistanceFilter:(double)arg1 ;
-(void)setHeadingFilter:(double)arg1 ;
-(void)setDesiredAccuracy:(double)arg1 ;
-(void)startUpdatingLocation;
-(void)stopUpdatingLocation;
-(void)setHeadingOrientation:(int)arg1 ;
-(bool)locationServicesApproved;
-(bool)locationServicesEnabled;
-(void)stopUpdatingHeading;
-(bool)headingAvailable;
-(void)startUpdatingHeading;
-(id)heading;
-(void)setActivityType:(long long)arg1 ;
@end

