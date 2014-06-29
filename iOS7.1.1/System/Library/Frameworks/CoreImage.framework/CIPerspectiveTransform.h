/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:54 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector;

@interface CIPerspectiveTransform : CIFilter {

	CIImage* inputImage;
	CIVector* inputTopLeft;
	CIVector* inputTopRight;
	CIVector* inputBottomRight;
	CIVector* inputBottomLeft;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIVector * inputTopLeft; 
@property (nonatomic,retain) CIVector * inputTopRight; 
@property (nonatomic,retain) CIVector * inputBottomRight; 
@property (nonatomic,retain) CIVector * inputBottomLeft; 
+(id)customAttributes;
-(void)setDefaults;
-(id)outputImage;
-(id)inputImage;
-(void)setInputImage:(id)arg1 ;
-(void)setInputBottomLeft:(id)arg1 ;
-(void)setInputBottomRight:(id)arg1 ;
-(void)setInputTopRight:(id)arg1 ;
-(void)setInputTopLeft:(id)arg1 ;
-(id)inputTopLeft;
-(id)inputTopRight;
-(id)inputBottomRight;
-(id)inputBottomLeft;
@end

