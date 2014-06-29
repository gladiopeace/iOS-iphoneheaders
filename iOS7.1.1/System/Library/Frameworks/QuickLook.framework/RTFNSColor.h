/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:39 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <QuickLook/QuickLook-Structs.h>
@interface RTFNSColor : NSObject {

	double _red;
	double _green;
	double _blue;
	double _alpha;

}

@property (assign) double red;                //@synthesize red=_red - In the implementation block
@property (assign) double green;              //@synthesize green=_green - In the implementation block
@property (assign) double blue;               //@synthesize blue=_blue - In the implementation block
@property (assign) double alpha;              //@synthesize alpha=_alpha - In the implementation block
+(id)blackColor;
+(id)whiteColor;
+(id)colorWithCalibratedRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 ;
+(id)colorWithCalibratedWhite:(double)arg1 alpha:(double)arg2 ;
-(id)initWithCalibratedWhite:(double)arg1 alpha:(double)arg2 ;
-(id)initWithCalibratedRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 ;
-(id)colorUsingColorSpaceName:(id)arg1 ;
-(void)setRed:(double)arg1 ;
-(void)setGreen:(double)arg1 ;
-(void)setBlue:(double)arg1 ;
-(double)alpha;
-(void)setAlpha:(double)arg1 ;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(void)getRed:(double*)arg1 green:(double*)arg2 blue:(double*)arg3 alpha:(double*)arg4 ;
-(double)red;
-(double)green;
-(double)blue;
@end

