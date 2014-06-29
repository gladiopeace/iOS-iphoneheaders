/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:48 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, RadioStation;

@interface RUStationShareInformationProvider : NSObject {

	NSObject<OS_dispatch_queue>* _accessQueue;
	NSMutableDictionary* _shareTypeToLoadCompletionHandlers;
	NSMutableDictionary* _shareTypeToResponse;
	RadioStation* _station;

}

@property (nonatomic,readonly) RadioStation * station;              //@synthesize station=_station - In the implementation block
-(id)station;
-(id)initWithStation:(id)arg1 ;
-(void).cxx_destruct;
-(void)loadShareInformationForShareType:(long long)arg1 withCompletionHandler:(/*^block*/ id)arg2 ;
-(void)_loadStationShareInfoForShareType:(long long)arg1 withCompletionHandler:(/*^block*/ id)arg2 ;
@end

