/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:50 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/CoreIndoor.framework/CoreIndoor
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreIndoor/CoreIndoor-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CoreIndoor/NSCopying.h>

@class BodyFixedDetectorParameters, InjectionParameters, MotionTruthParameters, MultiphoneDbmParameters, PdrParameters, PedometryCompassMotionParameters, WifiParameters;

@interface LocalizerParameters : PBCodable <NSCopying> {

	unsigned long long _notifyIntervalNanos;
	int _bilinearWifi;
	BodyFixedDetectorParameters* _bodyFixed;
	float _confidenceFactor;
	InjectionParameters* _injection;
	int _localizerType;
	int _modeEstimator;
	float _motionPdrUnmodelledHeadingVariancePerSecond;
	MotionTruthParameters* _motionTruth;
	MultiphoneDbmParameters* _multiphoneDbm;
	unsigned _numParticles;
	PdrParameters* _pdr;
	PedometryCompassMotionParameters* _pedomCompassMotion;
	float _time2dMotionVariancePerSecond;
	WifiParameters* _wifi;
	SCD_Struct_Lo3 _has;

}

@property (assign,nonatomic) char hasNotifyIntervalNanos; 
@property (assign,nonatomic) unsigned long long notifyIntervalNanos;                             //@synthesize notifyIntervalNanos=_notifyIntervalNanos - In the implementation block
@property (assign,nonatomic) char hasNumParticles; 
@property (assign,nonatomic) unsigned numParticles;                                              //@synthesize numParticles=_numParticles - In the implementation block
@property (assign,nonatomic) char hasLocalizerType; 
@property (assign,nonatomic) int localizerType;                                                  //@synthesize localizerType=_localizerType - In the implementation block
@property (assign,nonatomic) char hasBilinearWifi; 
@property (assign,nonatomic) int bilinearWifi;                                                   //@synthesize bilinearWifi=_bilinearWifi - In the implementation block
@property (assign,nonatomic) char hasModeEstimator; 
@property (assign,nonatomic) int modeEstimator;                                                  //@synthesize modeEstimator=_modeEstimator - In the implementation block
@property (assign,nonatomic) char hasConfidenceFactor; 
@property (assign,nonatomic) float confidenceFactor;                                             //@synthesize confidenceFactor=_confidenceFactor - In the implementation block
@property (assign,nonatomic) char hasMotionPdrUnmodelledHeadingVariancePerSecond; 
@property (assign,nonatomic) float motionPdrUnmodelledHeadingVariancePerSecond;                  //@synthesize motionPdrUnmodelledHeadingVariancePerSecond=_motionPdrUnmodelledHeadingVariancePerSecond - In the implementation block
@property (nonatomic,readonly) char hasMotionTruth; 
@property (nonatomic,retain) MotionTruthParameters * motionTruth;                                //@synthesize motionTruth=_motionTruth - In the implementation block
@property (nonatomic,readonly) char hasMultiphoneDbm; 
@property (nonatomic,retain) MultiphoneDbmParameters * multiphoneDbm;                            //@synthesize multiphoneDbm=_multiphoneDbm - In the implementation block
@property (nonatomic,readonly) char hasPedomCompassMotion; 
@property (nonatomic,retain) PedometryCompassMotionParameters * pedomCompassMotion;              //@synthesize pedomCompassMotion=_pedomCompassMotion - In the implementation block
@property (nonatomic,readonly) char hasInjection; 
@property (nonatomic,retain) InjectionParameters * injection;                                    //@synthesize injection=_injection - In the implementation block
@property (assign,nonatomic) char hasTime2dMotionVariancePerSecond; 
@property (assign,nonatomic) float time2dMotionVariancePerSecond;                                //@synthesize time2dMotionVariancePerSecond=_time2dMotionVariancePerSecond - In the implementation block
@property (nonatomic,readonly) char hasPdr; 
@property (nonatomic,retain) PdrParameters * pdr;                                                //@synthesize pdr=_pdr - In the implementation block
@property (nonatomic,readonly) char hasWifi; 
@property (nonatomic,retain) WifiParameters * wifi;                                              //@synthesize wifi=_wifi - In the implementation block
@property (nonatomic,readonly) char hasBodyFixed; 
@property (nonatomic,retain) BodyFixedDetectorParameters * bodyFixed;                            //@synthesize bodyFixed=_bodyFixed - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)updateDeepTo:(id)arg1 ;
-(void)setMotionTruth:(MotionTruthParameters *)arg1 ;
-(void)setMultiphoneDbm:(MultiphoneDbmParameters *)arg1 ;
-(void)setPedomCompassMotion:(PedometryCompassMotionParameters *)arg1 ;
-(void)setInjection:(InjectionParameters *)arg1 ;
-(void)setPdr:(PdrParameters *)arg1 ;
-(void)setBodyFixed:(BodyFixedDetectorParameters *)arg1 ;
-(void)setNotifyIntervalNanos:(unsigned long long)arg1 ;
-(void)setHasNotifyIntervalNanos:(char)arg1 ;
-(char)hasNotifyIntervalNanos;
-(void)setNumParticles:(unsigned)arg1 ;
-(void)setHasNumParticles:(char)arg1 ;
-(char)hasNumParticles;
-(void)setLocalizerType:(int)arg1 ;
-(void)setHasLocalizerType:(char)arg1 ;
-(char)hasLocalizerType;
-(void)setBilinearWifi:(int)arg1 ;
-(void)setHasBilinearWifi:(char)arg1 ;
-(char)hasBilinearWifi;
-(void)setModeEstimator:(int)arg1 ;
-(void)setHasModeEstimator:(char)arg1 ;
-(char)hasModeEstimator;
-(void)setConfidenceFactor:(float)arg1 ;
-(void)setHasConfidenceFactor:(char)arg1 ;
-(char)hasConfidenceFactor;
-(void)setMotionPdrUnmodelledHeadingVariancePerSecond:(float)arg1 ;
-(void)setHasMotionPdrUnmodelledHeadingVariancePerSecond:(char)arg1 ;
-(char)hasMotionPdrUnmodelledHeadingVariancePerSecond;
-(char)hasMotionTruth;
-(char)hasMultiphoneDbm;
-(char)hasPedomCompassMotion;
-(char)hasInjection;
-(void)setTime2dMotionVariancePerSecond:(float)arg1 ;
-(void)setHasTime2dMotionVariancePerSecond:(char)arg1 ;
-(char)hasTime2dMotionVariancePerSecond;
-(char)hasPdr;
-(char)hasBodyFixed;
-(unsigned long long)notifyIntervalNanos;
-(unsigned)numParticles;
-(int)localizerType;
-(int)bilinearWifi;
-(int)modeEstimator;
-(float)confidenceFactor;
-(float)motionPdrUnmodelledHeadingVariancePerSecond;
-(MotionTruthParameters *)motionTruth;
-(MultiphoneDbmParameters *)multiphoneDbm;
-(PedometryCompassMotionParameters *)pedomCompassMotion;
-(InjectionParameters *)injection;
-(float)time2dMotionVariancePerSecond;
-(PdrParameters *)pdr;
-(BodyFixedDetectorParameters *)bodyFixed;
-(id)initEmpty;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setWifi:(WifiParameters *)arg1 ;
-(char)hasWifi;
-(WifiParameters *)wifi;
@end

