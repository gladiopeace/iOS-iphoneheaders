/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:34:50 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/sbin/BTLEServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BTLEServer/BTLEServer-Structs.h>
#import <BTLEServer/ANCCallAlert.h>

@interface ANCIncomingCallAlert : ANCCallAlert
-(id)initWithCall:(CTCallRef)arg1 addressBook:(void*)arg2 ;
-(BOOL)isEqualToAlert:(id)arg1 ;
-(BOOL)isImportant;
-(id)message;
@end

