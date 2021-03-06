/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:03:50 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/NSCopying.h>

@interface PLImageGeometry : NSObject <NSCopying> {

	int _appliedOrientation;
	CGRect _inputRect;

}

@property (nonatomic,readonly) CGRect inputRect;                                     //@synthesize inputRect=_inputRect - In the implementation block
@property (nonatomic,readonly) CGRect outputRect; 
@property (assign,nonatomic) int appliedOrientation;                                 //@synthesize appliedOrientation=_appliedOrientation - In the implementation block
@property (nonatomic,readonly) CGAffineTransform appliedTransform; 
@property (getter=isSizeInverted,nonatomic,readonly) char sizeInverted; 
@property (getter=isMirrored,nonatomic,readonly) char mirrored; 
+(id)geometryWithInputSize:(CGSize)arg1 initialOrientation:(int)arg2 ;
+(id)geometryWithOutputSize:(CGSize)arg1 appliedOrientation:(int)arg2 ;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithInputSize:(CGSize)arg1 ;
-(void)applyOrientation:(int)arg1 ;
-(int)appliedOrientation;
-(CGRect)inputRect;
-(CGRect)outputRect;
-(CGRect)_basisRect:(int)arg1 ;
-(CGAffineTransform)_transformFromOrientation:(int)arg1 toOrientation:(int)arg2 ;
-(CGAffineTransform)appliedTransform;
-(char)isSizeInverted;
-(char)isMirrored;
-(void)flipVertically;
-(void)flipHorizontally;
-(void)rotateClockwise;
-(void)rotateCounterClockwise;
-(CGRect)inputRectForOutputRect:(CGRect)arg1 ;
-(CGRect)outputRectForInputRect:(CGRect)arg1 ;
-(CGRect)denormalizeRect:(CGRect)arg1 basis:(int)arg2 ;
-(CGRect)normalizeRect:(CGRect)arg1 basis:(int)arg2 ;
-(CGAffineTransform)transformToOrientation:(int)arg1 ;
-(CGAffineTransform)transformFromOrientation:(int)arg1 ;
-(void)setAppliedOrientation:(int)arg1 ;
@end

