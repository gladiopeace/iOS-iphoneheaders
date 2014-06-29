/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:06 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <SoftwareUpdateServices/SoftwareUpdateServices-Structs.h>
@class NSHashTable;

@interface SUNetworkMonitor : NSObject {

	SCNetworkReachabilityRef _reachability;
	NSHashTable* _observers;
	int _currentNetworkType;
	bool _roaming;

}
+(id)sharedInstance;
+(bool)holdsWiFiAssertion;
+(void)setHoldsWiFiAssertion:(bool)arg1 ;
-(void)dealloc;
-(id)init;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(bool)isCellularDataRoamingEnabled;
-(bool)_isCurrentlyRoaming;
-(void)_initNetworkObservation;
-(int)_networkTypeFromFlags:(unsigned)arg1 ;
-(void)setCurrentNetworkType:(int)arg1 ;
-(int)currentNetworkType;
-(int)_networkTypeFromCurrentCellularData;
-(bool)isNetworkTypeCellular:(int)arg1 ;
-(bool)isCellularRoaming;
-(void)setCellularRoaming:(bool)arg1 ;
-(void)_carrierBundleChanged;
-(void)_operatorBundleChanged;
@end

