/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:14 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <CoreFoundation/NSCopying.h>

@protocol MFDeviceDriver;
@class NSObject;

@interface MFTransform : NSObject <NSCopying> {

	CGAffineTransform m_world;
	CGPoint m_windowOrg;
	CGPoint m_windowExt;
	CGPoint m_viewportOrg;
	CGPoint m_viewportExt;
	CGAffineTransform m_combinedTransform;
	int m_mapMode;
	NSObject<MFDeviceDriver>* m_deviceDriver;

}
-(id)copyWithZone:(NSZone)arg1 ;
-(id).cxx_construct;
-(id)initWithDriver:(id)arg1 ;
-(int)updateTransform;
-(CGAffineTransform)getWorldMatrix;
-(void)setWorldMatrix:(CGAffineTransform)arg1 ;
-(CGPoint)getWindowOrg;
-(void)setWindowOrg:(CGPoint)arg1 ;
-(CGPoint)getWindowExtent;
-(void)setWindowExt:(CGPoint)arg1 ;
-(CGPoint)getViewportOrg;
-(void)setViewportOrg:(CGPoint)arg1 ;
-(CGPoint)getViewportExtent;
-(void)setViewportExt:(CGPoint)arg1 ;
-(CGAffineTransform)getTransformMatrix;
-(void)setTransformMatrix:(CGAffineTransform)arg1 ;
-(int)getMapMode;
-(int)setMapMode:(int)arg1 ;
-(int)setWorldTransform:(const CGAffineTransform*)arg1 ;
-(int)modifyWorldTransform:(const CGAffineTransform*)arg1 :(int)arg2 ;
-(bool)isUpsideDown;
-(int)setWindowExt:(int)arg1 :(int)arg2 ;
-(int)setViewportExt:(int)arg1 :(int)arg2 ;
-(int)scaleWindowExt:(int)arg1 :(int)arg2 :(int)arg3 :(int)arg4 ;
-(int)scaleViewportExt:(int)arg1 :(int)arg2 :(int)arg3 :(int)arg4 ;
-(int)setWindowOrg:(int)arg1 :(int)arg2 ;
-(int)setViewportOrg:(int)arg1 :(int)arg2 ;
-(int)offsetWindowOrg:(int)arg1 :(int)arg2 ;
-(int)offsetViewportOrg:(int)arg1 :(int)arg2 ;
-(CGPoint)DPtoLP:(CGPoint)arg1 ;
-(CGPoint)LPtoDP:(CGPoint)arg1 ;
@end

