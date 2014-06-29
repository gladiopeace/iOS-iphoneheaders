/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:07 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol LoadRequestManagerDelegate;
@class NSMutableArray, NSMutableSet, NSMutableDictionary;

@interface LoadRequestManager : NSObject {

	<LoadRequestManagerDelegate>* _delegate;
	NSMutableArray* _loadRequests;
	NSMutableSet* _requestedItems;
	NSMutableDictionary* _recentRequestDates;
	double _suspensionTime;
	double _throttleProcessInterval;
	double _throttleTriggerDelay;
	unsigned _throttleTriggerCount;
	BOOL _throttling;
	BOOL _willProcessNextRequest;
	BOOL _suspended;

}

@property (assign,nonatomic) <LoadRequestManagerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double throttleProcessInterval;                       //@synthesize throttleProcessInterval=_throttleProcessInterval - In the implementation block
@property (assign,nonatomic) double throttleTriggerDelay;                          //@synthesize throttleTriggerDelay=_throttleTriggerDelay - In the implementation block
@property (assign,nonatomic) unsigned throttleTriggerCount;                        //@synthesize throttleTriggerCount=_throttleTriggerCount - In the implementation block
-(void)setThrottleTriggerDelay:(double)arg1 ;
-(void)setThrottleTriggerCount:(unsigned)arg1 ;
-(void)setThrottleProcessInterval:(double)arg1 ;
-(id)keyForItem:(id)arg1 ;
-(void)requestLoadForItem:(id)arg1 userInfo:(id)arg2 ;
-(void)suspendProcessing;
-(void)rescheduleProcessing;
-(void)cancelLoadRequestForItem:(id)arg1 ;
-(void)purgeOldRecentRequestDates;
-(void)processNextRequest;
-(void)setNeedsToProcessNextRequest;
-(double)throttleProcessInterval;
-(double)throttleTriggerDelay;
-(unsigned)throttleTriggerCount;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
@end

