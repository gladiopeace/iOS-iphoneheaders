/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:03 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ScreenReaderOutputServer/ScreenReaderOutputServer-Structs.h>
#import <ScreenReaderOutputServer/SCROBrailleDisplayDelegate.h>

@protocol SCROSBrailleDisplayManagerDelegate;
@class NSLock, SCROBrailleDisplayManagedQueue, SCRODBluetoothBrailleDisplay, SCROBrailleDisplay, NSMutableDictionary, SCROBrailleFormatter, NSMutableSet, NSMutableArray, SCROBrailleDisplayHistory, NSAttributedString, SCROBrailleEventDispatcher;

@interface SCROBrailleDisplayManager : NSObject <SCROBrailleDisplayDelegate> {

	NSLock* _contentLock;
	SCROBrailleDisplayManagedQueue* _managedDisplayQueue;
	SCRODBluetoothBrailleDisplay* _bluetoothBrailleDisplay;
	SCROBrailleDisplay* _stealthBrailleDisplay;
	NSMutableDictionary* _detectedIOElementsDict;
	SCROBrailleFormatter* _currentBrailleFormatter;
	NSMutableSet* _loadedIOElements;
	CFDictionaryRef _displayConfigurationDict;
	<SCROSBrailleDisplayManagerDelegate>* _delegate;
	bool _showDotsSevenAndEight;
	bool _lineDescriptorDisplayCallbackEnabled;
	int _contractionMode;
	bool _showEightDot;
	bool _shouldBatchUpdates;
	bool _automaticBrailleTranslation;
	NSMutableArray* _displayModeStack;
	SCROBrailleDisplayHistory* _history;
	NSAttributedString* _mainString;
	NSAttributedString* _lineString;
	NSAttributedString* _statusString;
	SCD_Struct_SC9 _status;
	SCROBrailleEventDispatcher* _eventDispatcher;
	CFRunLoopRef _runLoop;
	CFRunLoopTimerRef _alertTimer;
	double _alertTimeout;
	int _alertPriority;
	bool _isValid;
	int _inputAccessMode;
	NSAttributedString* _blankUIString;

}
+(void)initialize;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(void)beginUpdates;
-(void)endUpdates;
-(id)delegate;
-(void)invalidate;
-(bool)isValid;
-(void)handleEvent:(id)arg1 ;
-(void)brailleDisplay:(id)arg1 driverDidLoad:(bool)arg2 ;
-(void)_panHandler:(id)arg1 ;
-(void)brailleDisplay:(id)arg1 isSleeping:(bool)arg2 ;
-(void)_simulateKeypressHandler:(id)arg1 ;
-(void)_setBatchUpdates:(id)arg1 ;
-(void)brailleDriverDisconnected:(id)arg1 ;
-(int)contractionMode;
-(void)setMasterStatusCellIndex:(long long)arg1 ;
-(void)brailleDisplay:(id)arg1 didDisplay:(id)arg2 ;
-(void)configurationChangedForBrailleDisplay:(id)arg1 ;
-(void)brailleDisplay:(id)arg1 pressedKeys:(id)arg2 ;
-(void)brailleDisplay:(id)arg1 didPanLeft:(id)arg2 elementToken:(id)arg3 appToken:(id)arg4 ;
-(void)brailleDisplay:(id)arg1 didPanRight:(id)arg2 elementToken:(id)arg3 appToken:(id)arg4 ;
-(void)brailleDisplay:(id)arg1 memorizedKey:(id)arg2 ;
-(void)brailleDisplay:(id)arg1 willMemorizeKey:(id)arg2 ;
-(void)setAggregatedStatus:(id)arg1 ;
-(id)aggregatedStatus;
-(void)setVirtualStatusAlignment:(int)arg1 ;
-(int)virtualStatusAlignment;
-(long long)masterStatusCellIndex;
-(void)simulateKeypress:(id)arg1 ;
-(void)setAutomaticBrailleTranslationEnabled:(bool)arg1 ;
-(void)_disableAutoDetect;
-(void)_stopAlertTimer;
-(void)_mainDisplayHandler:(id)arg1 ;
-(void)_setAggregatedStatusHandler:(id)arg1 ;
-(void)_setVirtualStatusAlignmentHandler:(id)arg1 ;
-(void)_setMasterStatusCellIndexHandler:(id)arg1 ;
-(void)_showDotsSevenAndEightHandler:(id)arg1 ;
-(void)_contractionModeHandler:(id)arg1 ;
-(void)_showEightDotHandler:(id)arg1 ;
-(void)automaticBrailleTranslationHandler:(id)arg1 ;
-(void)_exitCurrentDisplayMode;
-(void)_displayModeHandler:(id)arg1 ;
-(void)_setLineDescriptorCallbackEnabledHandler:(id)arg1 ;
-(void)_announcementHandler:(id)arg1 ;
-(void)_prepareToMemorizeNextKeyHandler:(id)arg1 ;
-(void)_setPrimaryDisplayKeyHandler:(id)arg1 ;
-(void)_setDisplayInputAccessMode:(id)arg1 ;
-(void)_setTableHandler:(id)arg1 ;
-(void)_setAlwaysUsesNemethCodeForTechnicalText:(id)arg1 ;
-(void)_setDisplayMode:(int)arg1 ;
-(void)_resetAlertTimer;
-(void)setMainAttributedString:(id)arg1 forceUpdate:(bool)arg2 ;
-(void)_popDisplayModeStack;
-(id)_cachedMainStringForDisplayMode:(int)arg1 ;
-(void)setAlwaysUsesNemethCodeForTechnicalText:(bool)arg1 ;
-(void)_deviceConnectedHandler:(id)arg1 ;
-(void)_addDetectedIOElement:(id)arg1 withDriverIdentifier:(id)arg2 ;
-(void)_loadNextDriverForIOElement:(id)arg1 ;
-(id)_displayWithIOElement:(id)arg1 driverIdentifier:(id)arg2 delegate:(id)arg3 ;
-(void)_unloadStealthDisplay;
-(void)_saveBluetoothDisplayConfiguration:(id)arg1 ;
-(void)_loadStealthDisplay;
-(void)setUIDisplayMode;
-(bool)alwaysUsesNemethCodeForTechnicalText;
-(void)_enableAutoDetect;
-(void)loadBluetoothDriverWithAddress:(id)arg1 ;
-(void)removeBluetoothDriverWithAddress:(id)arg1 ;
-(void)_resetBluetoothReconnectionTimer;
-(id)driverConfiguration;
-(void)_blankOutDisplaysInQueue:(id)arg1 ;
-(bool)isConfigured;
-(bool)hasActiveDisplays;
-(void)setPrimaryBrailleDisplay:(int)arg1 ;
-(void)setDisplayInputAccessMode:(int)arg1 ;
-(int)displayInputAccessMode;
-(id)mainAttributedString;
-(void)setMainAttributedString:(id)arg1 ;
-(void)panDisplayLeft:(int)arg1 ;
-(void)panDisplayRight:(int)arg1 ;
-(int)displayMode;
-(void)setAnnouncementsDisplayMode;
-(void)exitCurrentDisplayMode;
-(void)_alertTimeoutHandler;
-(id)tableIdentifier;
-(void)configureTableWithIdentifier:(id)arg1 ;
-(void)setContractionMode:(int)arg1 ;
-(bool)showEightDotBraille;
-(void)setShowEightDotBraille:(bool)arg1 ;
-(bool)automaticBrailleTranslation;
-(void)setShowDotsSevenAndEight:(bool)arg1 ;
-(bool)showDotsSevenAndEight;
-(void)showPreviousAnnouncement;
-(void)showNextAnnouncement;
-(void)setLineDescriptorDisplayCallbackEnabled:(bool)arg1 ;
-(bool)lineDescriptorDisplayCallbackEnabled;
-(long long)tokenForRouterIndex:(long long)arg1 location:(long long*)arg2 appToken:(id*)arg3 forDisplayWithToken:(int)arg4 ;
-(void)setPrepareToMemorizeNextKey:(bool)arg1 immediate:(bool)arg2 forDisplayWithToken:(int)arg3 ;
@end

