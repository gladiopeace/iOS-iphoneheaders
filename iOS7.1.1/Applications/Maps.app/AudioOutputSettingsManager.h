/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:03 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/MNVoiceControllerObserver.h>

@protocol OS_dispatch_queue;
@class NSHashTable, NSArray, AudioOutputSetting, NSObject;

@interface AudioOutputSettingsManager : NSObject <MNVoiceControllerObserver> {

	NSHashTable* _observers;
	int _routeSelection;
	NSArray* _settings;
	NSArray* _pickableRoutes;
	AudioOutputSetting* _currentSetting;
	AudioOutputSetting* _currentSettingForSystem;
	BOOL _isCurrentSettingCached;
	NSObject<OS_dispatch_queue>* _pickableRoutesQueue;

}

@property (nonatomic,retain) AudioOutputSetting * currentSetting; 
@property (nonatomic,readonly) AudioOutputSetting * currentSettingForVoicePrompt; 
@property (nonatomic,readonly) NSArray * settings;                                             //@synthesize settings=_settings - In the implementation block
@property (nonatomic,readonly) int routeSelection;                                             //@synthesize routeSelection=_routeSelection - In the implementation block
+(id)sharedInstance;
-(void)voiceController:(id)arg1 didStartSpeakingPrompt:(id)arg2 ;
-(void)voiceController:(id)arg1 didActivateAudioSession:(BOOL)arg2 ;
-(id)currentSettingForVoicePrompt;
-(void)preheatAudioFramework;
-(void)updatePickableRoutes;
-(void)_mediaServerConnectionDied;
-(BOOL)_pickCurrentSetting;
-(void)updateRouteSelection;
-(void)reloadSettings;
-(void)updatePickableRoutesWithHandler:(/*^block*/ id)arg1 ;
-(id)currentSetting;
-(void)setCurrentSetting:(id)arg1 ;
-(void)setHFPPreference:(BOOL)arg1 forSetting:(id)arg2 ;
-(int)routeSelection;
-(void)_unregisterForNotifications;
-(void)_registerForNotifications;
-(void)dealloc;
-(id)init;
-(void)removeObserver:(id)arg1 ;
-(id)settings;
-(void).cxx_destruct;
-(void)addObserver:(id)arg1 ;
-(void)_pickableRoutesChanged;
@end

