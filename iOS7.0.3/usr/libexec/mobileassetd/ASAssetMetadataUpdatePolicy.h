/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:19:05 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/mobileassetd
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <mobileassetd/ASAssetMetadataUpdatePolicy.h>

@protocol ASAssetMetadataUpdatePolicy <NSObject>
@required
-(id)serverURLForAssetType:(id)arg1;
-(double)defaultNetworkTimeout;
-(double)automaticMetadataUpdateIntervalForAssetType:(id)arg1;
@end


@interface ASAssetMetadataUpdatePolicy : NSObject <ASAssetMetadataUpdatePolicy>
+(id)policy;
-(id)serverURLForAssetType:(id)arg1 ;
-(void)getDelay:(double*)arg1 andGracePeriod:(double*)arg2 forUpdateError:(id)arg3 ;
-(void)getDelay:(double*)arg1 andGracePeriod:(double*)arg2 forUpdateInterval:(double)arg3 ;
-(double)defaultNetworkTimeout;
-(double)automaticMetadataUpdateIntervalForAssetType:(id)arg1 ;
-(id)_stringPreferenceValueForKey:(id)arg1 ;
@end

