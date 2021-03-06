/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:17:01 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVTimebaseObserver.h>

@interface AVOnceTimebaseObserver : AVTimebaseObserver {

	SCD_Struct_CM4 _fireTime;
	/*^block*/id _block;
	BOOL _didFire;

}

@property (nonatomic,readonly) BOOL didFire; 
-(void)_effectiveRateChanged;
-(void)_resetNextFireTime;
-(void)_handleTimeDiscontinuity;
-(void)_fireBlock;
-(id)initWithTimebase:(OpaqueCMTimebaseRef)arg1 fireTime:(SCD_Struct_CM4)arg2 queue:(id)arg3 block:(/*^block*/id)arg4 ;
-(BOOL)didFire;
-(void)dealloc;
-(void)invalidate;
@end

