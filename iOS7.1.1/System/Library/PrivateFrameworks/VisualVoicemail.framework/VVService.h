/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:48 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <VisualVoicemail/VisualVoicemail-Structs.h>
@class NSRecursiveLock, NSError, NSString, PCPersistentTimer;

@interface VVService : NSObject {

	NSRecursiveLock* _lock;
	unsigned _capabilities;
	int _mailboxUsage;
	double _trashCompactionAge;
	unsigned _unreadCount;
	unsigned _trashedCount;
	NSError* _passwordError;
	NSError* _activationError;
	NSString* _password;
	NSString* _passwordMailboxName;
	CFArrayRef _retryIntervals;
	PCPersistentTimer* _retryTimer;
	PCPersistentTimer* _trashCompactionTimer;
	PCPersistentTimer* _notificationFallbackTimer;
	CFDateRef _notificationFallbackWakeDate;
	CFDateRef _nextRetryWakeDate;
	CFDateRef _nextTrashCompactionWakeDate;
	int _retryIntervalIndex;
	unsigned _pmNotifier;
	IONotificationPortRef _pmNotifierPort;
	unsigned _pmRootPort;
	CFRunLoopSourceRef _pmRunLoopSource;
	id _carrierParameters;
	Class _notificationInterpreter;
	struct {
		unsigned offline : 1;
		unsigned subscribed : 1;
		unsigned initialSetupRequired : 1;
		unsigned fakeInitialSetup : 1;
		unsigned launchedWithFakeInitialSetup : 1;
		unsigned mwiState : 1;
		unsigned notificationFallbackEnabled : 1;
		unsigned capabilitiesLoaded : 1;
	}  _serviceFlags;

}
+(void)initialize;
+(id)sharedService;
+(bool)_lockedSharedServiceIsSubscribed;
+(void)_resetInsomniaState;
+(void)_suppressInsomniaState;
+(unsigned)_voicemailPowerAssertion;
+(void)_setInsomniaState:(bool)arg1 ;
+(void)_handleSIMChange;
+(bool)sharedServiceIsSubscribed;
+(void)setInsomniaEnabled:(bool)arg1 ;
-(double)trashCompactionAge;
-(bool)doTrashCompaction;
-(bool)shouldTrashCompactRecord:(void*)arg1 ;
-(void)removeAllRecords;
-(id)password;
-(bool)isSubscribed;
-(void)setSubscribed:(bool)arg1 ;
-(void)setPassword:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(unsigned)unreadCount;
-(CFStringRef)connectionServiceType;
-(void)setUnreadCount:(unsigned)arg1 ;
-(id)mailboxName;
-(unsigned)capabilities;
-(void)reportError:(id)arg1 ;
-(void)kill;
-(void)setMessageWaiting:(bool)arg1 ;
-(void)clearRemoteUIDsForDetachedMessages;
-(void)cancelDelayedSynchronize;
-(void)cancelPasswordRequest;
-(void)cancelNotificationFallback;
-(void)cancelAutomatedTrashCompaction;
-(void)resetCounts;
-(void)_contextActivationFailed:(id)arg1 ;
-(void)_contextActivationSucceeded:(id)arg1 ;
-(void)handleDataContextDeactivated;
-(void)_updateOnlineStatusWithDataStatusDict:(CFDictionaryRef)arg1 ;
-(void)_setActivationError:(id)arg1 ;
-(bool)sharedSubscriptionRequiresSetup;
-(bool)mailboxRequiresSetup;
-(void)setProvisionalPassword:(id)arg1 ;
-(void)_scheduleFallbackTimerIfNecessary;
-(int)mailboxUsage;
-(bool)shouldScheduleAutoTrashOnMailboxUsageChange;
-(void)scheduleAutomatedTrashCompaction;
-(bool)isOnline;
-(void)setTrashedCount:(unsigned)arg1 ;
-(void)_setOnline:(bool)arg1 fallbackMode:(bool)arg2 ;
-(bool)_isOfflineDueToRoamingWithDataStatusDict:(CFDictionaryRef)arg1 ;
-(void)setOnline:(bool)arg1 ;
-(void)synchronize:(bool)arg1 ;
-(void)_deregisterForPowerEventsIfNecessary;
-(bool)isMessageWaiting;
-(void)_deliverFallbackNotification;
-(void)_enterFallbackMode:(id)arg1 ;
-(void)_registerForPowerEventsIfNecessary;
-(void)_reactToIndicator;
-(bool)respectsMWINotifications;
-(bool)isInSync;
-(void)_cancelIndicatorAction;
-(Class)notificationInterpreterClass;
-(void)handleNotification:(id)arg1 isMWI:(bool)arg2 ;
-(id)passwordIgnoringSubscription:(bool)arg1 ;
-(void)displayPasswordRequestIfNecessary;
-(void)_attemptDelayedSynchronize;
-(CFArrayRef)_retryIntervals;
-(void)_attemptDelayedSynchronize:(id)arg1 ;
-(void)_scheduleAutomatedTrashCompaction;
-(bool)doesClientManageTrashCompaction;
-(void)_attemptScheduledTrashCompaction;
-(void)_cancelAutomatedTrashCompaction;
-(void)setMailboxRequiresSetup:(bool)arg1 ;
-(void)setMailboxUsage:(int)arg1 ;
-(unsigned)trashedCount;
-(void)updateCountsForChangedFlags:(unsigned)arg1 currentRecordFlags:(unsigned)arg2 ;
-(void)removeAllNonDetachedRecords;
-(void)updateLoggingSettings;
-(bool)isOfflineDueToRoaming;
-(void)_handleCallStatusChange:(CFDictionaryRef)arg1 ;
-(id)activationError;
-(void)clearActivationError;
-(void)handleIndicatorNotification:(CFDictionaryRef)arg1 ;
-(bool)isPasswordReady;
-(id)provisionalPassword;
-(void)handlePasswordRequestCancellation;
-(void)handlePasswordNotificationResponse:(id)arg1 ;
-(int)maximumGreetingDuration;
-(int)maximumRecordedNameDuration;
-(int)minimumPasswordLength;
-(int)maximumPasswordLength;
-(bool)passwordChangeRequiresEnteringOldPassword;
-(long long)mailboxGreetingType;
-(id)carrierParameterValueForKey:(id)arg1 ;
-(bool)taskOfTypeExists:(long long)arg1 ;
-(void)progressiveDataLengthsForRecord:(void*)arg1 expected:(unsigned*)arg2 current:(unsigned*)arg3 ;
-(bool)dataForRecordPending:(void*)arg1 progressiveLoadInProgress:(bool*)arg2 ;
-(bool)headerChangesPending;
-(bool)synchronizationPending;
-(bool)greetingFetchExistsProgressiveLoadInProgress:(bool*)arg1 ;
-(void)retrieveDataForRecord:(void*)arg1 ;
-(void)changePassword:(id)arg1 fromPassword:(id)arg2 ;
-(void)retrieveGreeting;
-(bool)greetingAvailable;
-(void)setGreetingType:(long long)arg1 withData:(id)arg2 duration:(unsigned)arg3 ;
-(void)moveRecordToTrash:(void*)arg1 ;
-(void)moveRecordFromTrash:(void*)arg1 ;
-(void)resetDelayedSynchronizationAttemptCount;
-(void)scheduleDelayedSynchronize;
@end

