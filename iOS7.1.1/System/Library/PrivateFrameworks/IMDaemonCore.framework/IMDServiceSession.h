/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:35 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMDaemonCore/IMDaemonCore-Structs.h>
#import <IMDaemonCore/IMSystemMonitorListener.h>
#import <IMDaemonCore/IMConnectionMonitorDelegate.h>
#import <IMDaemonCore/IMServiceSessionProtocol.h>

@class NSRecursiveLock, IMDAccount, NSString, NSMutableDictionary, NSMutableSet, IMTimer, NSTimer, IMConnectionMonitor, IMSystemProxySettingsFetcher, IMDService, NSDictionary, NSArray;

@interface IMDServiceSession : NSObject <IMSystemMonitorListener, IMConnectionMonitorDelegate, IMServiceSessionProtocol> {

	NSRecursiveLock* _lock;
	IMDAccount* _account;
	NSString* _loginStatusMessage;
	NSMutableDictionary* _localProperties;
	NSMutableSet* _changedBuddies;
	NSMutableSet* _registeredChats;
	NSMutableDictionary* _groupChatIdentifierToChatRoomMap;
	NSMutableDictionary* _chatRoomToGroupChatIdentifierMap;
	NSMutableDictionary* _chatSuppressionFlagMap;
	NSMutableDictionary* _chatSuppressionTimerMap;
	NSMutableDictionary* _suppressedMessages;
	IMTimer* _messageRoutingTimer;
	NSTimer* _storageTimer;
	NSMutableSet* _messagesReceivedDuringStorage;
	IMConnectionMonitor* _connectionMonitor;
	NSTimer* _reconnectTimer;
	NSString* _loginID;
	NSString* _pwRequestID;
	IMSystemProxySettingsFetcher* _systemProxySettingsFetcher;
	int _buddyChangeLevel;
	unsigned _loginStatus;
	int _disconnectReason;
	bool _activated;
	bool _saveKeychainPassword;
	bool _awaitingDataContext;
	bool _shouldReconnect;
	bool _badPass;
	IMDService* _service;
	NSMutableDictionary* _buddies;
	NSString* _proxyHost;
	NSString* _proxyAccount;
	NSString* _proxyPassword;
	NSString* _password;
	NSString* _serverHost;
	long long _proxyType;
	unsigned short _proxyPort;
	bool _useSSL;
	unsigned short _serverPort;

}

@property (nonatomic,readonly) int registrationStatus; 
@property (nonatomic,readonly) int registrationError; 
@property (nonatomic,readonly) NSDictionary * registrationAlertInfo; 
@property (nonatomic,readonly) NSArray * allBuddies; 
@property (readonly) NSDictionary * buddyProperties; 
@property (nonatomic,readonly) NSDictionary * buddyPictures; 
@property (nonatomic,readonly) IMDAccount * account;                              //@synthesize account=_account - In the implementation block
@property (nonatomic,readonly) IMDService * service;                              //@synthesize service=_service - In the implementation block
@property (nonatomic,readonly) NSString * accountID; 
@property (nonatomic,readonly) NSString * password;                               //@synthesize password=_password - In the implementation block
@property (nonatomic,readonly) NSDictionary * accountDefaults; 
@property (nonatomic,readonly) NSString * serverHost;                             //@synthesize serverHost=_serverHost - In the implementation block
@property (nonatomic,readonly) unsigned short serverPort;                         //@synthesize serverPort=_serverPort - In the implementation block
@property (nonatomic,readonly) long long proxyType;                               //@synthesize proxyType=_proxyType - In the implementation block
@property (nonatomic,readonly) NSString * proxyHost;                              //@synthesize proxyHost=_proxyHost - In the implementation block
@property (nonatomic,readonly) unsigned short proxyPort;                          //@synthesize proxyPort=_proxyPort - In the implementation block
@property (nonatomic,readonly) NSString * proxyAccount;                           //@synthesize proxyAccount=_proxyAccount - In the implementation block
@property (nonatomic,readonly) NSString * proxyPassword;                          //@synthesize proxyPassword=_proxyPassword - In the implementation block
@property (nonatomic,readonly) bool useSSL;                                       //@synthesize useSSL=_useSSL - In the implementation block
@property (nonatomic,readonly) bool isActive; 
@property (nonatomic,readonly) NSString * displayName; 
@property (nonatomic,readonly) bool accountNeedsLogin; 
@property (nonatomic,readonly) bool accountNeedsPassword; 
@property (nonatomic,readonly) bool accountShouldBeAlwaysLoggedIn; 
@property (nonatomic,readonly) bool allowedAsChild; 
@property (nonatomic,readonly) bool networkConditionsAllowLogin; 
@property (nonatomic,readonly) unsigned serviceLoginStatus;                       //@synthesize loginStatus=_loginStatus - In the implementation block
@property (nonatomic,readonly) int serviceDisconnectReason;                       //@synthesize disconnectReason=_disconnectReason - In the implementation block
@property (nonatomic,readonly) NSString * serviceLoginStatusMessage;              //@synthesize loginStatusMessage=_loginStatusMessage - In the implementation block
+(void)initialize;
+(id)_firewallUserNotificationForService:(id)arg1 ;
-(void)login;
-(void)logout;
-(void)autoLogin;
-(void)_setAutoReconnectTimer;
-(void)_clearAutoReconnectTimer;
-(void)_doLoginIgnoringProxy:(bool)arg1 ;
-(void)logoutServiceSession;
-(void)autoReconnect;
-(void)disallowReconnection;
-(void)_login_serverSettingsReady;
-(void)_forceSetLoginStatus:(unsigned)arg1 message:(id)arg2 reason:(int)arg3 properties:(id)arg4 ;
-(void)_data_connection_ready;
-(void)_login_usernameAndPasswordReady;
-(void)_login_checkUsernameAndPassword;
-(void)setLoginStatus:(unsigned)arg1 message:(id)arg2 ;
-(void)setLoginStatus:(unsigned)arg1 message:(id)arg2 reason:(int)arg3 properties:(id)arg4 ;
-(void)_wentOffline;
-(void)serviceSessionDidLogin;
-(void)serviceSessionDidLogout;
-(void)serviceSessionDidLogoutWithMessage:(id)arg1 reason:(int)arg2 properties:(id)arg3 ;
-(void)_autoReconnectTimer:(id)arg1 ;
-(void)systemProxySettingsFetcher:(id)arg1 retrievedHost:(id)arg2 port:(unsigned short)arg3 protocol:(long long)arg4 ;
-(void)systemProxySettingsFetcher:(id)arg1 retrievedAccount:(id)arg2 password:(id)arg3 ;
-(void)userNotificationDidFinish:(id)arg1 ;
-(void)_handleFirewallUserNotificationDidFinish:(id)arg1 ;
-(bool)warnIfPortBlocked:(int)arg1 forAction:(id)arg2 ;
-(id)server;
-(int)registrationStatus;
-(bool)blockIdleStatus;
-(void)setBlockIdleStatus:(bool)arg1 ;
-(unsigned)blockingMode;
-(id)blockList;
-(id)allowList;
-(void)setBlockList:(id)arg1 ;
-(void)setBlockingMode:(unsigned)arg1 ;
-(void)setAllowList:(id)arg1 ;
-(void)requestGroups;
-(id)defaultChatSuffix;
-(void)authenticateAccount;
-(void)addAliases:(id)arg1 ;
-(void)removeAliases:(id)arg1 ;
-(void)unvalidateAliases:(id)arg1 ;
-(void)validateAliases:(id)arg1 ;
-(void)renameGroup:(id)arg1 to:(id)arg2 ;
-(void)registerAccount;
-(void)unregisterAccount;
-(FZChatRoomValidity)validityOfChatRoomName:(id)arg1 ;
-(void)updateAuthorizationCredentials:(id)arg1 token:(id)arg2 ;
-(void)validateProfile;
-(void)accountDefaultsChanged:(id)arg1 ;
-(void)changeMyStatus:(id)arg1 changedKeys:(id)arg2 ;
-(void)setIdleTime:(unsigned)arg1 ;
-(void)setRegistrationStatus:(int)arg1 error:(int)arg2 alertInfo:(id)arg3 ;
-(id)loginID;
-(id)registrationAlertInfo;
-(void)_abandonSystemProxySettingsFetcher;
-(void)_abandonPWFetcher;
-(void)changeGroups:(id)arg1 ;
-(void)changeGroup:(id)arg1 changes:(id)arg2 ;
-(void)acceptSubscriptionRequest:(bool)arg1 from:(id)arg2 ;
-(void)requestSubscriptionTo:(id)arg1 ;
-(void)startWatchingBuddy:(id)arg1 ;
-(void)stopWatchingBuddy:(id)arg1 ;
-(void)requestProperty:(id)arg1 ofPerson:(id)arg2 ;
-(void)setValue:(id)arg1 ofProperty:(id)arg2 ofPerson:(id)arg3 ;
-(void)joinChatID:(id)arg1 handleInfo:(id)arg2 identifier:(id)arg3 style:(unsigned char)arg4 joinProperties:(id)arg5 ;
-(void)leaveChatID:(id)arg1 identifier:(id)arg2 style:(unsigned char)arg3 ;
-(void)invitePersonInfo:(id)arg1 withMessage:(id)arg2 toChatID:(id)arg3 identifier:(id)arg4 style:(unsigned char)arg5 ;
-(void)declineInvitationToChatID:(id)arg1 identifier:(id)arg2 style:(unsigned char)arg3 ;
-(void)sendMessage:(id)arg1 toChatID:(id)arg2 identifier:(id)arg3 style:(unsigned char)arg4 ;
-(void)setProperties:(id)arg1 ofParticipant:(id)arg2 inChatID:(id)arg3 identifier:(id)arg4 style:(unsigned char)arg5 ;
-(void)passwordUpdated;
-(void)sendFileTransfer:(id)arg1 toPerson:(id)arg2 ;
-(void)sendCommand:(id)arg1 withProperties:(id)arg2 toPerson:(id)arg3 ;
-(void)requestVCWithPerson:(id)arg1 properties:(id)arg2 conference:(id)arg3 ;
-(void)respondToVCInvitationWithPerson:(id)arg1 properties:(id)arg2 conference:(id)arg3 ;
-(void)cancelVCRequestWithPerson:(id)arg1 properties:(id)arg2 conference:(id)arg3 ;
-(void)sendCounterProposalToPerson:(id)arg1 properties:(id)arg2 conference:(id)arg3 ;
-(void)sendVCUpdate:(id)arg1 toPerson:(id)arg2 conference:(id)arg3 ;
-(void)sendAVMessageToPerson:(id)arg1 sessionID:(unsigned)arg2 type:(unsigned)arg3 userInfo:(id)arg4 conference:(id)arg5 ;
-(void)relay:(id)arg1 sendInitateRequest:(id)arg2 toPerson:(id)arg3 ;
-(void)relay:(id)arg1 sendUpdate:(id)arg2 toPerson:(id)arg3 ;
-(void)relay:(id)arg1 sendCancel:(id)arg2 toPerson:(id)arg3 ;
-(bool)shouldImitateGroupChatUsingChatRooms;
-(void)joinChat:(id)arg1 style:(unsigned char)arg2 joinProperties:(id)arg3 ;
-(void)invitePersonInfo:(id)arg1 withMessage:(id)arg2 toChat:(id)arg3 style:(unsigned char)arg4 ;
-(void)invitePerson:(id)arg1 withMessage:(id)arg2 toChat:(id)arg3 style:(unsigned char)arg4 ;
-(void)joinChat:(id)arg1 handleInfo:(id)arg2 style:(unsigned char)arg3 joinProperties:(id)arg4 ;
-(void)leaveChat:(id)arg1 style:(unsigned char)arg2 ;
-(void)declineInvitationToChat:(id)arg1 style:(unsigned char)arg2 ;
-(void)setProperties:(id)arg1 ofParticipant:(id)arg2 inChat:(id)arg3 style:(unsigned char)arg4 ;
-(void)noteBadPassword;
-(void)loginServiceSession;
-(unsigned long long)capabilities;
-(bool)hasCapability:(unsigned long long)arg1 ;
-(int)registrationError;
-(id)groups;
-(void)holdBuddyUpdates;
-(void)resumeBuddyUpdates;
-(id)buddyProperties;
-(void)beginBuddyChanges;
-(void)endBuddyChanges;
-(id)localPropertiesOfBuddy:(id)arg1 ;
-(id)buddyPictures;
-(id)pictureOfBuddy:(id)arg1 ;
-(id)pictureKeyForBuddy:(id)arg1 ;
-(id)allBuddies;
-(void)markBuddiesAsChanged:(id)arg1 ;
-(void)changeProperty:(id)arg1 ofBuddy:(id)arg2 to:(id)arg3 ;
-(void)clearPropertiesOfBuddy:(id)arg1 ;
-(id)property:(id)arg1 ofBuddy:(id)arg2 ;
-(id)localProperty:(id)arg1 ofBuddy:(id)arg2 ;
-(void)clearLocalProperties;
-(void)changeLocalProperty:(id)arg1 ofBuddy:(id)arg2 to:(id)arg3 ;
-(id)_newHashForChat:(id)arg1 style:(unsigned char)arg2 ;
-(void)_updateRoutingTimerWithInterval:(double)arg1 ;
-(void)leaveAllChats;
-(void)endMessageSuppression;
-(id)chatForChatIdentifier:(id)arg1 style:(unsigned char)arg2 ;
-(void)sendReadReceiptForMessage:(id)arg1 toChatID:(id)arg2 identifier:(id)arg3 style:(unsigned char)arg4 ;
-(void)noteMessagesMarkedAsReadForChatWithGUID:(id)arg1 ;
-(void)registerChat:(id)arg1 style:(unsigned char)arg2 handleInfo:(id)arg3 ;
-(id)chatRoomForGroupChatIdentifier:(id)arg1 ;
-(id)groupChatIdentifierForChatRoom:(id)arg1 ;
-(void)canonicalizeChatIdentifier:(id*)arg1 style:(unsigned char*)arg2 ;
-(void)_mapRoomChatToGroupChat:(id*)arg1 style:(unsigned char*)arg2 ;
-(void)didSendMessageReadReceiptForMessageID:(id)arg1 ;
-(void)didLeaveChat:(id)arg1 style:(unsigned char)arg2 ;
-(void)didUpdateChatStatus:(int)arg1 chat:(id)arg2 style:(unsigned char)arg3 handleInfo:(id)arg4 ;
-(void)didJoinChat:(id)arg1 style:(unsigned char)arg2 handleInfo:(id)arg3 ;
-(bool)isAwaitingStorageTimer;
-(void)noteSuppressedMessageUpdate:(id)arg1 ;
-(void)_didReceiveMessageReadForMessageID:(id)arg1 date:(id)arg2 attempts:(long long)arg3 completionBlock:(/*^block*/ id)arg4 ;
-(void)_didReceiveMessageReadReceiptForMessageID:(id)arg1 date:(id)arg2 attempts:(long long)arg3 completionBlock:(/*^block*/ id)arg4 ;
-(bool)canMakeDowngradeRoutingChecks;
-(void)_updateRoutingForMessageGUID:(id)arg1 chatGUID:(id)arg2 error:(unsigned)arg3 ;
-(void)_endMessageSuppressionForChatGUID:(id)arg1 ;
-(void)_suppresionTimerFired:(id)arg1 ;
-(void)_setSuppressedMessage:(id)arg1 inChatWithGUID:(id)arg2 ;
-(void)useChatRoom:(id)arg1 forGroupChatIdentifier:(id)arg2 ;
-(void)unregisterChat:(id)arg1 style:(unsigned char)arg2 ;
-(void)didChangeMemberStatus:(int)arg1 forHandle:(id)arg2 unformattedNumber:(id)arg3 countryCode:(id)arg4 forChat:(id)arg5 style:(unsigned char)arg6 ;
-(void)sendMessage:(id)arg1 toChat:(id)arg2 style:(unsigned char)arg3 ;
-(void)_markChatAsDowngraded:(id)arg1 ;
-(void)_handleRoutingWithDictionary:(id)arg1 ;
-(void)_routingTimerFired;
-(void)_storageTimerFired;
-(void)_updateStorageTimerWithInterval:(double)arg1 ;
-(void)registerChat:(id)arg1 style:(unsigned char)arg2 ;
-(bool)isChatRegistered:(id)arg1 style:(unsigned char)arg2 ;
-(void)processMessageForSending:(id)arg1 toChat:(id)arg2 style:(unsigned char)arg3 completionBlock:(/*^block*/ id)arg4 ;
-(void)didJoinChat:(id)arg1 style:(unsigned char)arg2 ;
-(void)didReceiveReplaceMessageID:(int)arg1 forChat:(id)arg2 style:(unsigned char)arg3 ;
-(void)didReceiveErrorMessage:(id)arg1 forChat:(id)arg2 style:(unsigned char)arg3 ;
-(void)didReceiveError:(unsigned)arg1 forMessageID:(id)arg2 forceError:(bool)arg3 ;
-(void)didReceiveMessageDeliveryReceiptForMessageID:(id)arg1 date:(id)arg2 ;
-(void)didReceiveMessageReadForMessageID:(id)arg1 date:(id)arg2 completionBlock:(/*^block*/ id)arg3 ;
-(void)didReceiveMessageReadReceiptForMessageID:(id)arg1 date:(id)arg2 completionBlock:(/*^block*/ id)arg3 ;
-(void)didSendMessage:(id)arg1 forChat:(id)arg2 style:(unsigned char)arg3 ;
-(void)notifyDidSendMessageID:(id)arg1 ;
-(void)didReceiveMessage:(id)arg1 forChat:(id)arg2 style:(unsigned char)arg3 ;
-(void)didReceiveInvitation:(id)arg1 forChat:(id)arg2 style:(unsigned char)arg3 ;
-(void)didUpdateChatStatus:(int)arg1 chat:(id)arg2 style:(unsigned char)arg3 ;
-(void)didChangeMemberStatus:(int)arg1 forHandle:(id)arg2 forChat:(id)arg3 style:(unsigned char)arg4 ;
-(void)noteItemFromStorage:(id)arg1 ;
-(void)noteLastItemFromStorage:(id)arg1 ;
-(id)password;
-(id)service;
-(unsigned short)serverPort;
-(long long)proxyType;
-(void)dealloc;
-(bool)isActive;
-(id)displayName;
-(bool)useSSL;
-(void)systemDidUnlock;
-(id)canonicalFormOfID:(id)arg1 ;
-(bool)equalID:(id)arg1 andID:(id)arg2 ;
-(void)_managedPrefsNotification:(id)arg1 ;
-(id)accountDefaults;
-(unsigned)serviceLoginStatus;
-(id)serviceLoginStatusMessage;
-(id)initWithAccount:(id)arg1 service:(id)arg2 ;
-(void)sessionDidBecomeActive;
-(void)sessionWillBecomeInactive;
-(void)_networkChanged:(id)arg1 ;
-(void)_callMonitorStateChanged:(id)arg1 ;
-(void)_processConnectionMonitorUpdate;
-(void)_clearConnectionMonitor;
-(void)_updateConnectionMonitorFromAccountDefaultsIgnoringProxy:(bool)arg1 ;
-(void)_updateConnectionMonitorWithRemoteHost:(id)arg1 ;
-(bool)accountShouldBeAlwaysLoggedIn;
-(void)_reconnectIfNecessary;
-(void)_setPendingConnectionMonitorUpdate;
-(void)_processPotentialNetworkChange;
-(bool)allowedAsChild;
-(id)broadcaster;
-(id)broadcasterForListenersWithCapabilities:(unsigned)arg1 ;
-(id)broadcasterForChatListeners;
-(bool)accountNeedsLogin;
-(bool)accountNeedsPassword;
-(void)updateConnectionMonitorWithLocalSocketAddress:(id)arg1 remoteSocketAddress:(id)arg2 ;
-(bool)networkConditionsAllowLogin;
-(id)canonicalFormOfChatRoom:(id)arg1 ;
-(void)refreshServiceCapabilities;
-(id)broadcasterForChatObserverListeners;
-(id)broadcasterForAVConferenceListeners;
-(id)broadcasterForACConferenceListeners;
-(id)broadcasterForVCConferenceListeners;
-(void)_clearDowngradeMarkersForChat:(id)arg1 ;
-(id)serverHost;
-(id)proxyHost;
-(id)proxyAccount;
-(int)serviceDisconnectReason;
-(void)connectionMonitorDidUpdate:(id)arg1 ;
-(unsigned short)proxyPort;
-(id)proxyPassword;
-(id)account;
-(id)accountID;
@end

