/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:34:29 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/routined
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSSecureCoding.h>

@class NSUUID;

@interface RTStateTransitionOneTimeTrans : NSObject <NSSecureCoding> {

	NSUUID* _routeUUID;
	double _start_s;
	double _stop_s;

}

@property (assign,nonatomic) double start_s;                  //@synthesize start_s=_start_s - In the implementation block
@property (assign,nonatomic) double stop_s;                   //@synthesize stop_s=_stop_s - In the implementation block
@property (nonatomic,retain) NSUUID * routeUUID;              //@synthesize routeUUID=_routeUUID - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithStart:(double)arg1 stop:(double)arg2 routeUUID:(id)arg3 ;
-(id)routeUUID;
-(double)start_s;
-(double)stop_s;
-(void)setStart_s:(double)arg1 ;
-(void)setStop_s:(double)arg1 ;
-(void)setRouteUUID:(id)arg1 ;
-(id)initWithStart:(double)arg1 stop:(double)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(void).cxx_destruct;
@end

