/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:01 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/CMProperty.h>

@interface CMLengthProperty : CMProperty {

	double value;
	int unitType;

}
+(id)cssStringValue:(double)arg1 unit:(int)arg2 ;
-(int)intValue;
-(double)value;
-(id)initWithNumber:(double)arg1 unit:(int)arg2 ;
-(int)unitType;
-(id)cssStringForName:(id)arg1 ;
-(id)cssString;
-(id)initWithNumber:(double)arg1 ;
-(int)compareValue:(id)arg1 ;
@end

