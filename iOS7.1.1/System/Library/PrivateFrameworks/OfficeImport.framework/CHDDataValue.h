/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:03 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface CHDDataValue : NSObject {

	CHDDataPoint mDataPoint;

}
+(id)dataValue;
+(id)dataValueWithIndex:(long long)arg1 value:(EDValue*)arg2 ;
-(unsigned long long)contentFormatId;
-(void)setContentFormatId:(unsigned long long)arg1 ;
-(id)init;
-(void)setValue:(EDValue*)arg1 ;
-(EDValue*)value;
-(long long)index;
-(id).cxx_construct;
-(void).cxx_destruct;
-(void)setIndex:(long long)arg1 ;
-(id)initWithIndex:(long long)arg1 value:(EDValue*)arg2 ;
-(CHDDataPoint*)dataPoint;
-(void)setDataPoint:(CHDDataPoint*)arg1 ;
-(id)contentFormatWithResources:(id)arg1 ;
-(void)setContentFormatWithResources:(id)arg1 resources:(id)arg2 ;
@end

