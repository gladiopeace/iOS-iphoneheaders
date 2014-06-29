/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:13 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PowerlogPlugins/PLBasebandLogger.bundle/PLBasebandLogger
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PLBasebandLogger/PLBasebandLogger-Structs.h>
#import <PLBasebandLogger/PLBasebandHardwareMessage.h>

@interface PLMav4BasebandHardwareMessage : PLBasebandHardwareMessage {

	PLMav4BasebandHWStatsHeader* _mav4_header;
	PLMav4BasebandHWStatsSystem* _mav4_system;
	PLMav4BasebandHWStatsARMPerf* _mav4_armPerf;
	PLMav4BasebandHWStatsMDSP* _mav4_mdsp;
	PLMav4BasebandHWOnOffComponentStats* _mav4_mdm;
	PLMav4BasebandHWStatsQDSP* _mav4_qdsp;
	PLMav4BasebandHWOnOffComponentStats* _mav4_adm;
	PLMav4BasebandHWOnOffComponentStats* _mav4_gps;
	PLMav4BasebandHWOnOffComponentStats* _mav4_usb;
	PLMav4BasebandHWOnOffComponentStats* _mav4_uart;
	PLMav4BasebandHWOnOffComponentStats* _mav4_spi;
	PLMav4BasebandHWStatsRX* _mav4_rx;
	PLMav4BasebandHWStatsTX* _mav4_tx;
	PLMav4BasebandHWSleepVeto* _mav4_sleep_qdsp;
	PLMav4BasebandHWSleepVeto* _mav4_sleep_arm;
	unsigned _mav4_duration;

}

@property (assign,nonatomic) unsigned logDuration;                                   //@synthesize mav4_duration=_mav4_duration - In the implementation block
@property (nonatomic,readonly) unsigned char level; 
@property (nonatomic,readonly) unsigned short hw_rev; 
@property (nonatomic,readonly) unsigned short sw_rev; 
@property (assign,nonatomic) PLMav4BasebandHWStatsHeader* header;                    //@synthesize mav4_header=_mav4_header - In the implementation block
@property (assign,nonatomic) PLMav4BasebandHWStatsSystem* system;                    //@synthesize mav4_system=_mav4_system - In the implementation block
@property (assign,nonatomic) PLMav4BasebandHWStatsARMPerf* armPerf;                  //@synthesize mav4_armPerf=_mav4_armPerf - In the implementation block
@property (assign,nonatomic) PLMav4BasebandHWOnOffComponentStats* adm;               //@synthesize mav4_adm=_mav4_adm - In the implementation block
@property (assign,nonatomic) PLMav4BasebandHWOnOffComponentStats* gps;               //@synthesize mav4_gps=_mav4_gps - In the implementation block
@property (assign,nonatomic) PLMav4BasebandHWOnOffComponentStats* uart;              //@synthesize mav4_uart=_mav4_uart - In the implementation block
@property (assign,nonatomic) PLMav4BasebandHWOnOffComponentStats* spi;               //@synthesize mav4_spi=_mav4_spi - In the implementation block
@property (assign,nonatomic) PLMav4BasebandHWSleepVeto* sleep_qdsp;                  //@synthesize mav4_sleep_qdsp=_mav4_sleep_qdsp - In the implementation block
@property (assign,nonatomic) PLMav4BasebandHWSleepVeto* sleep_arm;                   //@synthesize mav4_sleep_arm=_mav4_sleep_arm - In the implementation block
@property (assign,nonatomic) PLMav4BasebandHWOnOffComponentStats* usb;               //@synthesize mav4_usb=_mav4_usb - In the implementation block
@property (assign,nonatomic) PLMav4BasebandHWStatsMDSP* mdsp;                        //@synthesize mav4_mdsp=_mav4_mdsp - In the implementation block
@property (assign,nonatomic) PLMav4BasebandHWOnOffComponentStats* mdm;               //@synthesize mav4_mdm=_mav4_mdm - In the implementation block
@property (assign,nonatomic) PLMav4BasebandHWStatsQDSP* qdsp;                        //@synthesize mav4_qdsp=_mav4_qdsp - In the implementation block
@property (assign,nonatomic) PLMav4BasebandHWStatsRX* rx;                            //@synthesize mav4_rx=_mav4_rx - In the implementation block
@property (assign,nonatomic) PLMav4BasebandHWStatsTX* tx;                            //@synthesize mav4_tx=_mav4_tx - In the implementation block
-(PLMav4BasebandHWStatsTX*)tx;
-(void)setTx:(PLMav4BasebandHWStatsTX*)arg1 ;
-(void)parseData:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(unsigned char)level;
-(PLMav4BasebandHWStatsHeader*)header;
-(void)setHeader:(PLMav4BasebandHWStatsHeader*)arg1 ;
-(void)logWithLogger:(id)arg1 ;
-(unsigned)logDuration;
-(void)setSystem:(PLMav4BasebandHWStatsSystem*)arg1 ;
-(void)setArmPerf:(PLMav4BasebandHWStatsARMPerf*)arg1 ;
-(void)setMdsp:(PLMav4BasebandHWStatsMDSP*)arg1 ;
-(void)setMdm:(PLMav4BasebandHWOnOffComponentStats*)arg1 ;
-(void)setAdm:(PLMav4BasebandHWOnOffComponentStats*)arg1 ;
-(void)setGps:(PLMav4BasebandHWOnOffComponentStats*)arg1 ;
-(void)setUsb:(PLMav4BasebandHWOnOffComponentStats*)arg1 ;
-(void)setUart:(PLMav4BasebandHWOnOffComponentStats*)arg1 ;
-(void)setSpi:(PLMav4BasebandHWOnOffComponentStats*)arg1 ;
-(void)setRx:(PLMav4BasebandHWStatsRX*)arg1 ;
-(void)setLogDuration:(unsigned)arg1 ;
-(void)logHeaderWithLogger:(id)arg1 ;
-(void)logProcessorWithLogger:(id)arg1 ;
-(void)logModemAppWithLogger:(id)arg1 ;
-(void)logPeripheralsWithLogger:(id)arg1 ;
-(void)logRFWithLogger:(id)arg1 ;
-(PLMav4BasebandHWStatsSystem*)system;
-(PLMav4BasebandHWStatsARMPerf*)armPerf;
-(PLMav4BasebandHWStatsMDSP*)mdsp;
-(PLMav4BasebandHWOnOffComponentStats*)mdm;
-(PLMav4BasebandHWOnOffComponentStats*)adm;
-(PLMav4BasebandHWOnOffComponentStats*)gps;
-(PLMav4BasebandHWOnOffComponentStats*)usb;
-(PLMav4BasebandHWOnOffComponentStats*)spi;
-(PLMav4BasebandHWOnOffComponentStats*)uart;
-(PLMav4BasebandHWStatsRX*)rx;
-(id)indexToRAT:(unsigned long long)arg1 ;
-(void)setQdsp:(PLMav4BasebandHWStatsQDSP*)arg1 ;
-(void)setSleep_qdsp:(PLMav4BasebandHWSleepVeto*)arg1 ;
-(void)setSleep_arm:(PLMav4BasebandHWSleepVeto*)arg1 ;
-(void)logSleepWithLogger:(id)arg1 ;
-(unsigned short)hw_rev;
-(unsigned short)sw_rev;
-(PLMav4BasebandHWStatsQDSP*)qdsp;
-(PLMav4BasebandHWSleepVeto*)sleep_qdsp;
-(PLMav4BasebandHWSleepVeto*)sleep_arm;
@end

