/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:35 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSNumberFormatter, NSObject;

@interface MCFormatterVendor : NSObject {

	NSNumberFormatter* _numberFormatter;
	NSObject<OS_dispatch_queue>* _syncQueue;

}
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(void)_localeDidChange:(id)arg1 ;
-(id)numberFormatter;
-(void).cxx_destruct;
@end

