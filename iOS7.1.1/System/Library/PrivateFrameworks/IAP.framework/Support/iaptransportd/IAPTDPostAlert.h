/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 4:04:37 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/Support/iaptransportd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iaptransportd/iaptransportd-Structs.h>
@interface IAPTDPostAlert : NSObject
+(void)TearDownAccessoryNotification:(_CFUserNotification*)arg1 ;
+(void)PostAccessoryNotification:(CFStringRef)arg1 forMsg:(CFStringRef)arg2 withArg:(CFStringRef)arg3 forDefaultButton:(CFStringRef)arg4 withAlternateButton:(CFStringRef)arg5 forNotification:(_CFUserNotification*)arg6 withCallback:(/*function pointer*/ void*)arg7 andTimeout:(double)arg8 ;
+(id)GetLocalizedString:(id)arg1 ;
@end

