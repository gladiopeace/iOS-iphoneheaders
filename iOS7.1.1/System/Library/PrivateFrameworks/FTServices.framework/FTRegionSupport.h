/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:21 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray, FTMessageDelivery;

@interface FTRegionSupport : NSObject {

	NSArray* _regions;
	FTMessageDelivery* _delivery;

}

@property (readonly) bool isLoaded; 
@property (readonly) bool isLoading; 
@property (readonly) NSArray * regions; 
@property (retain) FTMessageDelivery * _delivery;              //@synthesize delivery=_delivery - In the implementation block
@property (retain) NSArray * _regions;                         //@synthesize regions=_regions - In the implementation block
+(id)sharedInstance;
-(void)startLoading;
-(void)dealloc;
-(bool)isLoading;
-(bool)isLoaded;
-(id)regionForID:(id)arg1 ;
-(void)_buildMessageDeliveryIfNeeded;
-(void)flushRegions;
-(id)_regions;
-(void)set_regions:(id)arg1 ;
-(id)_delivery;
-(void)set_delivery:(id)arg1 ;
-(id)regions;
@end

