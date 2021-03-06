/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:01 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface HKHealthServiceDiscovery : NSObject {

	long long _serviceType;
	unsigned long long _discoveryIdentifier;
	/*^block*/id _discoveryHandler;

}

@property (nonatomic,readonly) long long serviceType;                             //@synthesize serviceType=_serviceType - In the implementation block
@property (assign,nonatomic) unsigned long long discoveryIdentifier;              //@synthesize discoveryIdentifier=_discoveryIdentifier - In the implementation block
@property (nonatomic,copy) id discoveryHandler;                                   //@synthesize discoveryHandler=_discoveryHandler - In the implementation block
-(id)discoveryHandler;
-(id)initForAllTypes;
-(void)setDiscoveryIdentifier:(unsigned long long)arg1 ;
-(void)setDiscoveryHandler:(id)arg1 ;
-(unsigned long long)discoveryIdentifier;
-(id)initWithType:(long long)arg1 ;
-(long long)serviceType;
@end

