/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:38 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ImageCapture/ICCameraDevice.h>

@class PTPInitiator;

@interface PTPCameraDevice : ICCameraDevice {

	void* _ptpCameraProperties;

}

@property (readonly) PTPInitiator * initiator; 
-(void)dealloc;
-(void)enumerateContent;
-(bool)eject;
-(id)initiator;
-(id)initWithUSBLocationID:(unsigned)arg1 ;
-(id)initWithTCPIPInfo:(id)arg1 ;
-(void)addToEventHandlerQ:(id)arg1 ;
-(void)finalize;
@end

