/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:11 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class OADCamera, OADLightRig, OADBackdrop;

@interface OADScene3D : NSObject <NSCopying> {

	OADCamera* mCamera;
	OADLightRig* mLightRig;
	OADBackdrop* mBackdrop;

}
+(id)nullScene3D;
-(void)dealloc;
-(id)init;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)backdrop;
-(void)setBackdrop:(id)arg1 ;
-(id)camera;
-(void)setCamera:(id)arg1 ;
-(id)lightRig;
-(void)setLightRig:(id)arg1 ;
@end

