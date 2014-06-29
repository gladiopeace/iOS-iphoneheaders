/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:37 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <ImageCapture/ImageCapture-Structs.h>
@class NSString, DeviceManager;

@interface ICDevice : NSObject {

	void* _deviceProperties;

}

@property (assign) <ICDeviceDelegate> * delegate; 
@property (copy) NSString * name; 
@property (copy) NSString * productKind; 
@property (readonly) CGImageRef icon; 
@property (copy) NSString * transportType; 
@property (copy) NSString * UUIDString; 
@property (assign) bool hasOpenSession; 
@property (assign) int usbLocationID; 
@property (assign) int usbProductID; 
@property (assign) int usbVendorID; 
@property (assign) DeviceManager * deviceManager; 
@property (assign) bool autoOpenSession; 
@property (assign) bool openSessionPending; 
@property (assign) bool closeSessionPending; 
-(bool)isCameraDevice;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)description;
-(id)delegate;
-(void)setName:(id)arg1 ;
-(id)name;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)setTransportType:(id)arg1 ;
-(void)setProductKind:(id)arg1 ;
-(void)setUUIDString:(id)arg1 ;
-(id)deviceManager;
-(void)setDeviceManager:(id)arg1 ;
-(int)usbLocationID;
-(void)setUsbLocationID:(int)arg1 ;
-(int)usbProductID;
-(void)setUsbProductID:(int)arg1 ;
-(int)usbVendorID;
-(void)setUsbVendorID:(int)arg1 ;
-(bool)hasOpenSession;
-(void)setHasOpenSession:(bool)arg1 ;
-(bool)autoOpenSession;
-(void)setAutoOpenSession:(bool)arg1 ;
-(bool)openSessionPending;
-(void)setOpenSessionPending:(bool)arg1 ;
-(bool)closeSessionPending;
-(void)setCloseSessionPending:(bool)arg1 ;
-(void)requestCloseSession;
-(void)handleCommandCompletionNotification:(id)arg1 ;
-(void)handleImageCaptureEventNotification:(id)arg1 ;
-(id)productKind;
-(void)requestOpenSession;
-(id)UUIDString;
-(CGImageRef)icon;
-(id)transportType;
-(void)finalize;
@end

