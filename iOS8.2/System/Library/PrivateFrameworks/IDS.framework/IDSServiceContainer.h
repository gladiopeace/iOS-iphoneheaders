/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:15 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class IDSServiceMonitor, NSMutableSet;

@interface IDSServiceContainer : NSObject {

	IDSServiceMonitor* _monitor;
	NSMutableSet* _listeners;

}

@property (nonatomic,retain) IDSServiceMonitor * monitor;                    //@synthesize monitor=_monitor - In the implementation block
@property (nonatomic,retain,readonly) NSMutableSet * listeners;              //@synthesize listeners=_listeners - In the implementation block
-(void)dealloc;
-(id)initWithService:(id)arg1 ;
-(NSMutableSet *)listeners;
-(char)hasListenerID:(id)arg1 ;
-(char)addListenerID:(id)arg1 ;
-(char)removeListenerID:(id)arg1 ;
-(IDSServiceMonitor *)monitor;
-(void)setMonitor:(IDSServiceMonitor *)arg1 ;
@end

