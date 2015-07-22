/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:15 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FitnessUI/NSSecureCoding.h>

@class NSDate;

@interface FUHourlySedentaryActivityInfo : NSObject <NSSecureCoding> {

	NSDate* _startDate;
	long long _sedentaryState;

}

@property (nonatomic,retain) NSDate * startDate;                    //@synthesize startDate=_startDate - In the implementation block
@property (assign,nonatomic) long long sedentaryState;              //@synthesize sedentaryState=_sedentaryState - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setSedentaryState:(long long)arg1 ;
-(long long)sedentaryState;
-(void)setStartDate:(NSDate *)arg1 ;
-(NSDate *)startDate;
@end
