/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:52 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>
#import <CoreImage/_CIFilterProperties.h>

@class CIImage, NSNumber;

@interface CIFaceBalance : CIFilter <_CIFilterProperties> {

	CIImage* inputImage;
	NSNumber* inputOrigI;
	NSNumber* inputOrigQ;
	NSNumber* inputStrength;
	NSNumber* inputWarmth;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) NSNumber * inputOrigI; 
@property (nonatomic,retain) NSNumber * inputOrigQ; 
@property (nonatomic,retain) NSNumber * inputStrength; 
@property (nonatomic,retain) NSNumber * inputWarmth; 
+(id)customAttributes;
-(void)setDefaults;
-(id)outputImage;
-(bool)_isIdentity;
-(id)inputImage;
-(void)setInputImage:(id)arg1 ;
-(id)_kernel;
-(void)setInputOrigI:(id)arg1 ;
-(void)setInputOrigQ:(id)arg1 ;
-(void)setInputStrength:(id)arg1 ;
-(void)setInputWarmth:(id)arg1 ;
-(id)inputOrigI;
-(id)inputOrigQ;
-(id)inputStrength;
-(id)inputWarmth;
-(id)_outputProperties;
-(id)_initFromProperties:(id)arg1 ;
@end

