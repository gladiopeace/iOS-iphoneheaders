/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:43:03 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector;

@interface CIPerspectiveTransformWithExtent : CIFilter {

	CIImage* inputImage;
	CIVector* inputExtent;
	CIVector* inputTopLeft;
	CIVector* inputTopRight;
	CIVector* inputBottomRight;
	CIVector* inputBottomLeft;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIVector * inputExtent; 
@property (nonatomic,retain) CIVector * inputTopLeft; 
@property (nonatomic,retain) CIVector * inputTopRight; 
@property (nonatomic,retain) CIVector * inputBottomRight; 
@property (nonatomic,retain) CIVector * inputBottomLeft; 
+(id)customAttributes;
-(void)setInputExtent:(CIVector *)arg1 ;
-(void)setInputImage:(CIImage *)arg1 ;
-(CIVector *)inputExtent;
-(id)_kernel;
-(CIVector *)inputTopLeft;
-(void)setInputTopLeft:(CIVector *)arg1 ;
-(CIVector *)inputTopRight;
-(void)setInputTopRight:(CIVector *)arg1 ;
-(CIVector *)inputBottomRight;
-(void)setInputBottomRight:(CIVector *)arg1 ;
-(CIVector *)inputBottomLeft;
-(void)setInputBottomLeft:(CIVector *)arg1 ;
-(CIImage *)inputImage;
-(id)outputImage;
@end

