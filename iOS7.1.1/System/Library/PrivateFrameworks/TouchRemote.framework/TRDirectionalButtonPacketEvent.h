/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:38 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TouchRemote/TRPacketEvent.h>

@interface TRDirectionalButtonPacketEvent : TRPacketEvent {

	long long _buttonType;
	long long _gestureState;
	long long _gestureType;

}

@property (nonatomic,readonly) long long buttonType;                //@synthesize buttonType=_buttonType - In the implementation block
@property (nonatomic,readonly) long long gestureState;              //@synthesize gestureState=_gestureState - In the implementation block
@property (nonatomic,readonly) long long gestureType;               //@synthesize gestureType=_gestureType - In the implementation block
+(unsigned)_packetEventType;
-(id)description;
-(long long)gestureType;
-(long long)buttonType;
-(id)_initWithVersion:(unsigned)arg1 payloadDictionary:(id)arg2 ;
-(long long)gestureState;
-(id)initWithButtonType:(long long)arg1 gestureType:(long long)arg2 gestureState:(long long)arg3 ;
@end

