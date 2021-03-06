/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:09 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>
#import <Celestial/BWBracketSettingsProvider.h>

@class NSDictionary, NSArray, FigCaptureStillImageSettings, NSString;

@interface BWSISNode : BWNode <BWBracketSettingsProvider> {

	/*function pointer*/void* _createSampleBufferProcessorFunction;
	OpaqueFigSampleBufferProcessorRef _sampleBufferProcessor;
	NSDictionary* _sensorIDDictionary;
	NSDictionary* _noiseModelParamsDictionary;
	NSDictionary* _fusionParamsDictionary;
	BOOL _allowExperimentalOverrides;
	int _outputMode;
	int _lensShadingCorrectionMode;
	double _integrationTimeThreshold;
	int _maxIntegrationTimeLimitMsec;
	float _bracketGainCap;
	NSArray* _exposureValues;
	NSArray* _afWindowParamsArray;
	int _sisBracketCount;
	NSArray* _oisExposureDurationTypes;
	int _oisBracketCount;
	FigCaptureStillImageSettings* _currentCaptureSettings;
	BOOL _preBracketedFrameReceived;
	int _numberFramesReceived;
	int _lastFusionTypeUsed;

}

@property (nonatomic,readonly) double integrationTimeThreshold; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)dealloc;
-(id)nodeType;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)_clearCaptureRequestState;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(int)_setupSampleBufferProcessor;
-(int)worstCaseInitialMaxBracketCountForBracketingMode:(int)arg1 ;
-(int)bracketCountForBracketingMode:(int)arg1 withCurrentFrameStats:(SCD_Struct_BW12*)arg2 stillImageSettings:(id)arg3 ;
-(id)bracketSettingsForBracketingMode:(int)arg1 withCurrentFrameStats:(SCD_Struct_BW12*)arg2 stillImageSettings:(id)arg3 ;
-(void)handleNodeError:(id)arg1 forInput:(id)arg2 ;
-(id)initWithSensorIDDictionary:(id)arg1 ;
-(double)integrationTimeThreshold;
-(id)_initWithSensorIDDictionary:(id)arg1 allowExperimentalOverrides:(BOOL)arg2 ;
-(int)_unpackSISOptions;
-(id)_sisBracketSettingsWithCurrentFrameStats:(SCD_Struct_BW12*)arg1 stillImageSettings:(id)arg2 ;
-(id)_oisBracketSettingsWithCurrentFrameStats:(SCD_Struct_BW12*)arg1 stillImageSettings:(id)arg2 ;
-(void)_sisProcessorOutputReady:(int)arg1 sampleBuffer:(opaqueCMSampleBufferRef)arg2 ;
@end

