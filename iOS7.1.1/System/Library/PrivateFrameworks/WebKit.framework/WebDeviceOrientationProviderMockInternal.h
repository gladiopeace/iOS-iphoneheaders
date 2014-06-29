/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:59 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <WebKit/WebKit-Structs.h>
@interface WebDeviceOrientationProviderMockInternal : NSObject {

	OwnPtr<WebCore::DeviceOrientationClientMock>* m_core;

}
-(id)init;
-(void)setOrientation:(id)arg1 ;
-(id).cxx_construct;
-(void)setController:(DeviceOrientationControllerRef)arg1 ;
-(void).cxx_destruct;
-(void)stopUpdating;
-(void)startUpdating;
-(id)lastOrientation;
@end

