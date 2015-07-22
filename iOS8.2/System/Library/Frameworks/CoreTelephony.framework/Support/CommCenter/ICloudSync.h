/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:23:45 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/Support/CommCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CommCenter/CommCenter-Structs.h>
@class NSUbiquitousKeyValueStore;

@interface ICloudSync : NSObject {

	NSUbiquitousKeyValueStore* fKVStore;
	queue* fQueue;
	block<void ()(const __CFDictionary *, const __CFArray *)>* fCallback;

}
-(void)invokeCallbackWithDict:(id)arg1 changedKeys:(id)arg2 ;
-(void)accountAvailabilityChanged:(id)arg1 ;
-(void)storeDidChange:(id)arg1 ;
-(void)updateICloudKey:(id)arg1 withValue:(id)arg2 ;
-(void)updateICloudComplete;
-(void)forceCleanUp;
-(void)dealloc;
-(id)initWithCallback:(/*^block*/id)arg1 queue:(dispatch_queue_sRef)arg2 ;
@end
