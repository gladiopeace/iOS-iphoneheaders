/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:33:46 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreMotion/CLNotifierServiceAdapter.h>
#import <locationd/CLFenceManagerProtocol.h>

@interface CLFenceManagerAdapter : CLNotifierServiceAdapter <CLFenceManagerProtocol>
+(id)getSilo;
-(id)initInSilo:(id)arg1 ;
-(void)heartAttack;
-(void)beginService;
-(void)endService;
@end

