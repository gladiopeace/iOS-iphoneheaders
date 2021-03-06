/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:09 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface OADOrientedBounds : NSObject {

	CGRect mBounds;
	float mRotation;
	unsigned mFlipX : 1;
	unsigned mFlipY : 1;
	int mModeX;
	int mModeY;

}
+(id)orientedBoundsWithBounds:(CGRect)arg1 ;
+(id)orientedBoundsWithBounds:(CGRect)arg1 rotation:(float)arg2 flipX:(BOOL)arg3 flipY:(BOOL)arg4 ;
+(BOOL)directionCloserToVerticalThanToHorizontal:(float)arg1 ;
-(CGRect)bounds;
-(id)init;
-(void)setBounds:(CGRect)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(void)setRotation:(float)arg1 ;
-(float)rotation;
-(id).cxx_construct;
-(id)initWithBounds:(CGRect)arg1 ;
-(void)setFlipY:(BOOL)arg1 ;
-(void)setFlipX:(BOOL)arg1 ;
-(BOOL)flipY;
-(void)setOrientedBounds:(id)arg1 ;
-(BOOL)flipX;
-(id)initWithBounds:(CGRect)arg1 rotation:(float)arg2 flipX:(BOOL)arg3 flipY:(BOOL)arg4 ;
-(void)setXMode:(int)arg1 ;
-(void)setYMode:(int)arg1 ;
-(int)xMode;
-(int)yMode;
-(BOOL)isEqualToOrientedBounds:(id)arg1 ;
@end

