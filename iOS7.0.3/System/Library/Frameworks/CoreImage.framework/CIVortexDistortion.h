/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:51:59 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

@interface CIVortexDistortion : CIFilter {

	CIImage* inputImage;
	CIVector* inputCenter;
	NSNumber* inputRadius;
	NSNumber* inputAngle;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIVector * inputCenter; 
@property (nonatomic,retain) NSNumber * inputRadius; 
@property (nonatomic,retain) NSNumber * inputAngle; 
+(id)customAttributes;
-(void)setDefaults;
-(id)outputImage;
-(bool)_isIdentity;
-(id)inputImage;
-(void)setInputImage:(id)arg1 ;
-(id)_kernel;
-(void)setInputAngle:(id)arg1 ;
-(id)inputAngle;
-(void)setInputRadius:(id)arg1 ;
-(id)inputRadius;
-(void)setInputCenter:(id)arg1 ;
-(id)inputCenter;
@end

