/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:25:33 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <identityservicesd/IDSSocketPairConnectionDelegate.h>

@protocol IDSUTunConnectionDelegate;
@class NSMutableArray, NSMutableDictionary, IDSSocketPairConnection, IMTimer, NSString, IDSLocalDeliveryQueue, IMPowerAssertion, NSDate, NSDictionary;

@interface IDSUTunConnection : NSObject <IDSSocketPairConnectionDelegate> {

	id<IDSUTunConnectionDelegate> _delegate;
	NSMutableArray* _sendingMessages;
	NSMutableArray* _fallbackMessages;
	NSMutableDictionary* _statistics;
	NSMutableDictionary* _cumulativeOutgoingStatistics;
	NSMutableDictionary* _cumulativeIncomingStatistics;
	NSMutableDictionary* _tokenToOTREncryptionQueue;
	NSMutableDictionary* _tokenToOTRError;
	NSMutableDictionary* _dataProtectedIncomingMessages;
	IDSSocketPairConnection* _socketConnection;
	char _openSocketCalled;
	char _connectionSuspended;
	IMTimer* _timeoutTimer;
	IMTimer* _fallbackTimer;
	NSString* _identifier;
	IDSLocalDeliveryQueue* _deliveryQueue;
	IMPowerAssertion* _sendingPowerAssertion;
	double _rtt;
	int _cachedBytes[3];
	unsigned _maxQueueSize;
	int _priority;
	NSString* _cbuuid;
	NSString* _uniqueID;
	NSDate* _lastFallback;
	char _isPeerAwake;
	char _enabled;
	char _needsHandshake;
	char _isAlwaysConnected;
	NSMutableDictionary* _incomingResourceTransfers;
	char _enableOTR;

}

@property (assign,nonatomic) id<IDSUTunConnectionDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned maxQueueSize;                                         //@synthesize maxQueueSize=_maxQueueSize - In the implementation block
@property (nonatomic,readonly) char isConnected; 
@property (assign,nonatomic) char isAlwaysConnected;                                        //@synthesize isAlwaysConnected=_isAlwaysConnected - In the implementation block
@property (nonatomic,retain,readonly) NSString * identifier;                                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain,readonly) NSDictionary * sendingMessageStatistics; 
@property (nonatomic,retain,readonly) NSDictionary * queueStatistics; 
@property (nonatomic,readonly) char isEmpty; 
@property (nonatomic,readonly) NSDictionary * cumulativeIncomingStatistics;                 //@synthesize cumulativeIncomingStatistics=_cumulativeIncomingStatistics - In the implementation block
@property (nonatomic,readonly) NSDictionary * cumulativeOutgoingStatistics;                 //@synthesize cumulativeOutgoingStatistics=_cumulativeOutgoingStatistics - In the implementation block
@property (assign,nonatomic) char enableOTR;                                                //@synthesize enableOTR=_enableOTR - In the implementation block
@property (nonatomic,retain) NSString * cbuuid;                                             //@synthesize cbuuid=_cbuuid - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithIdentifier:(id)arg1 socketPriority:(int)arg2 btUUID:(id)arg3 uniqueID:(id)arg4 ;
-(void)setMaxQueueSize:(unsigned)arg1 ;
-(void)setCbuuid:(NSString *)arg1 ;
-(char)hasSpaceForMessagesWithDataProtectionClass:(unsigned)arg1 ;
-(NSDictionary *)sendingMessageStatistics;
-(void)_addStatsFromDict:(id)arg1 toAggregate:(id)arg2 ;
-(NSDictionary *)queueStatistics;
-(NSDictionary *)cumulativeOutgoingStatistics;
-(NSDictionary *)cumulativeIncomingStatistics;
-(void)flushAllMessages;
-(void)setEnableOTR:(char)arg1 ;
-(void)setIsPeerAwake:(char)arg1 ;
-(void)dropDisallowedMessages;
-(void)trafficClassesChanged;
-(void)clearStats;
-(void)cancelMessageID:(id)arg1 ;
-(void)setIsAlwaysConnected:(char)arg1 ;
-(char)isPeerAwake;
-(char)enableOTR;
-(void)classStorageBecameAvailable:(id)arg1 ;
-(unsigned)_sendingMessageCountForClass:(unsigned)arg1 ;
-(unsigned)_pendingOutgoingBytesForClass:(unsigned)arg1 ;
-(char)_isWiProxPeer;
-(id)_socketOptions;
-(void)_connectivityChanged;
-(void)_dequeueMessages;
-(char)_isMagnetConnection;
-(void)_clearLastFallbackWithReason:(id)arg1 ;
-(void)_sendSocketMessage:(id)arg1 ;
-(void)_removeMessageFromStatistics:(id)arg1 ;
-(void)_removeSocketPairMessage:(id)arg1 localMessage:(id)arg2 reason:(id)arg3 responseCode:(int)arg4 ;
-(void)_resetFallbackTimeout:(double)arg1 useNextFallback:(char)arg2 ;
-(void)_resetTimeout:(id)arg1 ;
-(void)_handleBecomingEmptyForDataProtectionClass:(unsigned)arg1 ;
-(void)_handleBecomingEmpty;
-(void)_clearSendingPowerAssertionWithReason:(id)arg1 ;
-(double)_fallbackTimeout;
-(void)_fallbackTimerFired;
-(char)_messageIsAllowedToSendMessageOnTopic:(id)arg1 ;
-(char)_performFallbackIfNecessary:(id)arg1 ;
-(void)_messageTimedOut:(id)arg1 localMessage:(id)arg2 ;
-(unsigned)_inflightMessageCountForClass:(unsigned)arg1 ;
-(char)_shouldAWDLogMessage:(id)arg1 ;
-(unsigned long long)_currentLink;
-(void)_addOutgoingMessageSize:(unsigned long long)arg1 forTopic:(id)arg2 dataProtectionClass:(unsigned)arg3 ;
-(void)_sendSocketMessage:(id)arg1 ignoreSequenceNumber:(char)arg2 ;
-(char)_messageHasValidEncryptionStatus:(id)arg1 ;
-(void)_sendEncryptedMessage:(id)arg1 ;
-(void)_updateDictionary:(id)arg1 addMessageSize:(unsigned long long)arg2 ;
-(void)_addMessageSize:(unsigned long long)arg1 forTopic:(id)arg2 direction:(unsigned char)arg3 dataProtectionClass:(unsigned)arg4 ;
-(id)_sendingMessageStatisticsForClass:(unsigned)arg1 ;
-(void)_requeueMessages:(id)arg1 ;
-(void)handleOTRNegotiationComplete:(id)arg1 ;
-(void)handleOTRNegotiationTimeout:(id)arg1 ;
-(void)_processIncomingDataMessage:(id)arg1 ;
-(void)_sendOTREncryptedMessage:(id)arg1 useEncryption:(char)arg2 streamID:(unsigned short)arg3 forPriority:(int)arg4 forFileXfer:(char)arg5 token:(id)arg6 ;
-(void)_sendOTREncryptionQueue:(id)arg1 streamID:(unsigned short)arg2 ;
-(void)_sendPublicKeyEncryptedMessage:(id)arg1 ;
-(id)_decryptOTREncrtypedMessage:(id)arg1 ;
-(id)_decryptPublicKeyEncryptedMessage:(id)arg1 ;
-(void)_flushMessagesAll:(char)arg1 response:(int)arg2 ;
-(void)sendAckForMessageWithSequenceNumber:(unsigned)arg1 ;
-(void)_processMessage:(id)arg1 withSequenceNumberBlock:(/*^block*/id)arg2 ;
-(id)_optionallyDecryptMessage:(id)arg1 ;
-(void)_sendExpiredAckForMessage:(id)arg1 ;
-(void)_dumpLogs;
-(void)_sendAckForMessage:(id)arg1 ;
-(int)_socketToNiceCommand:(unsigned char)arg1 ;
-(void)_addIncomingMessageSize:(unsigned long long)arg1 forTopic:(id)arg2 ;
-(void)setDeviceBTUUID:(id)arg1 ;
-(void)_sendNAckForMessage:(id)arg1 ;
-(unsigned)maxQueueSize;
-(NSString *)cbuuid;
-(char)isAlwaysConnected;
-(void)dealloc;
-(void)setDelegate:(id<IDSUTunConnectionDelegate>)arg1 ;
-(id<IDSUTunConnectionDelegate>)delegate;
-(NSString *)identifier;
-(char)isEmpty;
-(void)setEnabled:(char)arg1 ;
-(char)isEnabled;
-(void)connectionDidClose:(id)arg1 ;
-(void)sendMessage:(id)arg1 ;
-(void)connectionDidReceiveBytes:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveDataMessage:(id)arg2 ;
-(void)connectionDidReachInFlightMessageLowWaterMark:(id)arg1 ;
-(void)connectionBecameEmpty:(id)arg1 ;
-(char)isConnected;
-(void)_timeoutTimerFired;
-(void)_startConnection;
-(void)_stopConnection;
@end

