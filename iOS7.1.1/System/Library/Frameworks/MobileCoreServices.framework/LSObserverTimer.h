/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:35 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSTimer, NSDate, NSMutableSet;

@interface LSObserverTimer : NSObject {

	NSString* _name;
	NSTimer* _timer;
	NSDate* _lastFiredDate;
	NSMutableSet* _applications;
	double _minInterval;
	double _latency;
	SEL _observerSelector;

}

@property (nonatomic,retain) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSTimer * timer;                          //@synthesize timer=_timer - In the implementation block
@property (nonatomic,retain) NSDate * lastFiredDate;                   //@synthesize lastFiredDate=_lastFiredDate - In the implementation block
@property (nonatomic,retain) NSMutableSet * applications;              //@synthesize applications=_applications - In the implementation block
@property (nonatomic,readonly) double minInterval;                     //@synthesize minInterval=_minInterval - In the implementation block
@property (nonatomic,readonly) double latency;                         //@synthesize latency=_latency - In the implementation block
@property (assign) SEL observerSelector;                               //@synthesize observerSelector=_observerSelector - In the implementation block
-(void)addApplication:(id)arg1 ;
-(id)lastFiredDate;
-(double)minInterval;
-(double)latency;
-(void)setLastFiredDate:(id)arg1 ;
-(SEL)observerSelector;
-(void)clearApplications;
-(id)initWithSelector:(SEL)arg1 ;
-(void)removeApplication:(id)arg1 ;
-(void)notifyObservers:(id)arg1 withApplication:(id)arg2 ;
-(void)setApplications:(id)arg1 ;
-(void)setObserverSelector:(SEL)arg1 ;
-(void)dealloc;
-(id)description;
-(void)setName:(id)arg1 ;
-(id)name;
-(void)setTimer:(id)arg1 ;
-(id)timer;
-(void)sendMessage:(id)arg1 ;
-(id)applications;
@end

