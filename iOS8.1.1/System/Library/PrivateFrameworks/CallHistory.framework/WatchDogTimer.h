/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:43 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CallHistory/CHLogger.h>

@protocol OS_dispatch_source;
@class NSString, NSObject;

@interface WatchDogTimer : CHLogger {

	NSString* _name;
	NSObject*<OS_dispatch_source> _timer;

}
-(void)cancel;
-(void)dealloc;
-(id)initWithQueue:(id)arg1 withName:(id)arg2 withTimeout:(double)arg3 withCallback:(/*^block*/id)arg4 ;
@end

