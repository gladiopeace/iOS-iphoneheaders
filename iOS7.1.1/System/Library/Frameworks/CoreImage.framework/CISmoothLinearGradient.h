/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:53 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIVector, CIColor;

@interface CISmoothLinearGradient : CIFilter {

	CIVector* inputPoint0;
	CIVector* inputPoint1;
	CIColor* inputColor0;
	CIColor* inputColor1;

}

@property (nonatomic,retain) CIVector * inputPoint0; 
@property (nonatomic,retain) CIVector * inputPoint1; 
@property (nonatomic,retain) CIColor * inputColor0; 
@property (nonatomic,retain) CIColor * inputColor1; 
+(id)customAttributes;
-(void)setDefaults;
-(id)outputImage;
-(id)_kernel;
-(void)setInputColor0:(id)arg1 ;
-(void)setInputColor1:(id)arg1 ;
-(id)inputColor0;
-(id)inputColor1;
-(void)setInputPoint0:(id)arg1 ;
-(void)setInputPoint1:(id)arg1 ;
-(id)inputPoint0;
-(id)inputPoint1;
@end

