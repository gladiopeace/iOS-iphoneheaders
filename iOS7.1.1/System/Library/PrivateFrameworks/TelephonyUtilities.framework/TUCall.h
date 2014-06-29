/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:34 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <TelephonyUtilities/TelephonyUtilities-Structs.h>
@class NSString;

@interface TUCall : NSObject {

	NSString* _displayName;
	NSString* _overrideName;
	NSString* _companyName;
	long long _displayNameBreakPoint;
	int _abUid;
	NSString* _abLabel;
	struct {
		unsigned imageType : 2;
		unsigned abUidIsValid : 1;
		unsigned dialAssisted : 1;
		unsigned dialedFromEmergencyUI : 1;
		unsigned isEmergencyCall : 1;
		unsigned joiningConference : 1;
		unsigned leavingConference : 1;
	}  _phoneCallFlags;
	bool _provisionallyBecomingHeld;
	bool _provisionallyBecomingUnheld;
	bool _hold;
	bool _unhold;
	int _disconnectedReason;

}

@property (getter=_disconnectedReason,readonly) int disconnectedReason;              //@synthesize disconnectedReason=_disconnectedReason - In the implementation block
@property (readonly) NSString * bundleIDForHostingApplication; 
@property (assign,nonatomic) bool isOnHold; 
@property (assign,nonatomic) bool provisionallyBecomingHeld;                         //@synthesize provisionallyBecomingHeld=_provisionallyBecomingHeld - In the implementation block
@property (assign,nonatomic) bool provisionallyBecomingUnheld;                       //@synthesize provisionallyBecomingUnheld=_provisionallyBecomingUnheld - In the implementation block
@property (assign,nonatomic) bool hold;                                              //@synthesize hold=_hold - In the implementation block
@property (assign,nonatomic) bool unhold;                                            //@synthesize unhold=_unhold - In the implementation block
-(id)_image;
-(id)image;
-(id)desktopImage;
-(id)smallImage;
-(bool)isBlocked;
-(id)localizedLabel;
-(int)service;
-(id)isoCountryCode;
-(void)setMuted:(bool)arg1 ;
-(void)dealloc;
-(id)init;
-(bool)isEqual:(id)arg1 ;
-(void)resume;
-(id)displayName;
-(double)startTime;
-(void)disconnect;
-(int)status;
-(id)audioCategory;
-(bool)isOutgoing;
-(id)companyName;
-(bool)isMuted;
-(void)answer;
-(bool)isOnHold;
-(void)setIsOnHold:(bool)arg1 ;
-(bool)isConferenced;
-(id)displayFirstName;
-(int)_disconnectedReason;
-(id)callDurationString;
-(id)destinationID;
-(void)joinConference;
-(void)leaveConference;
-(int)_addressBookUid;
-(int)callIdentifier;
-(id)callerNameFromNetwork;
-(bool)isVoicemail;
-(void)resetProvisionalStatuses;
-(bool)hold;
-(bool)unhold;
-(id)bundleIDForHostingApplication;
-(bool)isAlerting;
-(id)audioMode;
-(bool)managesAudioInterruptions;
-(bool)needsManualInCallSounds;
-(void)_handleStatusChange;
-(void)_handleCallerIDChange;
-(void)_handleIdentityChange;
-(void)setProvisionallyBecomingHeld:(bool)arg1 ;
-(void)setProvisionallyBecomingUnheld:(bool)arg1 ;
-(bool)provisionallyBecomingHeld;
-(bool)provisionallyBecomingUnheld;
-(id)_displayNameWithSeparator:(id)arg1 ;
-(int)abUID;
-(void)disconnectWithReason:(int)arg1 ;
-(bool)multipleAddressBookMatches;
-(id)multiLineDisplayName;
-(void)setOverrideName:(id)arg1 ;
-(bool)wasDialAssisted;
-(void)setWasDialAssisted:(bool)arg1 ;
-(bool)wasDialedFromEmergencyUI;
-(void)setWasDialedFromEmergencyUI:(bool)arg1 ;
-(bool)isEmergencyCall;
-(int)causeCode;
-(void)setHold:(bool)arg1 ;
-(void)setUnhold:(bool)arg1 ;
-(double)callDuration;
@end

