/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:34:06 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <locationd/CBPeripheralManagerDelegate.h>

@class CLSilo;

@interface CLPeripheralManagerDelegate : NSObject <CBPeripheralManagerDelegate> {

	CLSilo* _silo;

}
-(id)initWithSilo:(id)arg1 ;
-(void)peripheralManagerDidUpdateState:(id)arg1 ;
-(void)dealloc;
@end

