/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:41 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSDImageProvider;

@interface TSDImageRepSizingState : NSObject {

	CGSize mDesiredSize;
	TSDImageProvider* mProvider;
	CGPathRef mMaskPath;
	bool mIncludesAdjustments;
	int mStatus;
	CGImageRef mSizedImage;
	long long mSizedImageOrientation;

}

@property (assign,nonatomic) CGSize desiredSize; 
@property (nonatomic,retain) TSDImageProvider * provider; 
@property (assign,nonatomic) int status; 
@property (assign,nonatomic) CGImageRef sizedImage; 
@property (nonatomic,readonly) bool sizedImageHasMask; 
@property (assign,nonatomic) long long sizedImageOrientation; 
@property (nonatomic,readonly) CGPathRef maskPath; 
@property (assign,nonatomic) bool sizedImageIncludesAdjustments; 
-(CGPathRef)maskPath;
-(id)initWithDesiredSize:(CGSize)arg1 provider:(id)arg2 maskPath:(CGPathRef)arg3 ;
-(void)setSizedImageIncludesAdjustments:(bool)arg1 ;
-(void)generateSizedImage;
-(CGImageRef)sizedImage;
-(long long)sizedImageOrientation;
-(bool)sizedImageHasMask;
-(bool)sizedImageIncludesAdjustments;
-(void)setSizedImage:(CGImageRef)arg1 ;
-(void)setSizedImageOrientation:(long long)arg1 ;
-(void)setProvider:(id)arg1 ;
-(void)dealloc;
-(CGSize)desiredSize;
-(void)setDesiredSize:(CGSize)arg1 ;
-(int)status;
-(void)setStatus:(int)arg1 ;
-(id)provider;
@end

