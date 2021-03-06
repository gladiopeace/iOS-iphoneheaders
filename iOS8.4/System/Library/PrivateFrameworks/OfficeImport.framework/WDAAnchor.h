/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:19 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class NSArray;

@interface WDAAnchor : NSObject {

	CGRect mBounds;
	int mTextWrappingMode;
	int mTextWrappingModeType;
	NSArray* mTextWrapPoints;
	double mWrapDistanceLeft;
	double mWrapDistanceTop;
	double mWrapDistanceRight;
	double mWrapDistanceBottom;
	int mHorizontalPosition;
	int mRelativeHorizontalPosition;
	int mVerticalPosition;
	int mRelativeVerticalPosition;
	BOOL mAllowOverlap;
	long long mZIndex;

}

@property (assign,nonatomic) CGRect bounds; 
@property (assign,nonatomic) int textWrappingMode; 
@property (assign,nonatomic) int textWrappingModeType; 
@property (nonatomic,retain) NSArray * textWrapPoints; 
@property (assign,nonatomic) double wrapDistanceLeft; 
@property (assign,nonatomic) double wrapDistanceRight; 
@property (assign,nonatomic) double wrapDistanceTop; 
@property (assign,nonatomic) double wrapDistanceBottom; 
@property (assign,nonatomic) int horizontalPosition; 
@property (assign,nonatomic) int relativeHorizontalPosition; 
@property (assign,nonatomic) int verticalPosition; 
@property (assign,nonatomic) int relativeVerticalPosition; 
@property (assign,nonatomic) BOOL allowOverlap; 
@property (assign,nonatomic) long long zIndex; 
+(id)stringForTextWrappingModeType:(int)arg1 ;
-(void)dealloc;
-(CGRect)bounds;
-(id)init;
-(void)setBounds:(CGRect)arg1 ;
-(long long)zIndex;
-(void)setZIndex:(long long)arg1 ;
-(int)relativeVerticalPosition;
-(int)textWrappingMode;
-(int)relativeHorizontalPosition;
-(int)horizontalPosition;
-(int)verticalPosition;
-(void)setRelativeHorizontalPosition:(int)arg1 ;
-(void)setRelativeVerticalPosition:(int)arg1 ;
-(void)setWrapDistanceLeft:(double)arg1 ;
-(void)setWrapDistanceTop:(double)arg1 ;
-(void)setWrapDistanceRight:(double)arg1 ;
-(void)setWrapDistanceBottom:(double)arg1 ;
-(void)setAllowOverlap:(BOOL)arg1 ;
-(void)setVerticalPosition:(int)arg1 ;
-(void)setHorizontalPosition:(int)arg1 ;
-(int)textWrappingModeType;
-(NSArray *)textWrapPoints;
-(void)setTextWrapPoints:(NSArray *)arg1 ;
-(double)wrapDistanceLeft;
-(double)wrapDistanceRight;
-(double)wrapDistanceTop;
-(double)wrapDistanceBottom;
-(BOOL)allowOverlap;
-(void)setTextWrappingMode:(int)arg1 ;
-(void)setTextWrappingModeType:(int)arg1 ;
@end

