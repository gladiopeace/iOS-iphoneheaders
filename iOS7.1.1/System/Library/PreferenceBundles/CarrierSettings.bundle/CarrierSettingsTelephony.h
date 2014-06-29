/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:24 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PreferenceBundles/CarrierSettings.bundle/CarrierSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CarrierSettings/CarrierSettings-Structs.h>
@class NSMutableDictionary, NSString, NSArray, NSDictionary;

@interface CarrierSettingsTelephony : NSObject {

	unsigned _watchCount;
	NSMutableDictionary* _pendingSaves;
	NSMutableDictionary* _pendingRequests;
	NSString* _myNumber;
	NSString* _carrierName;
	NSArray* _carrierServices;
	NSString* _carrierURL;
	NSString* _carrierURLTitle;
	NSString* _carrierMMSInfoURL;
	NSString* _carrierMMSInfoTitle;
	SCD_Struct_Ca0* callForwardingSettingsUnconditional;
	SCD_Struct_Ca0* callForwardingSettingsMobileBusy;
	SCD_Struct_Ca0* callForwardingSettingsNoReply;
	SCD_Struct_Ca0* callForwardingSettingsNotReachable;
	unsigned _callWaitingEnabled;
	unsigned _callerIDIsModifiable;
	unsigned _callerIDMode;
	int _networkSelectionMode;
	unsigned _simLocked;
	NSString* _cachedPassword;
	NSString* _newNumber;
	unsigned _savingPhoneNumber : 1;
	unsigned _phoneBookSelected : 1;
	unsigned _phoneNumberWritten : 1;
	NSDictionary* _simToolkitMenu;

}
+(id)telephony;
-(id)carrierName;
-(void)dealloc;
-(id)init;
-(void)_reset;
-(void)startWatching;
-(void)stopWatching;
-(bool)allowTTYChange;
-(int)showCallForwarding;
-(int)showCallWaiting;
-(int)showCallerID;
-(int)showTTY;
-(int)showReplyWithMessage;
-(int)showCarrierServices;
-(int)showCarrierURL;
-(int)showSIMPIN;
-(int)showSIMToolkitMenu;
-(id)carrierURLTitle;
-(id)carrierURL;
-(void)setMyNumber:(id)arg1 ;
-(id)myNumber;
-(void)_applicationWillSuspend;
-(unsigned)callForwardingEnabled:(bool)arg1 forReason:(id)arg2 ;
-(SCD_Struct_Ca1*)_callForwardingSettingsForForwardingReason:(id)arg1 ;
-(void)_requestCallForwardingSettingsForReason:(id)arg1 ;
-(void)setCallForwardingEnabled:(bool)arg1 forReason:(id)arg2 ;
-(void)_saveCallForwardingEnabled:(bool)arg1 number:(id)arg2 forwardingReason:(id)arg3 ;
-(void)_handleCallForwardingSettings:(id)arg1 didAttemptToSet:(bool)arg2 forwardingReason:(id)arg3 ;
-(id)callForwardingNumber:(bool)arg1 forReason:(id)arg2 ;
-(void)setCallForwardingNumber:(id)arg1 forReason:(id)arg2 ;
-(void)_requestSettings:(id)arg1 ;
-(void)_saveSettings:(id)arg1 ;
-(void)_handleCallWaitingSettings:(id)arg1 ;
-(unsigned)callerIDModifiable:(bool)arg1 ;
-(unsigned)callerIDMode:(bool)arg1 ;
-(void)_handleCallerIDSettings:(id)arg1 ;
-(void)_handleSIMLockSettings:(id)arg1 ;
-(void)_populateToolkitMenuIfNeeded;
-(bool)allowSIMLock;
-(unsigned)simLocked:(bool)arg1 ;
-(bool)hasSubscriberIdentity;
-(id)carrierServices;
-(bool)simIsPresent;
-(id)simToolkitMenuItems;
-(void)postCallForwardingChangedNotificationForForwardingReason:(id)arg1 ;
-(void)_phoneNumberSaveFinishedWithSuccess:(bool)arg1 ;
-(id)manuallySelectedNetworkDictionary;
-(int)networkSelectionMode;
-(void)_invalidateSIMLockedSetting;
-(int)currentNetworkSelectionState;
-(id)carrierMMSInfoURL;
-(id)carrierMMSInfoTitle;
-(bool)allowNetworkSelection;
-(id)currentNetwork;
-(void)enableAutomaticNetworkSelection;
-(void)selectManualNetwork:(id)arg1 ;
-(unsigned)callForwardingEnabled:(bool)arg1 ;
-(void)setCallForwardingEnabled:(bool)arg1 ;
-(id)callForwardingNumber:(bool)arg1 ;
-(void)setCallForwardingNumber:(id)arg1 ;
-(unsigned)callWaitingEnabled:(bool)arg1 ;
-(void)setCallWaitingEnabled:(bool)arg1 ;
-(bool)allowCallerIDChange:(bool)arg1 ;
-(void)setCallerIDEnabled:(unsigned)arg1 ;
-(void)requestNetworkList;
-(void)setSIMLocked:(bool)arg1 password:(id)arg2 ;
-(id)unlockAttemptsRemainingString;
-(void)selectSIMToolkitMenuItemAtIndex:(int)arg1 ;
-(id)simToolkitMenuTitle;
-(bool)allowPINChange;
-(void)setPIN:(id)arg1 password:(id)arg2 ;
-(int)showDialAssist;
-(int)showServiceCodes;
-(id)pendingRequestForUniqueSettingType:(id)arg1 ;
-(id)pendingSaveForUniqueSettingType:(id)arg1 ;
-(void)receivedRequestResponseForUniqueSettingType:(id)arg1 ;
-(void)receivedSaveResponseForUniqueSettingType:(id)arg1 ;
-(id)lastUsedForwardingNumberForReason:(id)arg1 ;
-(void)resetLastUsedForwardingNumberForReason:(id)arg1 ;
-(void)_handleNetworkList:(id)arg1 ;
-(void)_handlePINSettings:(id)arg1 ;
-(void)_carrierInfoChanged;
-(void)_simRemoved;
-(void)_simReady;
-(void)_simPUKLocked;
-(void)_phoneBookSelected;
-(void)_phoneNumberWritten;
-(void)_phoneNumberChanged;
-(void)_invalidateSIMToolkitMenuItemCache;
-(CTServerConnectionRef)_serverConnection;
-(id)descriptionDictionary;
@end

