/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:19:10 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/AccessibilityBundles/GAXSpringboardServer.bundle/GAXSpringboardServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, GAXSpringBoardOverrideHandler, AXAccessQueue, NSSet, SBUILockScreenDisableAssertion, AXTimer, AXIPCServer, AXIPCClient;

@interface GAXSpringboardServer : NSObject {

	bool _requiringWallpaper;
	int _profileConfiguration;
	int _mode;
	NSString* _frontmostAppIdentifier;
	GAXSpringBoardOverrideHandler* _springboardOverrideHandler;
	AXAccessQueue* _applicationLaunchingQueue;
	NSSet* _disabledProfileFeatures;
	SBUILockScreenDisableAssertion* _lockScreenDisableAssertion;
	AXTimer* _didEndRequiringWallpaperCheckTimer;
	AXIPCServer* _springboardServer;
	AXIPCClient* _backboardClient;
	AXAccessQueue* _backboardMessageQueue;

}

@property (getter=isEnabled,nonatomic,readonly) bool enabled; 
@property (getter=isActive,nonatomic,readonly) bool active; 
@property (getter=isInWorkspace,nonatomic,readonly) bool inWorkspace; 
@property (assign,nonatomic) int mode;                                                                 //@synthesize mode=_mode - In the implementation block
@property (nonatomic,copy) NSString * frontmostAppIdentifier;                                          //@synthesize frontmostAppIdentifier=_frontmostAppIdentifier - In the implementation block
@property (assign,nonatomic) int profileConfiguration;                                                 //@synthesize profileConfiguration=_profileConfiguration - In the implementation block
@property (nonatomic,readonly) bool allowsTouch; 
@property (nonatomic,readonly) bool allowsLockButton; 
@property (nonatomic,readonly) bool allowsMotion; 
@property (nonatomic,readonly) bool allowsAutolock; 
@property (nonatomic,retain) AXIPCServer * springboardServer;                                          //@synthesize springboardServer=_springboardServer - In the implementation block
@property (nonatomic,retain) AXIPCClient * backboardClient;                                            //@synthesize backboardClient=_backboardClient - In the implementation block
@property (nonatomic,retain) AXAccessQueue * backboardMessageQueue;                                    //@synthesize backboardMessageQueue=_backboardMessageQueue - In the implementation block
@property (nonatomic,retain) GAXSpringBoardOverrideHandler * springboardOverrideHandler;               //@synthesize springboardOverrideHandler=_springboardOverrideHandler - In the implementation block
@property (nonatomic,retain) AXAccessQueue * applicationLaunchingQueue;                                //@synthesize applicationLaunchingQueue=_applicationLaunchingQueue - In the implementation block
@property (nonatomic,copy) NSSet * disabledProfileFeatures;                                            //@synthesize disabledProfileFeatures=_disabledProfileFeatures - In the implementation block
@property (nonatomic,retain) SBUILockScreenDisableAssertion * lockScreenDisableAssertion;              //@synthesize lockScreenDisableAssertion=_lockScreenDisableAssertion - In the implementation block
@property (assign,getter=isRequiringWallpaper,nonatomic) bool requiringWallpaper;                      //@synthesize requiringWallpaper=_requiringWallpaper - In the implementation block
@property (nonatomic,retain) AXTimer * didEndRequiringWallpaperCheckTimer;                             //@synthesize didEndRequiringWallpaperCheckTimer=_didEndRequiringWallpaperCheckTimer - In the implementation block
+(id)sharedInstance;
-(bool)allowsMotion;
-(id)disabledProfileFeatures;
-(void)systemDidRestartDueToLowBattery;
-(void)setBackboardClient:(id)arg1 ;
-(void)setBackboardMessageQueue:(id)arg1 ;
-(void)setApplicationLaunchingQueue:(id)arg1 ;
-(bool)isInWorkspace;
-(void)_sendMessageToBackboardWithIdentifier:(int)arg1 payload:(id)arg2 replyMessage:(id*)arg3 description:(id)arg4 ;
-(id)backboardClient;
-(bool)allowsAutolock;
-(void)setSpringboardOverrideHandler:(id)arg1 ;
-(bool)allowsTouch;
-(void)setSpringboardServer:(id)arg1 ;
-(id)_handleUnlockDevice:(id)arg1 ;
-(id)_handleHasSystemPasscode:(id)arg1 ;
-(id)_handleIsDeviceLockedWithSystemPasscode:(id)arg1 ;
-(id)_handleIsSpringBoardFrontmost:(id)arg1 ;
-(id)_handleGetToggleServerModeState:(id)arg1 ;
-(id)_handleGetIntegrityVerificationState:(id)arg1 ;
-(id)_handlePrepareTransitionToWorkspace:(id)arg1 ;
-(id)_handleServerModeTransitionDidComplete:(id)arg1 ;
-(id)_handleEndRequiringWallpaper:(id)arg1 ;
-(id)_handleFrontmostAppDidChange:(id)arg1 ;
-(id)_handleProfileConfigurationDidChange:(id)arg1 ;
-(id)_handleLaunchApplication:(id)arg1 ;
-(id)_handleDisabledProfileFeaturesDidChange:(id)arg1 ;
-(id)_handleGetInstalledApps:(id)arg1 ;
-(id)_handleIsWebApplicationAndForegroundRunning:(id)arg1 ;
-(void)_handleDeviceWasLockedNotification:(id)arg1 ;
-(void)_handleDidShowTripleClickAlertNotification:(id)arg1 ;
-(void)_handleDidShowVoiceOverItemChooserNotification:(id)arg1 ;
-(id)springboardServer;
-(void)setDidEndRequiringWallpaperCheckTimer:(id)arg1 ;
-(id)springboardOverrideHandler;
-(void)setFrontmostAppIdentifier:(id)arg1 ;
-(void)setDisabledProfileFeatures:(id)arg1 ;
-(void)setLockScreenDisableAssertion:(id)arg1 ;
-(void)_prepareTransitionToWorkspaceWithCompletionHandler:(/*^block*/ id)arg1 ;
-(id)didEndRequiringWallpaperCheckTimer;
-(bool)isRequiringWallpaper;
-(void)setRequiringWallpaper:(bool)arg1 ;
-(id)lockScreenDisableAssertion;
-(id)backboardMessageQueue;
-(bool)_applicationWithIdentifierIsWebApplicationAndForegroundRunning:(id)arg1 ;
-(void)_releaseLockScreenDisableAssertion;
-(void)_acquireLockScreenDisableAssertion;
-(void)setProfileConfiguration:(int)arg1 ;
-(id)applicationLaunchingQueue;
-(id)frontmostAppIdentifier;
-(bool)allowsLockButton;
-(void)overrideAllowAllTouch:(bool)arg1 forReason:(int)arg2 ;
-(int)profileConfiguration;
-(void)deviceWasUnlocked;
-(void)overrideIgnoreAllTouch:(bool)arg1 forReason:(int)arg2 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(bool)isActive;
-(bool)isEnabled;
-(void)setMode:(int)arg1 ;
-(int)mode;
@end

