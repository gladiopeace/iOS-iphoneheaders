/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:51:58 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIVector, CIColor;

@interface CILinearGradient : CIFilter {

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

