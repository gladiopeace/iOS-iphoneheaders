/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 3:35:06 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/assistantd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class SANavStatus, SALocalSearchRoute, SAMPQueueState;

@interface ADBackgroundContextCache : NSObject {

	SANavStatus* _navStatus;
	SALocalSearchRoute* _route;
	SAMPQueueState* _queueState;

}

@property (nonatomic,retain) SANavStatus * navStatus;                  //@synthesize navStatus=_navStatus - In the implementation block
@property (nonatomic,retain) SALocalSearchRoute * route;               //@synthesize route=_route - In the implementation block
@property (nonatomic,retain) SAMPQueueState * queueState;              //@synthesize queueState=_queueState - In the implementation block
+(id)_backgroundContextWithObjects:(id)arg1 ;
+(id)_backgroundContextWithObject:(id)arg1 ;
-(id)backgroundContextWithCachedObjects;
-(id)backgroundContextWithNavStatusAndRoute;
-(id)backgroundContextWithQueueState;
-(void)setNavStatus:(id)arg1 ;
-(void)setQueueState:(id)arg1 ;
-(void)setRoute:(id)arg1 ;
-(id)route;
-(void).cxx_destruct;
-(id)queueState;
-(id)navStatus;
@end

