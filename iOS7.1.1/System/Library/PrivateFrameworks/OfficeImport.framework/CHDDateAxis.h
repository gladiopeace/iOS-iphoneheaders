/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:03 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/CHDAxis.h>

@interface CHDDateAxis : CHDAxis {

	bool mAutomatic;
	double mMajorUnitValue;
	double mMinorUnitValue;
	int mMinorTimeUnit;
	int mMajorTimeUnit;
	int mBaseTimeUnit;

}
-(id)initWithResources:(id)arg1 ;
-(void)setMajorUnitValue:(double)arg1 ;
-(void)setMinorUnitValue:(double)arg1 ;
-(void)setMinorTimeUnit:(int)arg1 ;
-(void)setMajorTimeUnit:(int)arg1 ;
-(void)setBaseTimeUnit:(int)arg1 ;
-(double)minorUnitValue;
-(double)majorUnitValue;
-(bool)isDate;
-(bool)isAutomatic;
-(void)setAutomatic:(bool)arg1 ;
-(int)majorTimeUnit;
-(int)minorTimeUnit;
-(int)baseTimeUnit;
@end

