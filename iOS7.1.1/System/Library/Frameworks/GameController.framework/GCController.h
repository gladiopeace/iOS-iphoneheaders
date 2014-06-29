/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:13 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <GameController/GameController-Structs.h>
@class NSString, GCGamepad, GCExtendedGamepad;

@interface GCController : NSObject

@property (copy) id controllerPausedHandler; 
@property (readonly) NSString * vendorName; 
@property (getter=isAttachedToDevice,readonly) bool attachedToDevice; 
@property (assign,nonatomic) long long playerIndex; 
@property (readonly) GCGamepad * gamepad; 
@property (readonly) GCExtendedGamepad * extendedGamepad; 
@property (retain) <GCNamedProfile> * profile; 
@property (readonly) IOHIDDeviceRef deviceRef; 
@property (readonly) unsigned service; 
+(id)controllers;
+(void)__open__;
+(void)__setLogger__:(/*^block*/ id)arg1 ;
+(void)startWirelessControllerDiscoveryWithCompletionHandler:(/*^block*/ id)arg1 ;
+(void)stopWirelessControllerDiscovery;
-(unsigned)service;
-(void)setPlayerIndex:(long long)arg1 ;
-(/*^block*/ id)controllerPausedHandler;
-(void)setControllerPausedHandler:(/*^block*/ id)arg1 ;
-(bool)isAttachedToDevice;
-(long long)playerIndex;
-(id)gamepad;
-(id)extendedGamepad;
-(IOHIDDeviceRef)deviceRef;
-(id)vendorName;
-(id)profile;
-(void)setProfile:(id)arg1 ;
@end

