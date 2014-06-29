/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 2:29:07 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/PassKit.framework/passd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSObject, NSDate;

@interface WDBackgroundTask : NSObject {

	NSObject<OS_xpc_object>* _job;

}

@property (nonatomic,retain) NSDate * startDate; 
@property (nonatomic,retain) NSDate * endDate; 
@property (assign,nonatomic) BOOL adjustDates; 
@property (assign,nonatomic) BOOL networkRequired; 
@property (assign,nonatomic) BOOL cellularAllowed; 
@property (assign,nonatomic) BOOL allowedDuringVoiceCall; 
@property (assign,nonatomic) BOOL allowedDuringRoaming; 
@property (assign,nonatomic) BOOL optimizeNetworkPower; 
@property (assign,nonatomic) double requiredScreenBlankedTime; 
@property (assign,nonatomic) double requiredPluggedInTime; 
@property (assign,nonatomic) double requiredBatteryLevel; 
@property (nonatomic,retain) id userContext; 
@property (nonatomic,readonly) BOOL taskValid; 
@property (nonatomic,readonly) BOOL taskSatisfied; 
@property (nonatomic,readonly) BOOL taskExpired; 
@property (nonatomic,readonly) BOOL networkSatisfied; 
@property (nonatomic,readonly) BOOL screenBlankedSatisfied; 
@property (nonatomic,readonly) BOOL pluggedInSatisfied; 
@property (nonatomic,readonly) BOOL batteryLevelSatisfied; 
+(BOOL)isLegalStartDate:(id)arg1 ;
+(id)_taskWithJob:(id)arg1 ;
-(BOOL)networkSatisfied;
-(void)setEndDateForMaximumWindow;
-(void)setNetworkRequired:(BOOL)arg1 ;
-(void)setCellularAllowed:(BOOL)arg1 ;
-(void)setAllowedDuringRoaming:(BOOL)arg1 ;
-(void)setOptimizeNetworkPower:(BOOL)arg1 ;
-(BOOL)taskExpired;
-(id)_initWithJob:(id)arg1 ;
-(BOOL)networkRequired;
-(id)_job;
-(BOOL)adjustDates;
-(BOOL)cellularAllowed;
-(BOOL)allowedDuringVoiceCall;
-(BOOL)allowedDuringRoaming;
-(BOOL)optimizeNetworkPower;
-(double)requiredScreenBlankedTime;
-(double)requiredPluggedInTime;
-(double)requiredBatteryLevel;
-(id)userContext;
-(void)setAdjustDates:(BOOL)arg1 ;
-(void)setAllowedDuringVoiceCall:(BOOL)arg1 ;
-(void)setRequiredScreenBlankedTime:(double)arg1 ;
-(void)setRequiredPluggedInTime:(double)arg1 ;
-(void)setRequiredBatteryLevel:(double)arg1 ;
-(void)setUserContext:(id)arg1 ;
-(BOOL)taskValid;
-(BOOL)taskSatisfied;
-(BOOL)screenBlankedSatisfied;
-(BOOL)pluggedInSatisfied;
-(BOOL)batteryLevelSatisfied;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)startDate;
-(id)endDate;
-(void)setStartDate:(id)arg1 ;
-(void)setEndDate:(id)arg1 ;
@end

