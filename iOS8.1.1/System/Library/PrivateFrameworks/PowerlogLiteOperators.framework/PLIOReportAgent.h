/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:23 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PowerlogLiteOperators/PowerlogLiteOperators-Structs.h>
#import <PowerlogCore/PLAgent.h>

@class PLEntryNotificationOperatorComposition, NSMutableDictionary;

@interface PLIOReportAgent : PLAgent {

	PLEntryNotificationOperatorComposition* _wakeEntryNotifications;
	PLEntryNotificationOperatorComposition* _batteryLevelChangedNotifications;
	NSMutableDictionary* _sampleChannelsSignificantBattery;
	NSMutableDictionary* _sampleChannelsHalfHour;
	NSMutableDictionary* _sampleChannelsDaily;

}

@property (retain) PLEntryNotificationOperatorComposition * wakeEntryNotifications;                        //@synthesize wakeEntryNotifications=_wakeEntryNotifications - In the implementation block
@property (retain) PLEntryNotificationOperatorComposition * batteryLevelChangedNotifications;              //@synthesize batteryLevelChangedNotifications=_batteryLevelChangedNotifications - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * sampleChannelsSignificantBattery;                       //@synthesize sampleChannelsSignificantBattery=_sampleChannelsSignificantBattery - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * sampleChannelsHalfHour;                                 //@synthesize sampleChannelsHalfHour=_sampleChannelsHalfHour - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * sampleChannelsDaily;                                    //@synthesize sampleChannelsDaily=_sampleChannelsDaily - In the implementation block
+(void)load;
+(id)railDefinitions;
+(id)entryEventPointDefinitions;
+(id)entryEventForwardDefinitions;
+(id)entryEventBackwardDefinitions;
+(id)entryEventBackwardDefinitionIOReport;
+(id)entryEventBackwardDefinitionGPUStatsDVDRequestStates;
+(id)entryEventBackwardDefinitionGPUStatsActiveTimeHistogram;
+(id)entryEventBackwardDefinitionGPUStatsGPUPerformanceStates;
+(id)entryEventBackwardDefinitionGPUStatsIdleTimeHistogram;
+(id)entryEventBackwardDefinitionMesaMesaPowerState;
+(id)entryEventBackwardDefinitionH6ISPH6ISPPowerState;
+(id)entryEventBackwardDefinitionbacklightreportplaybackbacklightfactorsreport;
+(id)entryEventBackwardDefinitionOscarSensorevents;
+(id)entryEventBackwardDefinitionOscarPlatformpowerstate;
+(id)entryEventBackwardDefinitionOscarPlatformevents;
+(id)entryEventBackwardDefinitionOscarSensorpowerstate;
+(id)entryEventBackwardDefinitionCPUStatsDVDStats;
+(id)entryEventBackwardDefinitionCPUStatsActiveTimeHistogram;
+(id)entryEventBackwardDefinitionCPUStatsCPUPerformanceStates;
+(id)entryEventBackwardDefinitionCPUStatsVoltageDomainPerformanceStates;
+(id)entryEventBackwardDefinitionCPUStatsIdleTimeHistogram;
+(id)entryEventBackwardDefinitionSoCStatsH6PMGRCounters;
+(id)entryEventBackwardDefinitionSoCStatsDeviceStats;
+(id)entryEventBackwardDefinitionSoCStatsVoltageDomainPerformanceStates;
+(id)entryEventBackwardDefinitionCLPCStatsCounters;
+(id)entryEventBackwardDefinitionCLPCStatsLeadingController;
+(id)entryEventBackwardDefinitionCLPCStatsControlEffort;
+(id)entryEventBackwardDefinitionClpcStatsMetricHistograms;
+(id)entryEventBackwardDefinitionEnergyModel;
+(id)entryEventBackwardDefinitionCpuStatsCpuFeatures;
+(id)entryEventBackwardDefinitionSocStatsH7PmgrCounters;
+(id)entryEventBackwardDefinitionAmcStatsPerfCounters;
+(id)entryEventBackwardDefinitionAppleEmbeddedPcieLinkStates;
+(id)entryEventBackwardDefinitionSocStatsDvdStats;
+(id)entryEventBackwardDefinitionWifiChipConnectionActivity;
+(id)entryEventBackwardDefinitionWifiChipAWDLActivity;
+(id)entryEventBackwardDefinitionWifiChipPMAwakeActivity;
+(id)entryEventBackwardDefinitionWifiChipRadioPhyicalLayerActivity;
+(id)entryEventBackwardDefinitionWifiChipPCIeActivity;
+(id)entryEventBackwardDefinitionWifiChipTxStatCounters;
+(id)entryEventBackwardDefinitionWifiChipScanActivity;
+(id)entryEventBackwardDefinitionWifiChipHSICActivity;
+(id)entryEventBackwardDefinitionWifiChipRxChipErrorCounters;
+(id)entryEventBackwardDefinitionWifiChipTxChipErrorCounters;
+(id)entryEventBackwardDefinitionWifiChipRxPerRateCounters;
+(id)entryEventBackwardDefinitionWifiChipRxStatCounters;
+(id)entryEventBackwardDefinitionCLPCStatsFrameRateHistogram;
-(id)init;
-(void)log;
-(void)initOperatorDependancies;
-(void)combineDISP0ChannelsWithChannels:(CFDictionaryRef)arg1 ;
-(void)pruneChannelsWithChannels:(CFDictionaryRef)arg1 withTargetSet:(id)arg2 ;
-(id)chanelDictionaryWithChannelSet:(id)arg1 withMinProcessTime:(double)arg2 ;
-(id)sampleDeltaForChannelGroup:(id)arg1 ;
-(void)setBatteryLevelChangedNotifications:(PLEntryNotificationOperatorComposition *)arg1 ;
-(void)setWakeEntryNotifications:(PLEntryNotificationOperatorComposition *)arg1 ;
-(id)entryForReportingGroup:(id)arg1 withEntry:(id)arg2 ;
-(void)logEventBackwardIOReport;
-(NSMutableDictionary *)sampleChannelsSignificantBattery;
-(BOOL)processNotificationForChannelGroup:(id)arg1 ;
-(void)logEventBackwardIOReportWithDelta:(id)arg1 forChannelGroup:(id)arg2 ;
-(NSMutableDictionary *)sampleChannelsHalfHour;
-(NSMutableDictionary *)sampleChannelsDaily;
-(id)entryKeyForEventWithGroupName:(id)arg1 withSubGroupName:(id)arg2 ;
-(id)entryForReportingGroup:(id)arg1 withKey:(id)arg2 withChannelGroup:(id)arg3 ;
-(void)modelAPSoCPower:(id)arg1 ;
-(double)mJtomWinTime:(double)arg1 withmJ:(double)arg2 ;
-(void)pruneAllChannelsWithChannels:(CFDictionaryRef)arg1 ;
-(PLEntryNotificationOperatorComposition *)wakeEntryNotifications;
-(PLEntryNotificationOperatorComposition *)batteryLevelChangedNotifications;
-(void)setSampleChannelsSignificantBattery:(NSMutableDictionary *)arg1 ;
-(void)setSampleChannelsHalfHour:(NSMutableDictionary *)arg1 ;
-(void)setSampleChannelsDaily:(NSMutableDictionary *)arg1 ;
@end

