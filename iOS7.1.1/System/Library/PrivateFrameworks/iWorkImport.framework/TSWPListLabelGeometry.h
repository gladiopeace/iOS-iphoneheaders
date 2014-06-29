/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:49 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSWPListLabelGeometry : NSObject {

	double mScale;
	double mBaselineOffset;
	bool mScaleWithText;

}

@property (assign,nonatomic) double scale; 
@property (assign,nonatomic) double baselineOffset; 
@property (assign,nonatomic) bool scaleWithText; 
+(id)listLabelGeometry;
-(bool)scaleWithText;
-(id)initWithScale:(double)arg1 scaleWithText:(bool)arg2 baselineOffset:(double)arg3 ;
-(void)setScaleWithText:(bool)arg1 ;
-(bool)isEqual:(id)arg1 ;
-(id)description;
-(double)scale;
-(id)copyWithZone:(NSZone)arg1 ;
-(void)setScale:(double)arg1 ;
-(double)baselineOffset;
-(void)setBaselineOffset:(double)arg1 ;
@end

