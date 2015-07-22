/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:27 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, CDSession;

@interface AFSiriTaskMetricsManager : NSObject {

	NSObject*<OS_dispatch_queue> _duetQueue;
	CDSession* _coreDuetSession;

}
+(id)sharedManager;
-(id)init;
-(char)_parseCoreDuetAttributeValue:(id)arg1 aceId:(id*)arg2 duration:(double*)arg3 ;
-(void)registerPunchoutIdentifier:(id)arg1 ;
-(void)retrieveMetricsFromPreviousPunchout:(/*^block*/id)arg1 ;
-(void)deleteRegisteredIdentifiers;
@end
