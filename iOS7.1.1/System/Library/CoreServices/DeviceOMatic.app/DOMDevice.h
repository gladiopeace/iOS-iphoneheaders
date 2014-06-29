/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:55:48 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/DeviceOMatic.app/DeviceOMatic
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <DeviceOMatic/DeviceOMatic-Structs.h>
@class NSDictionary, NSString, DOMPersonality, NSNumber, NSObject;

@interface DOMDevice : NSObject {

	BOOL _isHub;
	BOOL _isAttachedToHub;
	BOOL _powerHog;
	NSDictionary* _properties;
	NSString* _name;
	unsigned _io_service;
	DOMPersonality* _winningDomPersonality;
	NSNumber* _winningScore;
	NSObject<OS_dispatch_queue>* _queue;
	unsigned _io_notification;
	NSString* _dialogBodyKey;
	unsigned long long _IORegEntryID;
	unsigned long long _winningIORegEntryID;

}

@property (readonly) BOOL isHub;                                                  //@synthesize isHub=_isHub - In the implementation block
@property (readonly) BOOL isAttachedToHub;                                        //@synthesize isAttachedToHub=_isAttachedToHub - In the implementation block
@property (readonly) BOOL powerHog;                                               //@synthesize powerHog=_powerHog - In the implementation block
@property (assign) unsigned io_service;                                           //@synthesize io_service=_io_service - In the implementation block
@property (assign) unsigned long long IORegEntryID;                               //@synthesize IORegEntryID=_IORegEntryID - In the implementation block
@property (nonatomic,retain) DOMPersonality * winningDomPersonality;              //@synthesize winningDomPersonality=_winningDomPersonality - In the implementation block
@property (assign) unsigned long long winningIORegEntryID;                        //@synthesize winningIORegEntryID=_winningIORegEntryID - In the implementation block
@property (nonatomic,retain) NSNumber * winningScore;                             //@synthesize winningScore=_winningScore - In the implementation block
@property (nonatomic,retain) NSObject<OS_dispatch_queue> * queue;                 //@synthesize queue=_queue - In the implementation block
@property (assign) unsigned io_notification;                                      //@synthesize io_notification=_io_notification - In the implementation block
@property (nonatomic,retain) NSDictionary * properties;                           //@synthesize properties=_properties - In the implementation block
@property (nonatomic,retain) NSString * name;                                     //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * dialogBodyKey;                            //@synthesize dialogBodyKey=_dialogBodyKey - In the implementation block
-(id)dialogBodyKey;
-(id)winningDomPersonality;
-(id)winningScore;
-(void)setDialogBodyKey:(id)arg1 ;
-(id)initWithIOService:(unsigned)arg1 notificationPort:(IONotificationPortRef)arg2 ;
-(BOOL)powerHog;
-(BOOL)shouldMatchDevice;
-(void)updateDeviceProperties;
-(unsigned long long)IORegEntryID;
-(BOOL)compositeDeviceIsConfigured;
-(void)setWinningScore:(id)arg1 ;
-(void)setWinningDomPersonality:(id)arg1 ;
-(void)setWinningIORegEntryID:(unsigned long long)arg1 ;
-(BOOL)isHub;
-(BOOL)isAttachedToHub;
-(BOOL)isCompositeDevice;
-(void)handleIONotification:(unsigned)arg1 arg:(void*)arg2 ;
-(void)evaluateScore:(id)arg1 fromDomPersonality:(id)arg2 withIORegEntryID:(unsigned long long)arg3 ;
-(void)setIORegEntryID:(unsigned long long)arg1 ;
-(void)setIo_service:(unsigned)arg1 ;
-(unsigned long long)winningIORegEntryID;
-(unsigned)io_notification;
-(void)setIo_notification:(unsigned)arg1 ;
-(void)dealloc;
-(id)description;
-(void)setName:(id)arg1 ;
-(id)name;
-(id)properties;
-(void).cxx_destruct;
-(void)setProperties:(id)arg1 ;
-(unsigned)io_service;
-(id)queue;
-(void)setQueue:(id)arg1 ;
@end

