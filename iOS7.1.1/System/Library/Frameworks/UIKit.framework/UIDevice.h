/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:53 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class NSString, NSUUID;

@interface UIDevice : NSObject {

	long long _numDeviceOrientationObservers;
	float _batteryLevel;
	struct {
		unsigned batteryMonitoringEnabled : 1;
		unsigned proximityMonitoringEnabled : 1;
		unsigned expectsFaceContactInLandscape : 1;
		unsigned orientation : 3;
		unsigned batteryState : 2;
		unsigned proximityState : 1;
	}  _deviceFlags;

}

@property (assign,nonatomic) long long orientation; 
@property (nonatomic,readonly) NSString * buildVersion; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * model; 
@property (nonatomic,readonly) NSString * localizedModel; 
@property (nonatomic,readonly) NSString * systemName; 
@property (nonatomic,readonly) NSString * systemVersion; 
@property (nonatomic,readonly) long long orientation; 
@property (nonatomic,readonly) NSUUID * identifierForVendor; 
@property (getter=isGeneratingDeviceOrientationNotifications,nonatomic,readonly) bool generatesDeviceOrientationNotifications; 
@property (assign,getter=isBatteryMonitoringEnabled,nonatomic) bool batteryMonitoringEnabled; 
@property (nonatomic,readonly) long long batteryState; 
@property (nonatomic,readonly) float batteryLevel; 
@property (assign,getter=isProximityMonitoringEnabled,nonatomic) bool proximityMonitoringEnabled; 
@property (nonatomic,readonly) bool proximityState; 
@property (getter=isMultitaskingSupported,nonatomic,readonly) bool multitaskingSupported; 
@property (nonatomic,readonly) long long userInterfaceIdiom; 
@property (assign,setter=_setBacklightLevel:,nonatomic) float _backlightLevel; 
+(id)modelSpecificLocalizedStringKeyForKey:(id)arg1 ;
+(id)currentDevice;
+(long long)currentDeviceOrientationAllowingAmbiguous:(bool)arg1 ;
-(bool)isMediaPicker;
-(void)setIsMediaPicker:(bool)arg1 ;
-(long long)_keyboardGraphicsQuality;
-(void)_setProximityState:(bool)arg1 ;
-(long long)_graphicsQuality;
-(void)_setBatteryState:(long long)arg1 ;
-(void)_setBatteryLevel:(float)arg1 ;
-(bool)_isTTYEnabled;
-(void)_setGraphicsQualityOverride:(long long)arg1 ;
-(bool)_hasGraphicsQualityOverride;
-(void)_clearGraphicsQualityOverride;
-(void)_enableDeviceOrientationEvents:(bool)arg1 ;
-(long long)userInterfaceIdiom;
-(void)_unregisterForSystemSounds:(id)arg1 ;
-(void)_registerForSystemSounds:(id)arg1 ;
-(bool)isGeneratingDeviceOrientationNotifications;
-(void)setOrientation:(long long)arg1 animated:(bool)arg2 ;
-(long long)orientation;
-(void)_setActiveUserInterfaceIdiom:(long long)arg1 ;
-(void)_setBacklightLevel:(float)arg1 ;
-(float)_backlightLevel;
-(id)systemVersion;
-(void)setProximityMonitoringEnabled:(bool)arg1 ;
-(bool)isProximityMonitoringEnabled;
-(void)beginGeneratingDeviceOrientationNotifications;
-(void)endGeneratingDeviceOrientationNotifications;
-(id)name;
-(void)_playSystemSound:(unsigned)arg1 ;
-(id)model;
-(void)setOrientation:(long long)arg1 ;
-(id)_deviceInfoForKey:(CFStringRef)arg1 ;
-(void)_updateSystemSoundActiveStatus:(id)arg1 ;
-(id)localizedModel;
-(id)systemName;
-(id)buildVersion;
-(id)identifierForVendor;
-(bool)isBatteryMonitoringEnabled;
-(void)setBatteryMonitoringEnabled:(bool)arg1 ;
-(long long)batteryState;
-(float)batteryLevel;
-(void)_setExpectsFaceContactInLandscape:(bool)arg1 ;
-(bool)proximityState;
-(bool)isMultitaskingSupported;
-(void)playInputClick;
-(float)_softwareDimmingAlpha;
@end

