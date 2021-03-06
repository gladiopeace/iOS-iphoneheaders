/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:20 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PreferenceBundles/WirelessModemSettings.bundle/WirelessModemSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <WirelessModemSettings/WirelessModemSettings-Structs.h>
@class RadiosPreferences;

@interface MISManager : NSObject {

	CFRunLoopSourceRef _scRunLoopSource;
	SCDynamicStoreRef _scDynamicStore;
	NETRBClientRef _netClient;
	int _state;
	int _reason;
	char _needStateUpdate;
	RadiosPreferences* _radioPrefs;

}
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)sharedManager;
-(id)retain;
-(id)init;
-(id)autorelease;
-(unsigned)retainCount;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationWillResignActive:(id)arg1 ;
-(void)setState:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)cellDataChangedNotification:(id)arg1 ;
-(void)attachMIS;
-(void)authenticate;
-(void)stopService;
-(void)readMISState:(int*)arg1 andReason:(int*)arg2 ;
-(void)detachMIS;
-(char)didUserPreventData;
-(void)getState:(int*)arg1 andReason:(int*)arg2 ;
-(void)sendStateUpdate;
-(oneway void)release;
@end

