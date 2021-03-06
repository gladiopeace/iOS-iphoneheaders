/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:00 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol CLLocationManagerDelegate;
#import <CoreLocation/CoreLocation-Structs.h>
@class NSString, NSMutableSet;

@interface CLLocationManagerInternal : NSObject {

	CLClientRef fClient;
	<CLLocationManagerDelegate>* fDelegate;
	double fDistanceFilter;
	double fDesiredAccuracy;
	BOOL fUpdatingLocation;
	SCD_Struct_CL1 fLocation;
	NSString* fLocationEventType;
	BOOL fCapabilitiesValid;
	SCD_Struct_CL5 fCapabilities;
	BOOL fUpdatingHeading;
	double fHeadingFilter;
	int fHeadingOrientation;
	BOOL fPersistentMonitoringEnabled;
	BOOL fAllowsLocationPrompts;
	BOOL fPreviousAuthorizationStatusValid;
	int fPreviousAuthorizationStatus;
	int fActivityType;
	int fPausesLocationUpdatesAutomatically;
	BOOL fPaused;
	BOOL fAllowsMapCorrection;
	BOOL fBatchingLocation;
	NSMutableSet* fRangedRegions;

}

@property (nonatomic,readonly) NSMutableSet * rangedRegions; 
-(id)initWithInfo:(id)arg1 bundleIdentifier:(id)arg2 bundle:(id)arg3 ;
-(void)setPausesLocationUpdatesAutomatically:(int)arg1 ;
-(int)PausesLocationUpdatesAutomatically;
-(void)stopUpdatingLocationAutoPaused;
-(id)rangedRegions;
-(void)dealloc;
@end

