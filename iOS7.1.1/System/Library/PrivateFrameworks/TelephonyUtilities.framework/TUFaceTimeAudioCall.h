/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:34 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TelephonyUtilities/TUCall.h>

@class IMAVChat;

@interface TUFaceTimeAudioCall : TUCall {

	IMAVChat* _chat;

}
-(bool)isBlocked;
-(int)service;
-(id)isoCountryCode;
-(bool)setMuted:(bool)arg1 ;
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(id)description;
-(void)resume;
-(double)startTime;
-(void)disconnect;
-(int)status;
-(id)audioCategory;
-(id)chat;
-(bool)isOutgoing;
-(id)remoteParticipant;
-(bool)isMuted;
-(void)answer;
-(bool)isConferenced;
-(id)destinationID;
-(void)joinConference;
-(void)leaveConference;
-(bool)isTTY;
-(int)callIdentifier;
-(id)callerNameFromNetwork;
-(id)initWithChat:(id)arg1 ;
-(bool)hold;
-(bool)unhold;
-(id)bundleIDForHostingApplication;
-(bool)isAlerting;
-(id)audioMode;
-(bool)managesAudioInterruptions;
-(bool)needsManualInCallSounds;
-(double)callDuration;
@end

