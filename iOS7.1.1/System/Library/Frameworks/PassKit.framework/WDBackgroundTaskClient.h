/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 2:29:07 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/PassKit.framework/passd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface WDBackgroundTaskClient : NSObject {

	NSObject<OS_dispatch_queue>* _clientQueue;
	/*^block*/ id _taskHandler;

}
-(id)initWithQueue:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(void)deliverTask:(id)arg1 taskName:(id)arg2 ;
-(void)dealloc;
@end

