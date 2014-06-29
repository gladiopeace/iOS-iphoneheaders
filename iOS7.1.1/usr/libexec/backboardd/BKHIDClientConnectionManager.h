/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:32:29 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/backboardd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <backboardd/backboardd-Structs.h>
@class NSObject;

@interface BKHIDClientConnectionManager : NSObject {

	IOHIDEventSystemRef _hidEventSystem;
	CFDictionaryRef _taskPortToClientConnectionMapping;
	CFDictionaryRef _bundleIDToClientConnectionMapping;
	NSObject<OS_dispatch_queue>* _connectionQueue;

}
-(id)initWithHIDEventSystem:(IOHIDEventSystemRef)arg1 ;
-(IOHIDEventSystemConnectionRef)clientForTaskPort:(unsigned)arg1 ;
-(IOHIDEventSystemConnectionRef)clientForBundleID:(id)arg1 ;
-(void)clientConnectionAdded:(IOHIDEventSystemConnectionRef)arg1 ;
-(void)clientConnectionRemoved:(IOHIDEventSystemConnectionRef)arg1 ;
-(void)dealloc;
@end

